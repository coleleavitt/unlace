/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D4D0
// Address: 0x0047D4D0

//----- (0047D4D0) --------------------------------------------------------
int __cdecl sub_47D4D0(HMODULE hModule, int a2, int a3)
{
  DWORD LastError; // eax
  UINT v5; // eax
  int v6[4]; // [esp+0h] [ebp-22Ch] BYREF
  int v7; // [esp+10h] [ebp-21Ch]
  char v8; // [esp+14h] [ebp-218h]
  WCHAR WideCharStr[2]; // [esp+1Bh] [ebp-211h] BYREF

  if ( GetModuleFileNameW(hModule, (WCHAR *)((char *)WideCharStr + 1), 0x105u) )
  {
    v7 = 0;
    v6[0] = a2;
    v6[1] = a3;
    v6[2] = a2;
    v6[3] = a3;
    v8 = 0;
    v5 = sub_47246A();
    sub_47D409((WCHAR *)((char *)WideCharStr + 1), (int)v6, (int)WideCharStr, v5);
    return v7;
  }
  else
  {
    LastError = GetLastError();
    sub_46B94E(LastError);
    return 0;
  }
}
