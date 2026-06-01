__int64 __fastcall sub_1FEE1B0(__int64 a1, double a2, double a3, __int64 a4, const __m128i *a5)
{
  void *v5; // rcx
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rcx
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // rax
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  __int64 v12; // rax
  int v13; // r13d
  volatile signed __int32 *v14; // rbp
  __int64 v15; // rax
  void *v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rbx
  __int64 v19; // rcx
  __m128i v20; // xmm3
  void *v21; // rdx
  const char *v22; // rax
  __int64 v23; // rdx
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i si128; // xmm1
  __m128i v28; // xmm0
  void **v29; // rbp
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r13
  unsigned int v34; // ebx
  __int64 v35; // rbp
  int v36; // eax
  signed __int32 v37; // eax
  const char *v38; // [rsp+0h] [rbp-68h] BYREF
  void *v39; // [rsp+8h] [rbp-60h]
  void *v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+18h] [rbp-50h]
  __m128i v42; // [rsp+20h] [rbp-48h] BYREF
  void (__fastcall *v43)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-38h]
  __int64 v44; // [rsp+38h] [rbp-30h]

  v5 = (void *)a5->m128i_i64[1];
  if ( v5 == (void *)a5[1].m128i_i64[0] )
  {
    v38 = "[AllTUsToolExecutorPlugin] Please provide a directory/file path in the compilation database.";
    v42.m128i_i16[0] = 259;
    v31 = sub_2220490(a1);
    v33 = v32;
    v34 = v31;
    v35 = operator new(0x40u);
    sub_2220590(v35, &v38, v34, v33);
    *(_QWORD *)a1 = v35;
    *(_BYTE *)(a1 + 8) |= 1u;
    return a1;
  }
  v40 = (void *)a5[1].m128i_i64[0];
  v6 = a5[1].m128i_i64[1];
  v7 = (const char *)a5->m128i_i64[0];
  v39 = v5;
  v8 = v44;
  v41 = v6;
  v9 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))a5[3].m128i_i64[0];
  v10 = _mm_load_si128(&v42);
  a5->m128i_i64[0] = 0;
  a5->m128i_i64[1] = 0;
  v11 = _mm_loadu_si128(a5 + 2);
  v43 = v9;
  v12 = a5[3].m128i_i64[1];
  a5[1].m128i_i64[0] = 0;
  a5[3].m128i_i64[1] = v8;
  a5[1].m128i_i64[1] = 0;
  a5[3].m128i_i64[0] = 0;
  v44 = v12;
  a5[2] = v10;
  v38 = v7;
  v13 = qword_2CD9180[7];
  v42 = v11;
  v14 = (volatile signed __int32 *)operator new(0x80u);
  *((_QWORD *)v14 + 1) = 0x100000001LL;
  *(_QWORD *)v14 = off_2C71350;
  sub_1FE2A60((__int64)(v14 + 4), *(double *)v11.m128i_i64, a3);
  v15 = operator new(0x90u);
  v16 = v39;
  v17 = _mm_load_si128(&v42);
  v39 = nullptr;
  v18 = v15;
  v19 = *(_QWORD *)(v15 + 64);
  v20 = _mm_loadu_si128((const __m128i *)(v15 + 40));
  *(_QWORD *)(v15 + 16) = v16;
  v21 = v40;
  *(_BYTE *)(v15 + 72) = 1;
  *(_QWORD *)v15 = &off_2BE4C00;
  v22 = v38;
  *(_QWORD *)(v18 + 24) = v21;
  v23 = v41;
  *(_QWORD *)(v18 + 8) = v22;
  *(_QWORD *)(v18 + 32) = v23;
  v24 = v43;
  *(_QWORD *)(v18 + 80) = v22;
  *(_QWORD *)(v18 + 56) = v24;
  v25 = v44;
  *(__m128i *)(v18 + 40) = v17;
  *(_QWORD *)(v18 + 64) = v25;
  v38 = nullptr;
  v40 = nullptr;
  v41 = 0;
  v42 = v20;
  v43 = nullptr;
  v44 = v19;
  v26 = operator new(0xD0u);
  *(_OWORD *)(v26 + 16) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_OWORD *)(v26 + 144) = 0;
  *(_QWORD *)(v26 + 8) = &off_2BE4CE0;
  *(_QWORD *)(v26 + 32) = v26 + 48;
  *(_QWORD *)(v26 + 80) = v26 + 96;
  *(_QWORD *)(v26 + 112) = v26 + 16;
  *(_OWORD *)(v26 + 168) = 0;
  *(_OWORD *)(v26 + 184) = 0;
  v28 = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
  *(_DWORD *)(v18 + 136) = v13;
  *(_QWORD *)v26 = &off_2BE4BC8;
  *(_QWORD *)(v26 + 40) = 0x400000000LL;
  *(_QWORD *)(v26 + 88) = 0;
  *(__m128i *)(v26 + 96) = si128;
  *(_QWORD *)(v26 + 120) = 0;
  *(_QWORD *)(v26 + 128) = 0;
  *(_DWORD *)(v26 + 136) = 0;
  *(_QWORD *)(v26 + 160) = 0;
  *(_QWORD *)(v26 + 200) = 0;
  *(_QWORD *)(v18 + 88) = v26;
  *(_QWORD *)(v18 + 96) = off_2BE4B38;
  *(_QWORD *)(v18 + 104) = v26;
  *(_QWORD *)(v18 + 112) = 0;
  *(__m128i *)(v18 + 120) = v28;
  if ( !&_pthread_key_create )
  {
    v36 = *((_DWORD *)v14 + 2);
    *((_DWORD *)v14 + 2) = v36 - 1;
    if ( v36 != 1 )
      goto LABEL_4;
LABEL_19:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( &_pthread_key_create )
    {
      v37 = _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
    }
    else
    {
      v37 = *((_DWORD *)v14 + 3);
      *((_DWORD *)v14 + 3) = v37 - 1;
    }
    if ( v37 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
    goto LABEL_4;
  }
  if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    goto LABEL_19;
LABEL_4:
  if ( v43 )
    v43(&v42, &v42, 3);
  v29 = (void **)v39;
  if ( v40 != v39 )
  {
    do
    {
      while ( *v29 != v29 + 2 )
      {
        operator delete(*v29);
        v29 += 4;
        if ( v40 == v29 )
          goto LABEL_9;
      }
      v29 += 4;
    }
    while ( v40 != v29 );
LABEL_9:
    v29 = (void **)v39;
  }
  if ( v29 )
    operator delete(v29);
  if ( v38 )
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v38 + 8LL))(v38);
  *(_QWORD *)a1 = v18;
  *(_BYTE *)(a1 + 8) &= ~1u;
  return a1;
}
