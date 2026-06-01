__int64 __fastcall sub_3ADFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 tinfo_property4; // rsi
  __m128i si128; // [rsp+0h] [rbp-158h] BYREF
  __int64 v12; // [rsp+10h] [rbp-148h]
  __int64 v13; // [rsp+18h] [rbp-140h]
  __int64 v14; // [rsp+20h] [rbp-138h]
  __int128 v15; // [rsp+28h] [rbp-130h]
  __int64 v16; // [rsp+38h] [rbp-120h]
  __int64 v17; // [rsp+40h] [rbp-118h]
  __int128 v18; // [rsp+48h] [rbp-110h]
  __int64 v19; // [rsp+58h] [rbp-100h]
  __int128 v20; // [rsp+60h] [rbp-F8h]
  _OWORD v21[3]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-B8h]
  int v23; // [rsp+A8h] [rbp-B0h]
  __int64 v24; // [rsp+B0h] [rbp-A8h]
  char v25; // [rsp+B8h] [rbp-A0h]
  __int128 v26; // [rsp+C0h] [rbp-98h]
  __m128i v27; // [rsp+D0h] [rbp-88h]
  int v28; // [rsp+E0h] [rbp-78h]
  __int64 v29; // [rsp+E8h] [rbp-70h]
  __int64 v30; // [rsp+F0h] [rbp-68h]
  __int128 v31; // [rsp+F8h] [rbp-60h]
  __int64 v32; // [rsp+108h] [rbp-50h]
  __int128 v33; // [rsp+110h] [rbp-48h]
  __int64 v34; // [rsp+128h] [rbp-30h]
  unsigned __int64 v35; // [rsp+138h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(sub_1EA680(a1 + 384, a2, a3, a4, a5) + 40);
  v8 = *(_QWORD *)(a1 + 728);
  v12 = -2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC340);
  v13 = 0;
  v14 = -1;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v22 = 1;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  v28 = -1;
  v29 = -1;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v15 = 0;
  v18 = 0;
  v20 = 0;
  v21[0] = 0;
  v26 = 0;
  v27 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  v31 = 0;
  v33 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, __int64))(*(_QWORD *)v7 + 200LL))(v7, &si128, v8)
    && (HIBYTE(v13) & 0xEF) == 0xD )
  {
    tinfo_property4 = -1;
    if ( v14 != -1 )
      tinfo_property4 = get_tinfo_property4(si128.m128i_i64[1], 297, v14, 0, 0, 0);
  }
  else
  {
    tinfo_property4 = -1;
  }
  get_custom_data_type_ids(a2, tinfo_property4);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, (const char *)tinfo_property4);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30, (const char *)tinfo_property4);
  }
  clear_tinfo_t(v21);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, (const char *)tinfo_property4);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, (const char *)tinfo_property4);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  return 1;
}
