unsigned __int64 sub_3D5E20()
{
  const char *v0; // rdx
  const char *v1; // rdx
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v4; // [rsp+10h] [rbp-68h]
  int v5; // [rsp+18h] [rbp-60h]
  __int64 v6; // [rsp+1Ch] [rbp-5Ch]
  __int64 v7; // [rsp+24h] [rbp-54h]
  __m128i v8; // [rsp+2Ch] [rbp-4Ch]
  __int64 v9; // [rsp+3Ch] [rbp-3Ch]
  int v10; // [rsp+44h] [rbp-34h]
  __m128i v11; // [rsp+48h] [rbp-30h]
  __m128i v12; // [rsp+58h] [rbp-20h]
  unsigned __int64 v13; // [rsp+68h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v4 = qword_8BCD70;
  si128 = _mm_load_si128((const __m128i *)&xmmword_8BCD60);
  v5 = dword_8BCD78;
  v8 = _mm_load_si128((const __m128i *)&xmmword_8BCD90);
  v6 = qword_8BCD80;
  v11 = _mm_load_si128((const __m128i *)&xmmword_8BCDB0);
  v7 = qword_8BCD88;
  v12 = _mm_load_si128((const __m128i *)&xmmword_8BCDC0);
  v9 = qword_8BCDA0;
  v10 = dword_8BCDA8;
  reg_bin_op("uiConfig64", 1, &si128, 104, 0, 0);
  v0 = (const char *)qword_8D0AA0;
  if ( !(_QWORD)xmmword_8D0AA8 )
    v0 = &s1;
  reg_str_set("SearchText", 0, v0);
  v1 = &s1;
  if ( (_QWORD)xmmword_8D0AC8 )
    v1 = (const char *)qword_8D0AC0;
  reg_str_set("SearchBin", 0, v1);
  return v13 - __readfsqword(0x28u);
}
