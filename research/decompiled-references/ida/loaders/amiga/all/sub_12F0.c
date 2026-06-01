__int64 __fastcall sub_12F0(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a1 == -1 )
  {
    v5 = 0;
    v7 = 0;
    v8 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_32A0);
    for ( i = get_first_fixup_ea(); i != -1; i = get_next_fixup_ea(i) )
    {
      show_auto(i, 0);
      get_fixup(&v5, i);
      v7 += a2;
      switch ( (_WORD)v5 )
      {
        case 4:
          put_dword(i);
          break;
        case 0xD:
          put_byte(i);
          break;
        case 1:
          put_word(i);
          break;
      }
      set_fixup(i, &v5);
    }
    v4 = getinf(12);
    setinf(12, a2 + v4);
  }
  return 1;
}

