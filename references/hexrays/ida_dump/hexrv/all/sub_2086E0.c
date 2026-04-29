__int64 __fastcall sub_2086E0(__int64 a1, __int64 a2, __int64 *a3, const char *a4, int a5)
{
  int v5; // r14d
  char *v10; // rsi
  unsigned __int64 v11; // rbx
  size_t v12; // r13
  const char *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rdx
  char *v16; // rbx
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  char *v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // ebx
  __m128i v22; // xmm0
  __int64 v23; // rax
  _QWORD *v24; // r15
  __int64 v26; // rdi
  int v27; // r9d
  __int64 v28; // r13
  char *v29; // rsi
  char *v30; // r8
  __int64 v31; // r15
  char *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdx
  char *v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // r14
  _QWORD *v39; // r15
  _QWORD *v40; // r14
  size_t v41; // r9
  __int64 v42; // rdx
  char v43; // r15
  __int64 v44; // [rsp+0h] [rbp-80h]
  char *v45; // [rsp+0h] [rbp-80h]
  _QWORD *v46; // [rsp+8h] [rbp-78h]
  char *v47; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+10h] [rbp-70h]
  __int64 tinfo_property; // [rsp+18h] [rbp-68h] BYREF
  __int64 v50; // [rsp+20h] [rbp-60h] BYREF
  char *s1; // [rsp+28h] [rbp-58h] BYREF
  __m128i v52; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-40h]

  v5 = a5 & 8;
  v53 = __readfsqword(0x28u);
  v52 = 0;
  s1 = nullptr;
  if ( (a5 & 4) != 0 && (unsigned __int8)sub_208420(&s1, a3) )
    goto LABEL_10;
  if ( !v5 )
    goto LABEL_23;
  if ( (get_tinfo_property(*a3, 2) & 0xF) == 8 )
  {
    v11 = 3;
    v12 = 2;
    v13 = "ok";
    goto LABEL_40;
  }
  if ( (get_tinfo_property(*a3, 2) & 0x1F) != 0x12 )
  {
    v38 = *(_QWORD *)(a2 + 1496);
    v39 = (_QWORD *)(v38 + 376);
    v40 = (_QWORD *)(v38 + 408);
    do
    {
      if ( !(unsigned int)lexcompare_tinfo(*a3, *v39, 0) )
      {
        v11 = 3;
        v12 = 2;
        v13 = "wc";
        goto LABEL_40;
      }
      ++v39;
    }
    while ( v40 != v39 );
    if ( (unsigned __int8)((get_tinfo_property(*a3, 2) & 0xF) - 2) <= 5u )
    {
      v11 = 5;
      v12 = 4;
      v13 = "code";
      goto LABEL_40;
    }
    if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xA )
    {
      tinfo_property = get_tinfo_property(*a3, 9);
      set_tinfo_property(&tinfo_property, 6, 192);
      if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 1
        || (v50 = 0,
            v50 = get_tinfo_property(tinfo_property, 9),
            v43 = get_tinfo_property(v50, 2),
            clear_tinfo_t(&v50),
            (v43 & 0x3F) == 1) )
      {
        v13 = "ptr";
      }
      else
      {
        v13 = "str";
        if ( (get_tinfo_property(tinfo_property, 2) & 0x1F) != 0x12 )
        {
          v23 = *(_QWORD *)(a2 + 1496);
          v24 = (_QWORD *)(v23 + 376);
          v46 = (_QWORD *)(v23 + 408);
          while ( (unsigned int)lexcompare_tinfo(tinfo_property, *v24, 0) )
          {
            if ( v46 == ++v24 )
            {
              clear_tinfo_t(&tinfo_property);
              goto LABEL_23;
            }
          }
          v13 = "wstr";
        }
      }
      clear_tinfo_t(&tinfo_property);
      v12 = strlen(v13);
      v11 = v12 + 1;
LABEL_40:
      v10 = s1;
      if ( v52.m128i_i64[1] >= v11 )
        goto LABEL_6;
LABEL_41:
      s1 = (char *)qvector_reserve(&s1, v10, v11, 1);
      v10 = s1;
      goto LABEL_6;
    }
LABEL_23:
    if ( (get_tinfo_property(*a3, 2) & 0xF) != 0xA )
    {
      v19 = s1;
      v21 = 0;
      goto LABEL_25;
    }
    v26 = *a3;
    v50 = 0;
    v50 = get_tinfo_property(v26, 9);
    v21 = sub_2086E0((unsigned int)&s1, a2, (unsigned int)&v50, 0, a5, v27);
    if ( !(_BYTE)v21 )
      goto LABEL_36;
    v28 = v52.m128i_i64[0];
    v29 = s1;
    if ( v52.m128i_i64[0] )
    {
      v41 = v52.m128i_i64[0] - 1;
      if ( (unsigned __int64)(v52.m128i_i64[0] - 1) <= 1 )
      {
        v42 = v52.m128i_i64[0] + 2;
        v31 = 2;
        v28 = v52.m128i_i64[0] + 1;
        v30 = "p_";
        if ( v52.m128i_i64[1] >= (unsigned __int64)(v52.m128i_i64[0] + 2) )
        {
LABEL_57:
          v52.m128i_i64[0] = v42;
          v29[v28] = 0;
          if ( !v41 )
            goto LABEL_32;
LABEL_58:
          v45 = v30;
          memmove(&s1[v31], s1, v41);
          v30 = v45;
          goto LABEL_32;
        }
      }
      else
      {
        if ( *s1 == 112 && s1[1] == 95 )
        {
          v31 = 1;
          v30 = "p";
        }
        else
        {
          v28 = v52.m128i_i64[0] + 1;
          v31 = 2;
          v30 = "p_";
        }
        v42 = v28 + 1;
        if ( v52.m128i_i64[1] >= (unsigned __int64)(v28 + 1) )
        {
          v52.m128i_i64[0] = v28 + 1;
          s1[v28] = 0;
          goto LABEL_58;
        }
      }
    }
    else
    {
      if ( v52.m128i_i64[1] > 2uLL )
      {
        v52.m128i_i64[0] = 3;
        v30 = "p_";
        LODWORD(v31) = 2;
        s1[2] = 0;
LABEL_32:
        v32 = s1;
        v33 = 0;
        do
        {
          v34 = v33++;
          v32[v34] = v30[v34];
        }
        while ( v33 < (unsigned int)v31 );
        if ( a1 )
        {
          v35 = *(char **)a1;
          v36 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v37 = _mm_loadu_si128(&v52);
          *(_QWORD *)a1 = s1;
          s1 = v35;
          *(__m128i *)(a1 + 8) = v37;
          v52 = v36;
        }
LABEL_36:
        clear_tinfo_t(&v50);
        v19 = s1;
        goto LABEL_25;
      }
      v41 = 0;
      v42 = 3;
      v28 = 2;
      v31 = 2;
      v30 = "p_";
    }
    n = v41;
    v47 = v30;
    v44 = v42;
    s1 = (char *)qvector_reserve(&s1, s1, v42, 1);
    v42 = v44;
    v29 = s1;
    v30 = v47;
    v41 = n;
    goto LABEL_57;
  }
  v10 = s1;
  v11 = 4;
  v12 = 3;
  v13 = "chr";
  if ( v52.m128i_i64[1] < 4uLL )
    goto LABEL_41;
LABEL_6:
  v52.m128i_i64[0] = v11;
  if ( (_DWORD)v12 )
  {
    v14 = 0;
    do
    {
      v15 = v14++;
      v10[v15] = v13[v15];
    }
    while ( v14 < (unsigned int)v12 );
  }
  s1[v12] = 0;
LABEL_10:
  v16 = s1;
  if ( a4 )
  {
    v17 = v52.m128i_i64[0];
    if ( v52.m128i_i64[0] )
    {
      if ( !strcmp(s1, a4) )
      {
        v18 = v17-- + 1;
LABEL_14:
        if ( v52.m128i_i64[1] < v18 )
        {
          s1 = (char *)qvector_reserve(&s1, v16, v18, 1);
          v16 = s1;
        }
        v52.m128i_i64[0] = v18;
        v16[v17] = 95;
        s1[v17 + 1] = 0;
        v16 = s1;
      }
    }
    else if ( !*a4 )
    {
      v18 = 2;
      goto LABEL_14;
    }
  }
  if ( a1 )
  {
    v19 = *(char **)a1;
    v20 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v16;
    v21 = 1;
    v22 = _mm_loadu_si128(&v52);
    s1 = v19;
    v52.m128i_i64[1] = v20;
    *(__m128i *)(a1 + 8) = v22;
  }
  else
  {
    v19 = v16;
    v21 = 1;
  }
LABEL_25:
  if ( v19 )
  {
    v52.m128i_i64[0] = 0;
    qfree(v19);
  }
  return v21;
}
