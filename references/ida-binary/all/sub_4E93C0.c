void *__fastcall sub_4E93C0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int128 a8,
        __int128 a9)
{
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 *v16; // r14
  __int64 v17; // r13
  __int64 *v18; // r15
  __int64 v19; // xmm3_8
  __int64 *v20; // rax
  _BYTE *v21; // r10
  __int64 *v22; // r11
  __int64 v23; // r12
  char *v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // xmm4_8
  __int64 *v28; // rax
  __int64 *v29; // r14
  __int128 si128; // [rsp+0h] [rbp-E0h]
  __m128i v32; // [rsp+10h] [rbp-D0h]
  __int128 v33; // [rsp+28h] [rbp-B8h] BYREF
  char v34; // [rsp+3Fh] [rbp-A1h]
  __int64 v35; // [rsp+40h] [rbp-A0h]
  _QWORD *v36; // [rsp+48h] [rbp-98h]
  void *dest; // [rsp+50h] [rbp-90h]
  __int64 *v38; // [rsp+58h] [rbp-88h]
  __int64 *v39; // [rsp+60h] [rbp-80h]
  __int64 v40; // [rsp+78h] [rbp-68h]
  char v41; // [rsp+80h] [rbp-60h]
  __int64 v42; // [rsp+98h] [rbp-48h]
  char v43; // [rsp+A0h] [rbp-40h]

  v10 = a5;
  v11 = a4;
  v12 = a4;
  v13 = (__int128)_mm_loadu_si128((const __m128i *)&a8);
  v14 = a9;
  if ( a5 <= a4 )
    v12 = a5;
  v15 = BYTE8(a9);
  if ( a7 >= v12 )
  {
    v29 = a2;
    v26 = a1;
  }
  else
  {
    v34 = BYTE8(a9);
    v16 = a1;
    v35 = a9;
    v39 = a3;
    v36 = a6;
    v33 = v13;
    if ( a5 >= v11 )
      goto LABEL_10;
LABEL_5:
    v40 = v35;
    v17 = v11 / 2;
    v41 = v34;
    v18 = &v16[v11 / 2];
    v19 = _mm_load_si128((const __m128i *)&v33).m128i_u64[0];
    dest = a2;
    v20 = sub_4E8DB0(a2, (__int64)v39, v18, v15, a5, (__int64)a6, v19);
    v21 = dest;
    v22 = v20;
    v23 = ((char *)v20 - (_BYTE *)dest) >> 3;
    while ( 1 )
    {
      v11 -= v17;
      v10 -= v23;
      v38 = v22;
      v24 = sub_4E91A0((char *)v18, v21, (char *)v22, v11, v23, v36, a7);
      *(_QWORD *)&a9 = v35;
      BYTE8(a9) = v34;
      si128 = (__int128)_mm_load_si128((const __m128i *)&v33);
      v32 = _mm_loadu_si128((const __m128i *)&a9);
      dest = v24;
      sub_4E93C0((_DWORD)v16, (_DWORD)v18, (_DWORD)v24, v17, v23, (_DWORD)v36, a7, si128, (__int128)v32);
      v25 = v10;
      if ( v11 <= v10 )
        v25 = v11;
      v26 = (__int64 *)dest;
      if ( a7 >= v25 )
        break;
      a2 = v38;
      v16 = (__int64 *)dest;
      if ( v10 < v11 )
        goto LABEL_5;
LABEL_10:
      v42 = v35;
      v23 = v10 / 2;
      v43 = v34;
      v27 = _mm_load_si128((const __m128i *)&v33).m128i_u64[0];
      v38 = &a2[v10 / 2];
      dest = a2;
      v28 = sub_4E8E20(v16, (__int64)a2, v38, v15, a5, (__int64)a6, v27);
      v22 = v38;
      v21 = dest;
      v18 = v28;
      v17 = v28 - v16;
    }
    LOBYTE(v15) = v34;
    v13 = (__int128)_mm_load_si128((const __m128i *)&v33);
    v29 = v38;
    v14 = v35;
    a3 = v39;
    a6 = v36;
  }
  *(_QWORD *)&a9 = v14;
  BYTE8(a9) = v15;
  return sub_4E6750(v26, v29, a3, v11, v10, a6, v13, (__int128)_mm_loadu_si128((const __m128i *)&a9));
}
