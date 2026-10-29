unsigned __int64 __fastcall sub_3670(__int16 a1, char a2, __int64 a3)
{
  __m128i si128; // xmm0
  __int64 v5; // rbx
  __int16 word; // ax
  bool v7; // cf
  unsigned __int16 v8; // ax
  __int64 v9; // rbp
  __int64 v11; // [rsp+10h] [rbp-68h] BYREF
  __m128i v12; // [rsp+18h] [rbp-60h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a3 != -1 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_8C20);
    v11 = 2;
    v13 = 0;
    v14 = 0;
    v12 = si128;
    v5 = netnode_supfirst(a3, 65);
    if ( v5 != -1 )
    {
      while ( 1 )
      {
        show_auto(v5, 0);
        word = get_word(v5);
        v7 = __CFADD__(a1, word);
        v8 = a1 + word;
        if ( v7 && a1 > 0 )
          break;
        v9 = v8;
        put_word(v5, v8);
        v12.m128i_i64[1] = v9;
        set_fixup(v5, &v11);
        if ( a2 )
          sub_34E0(v9, nullptr);
        sub_3490();
        v5 = netnode_supnext(a3, v5, 65);
        if ( v5 == -1 )
          return v15 - __readfsqword(0x28u);
      }
      sub_3050((__int64)"%a: fixup overflow; skipping fixup processing", *(double *)si128.m128i_i64);
    }
  }
  return v15 - __readfsqword(0x28u);
}

