__int64 __fastcall xref_chooser_t__::vfunc_22(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rdx
  const char *v6; // rbx
  unsigned __int64 v7; // r13
  char v8; // al
  char v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  char *v12; // r15
  __int64 v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // r13d
  char v17; // dl
  __int64 v18; // rdx
  const char *v19; // rsi
  const char *v20; // rdx
  __int64 v21; // rdx
  const char *v22; // rsi
  __int64 udm_by_tid; // rax
  const char *v25; // rdi
  __int64 v26; // r12
  const char *v27; // rsi
  __int64 tinfo_property4; // rax
  __m128i v29; // xmm0
  const char *v30; // rdx
  __m128i v31; // xmm1
  __int64 edm_by_tid; // rax
  __int64 v33; // r12
  unsigned __int64 v34; // r13
  __int64 v35; // r8
  char *v36; // r9
  unsigned int v37; // eax
  __int64 v38; // rdx
  __m128i v39; // xmm0
  const char *v40; // rdx
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  const char *v43; // rdx
  __m128i v44; // xmm1
  char *v45; // [rsp+0h] [rbp-198h]
  __int64 v46; // [rsp+8h] [rbp-190h]
  const char *v47; // [rsp+18h] [rbp-180h] BYREF
  __int64 v48; // [rsp+20h] [rbp-178h] BYREF
  __int128 v49; // [rsp+28h] [rbp-170h]
  const char *v50; // [rsp+40h] [rbp-158h] BYREF
  __int128 v51; // [rsp+48h] [rbp-150h]
  const char *v52; // [rsp+60h] [rbp-138h] BYREF
  __m128i v53; // [rsp+68h] [rbp-130h] BYREF
  const char *v54; // [rsp+80h] [rbp-118h] BYREF
  __m128i v55; // [rsp+88h] [rbp-110h] BYREF
  __int64 v56; // [rsp+98h] [rbp-100h]
  __int128 v57; // [rsp+A0h] [rbp-F8h]
  __int128 v58; // [rsp+C0h] [rbp-D8h] BYREF
  const char *v59; // [rsp+D0h] [rbp-C8h]
  __m128i v60; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-B0h]
  __int128 v62; // [rsp+F0h] [rbp-A8h]
  __int128 v63[3]; // [rsp+100h] [rbp-98h] BYREF
  __int64 v64; // [rsp+130h] [rbp-68h]
  int v65; // [rsp+138h] [rbp-60h]
  __int64 v66; // [rsp+140h] [rbp-58h]
  char v67; // [rsp+148h] [rbp-50h]
  unsigned __int64 v68; // [rsp+158h] [rbp-40h]

  v3 = *(_QWORD **)(a1 + 192);
  v68 = __readfsqword(0x28u);
  v5 = *v3 + 16 * a3;
  v6 = *(const char **)v5;
  v7 = xmmword_8CC810;
  v8 = xrefchar((unsigned int)*(char *)(v5 + 9));
  v48 = 0;
  v50 = nullptr;
  v9 = v8;
  v52 = nullptr;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  if ( (unsigned __int8)is_mapped(v6) )
  {
    if ( (unsigned __int64)v6 >= v7 )
    {
      if ( v7 >= (unsigned __int64)v6 )
      {
        *(_QWORD *)&v49 = 0;
LABEL_11:
        v16 = (unsigned __int8)getinf_flag(33, 4) == 0 ? 10 : 2;
        v17 = getinf_flag(33, 1);
        *(_QWORD *)&v58 = 0;
        if ( !v17 )
          v16 |= 1u;
        if ( (unsigned __int8)get_type_by_tid(&v58, v6) && get_tinfo_property4(v58, 300, 0, 0, 0, 0) == -1 )
        {
          if ( (v58 & 0x100) != 0 )
            get_tinfo_pdata(&v50, v58, 0);
        }
        else if ( *((_BYTE *)QT::QCoreApplication::self + 744) )
        {
          get_nice_colored_name(&v50, v6, v16);
        }
        else
        {
          sub_169A50((__int64 *)&v50, (__int64)"%a", 0.0);
        }
        clear_tinfo_t(&v58);
        generate_disasm_line(&v52, v6, 4);
        goto LABEL_17;
      }
      v10 = 5;
      v11 = 4;
      v12 = "Down";
    }
    else
    {
      v10 = 3;
      v11 = 2;
      v12 = "Up";
    }
    v13 = v48;
    if ( *((_QWORD *)&v49 + 1) < v10 )
    {
      v48 = qvector_reserve(&v48, v48, v10, 1);
      v13 = v48;
    }
    *(_QWORD *)&v49 = v10;
    v14 = 0;
    do
    {
      v15 = v14++;
      *(_BYTE *)(v13 + v15) = v12[v15];
    }
    while ( v14 < (unsigned int)v11 );
    *(_BYTE *)(v48 + v11) = 0;
    goto LABEL_11;
  }
  v47 = nullptr;
  v59 = nullptr;
  v61 = 0;
  v64 = 1;
  v65 = -1;
  v66 = 0;
  v67 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v63[0] = 0;
  udm_by_tid = get_udm_by_tid(&v47, &v58, v6);
  v25 = v47;
  v26 = udm_by_tid;
  if ( (_BYTE)v47 )
  {
    if ( udm_by_tid != -1 )
    {
      v27 = (_BYTE *)(&qword_128 + 4);
      tinfo_property4 = get_tinfo_property4(v47, 300, 0, 0, 0, 0);
      v25 = v47;
      if ( tinfo_property4 == -1 )
      {
        if ( ((unsigned __int16)v47 & 0x100) != 0 )
        {
          v27 = v47;
          get_tinfo_pdata(&v50, v47, 0);
        }
        v42 = _mm_loadu_si128(&v53);
        v9 = 109;
        v43 = v59;
        v44 = _mm_loadu_si128(&v60);
        v59 = v52;
        v52 = v43;
        v53 = v44;
        v60 = v42;
        goto LABEL_40;
      }
    }
    v27 = (_BYTE *)(&qword_128 + 4);
    if ( get_tinfo_property4(v25, 300, 0, 0, 0, 0) != -1 )
    {
      v27 = (const char *)get_tinfo_property4(v47, 300, 0, 0, 0, 0);
      v6 = v27;
      get_func_name(&v50, v27);
      if ( (unsigned __int64)v27 < v7 )
      {
        v34 = 3;
        v35 = 2;
        v36 = "Up";
      }
      else
      {
        if ( v7 >= (unsigned __int64)v27 )
        {
          *(_QWORD *)&v49 = 0;
LABEL_37:
          if ( v26 != -1 )
          {
            v29 = _mm_loadu_si128(&v53);
            v30 = v59;
            v31 = _mm_loadu_si128(&v60);
            v59 = v52;
            v52 = v30;
            v53 = v31;
            v60 = v29;
          }
          v9 = 107;
          goto LABEL_40;
        }
        v34 = 5;
        v35 = 4;
        v36 = "Down";
      }
      v27 = (const char *)v48;
      if ( *((_QWORD *)&v49 + 1) < v34 )
      {
        v45 = v36;
        v46 = v35;
        v48 = qvector_reserve(&v48, v48, v34, 1);
        v35 = v46;
        v27 = (const char *)v48;
        v36 = v45;
      }
      *(_QWORD *)&v49 = v34;
      v37 = 0;
      do
      {
        v38 = v37++;
        v27[v38] = v36[v38];
      }
      while ( v37 < (unsigned int)v35 );
      *(_BYTE *)(v48 + v35) = 0;
      goto LABEL_37;
    }
    if ( ((unsigned __int16)v47 & 0x100) != 0 )
    {
      v27 = v47;
      get_tinfo_pdata(&v50, v47, 0);
    }
  }
  else
  {
    v54 = nullptr;
    v56 = 0;
    v55 = 0;
    v57 = 0;
    edm_by_tid = get_edm_by_tid(&v47, &v54, v6);
    v27 = v47;
    v33 = edm_by_tid;
    if ( (_BYTE)v47 )
    {
      if ( ((unsigned __int16)v47 & 0x100) != 0 )
        get_tinfo_pdata(&v50, v47, 0);
      if ( v33 != -1 )
      {
        v39 = _mm_loadu_si128(&v53);
        v40 = v54;
        v41 = _mm_loadu_si128(&v55);
        v54 = v52;
        v52 = v40;
        v53 = v41;
        v55 = v39;
      }
    }
    else
    {
      v27 = v6;
      if ( (unsigned __int8)get_type_by_tid(&v47, v6) )
      {
        v27 = v47;
        if ( ((unsigned __int16)v47 & 0x100) != 0 )
          get_tinfo_pdata(&v50, v47, 0);
      }
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56, v27);
    }
    if ( v54 )
    {
      v55.m128i_i64[0] = 0;
      qfree(v54, v27);
    }
  }
  v9 = 115;
LABEL_40:
  clear_tinfo_t(v63);
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61, v27);
  }
  if ( v59 )
  {
    v60.m128i_i64[0] = 0;
    qfree(v59, v27);
  }
  clear_tinfo_t(&v47);
LABEL_17:
  v18 = v49;
  v19 = &s1;
  if ( (_QWORD)v49 )
  {
    v19 = (const char *)v48;
    v18 = v49 - 1;
  }
  sub_4DC370(a2, v19, v18);
  sub_4DC380(a2, (unsigned int)v9);
  v20 = &s1;
  if ( (_QWORD)v51 )
    v20 = v50;
  sub_4DC470(a2, v6, v20);
  v21 = v53.m128i_i64[0];
  v22 = &s1;
  if ( v53.m128i_i64[0] )
  {
    v22 = v52;
    v21 = v53.m128i_i64[0] - 1;
  }
  sub_4DC370(a2, v22, v21);
  if ( v52 )
  {
    v53.m128i_i64[0] = 0;
    qfree(v52, v22);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50, v22);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48, v22);
  }
  return 1;
}
