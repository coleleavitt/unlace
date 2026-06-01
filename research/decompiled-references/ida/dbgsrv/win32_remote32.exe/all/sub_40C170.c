/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C170
// Address: 0x0040C170

//----- (0040C170) --------------------------------------------------------
SIZE_T __userpurge sub_40C170@<eax>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        LPVOID lpBaseAddress,
        void *lpBuffer,
        SIZE_T nSize,
        char a6)
{
  return sub_40C190(a1, a2, lpBaseAddress, lpBuffer, nSize, 0, a6);
}
