__int64 __fastcall sub_3DE710(_QWORD *a1, void **a2, __int64 a3)
{
  void **v4; // rbx
  __int64 v5; // rbx
  char *v7; // rdi
  const char *v8; // rdx
  const char *v9; // r12
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // r12d
  void *v15; // rbx
  const char *v16; // rdx
  void *idati; // rax
  void *v18; // rdx
  __m128i v19; // xmm1
  __m128 v20; // xmm0
  void *v21; // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // [rsp+0h] [rbp-80h] BYREF
  void *ptr; // [rsp+8h] [rbp-78h] BYREF
  __m128i v26; // [rsp+10h] [rbp-70h] BYREF
  void *v27; // [rsp+28h] [rbp-58h] BYREF
  __int128 v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v4 = a2;
  v26 = 0;
  ptr = nullptr;
  if ( !(unsigned __int8)sub_6994A0(a1, &ptr, a3) )
    goto LABEL_2;
  v7 = (char *)haystack;
  if ( v26.m128i_i64[0] )
    v7 = (char *)ptr;
  if ( !sub_69C980(v7) )
    goto LABEL_22;
  v8 = haystack;
  if ( a2[1] )
    v8 = (const char *)*a2;
  if ( !(unsigned int)sub_632AC0(a1, a1[1], v8) )
  {
    v9 = haystack;
    if ( a2[1] )
      v9 = (const char *)*a2;
    v27 = nullptr;
    v28 = 0;
    if ( v9 )
    {
      v10 = strlen(v9);
      v11 = v10 + 1;
      v12 = v10;
      v27 = (void *)qvector_reserve(&v27, 0, v10 + 1, 1);
      *(_QWORD *)&v28 = v11;
      memmove(v27, v9, v12);
      *((_BYTE *)v27 + v12) = 0;
    }
    a2 = &v27;
    v13 = sub_59CCD0(a1, &v27);
    v7 = (char *)v27;
    v14 = v13;
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    if ( v14 != -1 )
    {
      get_ea_name(v4, v14, 0, 0);
      goto LABEL_20;
    }
LABEL_22:
    v16 = haystack;
    v24 = 0;
    if ( v26.m128i_i64[0] )
    {
      v16 = (const char *)ptr;
      if ( !ptr )
        goto LABEL_27;
    }
    else if ( !haystack )
    {
      goto LABEL_27;
    }
    idati = (void *)a1[1];
    *(_QWORD *)&v28 = v16;
    WORD4(v28) = 256;
    if ( !idati )
      idati = (void *)get_idati(v7, a2);
    v27 = idati;
    if ( (unsigned __int8)create_tinfo(&v24, 61, 61, &v27) && get_tinfo_property(v24, 288) )
    {
      v21 = *v4;
      v22 = _mm_loadu_si128(&v26);
      v23 = _mm_loadu_si128((const __m128i *)(v4 + 1));
      *v4 = ptr;
      *(__m128i *)(v4 + 1) = v22;
      ptr = v21;
      v26 = v23;
      clear_tinfo_t(&v24);
      goto LABEL_29;
    }
LABEL_27:
    clear_tinfo_t(&v24);
    goto LABEL_2;
  }
  v18 = *a2;
  v19 = _mm_loadu_si128(&v26);
  v20 = _mm_loadh_ps((const double *)a2 + 2);
  *a2 = ptr;
  ptr = v18;
  *(__m128i *)(a2 + 1) = v19;
  v26 = (__m128i)v20;
LABEL_29:
  sub_4B8BE0(*a1, v4);
LABEL_20:
  v15 = v4[1];
  if ( !v15 )
  {
LABEL_2:
    v5 = 0;
    goto LABEL_3;
  }
  v5 = (__int64)v15 - 1;
LABEL_3:
  if ( ptr )
  {
    v26.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return v5;
}

