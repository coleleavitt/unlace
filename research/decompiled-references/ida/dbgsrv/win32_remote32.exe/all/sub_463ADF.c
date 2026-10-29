/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463ADF
// Address: 0x00463ADF

//----- (00463ADF) --------------------------------------------------------
bool sub_463ADF()
{
  HMODULE ModuleHandleW; // eax
  char *v1; // ecx
  bool result; // al

  ModuleHandleW = GetModuleHandleW(nullptr);
  result = ModuleHandleW
        && *(_WORD *)ModuleHandleW == 23117
        && (v1 = (char *)ModuleHandleW + *((_DWORD *)ModuleHandleW + 15), *(_DWORD *)v1 == 17744)
        && *((_WORD *)v1 + 12) == 267
        && *((_DWORD *)v1 + 29) > 0xEu
        && *((_DWORD *)v1 + 58) != 0;
  return result;
}
