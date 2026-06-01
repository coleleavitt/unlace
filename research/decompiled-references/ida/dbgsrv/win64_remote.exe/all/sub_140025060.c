/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025060
// Address: 0x0000000140025060

//----- (0000000140025060) ----------------------------------------------------
__int64 __fastcall sub_140025060(_DWORD *a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rbp
  const char *v7; // rdx
  const char *v8; // rcx
  const char *v9; // rdx
  const char *v10; // rcx

  while ( 1 )
  {
    v4 = *(__int64 **)a1;
    v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
    if ( !*((_BYTE *)v5 + 25) )
    {
      v6 = *(_QWORD *)(a2 + 8);
      do
      {
        v7 = Str1;
        if ( v6 )
          v7 = *(const char **)a2;
        v8 = Str1;
        if ( v5[5] )
          v8 = (const char *)v5[4];
        if ( strcmp(v8, v7) >= 0 )
          v4 = v5;
        else
          v5 += 2;
        v5 = (__int64 *)*v5;
      }
      while ( !*((_BYTE *)v5 + 25) );
    }
    if ( !*((_BYTE *)v4 + 25) )
    {
      v9 = Str1;
      if ( v4[5] )
        v9 = (const char *)v4[4];
      v10 = Str1;
      if ( *(_QWORD *)(a2 + 8) )
        v10 = *(const char **)a2;
      if ( strcmp(v10, v9) >= 0 && v4 != *(__int64 **)a1 )
        return *((unsigned int *)v4 + 14);
    }
    if ( !a1[4] && !a1[5] )
      break;
    a1 = (_DWORD *)sub_14002D950((int)a1[4]);
  }
  return 0xFFFFFFFFLL;
}
