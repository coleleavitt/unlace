/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CDB1
// Address: 0x0047CDB1

//----- (0047CDB1) --------------------------------------------------------
int __cdecl sub_47CDB1(LPCWCH lpWideCharStr, int a2, int a3, UINT CodePage)
{
  int v4; // esi
  int result; // eax
  SIZE_T v6; // eax
  DWORD v7; // eax
  int v8; // eax
  DWORD LastError; // eax

  if ( !lpWideCharStr )
  {
    v4 = a2;
    sub_46D1AC(a2);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
LABEL_3:
    *(_DWORD *)(v4 + 16) = 0;
    return 0;
  }
  if ( *lpWideCharStr )
  {
    v6 = sub_47B467(CodePage, 0, lpWideCharStr, -1, nullptr, 0, nullptr, nullptr);
    if ( v6 )
    {
      if ( v6 <= *(_DWORD *)(a2 + 12) || (result = sub_47260B(a2, v6)) == 0 )
      {
        v8 = sub_47B467(CodePage, 0, lpWideCharStr, -1, *(LPSTR *)(a2 + 8), *(_DWORD *)(a2 + 12), nullptr, nullptr);
        if ( v8 )
        {
          *(_DWORD *)(a2 + 16) = v8 - 1;
          return 0;
        }
        else
        {
          LastError = GetLastError();
          sub_46B94E(LastError);
          return *sub_46B984();
        }
      }
    }
    else
    {
      v7 = GetLastError();
      sub_46B94E(v7);
      return *sub_46B984();
    }
  }
  else
  {
    v4 = a2;
    if ( *(_DWORD *)(a2 + 12) || (result = sub_47260B(a2, 1u)) == 0 )
    {
      **(_BYTE **)(a2 + 8) = 0;
      goto LABEL_3;
    }
  }
  return result;
}
