void __fastcall sub_9CC980(unsigned __int16 **a1, __int64 *a2, __m128i *a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v8; // r12
  unsigned __int16 *v11; // rdi
  unsigned __int16 *v12; // rax
  __int64 v13; // r15
  unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebp
  void (*v17)(); // r13
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm1
  char *v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  unsigned __int16 *v31; // rsi
  unsigned __int16 *v32; // rcx
  __m128 v33; // [rsp+0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+18h] [rbp-60h]
  __m128i v35; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF

  v8 = a5;
  v11 = *a1;
  v12 = a1[1];
  v33.m128_u64[0] = (unsigned __int64)a3;
  v13 = (__int64)&v11[(_QWORD)v12];
  v34 = a6;
  v33 = _mm_loadh_ps((const double *)v33.m128_u64);
  v14 = sub_9C9E00(v11, v13, (__int64 *)v33.m128_u64[0], (__int64 *)v33.m128_u64[1]);
  if ( (unsigned __int16 *)v13 == v14 )
  {
    v19 = a3[1].m128i_i64[0];
    v20 = a3->m128i_i64[0];
    v21 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
    v35.m128i_i64[1] = a3->m128i_i64[1];
    v22 = v21;
    v36 = v19;
    v23 = (v20 >> 1) & 3;
    v24 = (v23 & 1) == 0;
    if ( (v23 & 2) != 0 )
      v24 = ((v23 & 1) == 0) | 2u;
    v35.m128i_i64[0] = v22 | (2 * v24);
    sub_9CA140(a1, a2, v35.m128i_i64);
    v25 = operator new(0x30u);
    v26 = a3[1].m128i_i64[0];
    v27 = _mm_loadu_si128(a3);
    *(_BYTE *)(v25 + 32) = 0;
    *(_QWORD *)(v25 + 24) = v26;
    *(_QWORD *)v25 = off_2B405A0;
    *(_BYTE *)(v25 + 33) = a4;
    *(_BYTE *)(v25 + 34) = 3;
    *(_DWORD *)(v25 + 36) = v8;
    *(_DWORD *)(v25 + 40) = 0;
    *(__m128i *)(v25 + 8) = v27;
    v35.m128i_i64[0] = v25;
    sub_9C87A0(a1, a2, v35.m128i_i64);
    if ( v35.m128i_i64[0] )
      goto LABEL_13;
  }
  else
  {
    v15 = *(_QWORD *)(*a2 + 8LL * *v14);
    if ( (*(_BYTE *)(v15 + 8) & 4) == 0 || a4 != *(unsigned __int8 *)(v15 + 33) )
    {
      if ( v34 )
      {
        v16 = *(_DWORD *)(v15 + 36);
        v17 = *(void (**)())(*(_QWORD *)v34 + 40LL);
        sub_9CC3A0(&v35, a3->m128i_i64);
        v18 = (__int64 *)v35.m128i_i64[0];
        if ( v17 != nullsub_372 )
        {
          ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD, __int64))v17)(
            v34,
            a3->m128i_i64[1],
            a3[1].m128i_i64[0],
            v35.m128i_i64[0],
            v35.m128i_i64[1],
            v16,
            v8);
          v18 = (__int64 *)v35.m128i_i64[0];
        }
        if ( v18 != &v36 )
          operator delete(v18);
      }
      return;
    }
    v34 = *(_QWORD *)(*a2 + 8LL * *v14);
    v33.m128_u64[0] = (unsigned __int64)v14;
    v28 = (char *)operator new(0x30u);
    v29 = v34;
    *(__m128i *)(v28 + 8) = _mm_loadu_si128((const __m128i *)(v34 + 8));
    *((_QWORD *)v28 + 3) = *(_QWORD *)(v29 + 24);
    v28[32] = *(_BYTE *)(v29 + 32);
    v28[33] = *(_BYTE *)(v29 + 33);
    v28[34] = *(_BYTE *)(v29 + 34);
    v30 = *(_DWORD *)(v29 + 36);
    *(_QWORD *)v28 = off_2B405A0;
    v31 = (unsigned __int16 *)v33.m128_u64[0];
    *((_DWORD *)v28 + 9) = v30;
    LODWORD(v29) = *(_DWORD *)(v29 + 40);
    v32 = a1[1];
    v35.m128i_i64[0] = (__int64)v28;
    *((_DWORD *)v28 + 10) = v29 + 1;
    if ( v31 == &(*a1)[(_QWORD)v32] )
    {
      sub_9C8000(v28);
      return;
    }
    sub_9C85E0(a2, v31, v35.m128i_i64);
    if ( v35.m128i_i64[0] )
LABEL_13:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35.m128i_i64[0] + 8LL))(v35.m128i_i64[0]);
  }
}
