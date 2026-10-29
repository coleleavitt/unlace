/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_contains
// Address: 0x00000000000C9C40

//----- (00000000000C9C40) ----------------------------------------------------
char __fastcall rangeset_t_contains(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // r11
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  char result; // al

  v2 = 16LL * *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 1;
  v3 = *(unsigned __int64 **)a2;
  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + v2);
  while ( 1 )
  {
    v5 = *v3;
    v6 = v3[1];
    if ( v6 > *v3 )
    {
      v7 = a1[1];
      if ( !v7 )
        break;
      v8 = *a1;
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v11 = *(_QWORD *)(v8 + (v9 >> 28) + 8);
        if ( v11 >= v5 )
          break;
        ++v10;
        v9 += 0x100000000LL;
        if ( v10 >= v7 )
          return 0;
      }
      v12 = *(_QWORD *)(v8 + 16 * (v9 >> 32));
      result = 0;
      if ( v11 == v12 || v5 < v12 )
        return result;
      if ( v6 - 1 > v11 - 1 )
        break;
    }
    v3 += 2;
    if ( v3 == v4 )
      return 1;
  }
  return 0;
}
