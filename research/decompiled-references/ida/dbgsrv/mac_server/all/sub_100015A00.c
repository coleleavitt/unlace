/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100015A00
// Address: 0x0000000100015A00

//----- (0000000100015A00) ----------------------------------------------------
__int64 __fastcall sub_100015A00(_QWORD *a1, const char *a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // rbx
  char *v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdx
  const char *v8; // r12
  size_t v9; // rax
  size_t v10; // rbx
  unsigned __int64 v11; // r14
  void *v12; // rax
  const char *v13; // rdi
  _QWORD *v14; // rax
  __m128i v15; // xmm1
  const char *v16; // rsi
  char *v17; // rbx
  __int64 errdesc; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  unsigned int *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int64 v28; // r11
  unsigned int v29; // r9d
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // rsi
  char *v35; // r12
  __int64 v36; // rbx
  void *v37; // rax
  char *v38; // rdx
  __int64 v40; // [rsp+80h] [rbp-D0h]
  __int64 v42; // [rsp+90h] [rbp-C0h]
  const char *v43; // [rsp+90h] [rbp-C0h]
  __int64 v44; // [rsp+98h] [rbp-B8h]
  __int64 v45; // [rsp+A0h] [rbp-B0h]
  _QWORD *v46; // [rsp+B0h] [rbp-A0h]
  void *__src[2]; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-80h]
  __int128 v50; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+F0h] [rbp-60h]
  __int128 v52; // [rsp+100h] [rbp-50h] BYREF
  __int64 v53; // [rsp+110h] [rbp-40h]

  v52 = 0;
  v53 = 0;
  v2 = a1[85];
  if ( !v2 )
    goto LABEL_62;
  v3 = a1;
  *(_QWORD *)&v52 = qvector_reserve((__int64)&v52, nullptr, v2, 1u);
  __bzero(*((_QWORD *)&v52 + 1) + v52, v2 - *((_QWORD *)&v52 + 1));
  *((_QWORD *)&v52 + 1) = v2;
  v40 = a1[85];
  if ( !v40 )
    goto LABEL_62;
  v46 = a1 + 98;
  v4 = 0;
  do
  {
    v5 = (char *)operator new(0x360u);
    v6 = v3[87];
    v7 = v3[95];
    *(_QWORD *)v5 = *v3;
    *((_QWORD *)v5 + 1) = 0;
    *((_OWORD *)v5 + 33) = 0;
    *((_OWORD *)v5 + 34) = 0;
    *((_OWORD *)v5 + 35) = 0;
    *((_OWORD *)v5 + 36) = 0;
    *((_OWORD *)v5 + 37) = 0;
    *((_OWORD *)v5 + 38) = 0;
    *((_OWORD *)v5 + 39) = 0;
    *((_OWORD *)v5 + 40) = 0;
    *((_OWORD *)v5 + 41) = 0;
    *((_OWORD *)v5 + 42) = 0;
    *((_QWORD *)v5 + 86) = 0;
    *((_QWORD *)v5 + 87) = v6;
    *((_OWORD *)v5 + 44) = 0;
    *((_OWORD *)v5 + 45) = 0;
    *((_OWORD *)v5 + 46) = 0;
    *((_QWORD *)v5 + 94) = 0;
    *((_QWORD *)v5 + 95) = v7;
    *((_OWORD *)v5 + 52) = 0;
    *((_OWORD *)v5 + 51) = 0;
    *((_OWORD *)v5 + 50) = 0;
    *((_OWORD *)v5 + 49) = 0;
    *((_OWORD *)v5 + 48) = 0;
    *((_QWORD *)v5 + 106) = 0;
    v42 = v4 + 1;
    *((_DWORD *)v5 + 214) = v4 + 1;
    v5[860] = 0;
    v50 = 0;
    v51 = 0;
    v45 = v4;
    v44 = 56 * v4;
    sub_100002D00((__int64)&v50, "%s%s", a2, (const char *)(v3[84] + 56 * v4 + 24));
    v8 = _s1;
    if ( (!*((_QWORD *)&v50 + 1) || (v8 = (const char *)v50) != nullptr) && (v9 = strlen(v8)) != 0 )
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = *((void **)v5 + 104);
      if ( *((_QWORD *)v5 + 106) < v11 )
      {
        v12 = qvector_reserve((__int64)(v5 + 832), v12, v11, 1u);
        *((_QWORD *)v5 + 104) = v12;
      }
      *((_QWORD *)v5 + 105) = v11;
      memmove(v12, v8, v10);
      *(_BYTE *)(*((_QWORD *)v5 + 104) + v10) = 0;
      v13 = _s1;
      if ( *((_QWORD *)v5 + 105) )
        v13 = *((const char **)v5 + 104);
    }
    else
    {
      *((_QWORD *)v5 + 105) = 0;
      v13 = _s1;
    }
    v14 = open_linput(v13, 0);
    *((_QWORD *)v5 + 1) = v14;
    if ( !v14 )
    {
      v17 = (char *)_s1;
      if ( *((_QWORD *)&v50 + 1) )
        v17 = (char *)v50;
      errdesc = get_errdesc(v17, 0xFFFFFFFF);
      sub_100000AE0((int)"failed to open %s: %s\n", v17, errdesc);
      goto LABEL_25;
    }
    v5[774] = 1;
    if ( !(unsigned __int8)sub_1000146D0((__int64)v5, 0x11u, nullptr) )
    {
      v19 = _s1;
      if ( *((_QWORD *)&v50 + 1) )
        v19 = (const char *)v50;
      sub_100000AE0((int)"failed to parse dyld subcache header for %s\n", v19);
LABEL_25:
      sub_10001C650((__int64)v5);
      operator delete(v5);
      v3 = a1;
      goto LABEL_26;
    }
    v3 = a1;
    v15 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a1[84] + v44)), _mm_loadu_si128((const __m128i *)(v5 + 104)));
    if ( _mm_testz_si128(v15, v15) )
    {
      v20 = a1[73];
      if ( (v20 & 0x7FFFFFFFFFFFFFFLL) != 0 )
      {
        v21 = (unsigned int *)(v5 + 768);
        v22 = a1[72];
        v23 = v22 + 32 * v20;
        v24 = *((_QWORD *)v5 + 66);
        v25 = *((_QWORD *)v5 + 67);
        do
        {
          if ( (v25 & 0x7FFFFFFFFFFFFFFLL) != 0 )
          {
            v26 = *(_QWORD *)(v22 + 16);
            v27 = 0;
            while ( 1 )
            {
              v28 = v26 - *(_QWORD *)(v24 + v27);
              if ( v26 >= *(_QWORD *)(v24 + v27) && v28 <= *(_QWORD *)(v24 + v27 + 8) )
                break;
              v27 += 32;
              if ( 32 * v25 == v27 )
                goto LABEL_30;
            }
            if ( *(_QWORD *)(v24 + v27 + 16) + v28 != -1 )
            {
              v29 = *(_DWORD *)(v22 + 24);
              if ( v29 > *v21 )
                *v21 = v29;
            }
          }
LABEL_30:
          v22 += 32;
        }
        while ( v22 != v23 );
      }
      *(_BYTE *)(v52 + v45) = 1;
      v30 = (void *)a1[98];
      v31 = a1[99];
      if ( a1[100] < (unsigned __int64)(v31 + 1) )
      {
        v30 = qvector_reserve((__int64)v46, v30, v31 + 1, 8u);
        a1[98] = v30;
        v31 = a1[99];
      }
      *((_QWORD *)v30 + v31) = v5;
      ++a1[99];
    }
    else
    {
      v16 = _s1;
      if ( *((_QWORD *)&v50 + 1) )
        v16 = (const char *)v50;
      sub_100010070(
        (int)"%s does not match the subcache uuid from the umbrella cache, please verify that all files are from the same source",
        v16);
      v3 = a1;
      sub_10001C650((__int64)v5);
      operator delete(v5);
    }
LABEL_26:
    if ( (_QWORD)v50 )
    {
      *((_QWORD *)&v50 + 1) = 0;
      qfree((void *)v50);
    }
    v4 = v42;
  }
  while ( v42 != v40 );
  v50 = 0;
  v51 = 0;
  v32 = 24;
  v33 = 0;
  v34 = 0;
  do
  {
    if ( !*(_BYTE *)(v52 + v33) )
    {
      v43 = (const char *)(a1[84] + v32);
      *(_OWORD *)__src = 0;
      v49 = 0;
      sub_100002D00(
        (__int64)__src,
        "expected name: %s%s uuid: %02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
        a2,
        v43,
        *((unsigned __int8 *)v43 - 24),
        *((unsigned __int8 *)v43 - 23),
        *((unsigned __int8 *)v43 - 22),
        *((unsigned __int8 *)v43 - 21),
        *((unsigned __int8 *)v43 - 20),
        *((unsigned __int8 *)v43 - 19),
        *((unsigned __int8 *)v43 - 18),
        *((unsigned __int8 *)v43 - 17),
        *((unsigned __int8 *)v43 - 16),
        *((unsigned __int8 *)v43 - 15),
        *((unsigned __int8 *)v43 - 14),
        *((unsigned __int8 *)v43 - 13),
        *((unsigned __int8 *)v43 - 12),
        *((unsigned __int8 *)v43 - 11),
        *((unsigned __int8 *)v43 - 10),
        *((unsigned __int8 *)v43 - 9));
      v35 = nullptr;
      if ( __src[1] )
        v35 = (char *)__src[1] - 1;
      if ( __src[1] > (void *)1 )
      {
        v36 = 0;
        if ( *((_QWORD *)&v50 + 1) )
          v36 = *((_QWORD *)&v50 + 1) - 1LL;
        v37 = (void *)v50;
        if ( v51 < (unsigned __int64)&v35[v36 + 1] )
        {
          v37 = qvector_reserve((__int64)&v50, (void *)v50, (unsigned __int64)&v35[v36 + 1], 1u);
          *(_QWORD *)&v50 = v37;
        }
        *((_QWORD *)&v50 + 1) = &v35[v36 + 1];
        v35[v36 + (_QWORD)v37] = 0;
        memcpy((void *)(v50 + v36), __src[0], (size_t)v35);
      }
      if ( __src[0] )
      {
        __src[1] = nullptr;
        qfree(__src[0]);
      }
      ++v34;
    }
    ++v33;
    v32 += 56;
  }
  while ( v40 != v33 );
  v38 = (char *)v50;
  if ( v34 )
  {
    if ( !*((_QWORD *)&v50 + 1) )
      v38 = (char *)_s1;
    sub_100010070((int)"%zu missing subcaches:\n%s", v34, v38);
    v38 = (char *)v50;
  }
  if ( v38 )
  {
    *((_QWORD *)&v50 + 1) = 0;
    qfree(v38);
  }
LABEL_62:
  if ( (_QWORD)v52 )
  {
    *((_QWORD *)&v52 + 1) = 0;
    qfree((void *)v52);
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
