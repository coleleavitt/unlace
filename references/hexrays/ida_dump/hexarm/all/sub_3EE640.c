unsigned __int64 __fastcall sub_3EE640(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *v6; // rbx
  __m128i si128; // xmm1
  __m128i *v8; // rax
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // rdi
  const char *v16; // rdi
  const char *v18; // rsi
  __int64 v19; // [rsp+8h] [rbp-228h]
  __int64 v20; // [rsp+10h] [rbp-220h]
  __int64 v21; // [rsp+10h] [rbp-220h]
  __int64 v22; // [rsp+10h] [rbp-220h]
  __int64 v23; // [rsp+10h] [rbp-220h]
  __int64 v24; // [rsp+10h] [rbp-220h]
  __int64 v26; // [rsp+18h] [rbp-218h]
  __int64 v27; // [rsp+20h] [rbp-210h]
  __int64 v29; // [rsp+38h] [rbp-1F8h] BYREF
  const char *v30; // [rsp+40h] [rbp-1F0h] BYREF
  __int128 v31; // [rsp+48h] [rbp-1E8h]
  _BYTE v32[24]; // [rsp+60h] [rbp-1D0h] BYREF
  char v33[56]; // [rsp+78h] [rbp-1B8h] BYREF
  char v34[24]; // [rsp+B0h] [rbp-180h] BYREF
  char v35[56]; // [rsp+C8h] [rbp-168h] BYREF
  char v36[24]; // [rsp+100h] [rbp-130h] BYREF
  char v37[56]; // [rsp+118h] [rbp-118h] BYREF
  char v38[24]; // [rsp+150h] [rbp-E0h] BYREF
  char v39[56]; // [rsp+168h] [rbp-C8h] BYREF
  char v40[24]; // [rsp+1A0h] [rbp-90h] BYREF
  char v41[56]; // [rsp+1B8h] [rbp-78h] BYREF
  char v42; // [rsp+1F0h] [rbp-40h] BYREF
  unsigned __int64 v43; // [rsp+1F8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v31 = 0;
  v30 = nullptr;
  if ( sub_CF9B0(0xBC5u, &v30, a3, 0) == 1 )
  {
    v18 = s1;
    if ( (_QWORD)v31 )
      v18 = v30;
    sub_11CEE0(a2, (__int64)v18);
    v29 = 39;
    copy_tinfo_t(a2 + 24, &v29);
    clear_tinfo_t(&v29);
    v16 = v30;
    *(_DWORD *)(a2 + 4) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    if ( v16 )
      goto LABEL_9;
  }
  else
  {
    v6 = &v42;
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v27 = *(_QWORD *)(a1 + 1504);
    v8 = (__m128i *)v32;
    do
    {
      v8->m128i_i32[1] = -1;
      v8 += 5;
      v8[-5].m128i_i16[0] = 0;
      v8[-5].m128i_i16[1] = 0;
      v8[-5].m128i_i64[1] = 0;
      v8[-4] = si128;
      v8[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v8[-3] + 8) = 0;
      v8[-2].m128i_i32[2] = 0;
      v8[-1].m128i_i64[0] = 0;
      v8[-1].m128i_i32[2] = 0;
    }
    while ( v8 != (__m128i *)&v42 );
    v29 = 7;
    v20 = *(_QWORD *)(a3 + 16);
    copy_tinfo_t(v33, &v29);
    clear_tinfo_t(&v29);
    v9 = getinf(59);
    sub_120450((__int64)v32, v27, 3, v9, v20, 0);
    v29 = 7;
    v21 = *(_QWORD *)(a3 + 16);
    v19 = *(_QWORD *)(a3 + 40LL * a4 + 48);
    copy_tinfo_t(v35, &v29);
    clear_tinfo_t(&v29);
    v10 = getinf(59);
    sub_120450((__int64)v34, v27, (int)v19, v10, v21, 1);
    v29 = 7;
    v22 = *(_QWORD *)(a3 + 16);
    LOWORD(v19) = *(_WORD *)(a3 + 40LL * (a4 + 1) + 46);
    copy_tinfo_t(v37, &v29);
    clear_tinfo_t(&v29);
    v11 = getinf(59);
    sub_120450((__int64)v36, v27, (unsigned __int16)v19, v11, v22, 2);
    v29 = 7;
    v23 = *(_QWORD *)(a3 + 16);
    LOWORD(v19) = *(_WORD *)(a3 + 40LL * (a4 + 2) + 46);
    copy_tinfo_t(v39, &v29);
    clear_tinfo_t(&v29);
    v12 = getinf(59);
    sub_120450((__int64)v38, v27, (unsigned __int16)v19, v12, v23, 3);
    v29 = 7;
    v24 = *(_QWORD *)(a3 + 16);
    v26 = *(_QWORD *)(a3 + 40LL * (a4 + 3) + 48);
    copy_tinfo_t(v41, &v29);
    clear_tinfo_t(&v29);
    v13 = getinf(59);
    sub_120450((__int64)v40, v27, (int)v26, v13, v24, 4);
    v29 = 39;
    copy_tinfo_t(a2 + 24, &v29);
    clear_tinfo_t(&v29);
    *(_DWORD *)(a2 + 4) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    v14 = sub_335C70(a1, *(_QWORD *)(a3 + 16), (__int64)"ARM64_SYSREG", (_QWORD *)(a2 + 24), 5, (__int64)v32, 1);
    *(_BYTE *)a2 = 4;
    *(_QWORD *)(a2 + 8) = v14;
    *(_DWORD *)(*(_QWORD *)(v14 + 72) + 280LL) |= 0x14u;
    do
    {
      v6 -= 80;
      cleanup_argloc(v6 + 56);
      v15 = *((_QWORD *)v6 + 4);
      if ( v15 )
      {
        *((_QWORD *)v6 + 5) = 0;
        qfree(v15);
      }
      clear_tinfo_t(v6 + 24);
      sub_11C7E0((__int64)v6);
    }
    while ( v6 != v32 );
    v16 = v30;
    if ( v30 )
    {
LABEL_9:
      *(_QWORD *)&v31 = 0;
      qfree(v16);
    }
  }
  return v43 - __readfsqword(0x28u);
}
