unsigned __int16 *__fastcall sub_4BD40(__int64 a1, unsigned __int64 *a2, _WORD *a3, __int64 a4)
{
  unsigned __int16 word; // ax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v10; // rbx
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rax

  word = get_word(a4);
  v7 = word;
  *a3 = 2;
  v8 = (unsigned __int64)word >> 10;
  if ( (word & 0x1000) == 0 )
  {
    v10 = word;
    v11 = get_word(a4 + 2);
    *a3 = 4;
    v12 = (v10 << 16) | v11;
    v7 = v12;
    if ( v8 == 24 )
    {
      v7 = (v12 << 16) | (unsigned __int16)get_word(a4 + 4);
      *a3 = 6;
    }
  }
  if ( a2 )
    *a2 = v7;
  return sub_49BC0(v7, &word_61060[20 * v8]);
}
