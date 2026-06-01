/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52100
// Address: 0x00052100

//----- (00052100) --------------------------------------------------------
void *__cdecl sub_52100(_DWORD *a1, int a2, void *dest, int n)
{
  if ( a1[3] - a2 < n )
  {
    if ( !(_BYTE)under_debugger )
      interr(276);
    BUG();
  }
  return memcpy(dest, (const void *)(*a1 + a2), n);
}
// 13E34C: using guessed type int under_debugger;
