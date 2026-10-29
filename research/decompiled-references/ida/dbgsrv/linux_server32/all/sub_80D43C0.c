/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D43C0
// Address: 0x080D43C0

//----- (080D43C0) --------------------------------------------------------
int __cdecl sub_80D43C0(_DWORD *a1)
{
  int result; // eax
  _DWORD *v2; // edx

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  result = sub_80D4390((int)a1);
  if ( result )
    return -2;
  v2 = (_DWORD *)a1[7];
  v2[8] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  if ( v2[3] )
    a1[12] = v2[3] & 1;
  v2[1] = 16180;
  v2[2] = 0;
  v2[4] = 0;
  v2[5] = -1;
  v2[6] = 0x8000;
  v2[9] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[28] = v2 + 333;
  v2[21] = v2 + 333;
  v2[20] = v2 + 333;
  v2[1777] = 1;
  v2[1778] = -1;
  return result;
}
