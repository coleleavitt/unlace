/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D0F0
// Address: 0x0045D0F0

//----- (0045D0F0) --------------------------------------------------------
int __stdcall sub_45D0F0(LPCCH lpMultiByteStr, LPCCH a2)
{
  int v2; // edi
  DWORD LastError; // esi
  LPCWSTR lpExistingFileName; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v6; // [esp+10h] [ebp-20h]
  LPCWSTR lpNewFileName; // [esp+18h] [ebp-18h] BYREF
  unsigned int v8; // [esp+1Ch] [ebp-14h]
  int v9; // [esp+20h] [ebp-10h]
  int v10; // [esp+2Ch] [ebp-4h]

  v2 = -1;
  sub_4579C0((LPWSTR *)&lpExistingFileName, lpMultiByteStr);
  v10 = 0;
  sub_4579C0((LPWSTR *)&lpNewFileName, a2);
  LOBYTE(v10) = 1;
  if ( v6 <= 1 || v8 <= 1 )
  {
    *sub_46B984() = 42;
  }
  else
  {
    if ( MoveFileExW(lpExistingFileName, lpNewFileName, 1u) )
    {
      v2 = 0;
      goto LABEL_8;
    }
    LastError = GetLastError();
    *sub_46B984() = LastError;
  }
  sub_45CC20(1);
LABEL_8:
  LOBYTE(v10) = 2;
  if ( lpNewFileName )
  {
    v8 = 0;
    sub_453A20((void *)lpNewFileName);
    lpNewFileName = nullptr;
    v9 = 0;
  }
  v10 = 3;
  if ( lpExistingFileName )
  {
    v6 = 0;
    sub_453A20((void *)lpExistingFileName);
  }
  return v2;
}
// 45D154: conditional instruction was optimized away because %var_14.4>=2u
// 45D15C: conditional instruction was optimized away because %var_20.4>=2u
