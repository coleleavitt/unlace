/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478C49
// Address: 0x00478C49

//----- (00478C49) --------------------------------------------------------
int __cdecl sub_478C49(
        _DWORD *a1,
        unsigned __int16 *a2,
        DWORD dwMapFlags,
        CHAR *lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a9)
{
  int result; // eax
  int v10; // [esp+0h] [ebp-10h] BYREF
  int v11; // [esp+4h] [ebp-Ch] BYREF
  char v12; // [esp+Ch] [ebp-4h]

  sub_467FF8((int)&v10, a1);
  result = sub_478A5F((int)&v11, a2, dwMapFlags, lpMultiByteStr, cbMultiByte, lpDestStr, cchDest, CodePage, a9);
  if ( v12 )
    *(_DWORD *)(v10 + 848) &= ~2u;
  return result;
}
