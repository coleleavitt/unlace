__int64 __fastcall sub_26B620(double a1, double a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  double v8; // xmm4_8
  double v9; // xmm5_8
  char v10; // al
  int *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128i *v14; // rsi
  __m128 si128; // xmm0
  void *v16; // rsi
  unsigned __int8 v17; // al
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __m128i *v25; // rbx
  __int64 v26; // rdi
  unsigned int v28; // [rsp+Ch] [rbp-11Ch]
  __int64 (__fastcall **v29)(); // [rsp+10h] [rbp-118h] BYREF
  __int64 v30; // [rsp+18h] [rbp-110h]
  __int128 v31; // [rsp+20h] [rbp-108h]
  __int64 v32; // [rsp+30h] [rbp-F8h]
  const char *v33; // [rsp+38h] [rbp-F0h]
  int v34; // [rsp+40h] [rbp-E8h]
  __m128i v35; // [rsp+48h] [rbp-E0h] BYREF
  int v36; // [rsp+58h] [rbp-D0h]
  char v37; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v38[3]; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD v39[3]; // [rsp+90h] [rbp-98h] BYREF
  char v40; // [rsp+A8h] [rbp-80h] BYREF
  int v41; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-60h]
  __int128 v43; // [rsp+D0h] [rbp-58h]
  char v44; // [rsp+E0h] [rbp-48h]
  char v45; // [rsp+E1h] [rbp-47h]
  unsigned __int64 v46; // [rsp+E8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( (get_merge_state() & 3) != 0 )
    v10 = is_diff_merge_mode() + 3;
  else
    v10 = 1 - ((dword_8CC5F0 == 0) - 1);
  v32 = 0;
  v30 = 0x603FF000004LL;
  v31 = -1;
  v29 = (__int64 (__fastcall **)())&stru_86F6A0;
  v11 = (int *)&v37;
  v33 = "@0:1419[]\nLoad desktop";
  v34 = 3;
  v36 = -1;
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_860438), (__m128i)(unsigned __int64)&off_8603B0);
  do
  {
    *(_QWORD *)v11 = 0;
    v11 += 6;
    *((_OWORD *)v11 - 1) = 0;
  }
  while ( v11 != &v41 );
  v41 = 0;
  v12 = HIDWORD(v30);
  v13 = (HIDWORD(v30) >> 19) & 0x3F;
  if ( ((HIDWORD(v30) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v30) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, (unsigned int)(v13 - 1), v13, HIDWORD(v30), 0.0);
      BUG();
    }
    v12 = HIDWORD(v30) & 0xFE07FFFF;
    BYTE3(v30) = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
    HIDWORD(v30) &= 0xFE07FFFF;
  }
  v42 = 0;
  v29 = desktop_chooser_t___vtable;
  v14 = (__m128i *)v38[0];
  v44 = v10;
  v45 = 0;
  v36 = 139;
  v43 = 0;
  if ( v38[2] <= 0x11u )
  {
    v38[0] = qvector_reserve(v38, v38[0], 18, 1);
    v14 = (__m128i *)v38[0];
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCC20);
  v38[1] = 18;
  v14[1].m128i_i8[0] = 46;
  *v14 = (__m128i)si128;
  *(_BYTE *)(v38[0] + 17LL) = 0;
  v16 = (void *)v39[0];
  if ( v39[2] <= 0xCu )
  {
    v39[0] = qvector_reserve(v39, v39[0], 13, 1);
    v16 = (void *)v39[0];
  }
  v39[1] = 13;
  qmemcpy(v16, "Show JSON...", 12);
  *(_BYTE *)(v39[0] + 12LL) = 0;
  v17 = sub_269D30(
          (__int64)&v29,
          si128,
          (__m128)(unsigned __int64)&off_8603B0,
          a3,
          a4,
          v8,
          v9,
          a7,
          a8,
          (__int64)v16,
          v13,
          v12);
  v18 = v42;
  v29 = desktop_chooser_t___vtable;
  v28 = v17;
  if ( v42 )
  {
    v19 = v43;
    if ( (_QWORD)v43 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v18 + v20);
        v23 = *(_QWORD *)(v18 + v20 + 32);
        if ( v23 )
        {
          v22[5] = 0;
          *(double *)si128.m128_u64 = qfree(v23, (const char *)v16);
        }
        v24 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          *(double *)si128.m128_u64 = qfree(v24, (const char *)v16, *(double *)si128.m128_u64);
        }
        ++v21;
        v18 = v42;
        v20 += 56;
      }
      while ( v19 != v21 );
    }
    *(_QWORD *)&v43 = 0;
    *(double *)si128.m128_u64 = qfree(v18, (const char *)v16);
  }
  v29 = (__int64 (__fastcall **)())&stru_86F6A0;
  v25 = (__m128i *)&v40;
  do
  {
    v26 = v25->m128i_i64[0];
    if ( v25->m128i_i64[0] )
    {
      v25->m128i_i64[1] = 0;
      *(double *)si128.m128_u64 = qfree(v26, (const char *)v16, *(double *)si128.m128_u64);
    }
    v25 = (__m128i *)((char *)v25 - 24);
  }
  while ( &v35 != v25 );
  return v28;
}
