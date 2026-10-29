__m128i *__fastcall sub_1197A10(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  const char **v11; // rax
  size_t v12; // r14
  char *v13; // r13
  __m128i si128; // xmm2
  __int64 v16; // rax
  __int64 v17; // rdx
  size_t v18; // rax
  size_t v19; // rax
  unsigned __int8 v20; // r8
  int v21; // edx
  unsigned int *v22; // rsi
  unsigned __int64 v23; // rax
  unsigned int *v24; // rbx
  __int64 v25; // rax
  unsigned int *v26; // r13
  signed __int64 v27; // rax
  unsigned int *v28; // r14
  __int64 v29; // rax
  __int32 v30; // eax
  __int64 v31; // rcx
  unsigned __int8 v32; // al
  __int64 v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  int v36; // eax
  size_t v37; // rax
  size_t v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  size_t v42; // rax
  size_t v43; // rax
  char *s; // [rsp+10h] [rbp-128h]
  int sa; // [rsp+10h] [rbp-128h]
  unsigned __int8 sb; // [rsp+10h] [rbp-128h]
  char *sc; // [rsp+10h] [rbp-128h]
  size_t n; // [rsp+18h] [rbp-120h]
  unsigned __int8 na; // [rsp+18h] [rbp-120h]
  unsigned __int8 nb; // [rsp+18h] [rbp-120h]
  size_t nc; // [rsp+18h] [rbp-120h]
  unsigned __int8 nd; // [rsp+18h] [rbp-120h]
  size_t v54; // [rsp+20h] [rbp-118h]
  unsigned __int8 v55; // [rsp+20h] [rbp-118h]
  size_t v56; // [rsp+20h] [rbp-118h]
  unsigned __int8 v57; // [rsp+20h] [rbp-118h]
  unsigned __int8 v58; // [rsp+20h] [rbp-118h]
  size_t v59; // [rsp+20h] [rbp-118h]
  size_t v60; // [rsp+28h] [rbp-110h]
  signed __int64 v61; // [rsp+28h] [rbp-110h]
  __m128i v62; // [rsp+30h] [rbp-108h] BYREF
  __int32 v63; // [rsp+40h] [rbp-F8h]
  __m128i v64; // [rsp+50h] [rbp-E8h] BYREF
  __int32 v65; // [rsp+60h] [rbp-D8h]
  void *v66[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+80h] [rbp-B8h] BYREF
  void *v68[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int32 v69; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int8 *v70[4]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v71; // [rsp+D0h] [rbp-68h]

  v9 = sub_113FA70(a3, 0x3E6u, 0x32Eu, 1525);
  v10 = v9;
  if ( !v9 || !(unsigned __int8)sub_21B9810(v9, 1525) )
  {
    v16 = sub_10DCD30(a3, 0x5E0u);
    if ( v16 )
    {
      s = **(char ***)(v16 + 48);
      v18 = j__strlen("1");
      if ( !s )
      {
        if ( !v18 )
        {
LABEL_19:
          v20 = 0;
          v21 = 1;
          goto LABEL_20;
        }
        if ( !j__strlen("2") )
          goto LABEL_16;
        if ( j__strlen("3") )
        {
          n = 0;
          goto LABEL_58;
        }
        goto LABEL_65;
      }
      v54 = v18;
      v19 = j__strlen(s);
      n = v19;
      if ( v19 == v54 )
      {
        if ( !v19 || !memcmp(s, "1", v19) )
          goto LABEL_19;
        if ( n != j__strlen("2") )
        {
LABEL_57:
          if ( n != j__strlen("3") )
          {
LABEL_58:
            sub_FC70B0((__int64)v70, **(_QWORD **)(*(_QWORD *)(a2 + 24) + 8LL), 0, 333);
            sub_AEC220(v70, s, n);
            sub_AEA040((__int64)v70);
            goto LABEL_19;
          }
LABEL_64:
          if ( memcmp(s, "3", n) )
            goto LABEL_58;
LABEL_65:
          v20 = 1;
          v21 = 3;
          goto LABEL_20;
        }
      }
      else
      {
        if ( v19 != j__strlen("2") )
        {
          if ( n != j__strlen("3") )
            goto LABEL_58;
          if ( !n )
            goto LABEL_65;
          goto LABEL_64;
        }
        if ( !n )
        {
LABEL_16:
          v20 = 1;
LABEL_17:
          v21 = 2;
          goto LABEL_20;
        }
      }
      if ( !memcmp(s, "2", n) )
        goto LABEL_16;
      goto LABEL_57;
    }
    v31 = 1;
    if ( a6 != 2 )
    {
      v31 = 0;
      if ( !a6 )
        v31 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a2 + 24) + 224LL))(
                *(_QWORD *)(a2 + 24),
                1504,
                v17,
                0);
    }
    v32 = sub_21B7850(a3, 1523, 1248, v31);
    if ( !v32 )
      goto LABEL_19;
    sb = v32;
    v33 = sub_10DCD30(a3, 0x5F2u);
    v21 = 3;
    v20 = sb;
    if ( v33 )
    {
      v55 = sb;
      sc = **(char ***)(v33 + 48);
      v34 = j__strlen("1");
      v20 = v55;
      if ( sc )
      {
        v60 = v34;
        v35 = j__strlen(sc);
        v20 = v55;
        if ( v35 == v60 )
        {
          if ( !v35 )
            goto LABEL_17;
          nb = v55;
          v56 = v35;
          v36 = memcmp(sc, "1", v35);
          v21 = 2;
          v20 = nb;
          if ( v36 )
          {
            v37 = j__strlen("2");
            v38 = v56;
            v20 = nb;
            if ( v56 == v37 )
              goto LABEL_50;
LABEL_51:
            v58 = v20;
            v61 = v38;
            sub_FC70B0((__int64)v70, **(_QWORD **)(*(_QWORD *)(a2 + 24) + 8LL), 0, 333);
            sub_AEC220(v70, sc, v61);
            sub_AEA040((__int64)v70);
            v21 = 3;
            v20 = v58;
          }
        }
        else
        {
          nd = v55;
          v59 = v35;
          v43 = j__strlen("2");
          v38 = v59;
          v20 = nd;
          if ( v59 != v43 )
            goto LABEL_51;
          v21 = 3;
          if ( v59 )
          {
LABEL_50:
            v57 = v20;
            nc = v38;
            v39 = memcmp(sc, "2", v38);
            v21 = 3;
            v38 = nc;
            v20 = v57;
            if ( !v39 )
              goto LABEL_20;
            goto LABEL_51;
          }
        }
      }
      else
      {
        if ( !v34 )
          goto LABEL_17;
        v42 = j__strlen("2");
        v38 = 0;
        v20 = v55;
        if ( v42 )
          goto LABEL_51;
        v21 = 3;
      }
    }
LABEL_20:
    v65 = 0;
    v64 = 0;
    if ( v10 )
    {
      sa = v21;
      na = v20;
      if ( (unsigned __int8)sub_21B9810(v10, 998) )
      {
        v22 = *(unsigned int **)(a2 + 24);
        v23 = v22[15];
        if ( (unsigned int)v23 <= 0x1F && (v40 = 4160750114LL, _bittest64(&v40, v23)) )
        {
          (*(void (__fastcall **)(__m128i *, unsigned int *, _QWORD))(*(_QWORD *)v22 + 536LL))(&v62, v22, na);
          v64 = _mm_loadu_si128(&v62);
          v65 = v63;
        }
        else
        {
          v64 = 0u;
          v65 = 0;
        }
      }
      else if ( sa == 1 )
      {
        v64 = (__m128i)4uLL;
        v65 = 0;
      }
      else
      {
        v65 = 0;
        v64.m128i_i64[0] = 0x200000005LL;
        v64.m128i_i64[1] = 0x80000000LL;
      }
    }
    else if ( a6 )
    {
      if ( a6 == 1 )
        v64.m128i_i32[0] = 1;
    }
    else
    {
      (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD))(**(_QWORD **)(a2 + 24) + 536LL))(
        &v62,
        *(_QWORD *)(a2 + 24),
        v20);
      v64 = _mm_loadu_si128(&v62);
      v65 = v63;
    }
    v24 = *(unsigned int **)a4;
    v25 = 40LL * *(unsigned int *)(a4 + 8);
    v26 = (unsigned int *)(*(_QWORD *)a4 + v25);
    v27 = 0xCCCCCCCCCCCCCCCDLL * (v25 >> 3);
    if ( v27 >> 2 )
    {
      v28 = &v24[40 * (v27 >> 2)];
      while ( !(unsigned __int8)sub_12CCC40(v24[6]) )
      {
        if ( (unsigned __int8)sub_12CCC40(v24[16]) )
        {
          v24 += 10;
          goto LABEL_31;
        }
        if ( (unsigned __int8)sub_12CCC40(v24[26]) )
        {
          v24 += 20;
          goto LABEL_31;
        }
        if ( (unsigned __int8)sub_12CCC40(v24[36]) )
        {
          v24 += 30;
          goto LABEL_31;
        }
        v24 += 40;
        if ( v28 == v24 )
        {
          v27 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v26 - (char *)v24) >> 3);
          goto LABEL_67;
        }
      }
      goto LABEL_31;
    }
LABEL_67:
    if ( v27 != 2 )
    {
      if ( v27 != 3 )
      {
        if ( v27 != 1 )
          goto LABEL_36;
        goto LABEL_70;
      }
      if ( (unsigned __int8)sub_12CCC40(v24[6]) )
        goto LABEL_31;
      v24 += 10;
    }
    if ( (unsigned __int8)sub_12CCC40(v24[6]) )
      goto LABEL_31;
    v24 += 10;
LABEL_70:
    if ( (unsigned __int8)sub_12CCC40(v24[6]) )
    {
LABEL_31:
      if ( v26 != v24 )
      {
        sub_FF7800((__int64)v66, &v64);
        sub_E7ED70((__m128i *)v68, "-fobjc-runtime=", v66);
        v70[0] = (unsigned __int8 *)v68;
        v71 = 260;
        v29 = sub_10DA6C0(a3, (__int64)v70);
        sub_10DC5D0(a5, v29);
        if ( v68[0] != &v69 )
          operator delete(v68[0]);
        if ( v66[0] != &v67 )
          operator delete(v66[0]);
      }
    }
LABEL_36:
    v30 = v65;
    *a1 = _mm_load_si128(&v64);
    a1[1].m128i_i32[0] = v30;
    return a1;
  }
  v11 = *(const char ***)(v10 + 48);
  v12 = 0;
  v69 = 0;
  *(_OWORD *)v68 = 0;
  v13 = (char *)*v11;
  if ( *v11 )
    v12 = j__strlen(*v11);
  if ( (unsigned __int8)sub_FF78A0((__int64)v68, (__int64)v13, v12) )
  {
    sub_FC70B0((__int64)v70, **(_QWORD **)(*(_QWORD *)(a2 + 24) + 8LL), 0, 485);
    sub_AEC220(v70, v13, v12);
    sub_AEA040((__int64)v70);
  }
  if ( LODWORD(v68[0]) == 5 )
  {
    v70[1] = nullptr;
    v70[0] = (unsigned __int8 *)0x8000000000000002LL;
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)v68 + 1, (unsigned int *)v70) )
    {
      v41 = *(_QWORD *)(a2 + 24);
      if ( (*(_DWORD *)(v41 + 68) & 0xFFFFFFFD) != 1 )
      {
        sub_FC70B0((__int64)v70, **(_QWORD **)(v41 + 8), 0, 359);
        sub_AE9DF0(v70, HIDWORD(v68[0]), 3u);
        sub_AEA040((__int64)v70);
      }
    }
  }
  sub_21B5A40(v10, a3, a5);
  si128 = _mm_load_si128((const __m128i *)v68);
  a1[1].m128i_i32[0] = v69;
  *a1 = si128;
  return a1;
}
