__int64 __fastcall process_zip_linput(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  __int64 v4; // rax
  __m128i *v5; // rbp
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // ebx
  __m128i v10; // [rsp+0h] [rbp-88h] BYREF
  __m128i v11[3]; // [rsp+10h] [rbp-78h] BYREF
  _BOOL8 (__fastcall *v12)(__int64); // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  unsigned __int64 v14; // [rsp+58h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = a1;
  v12 = sub_835750;
  v11[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B3CC00), (__m128i)(unsigned __int64)sub_8357E0);
  v11[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B3CC08), (__m128i)(unsigned __int64)sub_8357B0);
  v11[2] = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B3CC10), (__m128i)(unsigned __int64)sub_835650);
  v4 = sub_753E40((__int64)&byte_22F0C30, v11);
  if ( v4 )
  {
    v5 = (__m128i *)v4;
    v6 = sub_753540(v4, &v10);
    if ( v10.m128i_i64[0] && !v6 )
    {
      v7 = 0;
      while ( 1 )
      {
        v6 = sub_835670(v5, a2, a3);
        if ( v6 )
          break;
        if ( (unsigned __int64)++v7 >= v10.m128i_i64[0] )
          goto LABEL_7;
        v6 = sub_753EE0(v5);
        if ( v6 )
          break;
        if ( (unsigned __int64)v7 >= v10.m128i_i64[0] )
          goto LABEL_7;
      }
    }
    v8 = -v6;
    if ( v6 >= 0 )
LABEL_7:
      v8 = 0;
    sub_754680(v5);
  }
  else
  {
    return 1;
  }
  return v8;
}
