__int64 __fastcall sub_13CBB60(
        __int64 a1,
        char *a2,
        size_t a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 *a8)
{
  _BYTE *v11; // rax
  _BYTE *v12; // r14
  _BYTE *v13; // r15
  unsigned __int64 v14; // rax
  size_t v15; // r15
  __int64 i; // rdx
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rdx
  size_t v19; // rax
  __int64 v20; // rax
  char v21; // dl
  __int64 result; // rax
  size_t v23; // rax
  size_t v24; // rax
  __int64 v25; // rax
  size_t v26; // r14
  unsigned int v27; // eax
  __int64 v28; // r9
  __int64 *v29; // r8
  __int64 *v30; // rax
  size_t *v31; // rcx
  char *v32; // r15
  char *v33; // r14
  size_t v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdi
  void *v37; // rax
  size_t v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int8 v40; // r13
  _BYTE *v41; // rax
  _BYTE *v42; // r8
  unsigned __int64 v43; // rax
  unsigned int v44; // eax
  size_t v45; // rax
  size_t v46; // rax
  __int64 v47; // rax
  void *v48; // r8
  size_t v49; // rbx
  __int64 v50; // rax
  __int64 v52; // [rsp+0h] [rbp-8C0h]
  __int64 v53; // [rsp+0h] [rbp-8C0h]
  void *v55; // [rsp+10h] [rbp-8B0h]
  void *v56; // [rsp+10h] [rbp-8B0h]
  unsigned int v57; // [rsp+18h] [rbp-8A8h]
  _BYTE *v58; // [rsp+18h] [rbp-8A8h]
  size_t *v59; // [rsp+18h] [rbp-8A8h]
  size_t *v60; // [rsp+18h] [rbp-8A8h]
  _QWORD *v61; // [rsp+20h] [rbp-8A0h]
  __int64 *v62; // [rsp+30h] [rbp-890h] BYREF
  _BYTE *v63[2]; // [rsp+38h] [rbp-888h] BYREF
  void *ptr; // [rsp+48h] [rbp-878h] BYREF
  __m128i si128; // [rsp+50h] [rbp-870h]
  _BYTE v66[1032]; // [rsp+60h] [rbp-860h] BYREF
  void *src; // [rsp+468h] [rbp-458h] BYREF
  __m128i v68; // [rsp+470h] [rbp-450h]
  _BYTE v69[1088]; // [rsp+480h] [rbp-440h] BYREF

  if ( !a3 )
    return 0;
  v11 = memchr(a2, 47, a3);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = v11;
  v14 = a4;
  v15 = v13 - a2;
  if ( v15 == -1 )
    return 0;
  for ( i = *(_QWORD *)(a4 + 8); i; i = *(_QWORD *)(v17 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v17 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v17 )
      break;
    v14 = v17;
  }
  v18 = *(_BYTE **)v14;
  v63[0] = (_BYTE *)(v14 + 32);
  v63[1] = v18;
  v19 = j__strlen(".framework");
  v20 = sub_2246AB0(v63, ".framework", v19, 0);
  if ( v20 == -1 )
    return 0;
  v21 = v63[0][v20 + 10];
  if ( v21 != 92 && v21 != 47 )
    return 0;
  ptr = v66;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  sub_A1FE50(&ptr, v63[0], &v63[0][v20 + 11]);
  v23 = j__strlen("Frameworks/");
  sub_A1FE50(&ptr, "Frameworks/", &aFrameworks[v23]);
  sub_A1FE50(&ptr, a2, v12);
  v24 = j__strlen(".framework/");
  sub_A1FE50(&ptr, ".framework/", &aFramework_2[v24]);
  v25 = v15;
  if ( a3 <= v15 )
    v25 = a3;
  src = a2;
  v26 = v25;
  v68.m128i_i64[0] = v25;
  v27 = sub_2244B30(a2, v25);
  v28 = (unsigned int)sub_2244CB0(a1 + 480, a2, v26, v27);
  v29 = (__int64 *)(*(_QWORD *)(a1 + 480) + 8 * v28);
  if ( *v29 )
  {
    if ( *v29 != -8 )
    {
      sub_13C52C0(&v62, v29, 0);
      v30 = v62;
      goto LABEL_18;
    }
    --*(_DWORD *)(a1 + 496);
  }
  v61 = v29;
  v57 = v28;
  v43 = sub_13C4900(24, a2, v26, (__int64 *)(a1 + 504), (__int64)v29, v28);
  *(_QWORD *)v43 = v26;
  *(_QWORD *)(v43 + 8) = 0;
  *(_BYTE *)(v43 + 16) = 0;
  *v61 = v43;
  ++*(_DWORD *)(a1 + 492);
  v44 = sub_22450D0(a1 + 480, v57);
  sub_13C52C0(&v62, (__int64 *)(*(_QWORD *)(a1 + 480) + 8LL * v44), 0);
  v30 = v62;
LABEL_18:
  v31 = (size_t *)*v30;
  if ( !*(_QWORD *)(*v30 + 8) )
  {
    _InterlockedAdd64(&qword_2C86CB8, 1u);
    if ( !byte_2C86CC0 )
    {
      v60 = v31;
      sub_2241470(off_2C86CA0);
      v31 = v60;
    }
    v59 = v31;
    result = sub_13C4290(*(_QWORD *)(a1 + 40), (char *)ptr, si128.m128i_u64[0]);
    if ( !result )
      goto LABEL_34;
    v59[1] = result;
LABEL_20:
    v32 = &a2[v15 + 1];
    v33 = &a2[a3];
    if ( a6 )
    {
      a6[1] = 0;
      sub_A1FE50(a6, v32, &a2[a3]);
    }
    src = v69;
    v68 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
    if ( si128.m128i_i64[0] )
      sub_9C3DB0(&src, (const void **)&ptr);
    v34 = j__strlen("Headers/");
    sub_A1FE50(&src, "Headers/", &aPrivateheaders_0[v34 + 7]);
    if ( a5 )
    {
      v35 = v68.m128i_i64[0];
      a5[1] = 0;
      v36 = 0;
      v37 = src;
      v38 = v35 - 1;
      if ( v38 > a5[2] )
      {
        v55 = src;
        sub_2236E10(a5, a5 + 3, v38, 1);
        v36 = a5[1];
        v37 = v55;
      }
      if ( v38 )
      {
        memcpy((void *)(*a5 + v36), v37, v38);
        v36 = a5[1];
      }
      a5[1] = v36 + v38;
      sub_A1FE50(&src, v32, v33);
      v39 = sub_12ED8B0(*(_QWORD *)(a1 + 40), src, v68.m128i_u64[0], 1u, 1u);
      if ( v39 )
      {
LABEL_30:
        v40 = *(_BYTE *)sub_13C2430(a1, a4);
        v41 = (_BYTE *)sub_13C2790(a1, v39);
        *v41 = *v41 & 0xC7 | (8 * ((v40 >> 3) & 7));
        --si128.m128i_i64[0];
        if ( (unsigned __int8)sub_13C9AB0((_QWORD *)a1, v39, (char *)ptr, si128.m128i_u64[0], a7, a8, 0) )
        {
          result = v39;
          goto LABEL_32;
        }
LABEL_43:
        result = 0;
LABEL_32:
        if ( src != v69 )
        {
          v52 = result;
          free(src);
          result = v52;
        }
LABEL_34:
        v42 = ptr;
        goto LABEL_35;
      }
      sub_9C3DB0(&src, (const void **)&ptr);
      v46 = j__strlen("PrivateHeaders/");
      sub_A1FE50(&src, "PrivateHeaders/", &aPrivateheaders_0[v46]);
      v47 = v68.m128i_i64[0];
      a5[1] = 0;
      v48 = src;
      v49 = v47 - 1;
      v50 = 0;
      if ( v49 > a5[2] )
      {
        v56 = src;
        sub_2236E10(a5, a5 + 3, v49, 1);
        v50 = a5[1];
        v48 = v56;
      }
      if ( v49 )
      {
        memcpy((void *)(*a5 + v50), v48, v49);
        v50 = a5[1];
      }
      a5[1] = v50 + v49;
    }
    else
    {
      sub_A1FE50(&src, v32, v33);
      v39 = sub_12ED8B0(*(_QWORD *)(a1 + 40), src, v68.m128i_u64[0], 1u, 1u);
      if ( v39 )
        goto LABEL_30;
      sub_9C3DB0(&src, (const void **)&ptr);
      v45 = j__strlen("PrivateHeaders/");
      sub_A1FE50(&src, "PrivateHeaders/", &aPrivateheaders_0[v45]);
    }
    sub_A1FE50(&src, v32, v33);
    v39 = sub_12ED8B0(*(_QWORD *)(a1 + 40), src, v68.m128i_u64[0], 1u, 1u);
    if ( !v39 )
      goto LABEL_43;
    goto LABEL_30;
  }
  if ( si128.m128i_i64[0] != *v31 )
    goto LABEL_20;
  v58 = ptr;
  if ( !memcmp(v31 + 3, ptr, *v31) )
    goto LABEL_20;
  result = 0;
  v42 = v58;
LABEL_35:
  if ( v42 != v66 )
  {
    v53 = result;
    free(v42);
    return v53;
  }
  return result;
}
