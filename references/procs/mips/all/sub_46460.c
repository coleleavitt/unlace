bool __fastcall sub_46460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int16 word; // ax

  v3 = *(_QWORD *)(a3 + 32) + *(_QWORD *)(a3 + 24);
  word = get_word(a2);
  put_word(a2, word & 0xFC00 | (v3 >> 23) & 0x1F | (32 * (unsigned __int16)(v3 >> 18)) & 0x3E0);
  put_word(a2 + 2, (unsigned __int16)(v3 >> 2));
  split_sreg_range(a2, 67, 1, 2, 0);
  return (((unsigned int)v3 ^ ((_DWORD)a2 + 4)) & 0xF0000000) == 0;
}
