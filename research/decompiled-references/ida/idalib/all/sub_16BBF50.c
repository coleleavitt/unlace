__int64 __fastcall sub_16BBF50(__int64 a1, __int64 *a2, int a3, char a4, __int64 a5)
{
  unsigned __int64 v5; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __m128 v15; // xmm0
  unsigned int v16; // r13d
  void *v17; // rbp
  void *v18; // rbx
  __m128i *v20; // r14
  __int64 v21; // rbp
  signed __int64 v22; // r15
  __m128i *v23; // rax
  char *v24; // r8
  char *v25; // rsi
  __m128i *v26; // rdx
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  const __m128i *v32; // rdx
  __m128i v33; // xmm6
  __m128i *v34; // rsi
  void *v35; // rax
  __m128i *v36; // r15
  void *v37; // [rsp+8h] [rbp-130h] BYREF
  __m128i *v38; // [rsp+10h] [rbp-128h]
  __int64 v39; // [rsp+18h] [rbp-120h]
  void *v40; // [rsp+20h] [rbp-118h] BYREF
  __int64 v41; // [rsp+28h] [rbp-110h] BYREF
  int v42; // [rsp+30h] [rbp-108h] BYREF
  void *ptr; // [rsp+38h] [rbp-100h]
  __int64 v44; // [rsp+40h] [rbp-F8h]
  _BYTE v45[40]; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v46[4]; // [rsp+70h] [rbp-C8h] BYREF
  int v47; // [rsp+90h] [rbp-A8h]
  __int64 v48; // [rsp+94h] [rbp-A4h]
  char *v49; // [rsp+A0h] [rbp-98h]
  unsigned int v50; // [rsp+A8h] [rbp-90h]
  __int64 *v51; // [rsp+B0h] [rbp-88h]
  __int64 v52; // [rsp+B8h] [rbp-80h]
  int v53; // [rsp+C0h] [rbp-78h]
  void *v54; // [rsp+C8h] [rbp-70h]
  __int16 v55; // [rsp+D0h] [rbp-68h]
  char v56; // [rsp+D2h] [rbp-66h]
  int v57; // [rsp+D4h] [rbp-64h]
  __m128 v58; // [rsp+D8h] [rbp-60h]
  __int64 v59; // [rsp+E8h] [rbp-50h]
  char v60; // [rsp+F0h] [rbp-48h]

  v5 = 0;
  v7 = *a2;
  v8 = a2[1];
  v9 = *a2 + 20;
  v10 = 4LL * *(unsigned int *)(*a2 + 4);
  v11 = *(_DWORD *)(*a2 + 16) * ((*(_WORD *)(*a2 + 2) >> 6) & 7u);
  if ( v11 >= v8 )
  {
    v5 = v11 - v8;
    v11 = a2[1];
  }
  v41 = *a2;
  v46[2] = (__int64)a2;
  v51 = &v41;
  v56 = a4;
  v37 = &v40;
  v55 = 256;
  v12 = *(_QWORD *)(a1 + 248);
  v37 = &v42;
  ptr = v45;
  v46[3] = v7;
  v13 = *(_QWORD *)(v12 + 17448);
  v46[0] = (__int64)&off_2BC6828;
  v14 = *(_QWORD *)(a1 + 232);
  v15 = _mm_loadh_ps((const double *)&v37);
  v46[1] = a1;
  v47 = a3;
  v40 = &dword_0 + 1;
  v42 = -1;
  v44 = 0x400000000LL;
  v48 = 0;
  v49 = (char *)(v9 + v10 + v11);
  v50 = 3;
  v52 = 1;
  v53 = 0;
  v54 = &dword_0 + 1;
  v57 = 4;
  v58 = v15;
  v59 = a5;
  v60 = 0;
  if ( !(unsigned __int8)sub_ECB4A0(v46, v49, &v49[v5], v14, v13, a3 == 6) && v50 <= 1 )
    sub_16BAAD0(v46);
  v16 = 0;
  if ( !v60 )
  {
    v20 = *(__m128i **)a5;
    v21 = 80LL * *(unsigned int *)(a5 + 8);
    v38 = &v20[(unsigned __int64)v21 / 0x10];
    v22 = 0xCCCCCCCCCCCCCCCDLL * (v21 >> 4);
    v39 = v22;
    if ( v21 )
    {
      do
      {
        v37 = (void *)(80 * v22);
        v23 = (__m128i *)operator new(80 * v22, (const std::nothrow_t *)&std::nothrow);
        v24 = (char *)v37;
        if ( v23 )
        {
          v25 = (char *)v37 + (_QWORD)v23;
          v26 = v23 + 5;
          *v23 = _mm_loadu_si128(v20);
          v23[1] = _mm_loadu_si128(v20 + 1);
          v23[2] = _mm_loadu_si128(v20 + 2);
          v23[3] = _mm_loadu_si128(v20 + 3);
          v23[4] = _mm_loadu_si128(v20 + 4);
          if ( (__m128i *)&v24[(_QWORD)v23] == &v23[5] )
          {
            v32 = v23;
          }
          else
          {
            do
            {
              v27 = _mm_loadu_si128(v26 - 5);
              v28 = _mm_loadu_si128(v26 - 4);
              v26 += 5;
              v29 = _mm_loadu_si128(v26 - 8);
              v30 = _mm_loadu_si128(v26 - 7);
              v31 = _mm_loadu_si128(v26 - 6);
              v26[-5] = v27;
              v26[-4] = v28;
              v26[-3] = v29;
              v26[-2] = v30;
              v26[-1] = v31;
            }
            while ( v25 != (char *)v26 );
            v32 = &v23[5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v24 - 160) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 5];
          }
          v33 = _mm_loadu_si128(v32);
          v37 = v23;
          *v20 = v33;
          v20[1] = _mm_loadu_si128(v32 + 1);
          v20[2] = _mm_loadu_si128(v32 + 2);
          v20[3] = _mm_loadu_si128(v32 + 3);
          v20[4].m128i_i64[0] = v32[4].m128i_i64[0];
          v34 = v38;
          v20[4].m128i_i32[2] = v32[4].m128i_i32[2];
          sub_16B8D10(v20, v34, v23, v22);
          v35 = v37;
          goto LABEL_28;
        }
        v22 >>= 1;
      }
      while ( v22 );
      if ( (unsigned __int64)v21 <= 0x460 )
        goto LABEL_31;
      v36 = &v20[5 * (v39 >> 1)];
      v37 = (void *)(80 * (v39 >> 1));
      sub_16B82A0(v20, v36);
      sub_16B82A0(v36, v38);
      sub_16B7FA0(
        v20,
        v36,
        (__int64)v38,
        0xCCCCCCCCCCCCCCCDLL * ((__int64)v37 >> 4),
        0xCCCCCCCCCCCCCCCDLL * ((v21 - (__int64)v37) >> 4));
      v35 = nullptr;
    }
    else
    {
LABEL_31:
      sub_16B62A0(v20, v38);
      v35 = nullptr;
    }
LABEL_28:
    v16 = 1;
    operator delete(v35, (const std::nothrow_t *)&std::nothrow);
  }
  v17 = v54;
  v46[0] = (__int64)&off_2BC6708;
  if ( ((unsigned __int8)v54 & 1) == 0 && v54 )
  {
    if ( *(void **)v54 != (char *)v54 + 16 )
      free(*(void **)v54);
    operator delete(v17, 0x48u);
  }
  nullsub_479();
  if ( ptr != v45 )
    free(ptr);
  v18 = v40;
  if ( ((unsigned __int8)v40 & 1) == 0 && v40 )
  {
    if ( *(void **)v40 != (char *)v40 + 16 )
      free(*(void **)v40);
    operator delete(v18, 0x48u);
  }
  return v16;
}
