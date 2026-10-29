/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4791B9
// Address: 0x004791B9

//----- (004791B9) --------------------------------------------------------
LPVOID __cdecl sub_4791B9(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // esi
  LPVOID result; // eax

  if ( a1 && 0xFFFFFFE0 / a1 < a2 )
  {
LABEL_9:
    *sub_46B984() = 12;
    return nullptr;
  }
  else
  {
    v2 = a2 * a1;
    if ( !(a2 * a1) )
      v2 = 1;
    while ( 1 )
    {
      result = HeapAlloc(hHeap, 8u, v2);
      if ( result )
        break;
      if ( !sub_477EB3() || !sub_476614(v2) )
        goto LABEL_9;
    }
  }
  return result;
}
