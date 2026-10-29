/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005E820
// Address: 0x000000014005E820

//----- (000000014005E820) ----------------------------------------------------
char __fastcall sub_14005E820(_BYTE *a1, unsigned __int64 a2, unsigned int a3)
{
  HRESULT (__stdcall *SHGetFolderPathW)(HWND, int, HANDLE, DWORD, LPWSTR); // rax
  HMODULE LibraryA; // rax
  char *v8; // rdx
  void *Block; // [rsp+30h] [rbp-258h] BYREF
  __int64 v11; // [rsp+38h] [rbp-250h]
  __int64 v12; // [rsp+40h] [rbp-248h]
  unsigned __int16 v13[264]; // [rsp+50h] [rbp-238h] BYREF

  if ( a2 < 0x104 )
    return 0;
  SHGetFolderPathW = (HRESULT (__stdcall *)(HWND, int, HANDLE, DWORD, LPWSTR))qword_1400CB8A0;
  if ( !qword_1400CB8A0 )
  {
    LibraryA = LoadLibraryA("Shell32.dll");
    if ( LibraryA )
    {
      SHGetFolderPathW = (HRESULT (__stdcall *)(HWND, int, HANDLE, DWORD, LPWSTR))GetProcAddress(
                                                                                    LibraryA,
                                                                                    "SHGetFolderPathW");
      qword_1400CB8A0 = (__int64)SHGetFolderPathW;
    }
    else
    {
      SHGetFolderPathW = (HRESULT (__stdcall *)(HWND, int, HANDLE, DWORD, LPWSTR))qword_1400CB8A0;
    }
    if ( !SHGetFolderPathW )
      return 0;
  }
  if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int16 *))SHGetFolderPathW)(
         0,
         a3,
         0,
         0,
         v13) )
  {
    return 0;
  }
  Block = nullptr;
  v11 = 0;
  v12 = 0;
  sub_140061D80((__int64)&Block, v13, -1);
  v8 = (char *)Str1;
  if ( v11 )
    v8 = (char *)Block;
  sub_1400621E0(a1, v8, a2);
  if ( Block )
  {
    v11 = 0;
    j_free(Block);
  }
  return 1;
}
// 1400CB8A0: using guessed type __int64 qword_1400CB8A0;
