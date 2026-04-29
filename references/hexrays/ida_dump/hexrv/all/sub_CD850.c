__int64 __fastcall sub_CD850(__int64 a1, _QWORD *a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r15
  __int64 i; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v17; // rbx
  __m128i si128; // xmm1
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int tinfo_size; // eax
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // [rsp-8h] [rbp-178h]
  int v28; // [rsp+0h] [rbp-170h]
  __int64 v29; // [rsp+8h] [rbp-168h]
  __int64 v34; // [rsp+38h] [rbp-138h] BYREF
  char v35[8]; // [rsp+40h] [rbp-130h] BYREF
  __int64 v36; // [rsp+48h] [rbp-128h]
  _BYTE v37[56]; // [rsp+58h] [rbp-118h] BYREF
  char v38[8]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+98h] [rbp-D8h]
  _BYTE v40[56]; // [rsp+A8h] [rbp-C8h] BYREF
  _BYTE v41[24]; // [rsp+E0h] [rbp-90h] BYREF
  _QWORD v42[7]; // [rsp+F8h] [rbp-78h] BYREF
  char v43; // [rsp+130h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+138h] [rbp-38h]

  v8 = a6;
  v9 = a7;
  v44 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 64);
  if ( a8 > 16 )
  {
    v17 = *(_QWORD *)(v10 + 1496);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
    v19 = (__m128i *)v35;
    do
    {
      v19[1] = si128;
      v19->m128i_i16[0] = 0;
      v19 += 5;
      v19[-5].m128i_i16[1] = 0;
      v19[-5].m128i_i32[1] = -1;
      v19[-5].m128i_i64[1] = 0;
      v19[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v19[-3] + 8) = 0;
      v19[-2].m128i_i32[2] = 0;
      v19[-1].m128i_i64[0] = 0;
      v19[-1].m128i_i32[2] = 0;
    }
    while ( v19 != (__m128i *)&v43 );
    v35[0] = 9;
    v20 = j__qalloc_or_throw(24);
    *(_QWORD *)v20 = v10;
    *(_QWORD *)(v20 + 8) = a7;
    *(_DWORD *)(v20 + 16) = a5;
    v21 = *(_QWORD *)(v10 + 1504);
    v36 = v20;
    sub_118490(v35, v21, 0.0);
    copy_tinfo_t(v37, v17 + 200);
    v38[0] = 9;
    v22 = j__qalloc_or_throw(24);
    *(_QWORD *)v22 = v10;
    *(_QWORD *)(v22 + 8) = v8;
    *(_DWORD *)(v22 + 16) = a4;
    v23 = *(_QWORD *)(v10 + 1504);
    v39 = v22;
    sub_118490(v38, v23, 0.0);
    copy_tinfo_t(v40, v17 + 208);
    v34 = 7;
    copy_tinfo_t(v42, &v34);
    clear_tinfo_t(&v34);
    tinfo_size = get_tinfo_size(0, v42[0], 0);
    sub_11C550(v41, *(_QWORD *)(v10 + 1504), a8, tinfo_size, a3, 2);
    i = sub_330570(
          v10,
          a3,
          (unsigned int)"memcpy",
          (unsigned int)v37,
          3,
          (unsigned int)v35,
          1,
          v27,
          v28,
          (unsigned int)&v43,
          a5,
          a3);
    *(_DWORD *)(*(_QWORD *)(i + 72) + 284LL) = 5;
    sub_9ECA0(a1, (_QWORD *)i, (__int64)a2);
    v25 = v29;
    do
    {
      v25 -= 80;
      cleanup_argloc(v25 + 56);
      v26 = *(_QWORD *)(v25 + 32);
      if ( v26 )
      {
        *(_QWORD *)(v25 + 40) = 0;
        qfree(v26);
      }
      clear_tinfo_t(v25 + 24);
      sub_1188E0(v25);
    }
    while ( (char *)v25 != v35 );
  }
  else
  {
    for ( i = 0; a8; a2 = sub_9ECA0(a1, (_QWORD *)i, (__int64)a2) )
    {
      v12 = (_QWORD *)j__qalloc_or_throw(80);
      v12[4] = 0xFFFFFFFF00000000LL;
      i = (__int64)v12;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      sub_32B5A0(v12, a3);
      *(_DWORD *)i = 4;
      *(_BYTE *)(i + 32) = 9;
      v13 = j__qalloc_or_throw(24);
      *(_QWORD *)(v13 + 8) = (int)v8;
      *(_DWORD *)(v13 + 16) = a4;
      *(_QWORD *)v13 = v10;
      *(_QWORD *)(i + 40) = v13;
      v14 = round_down_power2((unsigned int)a8);
      *(_BYTE *)(i + 64) = 9;
      *(_DWORD *)(i + 36) = v14;
      v15 = j__qalloc_or_throw(24);
      *(_QWORD *)(v15 + 8) = v9;
      *(_QWORD *)v15 = v10;
      *(_DWORD *)(v15 + 16) = a5;
      *(_QWORD *)(i + 72) = v15;
      LODWORD(v15) = *(_DWORD *)(i + 36);
      a8 -= v15;
      *(_DWORD *)(i + 68) = v15;
      LODWORD(v8) = v15 + v8;
      v9 += v15;
    }
  }
  return i;
}
