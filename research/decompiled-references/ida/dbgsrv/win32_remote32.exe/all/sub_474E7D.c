/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474E7D
// Address: 0x00474E7D

//----- (00474E7D) --------------------------------------------------------
int __usercall sub_474E7D@<eax>(int a1@<ebx>, int a2@<edi>, HANDLE hFindFile, int a4)
{
  int result; // eax
  DWORD LastError; // eax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  struct _WIN32_FIND_DATAW FindFileData; // [esp+4h] [ebp-254h] BYREF

  if ( !hFindFile || hFindFile == (HANDLE)-1 || !a4 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  if ( !FindNextFileW(hFindFile, &FindFileData) )
  {
    LastError = GetLastError();
    if ( LastError >= 2 )
    {
      if ( LastError <= 3 )
        goto LABEL_14;
      if ( LastError == 8 )
      {
        *sub_46B984() = 12;
        return -1;
      }
      if ( LastError == 18 )
      {
LABEL_14:
        *sub_46B984() = 2;
        return -1;
      }
    }
    *sub_46B984() = 22;
    return -1;
  }
  *(_DWORD *)a4 = FindFileData.dwFileAttributes != 128 ? FindFileData.dwFileAttributes : 0;
  *(_DWORD *)(a4 + 8) = sub_474F98(&FindFileData.ftCreationTime);
  *(_DWORD *)(a4 + 12) = v6;
  *(_DWORD *)(a4 + 16) = sub_474F98(&FindFileData.ftLastAccessTime);
  *(_DWORD *)(a4 + 20) = v7;
  *(_DWORD *)(a4 + 24) = sub_474F98(&FindFileData.ftLastWriteTime);
  *(_DWORD *)(a4 + 32) = FindFileData.nFileSizeLow;
  *(_DWORD *)(a4 + 28) = v8;
  result = sub_47B594(a1, a2, (_WORD *)(a4 + 36), 260, (int)FindFileData.cFileName);
  if ( result )
  {
    sub_467F04(a1, a2);
    __debugbreak();
  }
  return result;
}
// 474F42: variable 'v6' is possibly undefined
// 474F54: variable 'v7' is possibly undefined
// 474F72: variable 'v8' is possibly undefined
