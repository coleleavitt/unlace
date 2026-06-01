/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EE30
// Address: 0x0040EE30

//----- (0040EE30) --------------------------------------------------------
SIZE_T __userpurge sub_40EE30@<eax>(
        __m128i a1@<xmm0>,
        int a2,
        LPVOID lpBaseAddress,
        void *lpBuffer,
        SIZE_T nSize,
        int a6)
{
  if ( !*(_DWORD *)(a2 + 200) && (*(_DWORD *)(a2 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  return sub_40C190(a2, a1, lpBaseAddress, lpBuffer, nSize, 0, 1);
}
// 4B70F0: using guessed type char byte_4B70F0;
