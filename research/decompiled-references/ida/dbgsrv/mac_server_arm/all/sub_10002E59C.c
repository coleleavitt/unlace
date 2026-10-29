/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E59C
// Address: 0x000000010002E59C

//----- (000000010002E59C) ----------------------------------------------------
__int64 __fastcall sub_10002E59C(__int64 a1, char *__s2)
{
  int v4; // w21
  __int64 v5; // x22
  const char *v6; // x0
  __int64 v7; // x8
  __int64 v9; // x21
  __int64 v10; // x20
  char **i; // x22

  if ( !__s2 )
    return 0x7FFFFFFF;
  v4 = -*(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8) - 1LL;
  while ( (v5 & 0x8000000000000000LL) == 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
    if ( *(_QWORD *)(v7 + 8) )
      v6 = *(const char **)v7;
    else
      v6 = &byte_100075A30;
    ++v4;
    --v5;
    if ( !strcmp(v6, __s2) )
    {
      if ( v4 != 1 )
        return (unsigned int)-v4;
      break;
    }
  }
  v9 = qword_10009CA00;
  if ( !qword_10009CA00 )
    return 0x7FFFFFFF;
  v10 = 0;
  for ( i = off_10009CA08; strcmp(*i, __s2); i += 5 )
  {
    v10 -= 40;
    if ( !--v9 )
      return 0x7FFFFFFF;
  }
  if ( i[1] )
    return 858993459 * (unsigned int)((unsigned __int64)-v10 >> 3);
  else
    return 0x7FFFFFFF;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009CA00: using guessed type __int64 qword_10009CA00;
// 10009CA08: using guessed type char **off_10009CA08;
