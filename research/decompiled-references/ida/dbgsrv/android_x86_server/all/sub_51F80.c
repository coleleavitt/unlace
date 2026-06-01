/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51F80
// Address: 0x00051F80

//----- (00051F80) --------------------------------------------------------
void *__cdecl sub_51F80(_DWORD *a1, int a2, void *src, int n)
{
  if ( a1[1] - a2 < n )
  {
    if ( !(_BYTE)under_debugger )
      interr(277);
    BUG();
  }
  return memcpy((void *)(*a1 + a2), src, n);
}
// 13E34C: using guessed type int under_debugger;
