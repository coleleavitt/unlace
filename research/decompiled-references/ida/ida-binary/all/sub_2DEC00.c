__int64 __fastcall sub_2DEC00(
        _DWORD *a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        const char *a6,
        char a7)
{
  unsigned __int64 v8; // rsi
  bool v10; // al
  __int64 v11; // r8
  __int64 reg_access; // rbx
  bool v14; // zf
  char **p_s2; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  void *v19; // rcx
  __m128 v20; // xmm0
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 ph; // r13
  __int64 v25; // r14
  char *v26; // r15
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  char **v30; // r13
  size_t v31; // rax
  size_t v32; // r14
  size_t v33; // rax
  size_t v34; // r13
  void *v35; // rdi
  size_t v36; // r15
  void *v37; // rdi
  size_t v38; // r14
  __int64 v39; // rax
  const char *s1; // [rsp+18h] [rbp-80h]
  int v41; // [rsp+24h] [rbp-74h] BYREF
  char *s2; // [rsp+28h] [rbp-70h] BYREF
  __int64 v43; // [rsp+34h] [rbp-64h] BYREF
  __int16 v44; // [rsp+3Ch] [rbp-5Ch]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v8 = a5;
  v47 = __readfsqword(0x28u);
  v10 = a5 >= a3 && a5 < a4;
  if ( a7 )
  {
    v11 = 1282;
    if ( !v10 )
      v8 = a4;
  }
  else if ( v10 )
  {
    a3 = a4;
    v11 = 771;
  }
  else
  {
    v8 = a3;
    v11 = 771;
    a3 = a4;
  }
  v43 = 0;
  v44 = 0;
  reg_access = find_reg_access(&v43, v8, a3, a6, v11);
  if ( reg_access == -1 )
    return reg_access;
  v14 = WORD2(v43) == 0;
  dest = nullptr;
  v46 = 0;
  *a1 = HIBYTE(v44);
  if ( v14 )
  {
    p_s2 = (char **)(unsigned int)v43;
    get_reg_name(&dest, (unsigned int)v43, HIWORD(v43) >> 3, 0xFFFFFFFFLL);
LABEL_10:
    v16 = v46;
    goto LABEL_11;
  }
  v21 = 1008;
  p_s2 = &s2;
  v22 = sub_1E73C0(0x3F0u, &s2, 0, a6);
  if ( v22 )
  {
    if ( v22 != 1 )
      goto LABEL_10;
    s1 = s2;
    if ( !s2 )
      goto LABEL_10;
  }
  else
  {
    v21 = (__int64)a6;
    if ( (unsigned int)str2reg(a6) == -1 )
      goto LABEL_10;
    s1 = a6;
  }
  ph = get_ph(v21, &s2, v23);
  v25 = 0;
  if ( *(int *)(ph + 64) <= 0 )
    goto LABEL_10;
  while ( 1 )
  {
    p_s2 = &s2;
    v27 = *(_QWORD *)(ph + 56);
    v41 = 0;
    v26 = *(char **)(v27 + 8 * v25);
    v28 = sub_1E73C0(0x3F0u, &s2, &v41, v26);
    if ( !v28 )
      break;
    if ( v28 == 1 )
    {
      v26 = s2;
      goto LABEL_22;
    }
LABEL_25:
    if ( *(_DWORD *)(ph + 64) <= (int)++v25 )
      goto LABEL_10;
  }
  if ( (unsigned int)str2reg(v26) == -1 )
    goto LABEL_25;
  v41 = 0;
LABEL_22:
  if ( !v26 )
    goto LABEL_25;
  p_s2 = (char **)v26;
  if ( strcmp(s1, v26) || HIDWORD(v43) != v41 )
    goto LABEL_25;
  v29 = *(_QWORD *)(ph + 56);
  v30 = *(char ***)(v29 + 8 * v25);
  if ( !v30 || (v31 = strlen(*(const char **)(v29 + 8 * v25)), (v32 = v31) == 0) )
  {
    *(_QWORD *)&v46 = 0;
    goto LABEL_35;
  }
  v35 = dest;
  v36 = v31 + 1;
  if ( *((_QWORD *)&v46 + 1) < v31 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v36, 1);
    v35 = dest;
  }
  p_s2 = v30;
  *(_QWORD *)&v46 = v36;
  memmove(v35, v30, v32);
  *((_BYTE *)dest + v32) = 0;
  v16 = v46;
LABEL_11:
  if ( v16 <= 1 )
  {
LABEL_35:
    v33 = strlen(a6);
    v34 = v33;
    if ( v33 )
    {
      v37 = (void *)*a2;
      v38 = v33 + 1;
      if ( a2[2] < v33 + 1 )
      {
        v39 = qvector_reserve(a2, *a2, v33 + 1, 1);
        *a2 = v39;
        v37 = (void *)v39;
      }
      a2[1] = v38;
      p_s2 = (char **)a6;
      memmove(v37, a6, v34);
      *(_BYTE *)(*a2 + v34) = 0;
      v17 = (__int64)dest;
    }
    else
    {
      a2[1] = 0;
      v17 = (__int64)dest;
    }
  }
  else
  {
    v17 = *a2;
    v18 = a2[2];
    v19 = dest;
    v20 = _mm_loadh_ps((const double *)&v46 + 1);
    dest = (void *)*a2;
    *a2 = (__int64)v19;
    *((_QWORD *)&v46 + 1) = v18;
    *(__m128 *)(a2 + 1) = v20;
  }
  if ( v17 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v17, (const char *)p_s2);
  }
  return reg_access;
}
