/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CE10
// Address: 0x000000000046CE10

//----- (000000000046CE10) ----------------------------------------------------
unsigned __int64 __fastcall sub_46CE10(char **a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // r14
  unsigned __int64 i; // rbx
  int v8; // edx
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rdx
  size_t v13; // rax
  _BYTE v14[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v15[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v16[8]; // [rsp+28h] [rbp-40h] BYREF

  v16[0] = __readfsqword(0x28u);
  if ( a3 > 0 )
  {
    v6 = a3;
    for ( i = 0; i != v6; ++i )
    {
      if ( a4 )
      {
        while ( 1 )
        {
          v8 = *(unsigned __int8 *)(a4 + (i >> 3));
          if ( _bittest(&v8, i & 7) )
            break;
          ++i;
          a2 += 32;
          if ( v6 == i )
            return v16[0] - __readfsqword(0x28u);
        }
      }
      v10 = sub_47FB50(v14, (unsigned __int64)v15, (unsigned int)(*(_DWORD *)a2 + 3)) - v14;
      if ( v10 )
        sub_46B720(a1, v14, v10);
      if ( *(_DWORD *)a2 == -2 )
      {
        v13 = sub_47FC90(v14, (unsigned __int64)v16, *(_QWORD *)(a2 + 8) + 1LL) - v14;
        if ( v13 )
          sub_46B720(a1, v14, v13);
      }
      else if ( *(_DWORD *)a2 != -3 )
      {
        v11 = sub_47FB50(v14, (unsigned __int64)v15, *(unsigned int *)(a2 + 16)) - v14;
        if ( v11 )
          sub_46B720(a1, v14, v11);
        v12 = *(_QWORD *)(a2 + 16);
        if ( v12 )
          sub_46B720(a1, *(const void **)(a2 + 8), v12);
      }
      a2 += 32;
    }
  }
  return v16[0] - __readfsqword(0x28u);
}
