/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_653D0
// Address: 0x000653D0

//----- (000653D0) --------------------------------------------------------
_DWORD *__fastcall sub_653D0(_DWORD *result)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r3
  int (*v3)(void); // r2

  result[114] = -1;
  result[115] = -1;
  v1 = result;
  v2 = result;
  do
  {
    v2[118] = 0;
    *((_QWORD *)v2 + 58) = -4294967284LL;
    v2 += 3;
  }
  while ( v2 != result + 48 );
  do
  {
    v1[166] = 0;
    v1[164] = 12;
    v1[165] = -1;
    v1 += 3;
  }
  while ( v1 != v2 );
  v3 = *(int (**)(void))(*result + 324);
  if ( v3 != sub_150E0 )
    return (_DWORD *)v3();
  return result;
}
