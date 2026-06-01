/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EC20
// Address: 0x000000010002EC20

//----- (000000010002EC20) ----------------------------------------------------
__int64 __fastcall sub_10002EC20(_QWORD *a1, char *__s2)
{
  __int64 v4; // x21
  const char *v5; // x0
  __int64 v6; // x8

  if ( !__s2 )
    return -1;
  v4 = a1[1] - 1LL;
  do
  {
    if ( v4 < 0 )
      return -1;
    v6 = *(_QWORD *)(*a1 + 8 * v4);
    if ( *(_QWORD *)(v6 + 8) )
      v5 = *(const char **)v6;
    else
      v5 = &byte_10007AE40;
    --v4;
  }
  while ( strcmp(v5, __s2) );
  return v4 + 1;
}
// 10007AE40: using guessed type char byte_10007AE40;
