/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_522B0
// Address: 0x000522B0

//----- (000522B0) --------------------------------------------------------
unsigned int __cdecl sub_522B0(_DWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // eax
  bool v4; // cf
  unsigned int result; // eax

  v1 = a1[1];
  if ( v1 <= 2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(278);
LABEL_8:
    BUG();
  }
  v2 = *(__int16 *)(*a1 + v1 - 2);
  v3 = v1 - 2;
  v4 = v3 < v2;
  result = v3 - v2;
  a1[3] = result;
  if ( v4 || !result )
  {
    if ( !(_BYTE)under_debugger )
      interr(279);
    goto LABEL_8;
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
