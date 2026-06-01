__int64 __fastcall sub_3BFA00(
        __int64 *a1,
        const void *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbx
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 result; // rax
  const char *v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  void *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  double v20; // xmm4_8
  double v21; // xmm5_8
  const char *v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // r13
  char v25; // dl
  __int64 v26; // r13
  __int64 v27; // r14
  const char *v28; // rdx
  void *v29; // rdi
  const char *v30; // rsi
  double v31; // xmm4_8
  double v32; // xmm5_8
  size_t v33; // r13
  __m128 v34; // xmm0
  const char *v35; // rcx
  unsigned int v36; // ebx
  double v37; // xmm4_8
  double v38; // xmm5_8
  const char *v39; // rdx
  int tinfo_udt_member; // r15d
  size_t v41; // r13
  const char *v42; // rcx
  void *v43; // r15
  void *v44; // rdi
  char *v45; // rax
  void *v46; // rax
  __int64 v47; // rax
  unsigned int src; // [rsp+8h] [rbp-100h]
  unsigned int srca; // [rsp+8h] [rbp-100h]
  unsigned int srcb; // [rsp+8h] [rbp-100h]
  const char *v51; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v52; // [rsp+18h] [rbp-F0h]
  void *v53; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v54[40]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v55; // [rsp+60h] [rbp-A8h]
  _QWORD v56[7]; // [rsp+70h] [rbp-98h] BYREF
  int v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  char v59; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+C8h] [rbp-40h]

  v10 = a1[26];
  v60 = __readfsqword(0x28u);
  v11 = v10 + 8;
  if ( *(_BYTE *)(v10 + 31) == 12 )
  {
    if ( !*a1 )
      return 0;
    v23 = *(_QWORD *)(*a1 + 1000);
    result = 0;
    if ( (*(_BYTE *)(v23 + 112) & 1) == 0 )
      return result;
    v53 = nullptr;
    *(_OWORD *)v54 = 0;
    if ( (void **)(v23 + 64) != &v53 )
    {
      v24 = *(_QWORD *)(v23 + 72);
      if ( v24 >= 2 )
      {
        a2 = *(const void **)(v23 + 64);
        v53 = (void *)qvector_reserve(&v53, 0, *(_QWORD *)(v23 + 72), 1);
        *(_QWORD *)v54 = v24;
        memmove(v53, a2, v24 - 1);
        *((char *)v53 + v24 - 1) = 0;
      }
    }
    v25 = sub_3BF820((__int64 *)&v53, 0.0, a4, a5, a6, a7, a8, a9, a10);
    result = 1;
    if ( !v25 )
    {
LABEL_26:
      v29 = v53;
      if ( !v53 )
        return result;
      goto LABEL_27;
    }
    v26 = *(_QWORD *)v54;
    if ( (void **)(v23 + 64) != &v53 )
    {
      if ( !*(_QWORD *)v54 )
      {
        *(_QWORD *)(v23 + 72) = 0;
        goto LABEL_61;
      }
      v27 = *(_QWORD *)v54 - 1LL;
      if ( *(_QWORD *)v54 == 1 )
      {
        *(_QWORD *)(v23 + 72) = 0;
LABEL_24:
        v28 = (const char *)v53;
LABEL_25:
        a2 = &byte_5;
        result = (unsigned int)set_tinfo_property4(v11, 5, v28, 0, 0, 0) == 0;
        goto LABEL_26;
      }
      v43 = v53;
      v44 = *(void **)(v23 + 64);
      if ( *(_QWORD *)(v23 + 80) < *(_QWORD *)v54 )
      {
        v47 = qvector_reserve(v23 + 64, *(_QWORD *)(v23 + 64), *(_QWORD *)v54, 1);
        *(_QWORD *)(v23 + 64) = v47;
        v44 = (void *)v47;
      }
      *(_QWORD *)(v23 + 72) = v26;
      memmove(v44, v43, v26 - 1);
      *(_BYTE *)(*(_QWORD *)(v23 + 64) + v27) = 0;
      v26 = *(_QWORD *)v54;
    }
    if ( v26 )
      goto LABEL_24;
LABEL_61:
    v28 = &s1;
    goto LABEL_25;
  }
  v12 = *(_QWORD *)(v10 + 16);
  if ( v12 != -2 )
  {
    if ( v12 > 0xFFFFFFFFFFFFFFFDLL )
      return 0;
    v14 = (_BYTE *)(&dword_0 + 2);
    if ( (get_tinfo_property(*(_QWORD *)(v10 + 8), 2) & 0x2F) == 0xD )
    {
      if ( *(_QWORD *)(v10 + 32) == -1 )
      {
        result = 0;
        if ( *(_QWORD *)(v10 + 16) > 0xFFFFFFFFFFFFFFFDLL )
          return result;
        v17 = *(void **)(v10 + 232);
        v51 = (_BYTE *)(&dword_30 + 2);
        memset(v54, 0, 32);
        v53 = v17;
        *(_QWORD *)&v54[8] = qvector_reserve(&v54[8], 0, 1, 1);
        *(_QWORD *)&v54[16] = 1;
        **(_BYTE **)&v54[8] = 0;
        *(_QWORD *)&v54[32] = 0;
        v56[0] = 0;
        v55 = 0;
        copy_tinfo_t(v56, &v51, v18);
        v56[1] = 0;
        v56[6] = 1;
        v57 = -1;
        v58 = 0;
        v59 = 0;
        *(_QWORD *)v54 = 8 * get_tinfo_size(0, v51, 0);
        clear_tinfo_t(&v51);
        v19 = set_tinfo_property4(v10 + 8, 9, &v53, 1, -1, 320);
        v22 = (const char *)v19;
        if ( v19 )
        {
          src = (unsigned __int8)sub_3AC490(
                                   a1,
                                   v19,
                                   (__int64)"Failed to create field",
                                   (__m128)0LL,
                                   a4,
                                   a5,
                                   a6,
                                   v20,
                                   v21,
                                   a9,
                                   a10);
          clear_tinfo_t(v56);
          result = src;
          if ( *(_QWORD *)&v54[32] )
          {
            *(_QWORD *)&v55 = 0;
            qfree(*(_QWORD *)&v54[32], v22);
            result = src;
          }
          if ( *(_QWORD *)&v54[8] )
          {
            srca = result;
            *(_QWORD *)&v54[16] = 0;
            qfree(*(_QWORD *)&v54[8], v22);
            return srca;
          }
          return result;
        }
        v14 = *(const char **)(v10 + 8);
        tinfo_udt_member = find_tinfo_udt_member(&v53, v14, 0);
        clear_tinfo_t(v56);
        if ( *(_QWORD *)&v54[32] )
        {
          *(_QWORD *)&v55 = 0;
          qfree(*(_QWORD *)&v54[32], v14);
        }
        if ( *(_QWORD *)&v54[8] )
        {
          *(_QWORD *)&v54[16] = 0;
          qfree(*(_QWORD *)&v54[8], v14);
        }
      }
      else
      {
        tinfo_udt_member = *(_QWORD *)(v10 + 32);
      }
      v53 = nullptr;
      v34 = 0;
      *(_OWORD *)v54 = 0;
      v41 = *(_QWORD *)(v10 + 96);
      if ( v41 )
      {
        v46 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 96));
        *(_QWORD *)&v54[8] = v41;
        v53 = v46;
        v14 = *(const char **)(v10 + 88);
        memcpy(v46, v14, v41);
        *(_QWORD *)v54 = v41;
      }
      if ( (unsigned __int8)sub_3BF820((__int64 *)&v53, 0.0, a4, a5, a6, v15, v16, a9, a10) )
      {
        v42 = &s1;
        if ( *(_QWORD *)v54 )
          v42 = (const char *)v53;
        v36 = set_tinfo_property4(v10 + 8, 13, tinfo_udt_member, v42, 0, 0);
        if ( v53 )
        {
          *(_QWORD *)v54 = 0;
          *(double *)v34.m128_u64 = qfree(v53, &byte_9[4]);
        }
        return (unsigned __int8)sub_3AC490(
                                  a1,
                                  v36,
                                  (__int64)"Failed to set comment",
                                  v34,
                                  a4,
                                  a5,
                                  a6,
                                  v37,
                                  v38,
                                  a9,
                                  a10);
      }
      if ( v53 )
      {
        *(_QWORD *)v54 = 0;
        qfree(v53, v14);
      }
    }
    else
    {
      if ( (get_tinfo_property(*(_QWORD *)(v10 + 8), 2) & 0x3F) != 0x2D )
        return 0;
      v53 = nullptr;
      v30 = (_BYTE *)(&dword_124 + 2);
      memset(v54, 0, sizeof(v54));
      get_tinfo_property4(*(_QWORD *)(v10 + 8), 294, &v53, *(_QWORD *)(v10 + 16), -1, 0);
      v33 = *(_QWORD *)&v54[24];
      v34 = 0;
      v51 = nullptr;
      v52 = 0;
      if ( *(_QWORD *)&v54[24] )
      {
        v45 = (char *)qalloc_or_throw(*(_QWORD *)&v54[24]);
        v30 = *(const char **)&v54[16];
        v51 = v45;
        *((_QWORD *)&v52 + 1) = v33;
        memcpy(v45, *(const void **)&v54[16], v33);
        *(_QWORD *)&v52 = v33;
      }
      if ( (unsigned __int8)sub_3BF820((__int64 *)&v51, 0.0, a4, a5, a6, v31, v32, a9, a10) )
      {
        v35 = &s1;
        if ( (_QWORD)v52 )
          v35 = v51;
        v36 = set_tinfo_property4(v10 + 8, 23, *(_QWORD *)(v10 + 16), v35, 0, 0);
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          *(double *)v34.m128_u64 = qfree(v51, (_BYTE *)&dword_14 + 3);
        }
        if ( *(_QWORD *)&v54[16] )
        {
          *(_QWORD *)&v54[24] = 0;
          *(double *)v34.m128_u64 = qfree(*(_QWORD *)&v54[16], (_BYTE *)&dword_14 + 3, *(double *)v34.m128_u64);
        }
        if ( v53 )
        {
          *(_QWORD *)v54 = 0;
          *(double *)v34.m128_u64 = qfree(v53, (_BYTE *)&dword_14 + 3, *(double *)v34.m128_u64);
        }
        return (unsigned __int8)sub_3AC490(
                                  a1,
                                  v36,
                                  (__int64)"Failed to set comment",
                                  v34,
                                  a4,
                                  a5,
                                  a6,
                                  v37,
                                  v38,
                                  a9,
                                  a10);
      }
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        *(double *)v34.m128_u64 = qfree(v51, v30);
      }
      if ( *(_QWORD *)&v54[16] )
      {
        *(_QWORD *)&v54[24] = 0;
        *(double *)v34.m128_u64 = qfree(*(_QWORD *)&v54[16], v30, *(double *)v34.m128_u64);
      }
      if ( v53 )
      {
        *(_QWORD *)v54 = 0;
        qfree(v53, v30, *(double *)v34.m128_u64);
      }
    }
    return 1;
  }
  v53 = nullptr;
  *(_OWORD *)v54 = 0;
  a2 = *(const void **)(v10 + 8);
  if ( (unsigned __int64)a2 > 0xFF )
    get_tinfo_pdata(&v53, a2, 5);
  if ( (unsigned __int8)sub_3BF820((__int64 *)&v53, 0.0, a4, a5, a6, a7, a8, a9, a10) )
  {
    v39 = &s1;
    if ( *(_QWORD *)v54 )
      v39 = (const char *)v53;
    a2 = &byte_5;
    result = (unsigned int)set_tinfo_property4(v10 + 8, 5, v39, 0, 0, 0) == 0;
  }
  else
  {
    result = 1;
  }
  v29 = v53;
  if ( v53 )
  {
LABEL_27:
    srcb = result;
    *(_QWORD *)v54 = 0;
    qfree(v29, (const char *)a2);
    return srcb;
  }
  return result;
}
