/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474D56
// Address: 0x00474D56

//----- (00474D56) --------------------------------------------------------
int __usercall sub_474D56@<eax>(int a1@<ebx>, int a2@<edi>, LPCWSTR lpFileName, int a4)
{
  HANDLE FirstFile; // edi
  DWORD LastError; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int FindFileData; // [esp+4h] [ebp-254h] BYREF
  FILETIME FileTime; // [esp+8h] [ebp-250h] BYREF
  FILETIME v12; // [esp+10h] [ebp-248h] BYREF
  FILETIME v13; // [esp+18h] [ebp-240h] BYREF
  int v14; // [esp+24h] [ebp-234h]
  _BYTE v15[548]; // [esp+30h] [ebp-228h] BYREF

  if ( !a4 || !lpFileName )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  FirstFile = FindFirstFileExW(lpFileName, FindExInfoStandard, &FindFileData, FindExSearchNameMatch, nullptr, 0);
  if ( FirstFile == (HANDLE)-1 )
  {
    LastError = GetLastError();
    if ( LastError < 2 )
      goto LABEL_9;
    if ( LastError > 3 )
    {
      if ( LastError == 8 )
      {
        *sub_46B984() = 12;
        return -1;
      }
      if ( LastError != 18 )
      {
LABEL_9:
        *sub_46B984() = 22;
        return -1;
      }
    }
    *sub_46B984() = 2;
    return -1;
  }
  *(_DWORD *)a4 = FindFileData != 128 ? FindFileData : 0;
  *(_DWORD *)(a4 + 8) = sub_474F98(&FileTime);
  *(_DWORD *)(a4 + 12) = v7;
  *(_DWORD *)(a4 + 16) = sub_474F98(&v12);
  *(_DWORD *)(a4 + 20) = v8;
  *(_DWORD *)(a4 + 24) = sub_474F98(&v13);
  *(_DWORD *)(a4 + 32) = v14;
  *(_DWORD *)(a4 + 28) = v9;
  if ( sub_47B594(0, (int)FirstFile, (_WORD *)(a4 + 36), 260, (int)v15) )
  {
    sub_467F04(0, (int)FirstFile);
    __debugbreak();
  }
  return (int)FirstFile;
}
// 474E26: variable 'v7' is possibly undefined
// 474E38: variable 'v8' is possibly undefined
// 474E56: variable 'v9' is possibly undefined
