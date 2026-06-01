unsigned __int64 sub_2CDF50()
{
  char **v0; // rbx
  char **v1; // rdi
  char *v2; // rbx
  __int64 v3; // rax
  char v5; // [rsp+Fh] [rbp-D9h] BYREF
  _OWORD v6[11]; // [rsp+10h] [rbp-D8h] BYREF
  char v7; // [rsp+C0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+C8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !byte_8CCB48 )
  {
    v0 = (char **)&unk_8618C0;
    do
    {
      v1 = v0;
      v0 += 8;
      sub_538360(v1);
    }
    while ( off_862040 != v0 );
    v5 = 1;
    v2 = (char *)v6;
    v6[0] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862040),
              (__m128i)(unsigned __int64)"hexview:DataWord");
    v6[1] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862048),
              (__m128i)(unsigned __int64)"hexview:DataQword");
    v6[2] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862050),
              (__m128i)(unsigned __int64)"hexview:DataDouble");
    v6[3] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862058),
              (__m128i)(unsigned __int64)"hexview:AddrWithDeref");
    v6[4] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862060),
              (__m128i)(unsigned __int64)"hexview:AddrWithText");
    v6[5] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862068),
              (__m128i)(unsigned __int64)"hexview:IntUnsigned");
    v6[6] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862070),
              (__m128i)(unsigned __int64)"hexview:ColumnsAuto");
    v6[7] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862078),
              (__m128i)(unsigned __int64)"hexview:Columns2");
    v6[8] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862080),
              (__m128i)(unsigned __int64)"hexview:Columns8");
    v6[9] = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_862088),
              (__m128i)(unsigned __int64)"hexview:Columns32");
    v6[10] = _mm_unpacklo_epi64(
               _mm_loadl_epi64((const __m128i *)&off_862090),
               (__m128i)(unsigned __int64)"hexview:TextShow");
    do
    {
      v3 = sub_534430(*(_QWORD *)v2);
      if ( v3 )
        sub_537630(v3, 6, &v5);
      v2 += 8;
    }
    while ( v2 != &v7 );
    byte_8CCB48 = 1;
  }
  return v8 - __readfsqword(0x28u);
}
