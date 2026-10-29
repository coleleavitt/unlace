/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E530
// Address: 0x0040E530

//----- (0040E530) --------------------------------------------------------
int __stdcall sub_40E530(int a1)
{
  int (__stdcall *v1)(_DWORD); // eax

  if ( !*(_DWORD *)(a1 + 200) && (*(_DWORD *)(a1 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( *(_DWORD *)(a1 + 656) )
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, *(_DWORD *)(a1 + 656));
  v1 = *((int (__stdcall **)(_DWORD))sub_418F20() + 5);
  if ( !v1 || !v1(*(_DWORD *)(a1 + 256)) )
    return -1;
  *(_DWORD *)(a1 + 512) = 4;
  *(_BYTE *)(a1 + 661) = 1;
  return 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
