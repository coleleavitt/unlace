/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B467
// Address: 0x0047B467

//----- (0047B467) --------------------------------------------------------
int __cdecl sub_47B467(
        UINT CodePage,
        int a2,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        const CHAR *a7,
        BOOL *a8)
{
  bool v8; // bl
  bool v9; // zf
  DWORD v10; // ecx

  v8 = CodePage == 65000 || CodePage == 65001;
  if ( CodePage > 0xC435 )
  {
    if ( CodePage == 54936 )
      goto LABEL_19;
    if ( CodePage > 0xDEA9 )
    {
      if ( CodePage <= 0xDEB3 || CodePage == 65000 )
        goto LABEL_19;
      v9 = CodePage == 65001;
LABEL_17:
      if ( !v9 )
        goto LABEL_18;
LABEL_19:
      v10 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    if ( CodePage == 50229 || CodePage == 42 )
      goto LABEL_19;
    if ( CodePage > 0xC42B )
    {
      if ( CodePage <= 0xC42E || CodePage == 50225 )
        goto LABEL_19;
      v9 = CodePage == 50227;
      goto LABEL_17;
    }
  }
LABEL_18:
  v10 = a2 & 0xFFFFFF7F;
LABEL_20:
  if ( v8 && a8 )
    *a8 = 0;
  return WideCharToMultiByte(
           CodePage,
           v10,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           !v8 ? a7 : nullptr,
           !v8 ? a8 : nullptr);
}
