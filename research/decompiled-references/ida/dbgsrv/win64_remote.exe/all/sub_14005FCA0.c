/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005FCA0
// Address: 0x000000014005FCA0

//----- (000000014005FCA0) ----------------------------------------------------
__int64 __fastcall sub_14005FCA0(__int64 a1, const WCHAR *a2, int a3, CHAR *a4, int cbMultiByte)
{
  BOOL *lpUsedDefaultChar; // r9
  DWORD v9; // edx
  UINT v11; // ecx
  int v12; // ebx
  _BYTE *v13; // rbx
  unsigned int v14; // edi
  BOOL UsedDefaultChar; // [rsp+40h] [rbp-18h] BYREF

  UsedDefaultChar = 0;
  lpUsedDefaultChar = nullptr;
  v9 = 0;
  if ( !cbMultiByte )
  {
    *errno() = 7;
    return 0xFFFFFFFFLL;
  }
  v11 = *(_DWORD *)a1;
  if ( v11 == 65000
    || v11 == 65001
    || v11 - 50220 <= 9 && (v12 = 679, _bittest(&v12, v11 - 50220))
    || v11 == 52936
    || v11 == 54936
    || v11 - 57002 <= 9
    || v11 == 42 )
  {
    v13 = (_BYTE *)(a1 + 4);
  }
  else
  {
    v13 = (_BYTE *)(a1 + 4);
    lpUsedDefaultChar = &UsedDefaultChar;
    if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
      v9 = 1024;
  }
  v14 = WideCharToMultiByte(v11, v9, a2, a3, a4, cbMultiByte, nullptr, lpUsedDefaultChar);
  if ( !v14 )
  {
    if ( GetLastError() == 122 )
    {
      *errno() = 7;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_20;
  }
  if ( UsedDefaultChar && (*v13 & 2) == 0
    || (*(unsigned int (__fastcall **)(__int64, CHAR *, _QWORD))(a1 + 24))(a1, a4, v14) != v14 )
  {
LABEL_20:
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  return v14;
}
