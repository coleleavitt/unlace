/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457390
// Address: 0x00457390

//----- (00457390) --------------------------------------------------------
char __stdcall sub_457390(unsigned int a1, unsigned int a2, int a3)
{
  HRESULT (__stdcall *SHGetFolderPathW)(HWND, int, HANDLE, DWORD, LPWSTR); // eax
  HMODULE LibraryA; // eax
  char *v5; // eax
  char *v7; // [esp+8h] [ebp-18h] BYREF
  int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-4h]
  WCHAR v11[260]; // [esp+20h] [ebp+0h] BYREF

  if ( a2 < 0x104 )
    return 0;
  SHGetFolderPathW = (HRESULT (__stdcall *)(HWND, int, HANDLE, DWORD, LPWSTR))dword_4B7358;
  if ( !dword_4B7358 )
  {
    LibraryA = LoadLibraryA("Shell32.dll");
    if ( LibraryA )
    {
      SHGetFolderPathW = (HRESULT (__stdcall *)(HWND, int, HANDLE, DWORD, LPWSTR))GetProcAddress(
                                                                                    LibraryA,
                                                                                    "SHGetFolderPathW");
      dword_4B7358 = (int)SHGetFolderPathW;
    }
    else
    {
      SHGetFolderPathW = (HRESULT (__stdcall *)(HWND, int, HANDLE, DWORD, LPWSTR))dword_4B7358;
    }
    if ( !SHGetFolderPathW )
      return 0;
  }
  if ( SHGetFolderPathW(nullptr, a3, nullptr, 0, v11) )
    return 0;
  v7 = nullptr;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  sub_45A700((int)&v7, v11, -1);
  v5 = (char *)MultiByteStr;
  if ( v8 )
    v5 = v7;
  sub_45ACB0(a1, v5, a2);
  v10 = 1;
  if ( v7 )
  {
    v8 = 0;
    sub_453A20(v7);
  }
  return 1;
}
// 4B7358: using guessed type int dword_4B7358;
