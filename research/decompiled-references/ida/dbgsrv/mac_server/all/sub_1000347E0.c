/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000347E0
// Address: 0x00000001000347E0

//----- (00000001000347E0) ----------------------------------------------------
__int64 __fastcall sub_1000347E0(__int64 a1, const char *a2)
{
  __int64 result; // rax
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rax
  const char *v7; // rdi
  __int64 v8; // r15
  char **v9; // r12
  __int64 i; // rbx

  result = 0x7FFFFFFF;
  if ( a2 )
  {
    v4 = -*(_DWORD *)(a1 + 8);
    v5 = *(_QWORD *)(a1 + 8) - 1LL;
    while ( v5 >= 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
      v7 = _s1;
      if ( *(_QWORD *)(v6 + 8) )
        v7 = *(const char **)v6;
      ++v4;
      --v5;
      if ( !strcmp(v7, a2) )
      {
        if ( v4 != 1 )
          return (unsigned int)-v4;
        break;
      }
    }
    v8 = qword_1000AC0E0;
    if ( qword_1000AC0E0 )
    {
      v9 = off_1000AC0E8;
      for ( i = 0; strcmp(v9[i], a2); i += 5 )
      {
        if ( !--v8 )
          return 0x7FFFFFFF;
      }
      result = 0x7FFFFFFF;
      if ( v9[i + 1] )
        return 858993459 * (unsigned int)((unsigned __int64)(i * 8) >> 3);
    }
    else
    {
      return 0x7FFFFFFF;
    }
  }
  return result;
}
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC0E8: using guessed type char **off_1000AC0E8;
