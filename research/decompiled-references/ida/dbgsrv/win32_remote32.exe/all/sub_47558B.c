/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47558B
// Address: 0x0047558B

//----- (0047558B) --------------------------------------------------------
int __cdecl sub_47558B(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // kr00_8
  int result; // eax

  v3 = a1 - a2;
  result = 0;
  if ( a1 < 0 != a2 < 0 && a1 < 0 != v3 < 0 )
  {
    result = -2147024362;
    v3 = -1;
  }
  *a3 = v3;
  return result;
}
