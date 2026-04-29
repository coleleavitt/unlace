__int64 sub_31370()
{
  char v1; // al
  char v2; // dl
  __int64 v3; // rax
  char v4; // [rsp+Dh] [rbp-DBh] BYREF
  char v5; // [rsp+Eh] [rbp-DAh] BYREF
  char v6; // [rsp+Fh] [rbp-D9h] BYREF
  __int64 v7; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+18h] [rbp-D0h] BYREF
  __m128i v9; // [rsp+20h] [rbp-C8h] BYREF
  int v10; // [rsp+30h] [rbp-B8h]
  __m128i si128; // [rsp+38h] [rbp-B0h]
  __m128i v12; // [rsp+48h] [rbp-A0h]
  int v13; // [rsp+58h] [rbp-90h]
  int v14; // [rsp+60h] [rbp-88h]
  __m128i v15; // [rsp+70h] [rbp-78h]
  int v16; // [rsp+80h] [rbp-68h]
  int v17; // [rsp+88h] [rbp-60h]
  __m128i v18; // [rsp+98h] [rbp-50h]
  int v19; // [rsp+A8h] [rbp-40h]
  int v20; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v21; // [rsp+C8h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v7 = -1;
  if ( (unsigned __int8)netnode_check(&v7, "$ eh34", 0, 1) )
  {
    v4 = 2;
    v5 = 1;
    v6 = 1;
    LOBYTE(v8) = 0;
    v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"OUTPUT_TYPE", (__m128i)(unsigned __int64)&v4);
    v10 = 218103810;
    si128 = _mm_load_si128((const __m128i *)&xmmword_786C0);
    v13 = 50331651;
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"SHOW_WIND_STATES", (__m128i)(unsigned __int64)&v5);
    v14 = 1;
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"INFORM_ABOUT_HIDDEN_STATES", (__m128i)(unsigned __int64)&v6);
    v16 = 50331651;
    v17 = 1;
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"INTERNAL_SHOW_WARNING_DIALOGS", (__m128i)(unsigned __int64)&v8);
    v19 = 50331651;
    v20 = 0;
    if ( (unsigned __int8)read_config("eh34_dev", 1, &v9, 4, 0, 0, 0)
      || (unsigned __int8)read_config("eh34", 1, &v9, 4, 0, 0, 0) )
    {
      if ( v5 )
        v1 = v4 | 0x44;
      else
        v1 = v4 & 0xBB | 0x40;
      v2 = v1 & 0xBF;
      if ( v6 )
        v2 = v1 | 0x40;
      LOBYTE(v3) = v2 & 0x7F;
      if ( (_BYTE)v8 )
        LOBYTE(v3) = v2 | 0x80;
      v3 = (unsigned __int8)v3;
    }
    else
    {
      v3 = 70;
    }
    v8 = v3;
    netnode_supset(v7, 0, &v8, 8, 65);
  }
  return v7;
}
