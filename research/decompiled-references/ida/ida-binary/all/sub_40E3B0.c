__int64 __fastcall sub_40E3B0(_QWORD *a1)
{
  const char *v2; // rsi
  __m128i v3; // xmm0
  __int64 v4; // rdi
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __m128i *v9; // r13
  const char *v10; // rsi
  int v11; // eax
  unsigned __int64 v12; // rbp
  const char *v13; // rsi
  __int64 func; // rax
  const char *v15; // rdi
  __int64 v16; // rbp
  __int16 flags; // ax
  char v18; // dl
  char v19; // cl
  bool v20; // zf
  void *v21; // rdi
  char v22; // al
  const char *v23; // rsi
  const char *not_tail; // rbp
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // r15
  unsigned __int64 v29; // r14
  __m128i v30; // xmm0
  __int64 v31; // rdi
  char tinfo_details; // al
  unsigned __int64 v33; // r13
  __int64 v34; // rsi
  const void *v35; // r15
  void *v36; // rdi
  const void *v37; // r15
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __m128i v41; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v42[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  memset(v42, 0, sizeof(v42));
  a1[2] = 0;
  v2 = (const char *)*a1;
  get_ea_name(v42, *a1, 0, 0);
  v3 = _mm_loadu_si128((const __m128i *)&v42[8]);
  v4 = a1[3];
  v5 = *(_QWORD *)v42;
  memset(v42, 0, sizeof(v42));
  v6 = v3.m128i_i64[0];
  if ( v4 )
  {
    a1[4] = 0;
    v41 = v3;
    qfree(v4, v2);
    v7 = _mm_load_si128(&v41);
    v8 = *(_QWORD *)v42;
    a1[3] = v5;
    v9 = (__m128i *)(a1 + 4);
    *((__m128i *)a1 + 2) = v7;
    if ( v8 )
    {
      *(_QWORD *)&v42[8] = 0;
      qfree(v8, v2);
      v6 = a1[4];
    }
    if ( v6 > 1 )
      goto LABEL_5;
  }
  else
  {
    a1[3] = v5;
    v9 = (__m128i *)(a1 + 4);
    *((__m128i *)a1 + 2) = v3;
    if ( v3.m128i_i64[0] > 1uLL )
    {
LABEL_5:
      v10 = (const char *)a1[3];
      goto LABEL_6;
    }
  }
  not_tail = (const char *)*a1;
  if ( (get_flags_ex(*a1, 4) & 0x600) == 0x200 )
    not_tail = (const char *)prev_not_tail(not_tail);
  if ( not_tail == (const char *)-1LL || (const char *)*a1 == not_tail )
  {
    v29 = a1[4];
  }
  else
  {
    memset(v42, 0, sizeof(v42));
    get_ea_name(v42, not_tail, 0, 0);
    v26 = _mm_loadu_si128((const __m128i *)&v42[8]);
    v27 = a1[3];
    v28 = *(_QWORD *)v42;
    memset(v42, 0, sizeof(v42));
    v29 = v26.m128i_i64[0];
    if ( v27 )
    {
      a1[4] = 0;
      v41 = v26;
      qfree(v27, not_tail);
      v30 = _mm_load_si128(&v41);
      v31 = *(_QWORD *)v42;
      a1[3] = v28;
      *v9 = v30;
      if ( v31 )
      {
        *(_QWORD *)&v42[8] = 0;
        qfree(v31, not_tail);
        v29 = a1[4];
      }
    }
    else
    {
      a1[3] = v28;
      *v9 = v26;
    }
    if ( v29 > 1 )
    {
      a1[2] = *a1 - (_QWORD)not_tail;
      goto LABEL_5;
    }
  }
  if ( v29 )
    goto LABEL_5;
  v10 = &s1;
LABEL_6:
  v11 = demangle_name(a1 + 6, v10, 0, 2);
  v12 = a1[4];
  if ( v11 <= 0 )
  {
    if ( !v12 )
    {
      a1[7] = 0;
      goto LABEL_46;
    }
    if ( v12 == 1 )
    {
      a1[7] = 0;
      goto LABEL_8;
    }
    v37 = (const void *)a1[3];
    v38 = (void *)a1[6];
    if ( a1[8] < v12 )
    {
      v39 = qvector_reserve(a1 + 6, a1[6], a1[4], 1);
      a1[6] = v39;
      v38 = (void *)v39;
    }
    a1[7] = v12;
    memmove(v38, v37, v12 - 1);
    *(_BYTE *)(a1[6] + v12 - 1) = 0;
    v12 = a1[4];
  }
  if ( v12 )
  {
LABEL_8:
    v13 = (const char *)a1[3];
    goto LABEL_9;
  }
LABEL_46:
  v13 = &s1;
LABEL_9:
  if ( (int)demangle_name(a1 + 9, v13, 8, 2) <= 0 )
  {
    v33 = a1[4];
    if ( v33 > 1 )
    {
      v35 = (const void *)a1[3];
      v36 = (void *)a1[9];
      if ( a1[11] < v33 )
      {
        v40 = qvector_reserve(a1 + 9, a1[9], a1[4], 1);
        a1[9] = v40;
        v36 = (void *)v40;
      }
      a1[10] = v33;
      memmove(v36, v35, v33 - 1);
      *(_BYTE *)(a1[9] + v33 - 1) = 0;
    }
    else
    {
      a1[10] = 0;
    }
  }
  func = get_func(*a1);
  v15 = (const char *)*a1;
  v16 = func;
  *((_BYTE *)a1 + 200) = func != 0;
  flags = get_flags_ex(v15, 0);
  v18 = (flags & 0x600) == 1024;
  v19 = 0;
  *((_BYTE *)a1 + 202) = v18;
  if ( (flags & 0x4000) != 0 )
    v19 = (v18 | *((_BYTE *)a1 + 200)) ^ 1;
  v20 = a1[27] == 0;
  *((_BYTE *)a1 + 203) = v19;
  *((_BYTE *)a1 + 204) = 0;
  if ( !v20 )
  {
    v21 = (void *)a1[26];
    a1[28] = 0;
    *((_OWORD *)a1 + 13) = 0;
    if ( v21 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v21, 1u) )
        free(v21);
      v18 = *((_BYTE *)a1 + 202);
    }
  }
  if ( v18 )
    sub_40E320(a1);
  v22 = *((_BYTE *)a1 + 200);
  if ( v22 )
  {
    if ( (unsigned __int8)get_tinfo(a1 + 12, *a1) && (get_tinfo_property(a1[12], 2) & 0xF) == 0xC )
      tinfo_details = get_tinfo_details(a1[12], 12, a1 + 13);
    else
      tinfo_details = 0;
    *((_BYTE *)a1 + 201) = tinfo_details;
    *((_BYTE *)a1 + 205) = (get_aflags(*a1) & 0x400) != 0;
    v22 = *(_BYTE *)(v16 + 16) >> 7;
  }
  else
  {
    *((_BYTE *)a1 + 201) = 0;
    *((_BYTE *)a1 + 205) = 0;
  }
  *((_BYTE *)a1 + 206) = v22;
  *(_OWORD *)v42 = 0;
  getinf_buf(26, v42, 16);
  v23 = (const char *)*a1;
  if ( *a1 < *(_QWORD *)v42 || (unsigned __int64)v23 >= *(_QWORD *)&v42[8] )
  {
    *((_BYTE *)a1 + 235) = 0;
    return v43 - __readfsqword(0x28u);
  }
  *((_BYTE *)a1 + 235) = 1;
  if ( (unsigned __int8)get_type_by_tid(a1 + 30, v23) )
  {
    *((_BYTE *)a1 + 232) = 1;
    return v43 - __readfsqword(0x28u);
  }
  if ( get_udm_by_tid(a1 + 30, a1 + 31, *a1) == -1 )
  {
    if ( get_edm_by_tid(a1 + 30, a1 + 49, *a1) == -1 )
      return v43 - __readfsqword(0x28u);
    v34 = a1[30];
    *((_BYTE *)a1 + 234) = 1;
    if ( (v34 & 0x100) == 0 )
      return v43 - __readfsqword(0x28u);
  }
  else
  {
    v34 = a1[30];
    *((_BYTE *)a1 + 233) = 1;
    if ( (v34 & 0x100) == 0 )
      return v43 - __readfsqword(0x28u);
  }
  return get_tinfo_pdata(a1 + 56, v34, 0);
}
