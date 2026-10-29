/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458820
// Address: 0x00458820

//----- (00458820) --------------------------------------------------------
int __cdecl sub_458820(int a1, LPCCH lpMultiByteStr, int a3, LPWSTR lpWideCharStr, int *a5)
{
  int v5; // edi
  signed int v6; // eax
  DWORD v8; // ecx
  int v9; // eax

  v5 = (*(int (__cdecl **)(int, LPCCH, int))(a1 + 16))(a1, lpMultiByteStr, a3);
  if ( v5 == -1 )
    return -1;
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 20127 && *lpMultiByteStr >= 0x80u
    || (v6 == 50220
     || v6 == 50221
     || v6 == 50222
     || v6 == 50225
     || v6 == 50227
     || v6 == 50229
     || v6 == 52936
     || v6 == 54936
     || v6 >= 57002 && v6 <= 57011
     || v6 == 65000
     || v6 == 42
      ? (v8 = 0)
      : (v8 = 8),
        v9 = MultiByteToWideChar(v6, v8, lpMultiByteStr, v5, lpWideCharStr, *a5),
        (*a5 = v9) == 0) )
  {
    *sub_46B984() = 42;
    return -1;
  }
  return v5;
}
