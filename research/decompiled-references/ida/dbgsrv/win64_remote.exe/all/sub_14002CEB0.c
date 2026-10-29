/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002CEB0
// Address: 0x000000014002CEB0

//----- (000000014002CEB0) ----------------------------------------------------
__int64 __fastcall sub_14002CEB0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbx
  const char ***v4; // rdi
  const char *v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  const char **i; // rbx

  if ( a2 && (v3 = a1[1] - 1LL, v3 >= 0) )
  {
    v4 = (const char ***)(*a1 + 8 * v3);
    while ( 1 )
    {
      v5 = Str1;
      if ( (*v4)[1] )
        v5 = **v4;
      if ( !strcmp(v5, a2) )
        break;
      --v4;
      if ( --v3 < 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v3) = -1;
  }
  if ( (_DWORD)v3 == -1 )
  {
    if ( !a2 )
      return 0x7FFFFFFF;
    v6 = qword_1400C6060;
    v7 = 0;
    if ( !qword_1400C6060 )
      return 0x7FFFFFFF;
    for ( i = (const char **)off_1400C6068; strcmp(*i, a2); i += 5 )
    {
      if ( ++v7 >= v6 )
        return 0x7FFFFFFF;
    }
    if ( !i || !i[1] )
      return 0x7FFFFFFF;
    return (unsigned int)(((char *)i - (_BYTE *)off_1400C6068) / -40);
  }
  return (unsigned int)v3;
}
// 1400C6060: using guessed type __int64 qword_1400C6060;
