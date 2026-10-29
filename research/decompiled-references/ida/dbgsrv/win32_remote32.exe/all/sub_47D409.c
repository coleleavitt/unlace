/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D409
// Address: 0x0047D409

//----- (0047D409) --------------------------------------------------------
int __cdecl sub_47D409(LPCWCH lpWideCharStr, int a2, int a3, UINT CodePage)
{
  int result; // eax
  unsigned int v5; // eax
  DWORD v6; // eax
  int v7; // eax
  DWORD LastError; // eax

  if ( lpWideCharStr )
  {
    if ( *lpWideCharStr )
    {
      v5 = sub_47B467(CodePage, 0, lpWideCharStr, -1, nullptr, 0, nullptr, nullptr);
      if ( v5 )
      {
        if ( v5 <= *(_DWORD *)(a2 + 12) || (result = sub_46D1C6(a2, v5)) == 0 )
        {
          v7 = sub_47B467(CodePage, 0, lpWideCharStr, -1, *(LPSTR *)(a2 + 8), *(_DWORD *)(a2 + 12), nullptr, nullptr);
          if ( v7 )
          {
            *(_DWORD *)(a2 + 16) = v7 - 1;
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
        v6 = GetLastError();
        sub_46B94E(v6);
        return *sub_46B984();
      }
    }
    else if ( *(_DWORD *)(a2 + 12) || (result = sub_46D1C6(a2, 1)) == 0 )
    {
      **(_BYTE **)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      return 0;
    }
  }
  else
  {
    sub_46D24B(a2);
    return 0;
  }
  return result;
}
