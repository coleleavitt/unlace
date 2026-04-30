__int64 sub_26B990()
{
  char v0; // al
  int *v1; // rdx
  int *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rdx
  __m128i *v5; // rsi
  __m128i si128; // xmm0
  void *v7; // rsi
  const char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned int v21; // [rsp+Ch] [rbp-12Ch]
  __int64 v22; // [rsp+18h] [rbp-120h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-118h] BYREF
  __int64 v24; // [rsp+28h] [rbp-110h]
  __int128 v25; // [rsp+30h] [rbp-108h]
  __int64 v26; // [rsp+40h] [rbp-F8h]
  const char *v27; // [rsp+48h] [rbp-F0h]
  int v28; // [rsp+50h] [rbp-E8h]
  __m128i v29; // [rsp+58h] [rbp-E0h]
  int v30; // [rsp+68h] [rbp-D0h]
  _BYTE v31[24]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v32[3]; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD v33[3]; // [rsp+A0h] [rbp-98h] BYREF
  int v34; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-60h]
  __int128 v36; // [rsp+E0h] [rbp-58h]
  char v37; // [rsp+F0h] [rbp-48h]
  char v38; // [rsp+F1h] [rbp-47h]
  unsigned __int64 v39; // [rsp+F8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( (get_merge_state() & 3) != 0 )
    v0 = is_diff_merge_mode() + 3;
  else
    v0 = 1 - ((dword_8CC5F0 == 0) - 1);
  v26 = 0;
  v23 = (__int64 (__fastcall **)())&stru_86F6A0;
  v24 = 0x603FF000004LL;
  v1 = (int *)v31;
  v25 = -1;
  v2 = &v34;
  v27 = "@0:1421[]\nDelete desktop";
  v28 = 3;
  v30 = -1;
  v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_860438), (__m128i)(unsigned __int64)&off_8603B0);
  do
  {
    *(_QWORD *)v1 = 0;
    v1 += 6;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( v1 != &v34 );
  v34 = 0;
  v3 = HIDWORD(v24);
  v4 = (HIDWORD(v24) >> 19) & 0x3F;
  if ( ((HIDWORD(v24) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v24) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, (unsigned int)(v4 - 1), v4, HIDWORD(v24), 0.0);
      BUG();
    }
    v3 = HIDWORD(v24) & 0xFE07FFFF;
    BYTE3(v24) = ((HIDWORD(v24) >> 19) & 0x3F) - 1;
    HIDWORD(v24) &= 0xFE07FFFF;
  }
  v35 = 0;
  v23 = desktop_chooser_t___vtable;
  v5 = (__m128i *)v32[0];
  v37 = v0;
  v38 = 0;
  v30 = 138;
  v36 = 0;
  if ( v32[2] <= 0x11u )
  {
    v32[0] = qvector_reserve(v32, v32[0], 18, 1);
    v5 = (__m128i *)v32[0];
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DCC20);
  v32[1] = 18;
  v5[1].m128i_i8[0] = 46;
  *v5 = si128;
  *(_BYTE *)(v32[0] + 17LL) = 0;
  v7 = (void *)v33[0];
  if ( v33[2] <= 0xCu )
  {
    v33[0] = qvector_reserve(v33, v33[0], 13, 1);
    v7 = (void *)v33[0];
  }
  v33[1] = 13;
  qmemcpy(v7, "Show JSON...", 12);
  v8 = (const char *)&v22;
  v22 = 0;
  *(_BYTE *)(v33[0] + 12LL) = 0;
  v9 = sub_4AED50(&v23, &v22, v4, v3);
  v10 = v35;
  if ( v9 >= 0 && v9 < (unsigned __int64)v36 && (v11 = v35 + 56 * v9) != 0 )
  {
    v8 = nullptr;
    v12 = sub_266310(v11, nullptr, 0, *(double *)si128.m128i_i64);
    v10 = v35;
    v21 = v12;
  }
  else
  {
    v21 = 0;
  }
  v23 = desktop_chooser_t___vtable;
  if ( v10 )
  {
    v13 = v36;
    if ( (_QWORD)v36 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v10 + v14);
        v17 = *(_QWORD *)(v10 + v14 + 32);
        if ( v17 )
        {
          v16[5] = 0;
          *(double *)si128.m128i_i64 = qfree(v17, v8);
        }
        v18 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v18, v8, *(double *)si128.m128i_i64);
        }
        ++v15;
        v10 = v35;
        v14 += 56;
      }
      while ( v13 != v15 );
    }
    *(_QWORD *)&v36 = 0;
    *(double *)si128.m128i_i64 = qfree(v10, v8);
  }
  v23 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v19 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v19 )
    {
      *((_QWORD *)v2 + 1) = 0;
      *(double *)si128.m128i_i64 = qfree(v19, v8, *(double *)si128.m128i_i64);
    }
  }
  while ( v2 != (int *)v31 );
  return v21;
}
