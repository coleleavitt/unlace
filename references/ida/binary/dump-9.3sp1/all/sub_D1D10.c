__int64 __fastcall sub_D1D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r15
  __int64 i; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v22; // rbx
  __m128i si128; // xmm1
  __m128i *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned int tinfo_size; // eax
  __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // [rsp-8h] [rbp-178h]
  int v35; // [rsp+0h] [rbp-170h]
  __int64 v36; // [rsp+8h] [rbp-168h]
  int v38; // [rsp+14h] [rbp-15Ch]
  __int64 v39; // [rsp+18h] [rbp-158h]
  __int64 v40; // [rsp+28h] [rbp-148h]
  char v41[8]; // [rsp+40h] [rbp-130h] BYREF
  __int64 v42; // [rsp+48h] [rbp-128h]
  char v43; // [rsp+58h] [rbp-118h] BYREF
  char v44[8]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+98h] [rbp-D8h]
  _BYTE v46[24]; // [rsp+E0h] [rbp-90h] BYREF
  _BYTE v47[8]; // [rsp+130h] [rbp-40h] BYREF
  unsigned __int64 v48; // [rsp+138h] [rbp-38h]

  v8 = a6;
  v40 = a2;
  v9 = a7;
  v39 = a3;
  v38 = a4;
  v48 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 64);
  if ( a8 > 16 )
  {
    v22 = *(_QWORD *)(v10 + 1496);
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v24 = (__m128i *)v41;
    do
    {
      v24[1] = si128;
      v24->m128i_i16[0] = 0;
      v24 += 5;
      v24[-5].m128i_i16[1] = 0;
      v24[-5].m128i_i32[1] = -1;
      v24[-5].m128i_i64[1] = 0;
      v24[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v24[-3] + 8) = 0;
      v24[-2].m128i_i32[2] = 0;
      v24[-1].m128i_i64[0] = 0;
      v24[-1].m128i_i32[2] = 0;
    }
    while ( v24 != (__m128i *)v47 );
    v41[0] = 9;
    v25 = j__qalloc_or_throw(24, (__int64)v47, a3, a4);
    *(_QWORD *)v25 = v10;
    *(_QWORD *)(v25 + 8) = a7;
    *(_DWORD *)(v25 + 16) = a5;
    v26 = *(_QWORD *)(v10 + 1504);
    v42 = v25;
    sub_11C950(v41, v26, 0.0);
    copy_tinfo_t();
    v44[0] = 9;
    v29 = j__qalloc_or_throw(24, v22 + 200, v27, v28);
    *(_QWORD *)v29 = v10;
    *(_QWORD *)(v29 + 8) = v8;
    *(_DWORD *)(v29 + 16) = v38;
    v30 = *(_QWORD *)(v10 + 1504);
    v45 = v29;
    sub_11C950(v44, v30, 0.0);
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_size = get_tinfo_size();
    sub_120A10(v46, *(_QWORD *)(v10 + 1504), a8, tinfo_size, v39, 2);
    i = sub_335B10(
          v10,
          v39,
          (unsigned int)"memcpy",
          (unsigned int)&v43,
          3,
          (unsigned int)v41,
          1,
          v34,
          v35,
          (unsigned int)v47,
          a5,
          v39);
    *(_DWORD *)(*(_QWORD *)(i + 72) + 284LL) = 5;
    sub_A3160(a1, (_QWORD *)i, v40);
    v32 = v36;
    do
    {
      v32 -= 80;
      cleanup_argloc();
      v33 = *(_QWORD *)(v32 + 32);
      if ( v33 )
      {
        *(_QWORD *)(v32 + 40) = 0;
        qfree(v33);
      }
      clear_tinfo_t();
      sub_11CDA0(v32);
    }
    while ( (char *)v32 != v41 );
  }
  else
  {
    for ( i = 0; a8; v40 = (__int64)v20 )
    {
      v12 = (_QWORD *)j__qalloc_or_throw(80, a2, a3, a4);
      v12[4] = 0xFFFFFFFF00000000LL;
      i = (__int64)v12;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      sub_330970(v12, v39);
      *(_DWORD *)i = 4;
      *(_BYTE *)(i + 32) = 9;
      v15 = j__qalloc_or_throw(24, v39, v13, v14);
      *(_QWORD *)(v15 + 8) = (int)v8;
      *(_DWORD *)(v15 + 16) = v38;
      *(_QWORD *)v15 = v10;
      *(_QWORD *)(i + 40) = v15;
      v16 = round_down_power2();
      *(_BYTE *)(i + 64) = 9;
      *(_DWORD *)(i + 36) = v16;
      v19 = j__qalloc_or_throw(24, v39, v17, v18);
      a2 = i;
      *(_QWORD *)(v19 + 8) = v9;
      *(_QWORD *)v19 = v10;
      *(_DWORD *)(v19 + 16) = a5;
      *(_QWORD *)(i + 72) = v19;
      LODWORD(v19) = *(_DWORD *)(i + 36);
      a8 -= v19;
      *(_DWORD *)(i + 68) = v19;
      LODWORD(v8) = v19 + v8;
      v9 += v19;
      v20 = sub_A3160(a1, (_QWORD *)i, v40);
      a3 = (unsigned int)a8;
    }
  }
  return i;
}
