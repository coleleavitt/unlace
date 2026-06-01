/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479531
// Address: 0x00479531

//----- (00479531) --------------------------------------------------------
LPVOID __cdecl sub_479531(SIZE_T dwBytes)
{
  SIZE_T v1; // esi
  LPVOID result; // eax

  v1 = dwBytes;
  if ( dwBytes > 0xFFFFFFE0 )
  {
LABEL_8:
    *sub_46B984() = 12;
    return nullptr;
  }
  else
  {
    if ( !dwBytes )
      v1 = 1;
    while ( 1 )
    {
      result = HeapAlloc(hHeap, 0, v1);
      if ( result )
        break;
      if ( !sub_477EB3() || !sub_476614(v1) )
        goto LABEL_8;
    }
  }
  return result;
}
