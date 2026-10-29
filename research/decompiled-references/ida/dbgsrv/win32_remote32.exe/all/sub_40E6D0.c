/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E6D0
// Address: 0x0040E6D0

//----- (0040E6D0) --------------------------------------------------------
int __userpurge sub_40E6D0@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, __int32 a3, _DWORD *a4, DWORD dwMilliseconds)
{
  int v5; // ebx

  if ( !*(_DWORD *)(a3 + 200) && (*(_DWORD *)(a3 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  v5 = sub_410DC0(a3, a1, a2, (int)a4, dwMilliseconds);
  if ( v5 >= 1 )
  {
    sub_45AE50((_DWORD *)(a3 + 80), a4);
    *(_DWORD *)(a3 + 656) = a3 + 80;
    *(_BYTE *)(a3 + 662) = 0;
  }
  return v5;
}
// 40E6D0: could not find valid save-restore pair for ebx
// 4B70F0: using guessed type char byte_4B70F0;
