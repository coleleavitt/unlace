/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: bitcountr_zero
// Address: 0x0009D8F0

//----- (0009D8F0) --------------------------------------------------------
int __cdecl bitcountr_zero(__int64 a1)
{
  if ( a1 )
    return dword_107958[(unsigned int)(((3033205385u * (unsigned __int64)((unsigned int)a1 ^ ((_DWORD)a1 - 1))) >> 32)
                                     + 66559345 * (a1 ^ (a1 - 1))
                                     - 1261761911 * (HIDWORD(a1) ^ ((unsigned __int64)(a1 - 1) >> 32))) >> 26];
  else
    return 64;
}
// 107958: using guessed type int dword_107958[];
