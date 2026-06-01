/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457BA0
// Address: 0x00457BA0

//----- (00457BA0) --------------------------------------------------------
bool __stdcall sub_457BA0(LPCCH lpMultiByteStr)
{
  bool v1; // bl
  DWORD FileAttributesW; // eax
  LPCWSTR lpFileName; // [esp+8h] [ebp-18h] BYREF
  unsigned int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+1Ch] [ebp-4h]

  v1 = 0;
  sub_4579C0((LPWSTR *)&lpFileName, lpMultiByteStr);
  v6 = 0;
  if ( v5 > 1 )
  {
    FileAttributesW = GetFileAttributesW(lpFileName);
    v1 = FileAttributesW != -1 && (FileAttributesW & 0x10) != 0;
  }
  v6 = 1;
  if ( lpFileName )
  {
    v5 = 0;
    sub_453A20((void *)lpFileName);
  }
  return v1;
}
// 457BE9: conditional instruction was optimized away because %var_14.4>=2u
