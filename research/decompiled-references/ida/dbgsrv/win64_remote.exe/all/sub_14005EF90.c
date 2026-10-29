/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005EF90
// Address: 0x000000014005EF90

//----- (000000014005EF90) ----------------------------------------------------
_BOOL8 __fastcall sub_14005EF90(const CHAR *a1)
{
  bool v1; // bl
  DWORD FileAttributesW; // eax
  LPCWSTR lpFileName; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v1 = 0;
  sub_14005EDE0((WCHAR **)&lpFileName, a1);
  if ( v5 > 1 )
  {
    FileAttributesW = GetFileAttributesW(lpFileName);
    v1 = FileAttributesW != -1 && (FileAttributesW & 0x10) != 0;
  }
  if ( lpFileName )
  {
    v5 = 0;
    j_free((void *)lpFileName);
  }
  return v1;
}
