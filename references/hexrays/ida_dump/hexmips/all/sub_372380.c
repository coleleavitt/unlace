__int64 __fastcall sub_372380(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, char a5, double a6, __m128 a7)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r13
  _QWORD *v12; // rdx
  _QWORD *i; // rax
  unsigned __int64 v14; // rbx
  char v15; // r14
  unsigned __int64 v16; // rbp
  const char *v17; // rsi
  void *v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  const char *v28; // rdx
  char v29; // r14
  __int64 func; // rax
  char v31; // al
  __int64 cmt; // rax
  __int64 v33; // rdi
  char v34; // al
  const char *v35; // r8
  const char *v36; // rcx
  __int64 (*v37)(__int64 *, __int64, const char *, ...); // r9
  char v38; // al
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  char v48; // al
  unsigned __int64 *segm_by_name; // rax
  unsigned __int64 *v50; // rax
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  size_t v53; // r8
  __int64 v54; // r9
  _QWORD *v56; // [rsp+8h] [rbp-150h]
  _BYTE *v57; // [rsp+10h] [rbp-148h]
  _QWORD *v59; // [rsp+20h] [rbp-138h]
  __int64 v60; // [rsp+20h] [rbp-138h]
  __int64 v61; // [rsp+28h] [rbp-130h]
  char v62; // [rsp+37h] [rbp-121h]
  size_t v64; // [rsp+40h] [rbp-118h]
  __int64 v65; // [rsp+48h] [rbp-110h]
  unsigned __int64 *v66; // [rsp+50h] [rbp-108h] BYREF
  __int128 v67; // [rsp+58h] [rbp-100h]
  void *src; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v69; // [rsp+78h] [rbp-E0h]
  __m128i v70[2]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE haystack[24]; // [rsp+B0h] [rbp-A8h] BYREF
  int v72; // [rsp+C8h] [rbp-90h]
  double v73[3]; // [rsp+D0h] [rbp-88h] BYREF
  char v74; // [rsp+E8h] [rbp-70h]
  char v75[8]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v76; // [rsp+F8h] [rbp-60h]
  __int128 v77; // [rsp+100h] [rbp-58h]
  unsigned __int64 v78; // [rsp+118h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v67 = 0;
  v66 = nullptr;
  if ( a5 )
  {
    if ( sub_325A40(v73) == -1 )
    {
      segm_by_name = (unsigned __int64 *)get_segm_by_name(".tls");
      if ( segm_by_name )
      {
        a7 = (__m128)(segm_by_name[1] - *segm_by_name);
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*segm_by_name, (__m128i)a7);
        sub_311E30((__int64 *)&v66, (__m128i *)haystack, *(double *)haystack, a7);
      }
      v50 = (unsigned __int64 *)get_segm_by_name("extern_tls");
      if ( v50 )
      {
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*v50, (__m128i)(v50[1] - *v50));
        sub_311E30((__int64 *)&v66, (__m128i *)haystack, *(double *)haystack, a7);
      }
    }
    else
    {
      v70[0] = (__m128i)_mm_loadh_ps(v73);
      sub_311E30((__int64 *)&v66, v70, *(double *)v70[0].m128i_i64, a7);
    }
    v62 = 0;
    v9 = a1[141];
  }
  else
  {
    v9 = a1[141];
    v10 = *(_QWORD **)(v9 + 8);
    if ( v10 && *(_QWORD *)(v9 + 16) && (v11 = (_QWORD *)v10[1], v10 != v11) )
    {
      while ( (unsigned int)get_tinfo_property(v11[10], 20) != 128 )
      {
        if ( (*v11 & 2) == 0 )
        {
          v12 = (_QWORD *)v11[2];
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v45 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
            v46 = *v45;
            if ( (*v45 & 2) == 0 )
            {
              while ( (_QWORD *)v45[2] == v11 )
              {
                v11 = v45;
                v47 = v46 & 0xFFFFFFFFFFFFFFFCLL;
                v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v46 & 2) != 0 )
                {
                  v11 = (_QWORD *)v47;
                  goto LABEL_11;
                }
                v45 = (_QWORD *)v47;
              }
            }
            v11 = v45;
          }
          else
          {
            for ( i = (_QWORD *)v12[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v12 = i;
            v11 = v12;
          }
        }
LABEL_11:
        if ( v10 == v11 )
        {
          v62 = 0;
          v9 = a1[141];
          goto LABEL_14;
        }
      }
      v62 = 1;
      v9 = a1[141];
    }
    else
    {
      v62 = 0;
    }
  }
LABEL_14:
  *(_QWORD *)&v73[2] = a3;
  *(_QWORD *)&v73[0] = off_4C6A50;
  v74 = 0;
  *(_QWORD *)&v73[1] = a2;
  v56 = *(_QWORD **)(v9 + 8);
  if ( !v56 || !*(_QWORD *)(v9 + 16) || (v14 = v56[1], v56 == (_QWORD *)v14) )
  {
LABEL_29:
    v20 = 1;
    goto LABEL_30;
  }
  v15 = 0;
  while ( 1 )
  {
    if ( a5 == ((get_tinfo_property(*(_QWORD *)(v14 + 80), 2) & 0xF) == 12) )
      goto LABEL_25;
    v16 = *(_QWORD *)(v14 + 24);
    src = nullptr;
    v69 = 0;
    if ( !(unsigned __int8)get_tid_name(&src, v16) )
      goto LABEL_41;
    v17 = s1;
    if ( (_QWORD)v69 )
      v17 = (const char *)src;
    if ( get_udm_by_fullname(0, v17) == -1 )
    {
LABEL_41:
      if ( !a5 )
        break;
      v22 = a1[143];
      if ( !v22 )
        break;
      v23 = (_QWORD *)(v22 + 8);
      v24 = *(_QWORD **)(v22 + 16);
      if ( v24 )
      {
        v25 = v23;
        do
        {
          while ( 1 )
          {
            v26 = v24[2];
            v27 = v24[3];
            if ( v24[4] < v16 )
              break;
            v25 = v24;
            v24 = (_QWORD *)v24[2];
            if ( !v26 )
              goto LABEL_40;
          }
          v24 = (_QWORD *)v24[3];
        }
        while ( v27 );
LABEL_40:
        if ( v23 != v25 && v16 >= v25[4] )
          break;
      }
    }
LABEL_23:
    v18 = src;
    if ( src )
      goto LABEL_24;
LABEL_25:
    if ( (*(_QWORD *)v14 & 2) != 0 )
    {
LABEL_28:
      if ( v56 == (_QWORD *)v14 )
        goto LABEL_29;
    }
    else
    {
      v19 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)v19 & 2) == 0 )
      {
        do
        {
          v14 = v19;
          v19 = *(_QWORD *)(v19 + 8);
        }
        while ( (*(_BYTE *)v19 & 2) == 0 );
        goto LABEL_28;
      }
      v42 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      v43 = *v42;
      if ( (*v42 & 2) == 0 && v42[2] == v14 )
      {
        do
        {
          v14 = v43 & 0xFFFFFFFFFFFFFFFCLL;
          v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v43 & 2) != 0 )
            goto LABEL_28;
          v44 = v42;
          v42 = (_QWORD *)v14;
        }
        while ( *(_QWORD **)(v14 + 16) == v44 );
      }
      v14 = (unsigned __int64)v42;
      if ( v56 == v42 )
        goto LABEL_29;
    }
  }
  memset(v70, 0, 24);
  if ( get_ea_name(v70, v16, 0, 0) <= 0 )
  {
LABEL_83:
    if ( v70[0].m128i_i64[0] )
    {
      v70[0].m128i_i64[1] = 0;
      qfree(v70[0].m128i_i64[0]);
    }
    goto LABEL_23;
  }
  if ( v15
    || (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, void *, __int64))(*a3 + 32))(a3, a2, &unk_3FD0D2, a4)
    && (!v62
     || (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, const char *))(*a3 + 32))(
          a3,
          a2,
          "#define __thiscall __cdecl // Test compile in C mode\n\n")) )
  {
    v61 = v14 + 80;
    calc_c_cpp_name(v70, v70[0].m128i_i64[0], v14 + 80, 1);
    v28 = (const char *)v70[0].m128i_i64[0];
    v29 = 1;
    if ( !*(_BYTE *)v70[0].m128i_i64[0] )
      goto LABEL_60;
    v59 = (_QWORD *)a1[14];
    v29 = is_spec_ea(v16);
    if ( v29 )
      goto LABEL_59;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*v59 + 144LL))(v59, v16);
    if ( v29 )
      goto LABEL_59;
    func = get_func(v16);
    if ( func )
    {
      if ( (*(_BYTE *)(func + 16) & 4) != 0 && (*(_BYTE *)(v59[12] + 607LL) & 1) == 0 )
      {
LABEL_127:
        v28 = (const char *)v70[0].m128i_i64[0];
        v29 = 1;
        goto LABEL_60;
      }
      v31 = sub_36FE90(func);
      if ( v31 )
      {
        v28 = (const char *)v70[0].m128i_i64[0];
        v29 = v31;
LABEL_60:
        *(_QWORD *)&v69 = 0;
        if ( !(unsigned __int8)sub_3268C0((__int64 *)&src, v61, v28, 0x200u) )
        {
          if ( !a5 )
          {
            sub_67670((__int64 *)&src, (__int64)"int %s(...)", (const char *)v70[0].m128i_i64[0]);
            if ( !v29 )
              goto LABEL_63;
            goto LABEL_93;
          }
          v15 = a5;
          goto LABEL_83;
        }
        if ( !a5 )
        {
          if ( !v29 )
            goto LABEL_63;
LABEL_93:
          v48 = (*(__int64 (**)(__int64 *, __int64, const char *, ...))(*a3 + 32))(
                  a3,
                  a2,
                  "// %s%s;",
                  (const char *)&unk_3FC793,
                  (const char *)src);
LABEL_94:
          if ( !v48 )
            goto LABEL_128;
          v39 = *a3;
          v37 = *(__int64 (**)(__int64 *, __int64, const char *, ...))(*a3 + 32);
          if ( *(int *)(v14 + 88) <= 1 )
          {
            if ( *(_DWORD *)(v14 + 88) != 1 )
            {
LABEL_70:
              v40 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v39 + 32))(a3, a2, "\n");
              v41 = v70[0].m128i_i64[0];
              v15 = v40;
              if ( !v40 )
                goto LABEL_129;
              if ( v70[0].m128i_i64[0] )
              {
                v70[0].m128i_i64[1] = 0;
                qfree(v70[0].m128i_i64[0]);
              }
              v18 = src;
              if ( !src )
                goto LABEL_25;
LABEL_24:
              *(_QWORD *)&v69 = 0;
              qfree(v18);
              goto LABEL_25;
            }
            v35 = "idb";
          }
          else
          {
            v35 = "weak";
          }
          v36 = (const char *)&unk_3FC793;
          goto LABEL_67;
        }
        if ( !sub_3122C0(&v66, v16) )
        {
          if ( !v29 )
          {
LABEL_100:
            if ( (unsigned __int8)is_mapped(v16) && !(unsigned __int8)is_spec_ea(v16) )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, void *, void *))(*a3 + 32))(
                      a3,
                      a2,
                      &unk_3FD0D2,
                      src) )
                goto LABEL_128;
              if ( (unsigned __int8)is_loaded(v16) )
              {
                v77 = 0;
                v75[0] = 2;
                v76 = v16;
                *(_QWORD *)&haystack[16] = 0x5000000000LL;
                v72 = 2;
                v74 = 0;
                *(__m128i *)haystack = _mm_load_si128((const __m128i *)&xmmword_4073F0);
                print_cdata(v73, v75, v61, haystack);
                free_idcv(v75);
              }
              v34 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(*a3 + 32))(a3, a2, ";");
              goto LABEL_64;
            }
LABEL_63:
            v34 = (*(__int64 (**)(__int64 *, __int64, char *, ...))(*a3 + 32))(a3, a2, "%s;", (const char *)src);
LABEL_64:
            if ( !v34 )
              goto LABEL_128;
            if ( *(int *)(v14 + 88) <= 1 )
            {
              if ( *(_DWORD *)(v14 + 88) != 1 )
              {
LABEL_69:
                v39 = *a3;
                goto LABEL_70;
              }
              v38 = (*(__int64 (**)(__int64 *, __int64, char *, ...))(*a3 + 32))(a3, a2, " %s%s", "// ", "idb");
LABEL_68:
              if ( !v38 )
                goto LABEL_128;
              goto LABEL_69;
            }
            v35 = "weak";
            v36 = "// ";
            v37 = *(__int64 (**)(__int64 *, __int64, const char *, ...))(*a3 + 32);
LABEL_67:
            v38 = v37(a3, a2, " %s%s", v36, v35);
            goto LABEL_68;
          }
LABEL_118:
          v48 = (*(__int64 (**)(__int64 *, __int64, const char *, ...))(*a3 + 32))(
                  a3,
                  a2,
                  "// %s%s;",
                  "extern ",
                  (const char *)src);
          goto LABEL_94;
        }
        v51 = src;
        if ( (_QWORD)v69 )
        {
          v52 = v69 + 9;
          v53 = v69 - 1;
          v54 = v69 + 8;
          if ( *((_QWORD *)&v69 + 1) >= (unsigned __int64)(v69 + 9) )
            goto LABEL_124;
        }
        else
        {
          if ( *((_QWORD *)&v69 + 1) > 9u )
          {
            *(_QWORD *)&v69 = 10;
            *((_BYTE *)src + 9) = 0;
            goto LABEL_117;
          }
          v53 = 0;
          v52 = 10;
          v54 = 9;
        }
        v65 = v54;
        v64 = v53;
        v60 = v52;
        src = (void *)qvector_reserve(&src, src, v52, 1);
        v54 = v65;
        v51 = src;
        v53 = v64;
        v52 = v60;
LABEL_124:
        *(_QWORD *)&v69 = v52;
        v51[v54] = 0;
        v51 = src;
        if ( v53 )
        {
          v57 = src;
          memmove((char *)src + 9, src, v53);
          v51 = v57;
        }
LABEL_117:
        v51[8] = 32;
        *(_QWORD *)v51 = 0x6461657268745F5FLL;
        if ( !v29 )
          goto LABEL_100;
        goto LABEL_118;
      }
    }
    if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v14 + 80), 20) - 208 > 0x2F )
    {
      memset(haystack, 0, sizeof(haystack));
      cmt = get_cmt(haystack, v16, 0);
      v33 = *(_QWORD *)haystack;
      if ( cmt > 0 )
      {
        v33 = *(_QWORD *)haystack;
        v29 = strstr(*(const char **)haystack, "vd:hide") != nullptr;
      }
      if ( v33 )
      {
        *(_QWORD *)&haystack[8] = 0;
        qfree(v33);
      }
LABEL_59:
      v28 = (const char *)v70[0].m128i_i64[0];
      goto LABEL_60;
    }
    goto LABEL_127;
  }
LABEL_128:
  v41 = v70[0].m128i_i64[0];
LABEL_129:
  if ( v41 )
  {
    v70[0].m128i_i64[1] = 0;
    qfree(v41);
  }
  if ( src )
  {
    *(_QWORD *)&v69 = 0;
    qfree(src);
  }
  v20 = 0;
LABEL_30:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  return v20;
}
