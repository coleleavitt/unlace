/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B51E
// Address: 0x0047B51E

//----- (0047B51E) --------------------------------------------------------
LPVOID __cdecl sub_47B51E(LPVOID lpMem, SIZE_T dwBytes)
{
  LPVOID result; // eax

  if ( !lpMem )
    return sub_479531(dwBytes);
  if ( !dwBytes )
  {
    sub_479216(lpMem);
    return nullptr;
  }
  if ( dwBytes > 0xFFFFFFE0 )
  {
LABEL_6:
    *sub_46B984() = 12;
    return nullptr;
  }
  while ( 1 )
  {
    result = HeapReAlloc(hHeap, 0, lpMem, dwBytes);
    if ( result )
      return result;
    if ( !sub_477EB3() || !sub_476614(dwBytes) )
      goto LABEL_6;
  }
}
