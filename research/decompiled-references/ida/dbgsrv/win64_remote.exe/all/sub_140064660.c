/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064660
// Address: 0x0000000140064660

//----- (0000000140064660) ----------------------------------------------------
__int64 __fastcall sub_140064660(const CHAR *a1, const CHAR *a2)
{
  unsigned int v3; // edi
  DWORD LastError; // ebx
  LPCWSTR lpNewFileName; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  LPCWSTR lpExistingFileName; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = -1;
  sub_14005EDE0((WCHAR **)&lpExistingFileName, a1);
  sub_14005EDE0((WCHAR **)&lpNewFileName, a2);
  if ( v10 <= 1 || v7 <= 1 )
  {
    *errno() = 42;
  }
  else
  {
    if ( MoveFileExW(lpExistingFileName, lpNewFileName, 1u) )
    {
      v3 = 0;
      goto LABEL_8;
    }
    LastError = GetLastError();
    *errno() = LastError;
  }
  sub_1400640B0(1u);
LABEL_8:
  if ( lpNewFileName )
  {
    v7 = 0;
    j_free((void *)lpNewFileName);
    lpNewFileName = nullptr;
    v8 = 0;
  }
  if ( lpExistingFileName )
  {
    v10 = 0;
    j_free((void *)lpExistingFileName);
  }
  return v3;
}
