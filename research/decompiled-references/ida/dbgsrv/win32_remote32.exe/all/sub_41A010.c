/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A010
// Address: 0x0041A010

//----- (0041A010) --------------------------------------------------------
int __stdcall sub_41A010(int a1, unsigned int a2, int a3)
{
  HMODULE ModuleHandleA; // eax
  int (__stdcall *WSAPoll)(LPWSAPOLLFD, ULONG, INT); // eax

  if ( (dword_4B6B14 & 1) != 0 )
  {
    WSAPoll = (int (__stdcall *)(LPWSAPOLLFD, ULONG, INT))dword_4B6B10;
  }
  else
  {
    dword_4B6B14 |= 1u;
    ModuleHandleA = GetModuleHandleA("ws2_32");
    WSAPoll = (int (__stdcall *)(LPWSAPOLLFD, ULONG, INT))GetProcAddress(ModuleHandleA, "WSAPoll");
    dword_4B6B10 = (int)WSAPoll;
  }
  if ( WSAPoll )
    return ((int (__cdecl *)(int))WSAPoll)(a1);
  else
    return sub_419660(a1, a2, a3);
}
// 4B6B10: using guessed type int dword_4B6B10;
// 4B6B14: using guessed type int dword_4B6B14;
