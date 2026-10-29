/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DE90
// Address: 0x0040DE90

//----- (0040DE90) --------------------------------------------------------
int __userpurge sub_40DE90@<eax>(__m128i a1@<xmm0>, int a2, DWORD dwProcessId, int a4, int a5, int a6)
{
  if ( !*(_DWORD *)(a2 + 200) && (*(_DWORD *)(a2 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( sub_418A10((void *)a2, dwProcessId) > 4 )
  {
    sub_410500(a2, (int)"AUTOHIDE NONE\nPlease use ida64 to debug 64-bit applications");
    SetLastError(0x32u);
    return -1;
  }
  if ( !DebugActiveProcess(dwProcessId) )
  {
    sub_43C950(a1, a2, (int)"DebugActiveProcess %08lX", dwProcessId);
    return -1;
  }
  if ( !sub_418FA0((_DWORD *)a2, dwProcessId) )
    return -1;
  *(_DWORD *)(a2 + 516) = a4;
  *(_DWORD *)(a2 + 512) = 1;
  *(_BYTE *)(a2 + 661) = 0;
  return 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
