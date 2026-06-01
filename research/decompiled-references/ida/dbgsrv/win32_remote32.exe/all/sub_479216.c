/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479216
// Address: 0x00479216

//----- (00479216) --------------------------------------------------------
void __cdecl sub_479216(LPVOID lpMem)
{
  int *v1; // esi
  DWORD LastError; // eax

  if ( lpMem )
  {
    if ( !HeapFree(hHeap, 0, lpMem) )
    {
      v1 = sub_46B984();
      LastError = GetLastError();
      *v1 = sub_46B90B(LastError);
    }
  }
}
