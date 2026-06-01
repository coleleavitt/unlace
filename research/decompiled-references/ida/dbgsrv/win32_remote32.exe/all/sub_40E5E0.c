/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E5E0
// Address: 0x0040E5E0

//----- (0040E5E0) --------------------------------------------------------
int __userpurge sub_40E5E0@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  int v4; // ecx

  if ( !*(_DWORD *)(a2 + 200) && (*(_DWORD *)(a2 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( TerminateProcess(*(HANDLE *)(a2 + 452), 0xFFFFFFFF) )
  {
    v4 = *(_DWORD *)(a2 + 656);
    *(_BYTE *)(a2 + 661) = 1;
    if ( !v4 || (*(int (__stdcall **)(int, int))(*(_DWORD *)a2 + 80))(a2, v4) == 1 )
    {
      return 1;
    }
    else
    {
      sub_43C950(a1, a2, (int)"continue_after_event");
      return -1;
    }
  }
  else
  {
    sub_43C950(a1, a2, (int)"TerminateProcess");
    return -1;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
