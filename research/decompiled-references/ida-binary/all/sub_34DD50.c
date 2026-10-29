__int64 __fastcall sub_34DD50(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rbx
  const char *v15; // r14
  const char *v19; // rsi
  char *v21; // rax
  size_t v22; // rbx
  char *v23; // rax
  unsigned __int64 v24; // r15
  size_t v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  double v29; // xmm0_8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r13
  __int128 v33; // kr00_16
  __int64 v34; // rdi
  double v35; // xmm0_8
  __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r14
  size_t v39; // rbx
  const char *v40; // rbp
  void *v41; // rdi
  void *v42; // rax
  void *v43; // rdi
  size_t v44; // rdx
  char v45; // [rsp+0h] [rbp-78h]
  size_t v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  size_t v49; // [rsp+18h] [rbp-60h]
  __int64 v50; // [rsp+20h] [rbp-58h] BYREF
  __int128 v51; // [rsp+28h] [rbp-50h]
  unsigned __int64 v52; // [rsp+38h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v14 = *(_QWORD *)(a3 + 8);
  if ( !v14 )
  {
    v15 = &s1;
LABEL_3:
    sub_169630(
      (int)"Incorrect ABI option format '%s', should be <name>:<description>",
      (__int64)v15,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v45);
    return 0;
  }
  v15 = *(const char **)a3;
  v19 = (const char *)&word_3A;
  v21 = strchr(*(const char **)a3, 58);
  if ( !v21 )
    goto LABEL_3;
  a4 = v21 - v15;
  v46 = v21 - v15;
  if ( v21 - v15 == -1 )
    goto LABEL_3;
  v22 = v14 - 1;
  if ( v22 < v46 )
    goto LABEL_35;
  v19 = (_BYTE *)(&qword_20 + 3);
  v23 = strrchr(v21, 35);
  if ( !v23 || (v24 = v23 - v15, v23 - v15 == -1) )
  {
    v22 = v46;
LABEL_35:
    v26 = 0;
    v27 = 0;
    v24 = -1;
    v50 = 0;
    v51 = 0;
    if ( v22 )
    {
      v42 = (void *)qvector_reserve(&v50, 0, v22 + 1, 1);
      v19 = v15;
      *(_QWORD *)&v51 = v22 + 1;
      v50 = (__int64)v42;
      v24 = -1;
      memmove(v42, v15, v22);
      *(_BYTE *)(v50 + v22) = 0;
      v27 = v50;
      v26 = *((_QWORD *)&v51 + 1);
      v22 = v51;
    }
    goto LABEL_12;
  }
  v25 = v24 + 1;
  v50 = 0;
  v51 = 0;
  if ( v24 + 1 > v22 )
    v25 = v22;
  v26 = 0;
  v27 = 0;
  v22 -= v25;
  if ( v22 )
  {
    v43 = nullptr;
    v44 = v22 + 1;
    if ( v22 != -1 )
    {
      v49 = v25;
      v50 = qvector_reserve(&v50, 0, v44, 1);
      v25 = v49;
      v43 = (void *)v50;
      v44 = v22 + 1;
    }
    *(_QWORD *)&v51 = v44;
    v19 = &v15[v25];
    memmove(v43, &v15[v25], v22);
    *(_BYTE *)(v50 + v22) = 0;
    v27 = v50;
    v26 = *((_QWORD *)&v51 + 1);
    v22 = v51;
  }
LABEL_12:
  v28 = *a1;
  v50 = 0;
  v51 = 0;
  if ( v28 )
  {
    a1[1] = 0;
    v48 = v27;
    v47 = v26;
    v29 = qfree(v28, v19);
    a1[1] = v22;
    v30 = v50;
    *a1 = v48;
    a1[2] = v47;
    if ( v30 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v30, v19, v29);
    }
  }
  else
  {
    *a1 = v27;
    a1[1] = v22;
    a1[2] = v26;
  }
  v31 = *(_QWORD *)(a3 + 8);
  if ( !v31 )
    goto LABEL_16;
  v37 = v31 - 1;
  v38 = v46 + 1;
  if ( v31 - 1 < v24 )
  {
    if ( v38 > v37 )
      v38 = v31 - 1;
    v39 = v37 - v38;
  }
  else
  {
    if ( v38 > v24 )
      v38 = v24;
    v39 = v24 - v38;
  }
  v40 = *(const char **)a3;
  v50 = 0;
  v51 = 0;
  if ( v39 )
  {
    v41 = nullptr;
    if ( v39 != -1 )
    {
      v50 = qvector_reserve(&v50, 0, v39 + 1, 1);
      v41 = (void *)v50;
    }
    v19 = &v40[v38];
    *(_QWORD *)&v51 = v39 + 1;
    memmove(v41, &v40[v38], v39);
    *(_BYTE *)(v50 + v39) = 0;
    v32 = v50;
    v33 = v51;
  }
  else
  {
LABEL_16:
    v32 = 0;
    v33 = 0u;
  }
  v34 = *a2;
  v50 = 0;
  v51 = 0;
  if ( v34 )
  {
    a2[1] = 0;
    v35 = qfree(v34, v19);
    v36 = v50;
    *a2 = v32;
    *(_OWORD *)(a2 + 1) = v33;
    if ( v36 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v36, v19, v35);
    }
  }
  else
  {
    *a2 = v32;
    *(_OWORD *)(a2 + 1) = v33;
  }
  return 1;
}
