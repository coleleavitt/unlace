void __fastcall sub_1441720(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  struct tm *v5; // r14
  int v6; // edx
  __int64 tm_mon; // rax
  void *v8; // rdx
  void *v9; // rsi
  void *v10; // rdx
  void *v11; // rsi
  double v13[2]; // [rsp+8h] [rbp-F0h] BYREF
  time_t timer; // [rsp+18h] [rbp-E0h] BYREF
  __m128 v15; // [rsp+20h] [rbp-D8h] BYREF
  int tm_sec; // [rsp+30h] [rbp-C8h]
  int tm_mday; // [rsp+34h] [rbp-C4h]
  char *v18; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B0h]
  _BYTE v21[40]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+80h] [rbp-78h] BYREF
  int v23; // [rsp+88h] [rbp-70h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-58h]
  char v26; // [rsp+A8h] [rbp-50h]
  int v27; // [rsp+ACh] [rbp-4Ch]
  void **p_ptr; // [rsp+B0h] [rbp-48h]

  v4 = *(_QWORD *)(a3 + 40);
  if ( *(_BYTE *)(v4 + 336) )
  {
    timer = *(_QWORD *)(v4 + 328);
    v5 = gmtime(&timer);
  }
  else
  {
    timer = time(nullptr);
    v5 = localtime(&timer);
  }
  ptr = v21;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v23 = 2;
  v26 = 0;
  v27 = 1;
  v25 = 0;
  v24 = 0;
  v22 = &off_2BEBEE0;
  p_ptr = &ptr;
  sub_227B8B0(&v22, 0, 0, 0);
  if ( v5 )
  {
    v6 = v5->tm_year + 1900;
    tm_mon = v5->tm_mon;
    *(_QWORD *)&v13[0] = "\"%s %2d %4d\"";
    tm_sec = v6;
    v15 = _mm_loadh_ps(v13);
    tm_mday = v5->tm_mday;
    v18 = off_2BB2BE0[tm_mon];
    sub_227C560(&v22, &v15);
  }
  else
  {
    sub_995540((__int64)&v22, "??? ?? ????");
  }
  tm_sec = 0;
  v8 = p_ptr[1];
  v9 = *p_ptr;
  v15 = 0u;
  sub_145C860(a3, v9, v8, &v15, 0, 0);
  *a1 = v15.m128_i32[0];
  v22 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v22);
  if ( ptr != v21 )
    free(ptr);
  ptr = v21;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v23 = 2;
  v26 = 0;
  v27 = 1;
  v25 = 0;
  v24 = 0;
  v22 = &off_2BEBEE0;
  p_ptr = &ptr;
  sub_227B8B0(&v22, 0, 0, 0);
  if ( v5 )
  {
    tm_sec = v5->tm_sec;
    *(_QWORD *)&v13[0] = "\"%02d:%02d:%02d\"";
    v15 = _mm_loadh_ps(v13);
    tm_mday = v5->tm_min;
    LODWORD(v18) = v5->tm_hour;
    sub_227C560(&v22, &v15);
  }
  else
  {
    sub_995540((__int64)&v22, "??:??:??");
  }
  tm_sec = 0;
  v10 = p_ptr[1];
  v11 = *p_ptr;
  v15 = 0u;
  sub_145C860(a3, v11, v10, &v15, 0, 0);
  *a2 = v15.m128_i32[0];
  v22 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v22);
  if ( ptr != v21 )
    free(ptr);
}
