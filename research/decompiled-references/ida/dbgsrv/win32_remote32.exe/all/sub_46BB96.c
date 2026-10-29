/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BB96
// Address: 0x0046BB96

//----- (0046BB96) --------------------------------------------------------
bool sub_46BB96()
{
  HMODULE ModuleHandleW; // eax
  char *v1; // ecx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(nullptr);
  result = false;
  if ( ModuleHandleW )
  {
    if ( *(_WORD *)ModuleHandleW == 23117 )
    {
      v1 = (char *)ModuleHandleW + *((_DWORD *)ModuleHandleW + 15);
      if ( *(_DWORD *)v1 == 17744 && *((_WORD *)v1 + 12) == 267 && *((_DWORD *)v1 + 29) > 0xEu && *((_DWORD *)v1 + 58) )
        return true;
    }
  }
  return result;
}
