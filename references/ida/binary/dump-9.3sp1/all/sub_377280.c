__int64 __fastcall sub_377280(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, double a6, __m128 a7)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r13
  _QWORD *v12; // rdx
  _QWORD *i; // rax
  unsigned __int64 v14; // rbx
  char v15; // r14
  unsigned __int64 v16; // rbp
  void *v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  const char *v27; // rdx
  char v28; // r14
  __int64 func; // rax
  char v30; // al
  __int64 cmt; // rax
  __int64 v32; // rdi
  char v33; // al
  const char *v34; // r8
  const char *v35; // rcx
  __int64 (*v36)(__int64, __int64, const char *, ...); // r9
  char v37; // al
  __int64 v38; // rcx
  char v39; // al
  __int64 v40; // rdi
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  char v47; // al
  unsigned __int64 *segm_by_name; // rax
  unsigned __int64 *v49; // rax
  _BYTE *v50; // rsi
  __int64 v51; // rdx
  size_t v52; // r8
  __int64 v53; // r9
  _QWORD *v55; // [rsp+8h] [rbp-150h]
  _BYTE *v56; // [rsp+10h] [rbp-148h]
  _QWORD *v58; // [rsp+20h] [rbp-138h]
  __int64 v59; // [rsp+20h] [rbp-138h]
  char v60; // [rsp+37h] [rbp-121h]
  size_t v62; // [rsp+40h] [rbp-118h]
  __int64 v63; // [rsp+48h] [rbp-110h]
  unsigned __int64 *v64; // [rsp+50h] [rbp-108h] BYREF
  __int128 v65; // [rsp+58h] [rbp-100h]
  void *src; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v67; // [rsp+78h] [rbp-E0h]
  __m128i v68; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE haystack[24]; // [rsp+B0h] [rbp-A8h] BYREF
  int v70; // [rsp+C8h] [rbp-90h]
  __int64 v71[3]; // [rsp+D0h] [rbp-88h] BYREF
  char v72; // [rsp+E8h] [rbp-70h]
  char v73; // [rsp+F0h] [rbp-68h]
  unsigned __int64 v74; // [rsp+F8h] [rbp-60h]
  __int128 v75; // [rsp+100h] [rbp-58h]
  unsigned __int64 v76; // [rsp+118h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v65 = 0;
  v64 = nullptr;
  if ( a5 )
  {
    if ( sub_32A850(v71) == -1 )
    {
      segm_by_name = (unsigned __int64 *)get_segm_by_name();
      if ( segm_by_name )
      {
        a7 = (__m128)(segm_by_name[1] - *segm_by_name);
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*segm_by_name, (__m128i)a7);
        sub_316BB0((__int64 *)&v64, (__m128i *)haystack, *(double *)haystack, a7);
      }
      v49 = (unsigned __int64 *)get_segm_by_name();
      if ( v49 )
      {
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*v49, (__m128i)(v49[1] - *v49));
        sub_316BB0((__int64 *)&v64, (__m128i *)haystack, *(double *)haystack, a7);
      }
    }
    else
    {
      v68 = (__m128i)_mm_loadh_ps((const double *)v71);
      sub_316BB0((__int64 *)&v64, &v68, *(double *)v68.m128i_i64, a7);
    }
    v60 = 0;
    v9 = a1[141];
  }
  else
  {
    v9 = a1[141];
    v10 = *(_QWORD **)(v9 + 8);
    if ( v10 && *(_QWORD *)(v9 + 16) && (v11 = (_QWORD *)v10[1], v10 != v11) )
    {
      while ( (unsigned int)get_tinfo_property() != 128 )
      {
        if ( (*v11 & 2) == 0 )
        {
          v12 = (_QWORD *)v11[2];
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v44 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
            v45 = *v44;
            if ( (*v44 & 2) == 0 )
            {
              while ( (_QWORD *)v44[2] == v11 )
              {
                v11 = v44;
                v46 = v45 & 0xFFFFFFFFFFFFFFFCLL;
                v45 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v45 & 2) != 0 )
                {
                  v11 = (_QWORD *)v46;
                  goto LABEL_11;
                }
                v44 = (_QWORD *)v46;
              }
            }
            v11 = v44;
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
          v60 = 0;
          v9 = a1[141];
          goto LABEL_14;
        }
      }
      v60 = 1;
      v9 = a1[141];
    }
    else
    {
      v60 = 0;
    }
  }
LABEL_14:
  v71[2] = a3;
  v71[0] = (__int64)off_4E6330;
  v72 = 0;
  v71[1] = a2;
  v55 = *(_QWORD **)(v9 + 8);
  if ( !v55 || !*(_QWORD *)(v9 + 16) || (v14 = v55[1], v55 == (_QWORD *)v14) )
  {
LABEL_27:
    v19 = 1;
    goto LABEL_28;
  }
  v15 = 0;
  while ( 1 )
  {
    if ( a5 == ((get_tinfo_property() & 0xF) == 12) )
      goto LABEL_23;
    v16 = *(_QWORD *)(v14 + 24);
    src = nullptr;
    v67 = 0;
    if ( !(unsigned __int8)get_tid_name() || get_udm_by_fullname() == -1 )
    {
      if ( !a5 )
        break;
      v21 = a1[143];
      if ( !v21 )
        break;
      v22 = (_QWORD *)(v21 + 8);
      v23 = *(_QWORD **)(v21 + 16);
      if ( v23 )
      {
        v24 = v22;
        do
        {
          while ( 1 )
          {
            v25 = v23[2];
            v26 = v23[3];
            if ( v23[4] < v16 )
              break;
            v24 = v23;
            v23 = (_QWORD *)v23[2];
            if ( !v25 )
              goto LABEL_38;
          }
          v23 = (_QWORD *)v23[3];
        }
        while ( v26 );
LABEL_38:
        if ( v22 != v24 && v16 >= v24[4] )
          break;
      }
    }
LABEL_21:
    v17 = src;
    if ( src )
      goto LABEL_22;
LABEL_23:
    if ( (*(_QWORD *)v14 & 2) != 0 )
    {
LABEL_26:
      if ( v55 == (_QWORD *)v14 )
        goto LABEL_27;
    }
    else
    {
      v18 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)v18 & 2) == 0 )
      {
        do
        {
          v14 = v18;
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( (*(_BYTE *)v18 & 2) == 0 );
        goto LABEL_26;
      }
      v41 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      v42 = *v41;
      if ( (*v41 & 2) == 0 && v41[2] == v14 )
      {
        do
        {
          v14 = v42 & 0xFFFFFFFFFFFFFFFCLL;
          v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v42 & 2) != 0 )
            goto LABEL_26;
          v43 = v41;
          v41 = (_QWORD *)v14;
        }
        while ( *(_QWORD **)(v14 + 16) == v43 );
      }
      v14 = (unsigned __int64)v41;
      if ( v55 == v41 )
        goto LABEL_27;
    }
  }
  memset(&v68, 0, 24);
  if ( get_ea_name() <= 0 )
  {
LABEL_81:
    if ( v68.m128i_i64[0] )
    {
      v68.m128i_i64[1] = 0;
      qfree(v68.m128i_i64[0]);
    }
    goto LABEL_21;
  }
  if ( v15
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, __int64))(*(_QWORD *)a3 + 32LL))(
         a3,
         a2,
         &unk_4190BD,
         a4)
    && (!v60
     || (*(unsigned __int8 (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)a3 + 32LL))(
          a3,
          a2,
          "#define __thiscall __cdecl // Test compile in C mode\n\n")) )
  {
    calc_c_cpp_name();
    v27 = (const char *)v68.m128i_i64[0];
    v28 = 1;
    if ( !*(_BYTE *)v68.m128i_i64[0] )
      goto LABEL_58;
    v58 = (_QWORD *)a1[14];
    v28 = is_spec_ea();
    if ( v28 )
      goto LABEL_57;
    v28 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*v58 + 144LL))(v58, v16);
    if ( v28 )
      goto LABEL_57;
    func = get_func();
    if ( func )
    {
      if ( (*(_BYTE *)(func + 16) & 4) != 0 && (*(_BYTE *)(v58[12] + 607LL) & 1) == 0 )
      {
LABEL_125:
        v27 = (const char *)v68.m128i_i64[0];
        v28 = 1;
        goto LABEL_58;
      }
      v30 = sub_374D90(func);
      if ( v30 )
      {
        v27 = (const char *)v68.m128i_i64[0];
        v28 = v30;
LABEL_58:
        *(_QWORD *)&v67 = 0;
        if ( !(unsigned __int8)sub_32B7F0((__int64 *)&src, v14 + 80, v27) )
        {
          if ( !a5 )
          {
            sub_6B870((__int64 *)&src);
            if ( !v28 )
              goto LABEL_61;
            goto LABEL_91;
          }
          v15 = a5;
          goto LABEL_81;
        }
        if ( !a5 )
        {
          if ( !v28 )
            goto LABEL_61;
LABEL_91:
          v47 = (*(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  "// %s%s;",
                  (const char *)&unk_418793,
                  (const char *)src);
LABEL_92:
          if ( !v47 )
            goto LABEL_126;
          v38 = *(_QWORD *)a3;
          v36 = *(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL);
          if ( *(int *)(v14 + 88) <= 1 )
          {
            if ( *(_DWORD *)(v14 + 88) != 1 )
            {
LABEL_68:
              v39 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v38 + 32))(a3, a2, "\n");
              v40 = v68.m128i_i64[0];
              v15 = v39;
              if ( !v39 )
                goto LABEL_127;
              if ( v68.m128i_i64[0] )
              {
                v68.m128i_i64[1] = 0;
                qfree(v68.m128i_i64[0]);
              }
              v17 = src;
              if ( !src )
                goto LABEL_23;
LABEL_22:
              *(_QWORD *)&v67 = 0;
              qfree((__int64)v17);
              goto LABEL_23;
            }
            v34 = "idb";
          }
          else
          {
            v34 = "weak";
          }
          v35 = (const char *)&unk_418793;
          goto LABEL_65;
        }
        if ( !sub_317040(&v64, v16) )
        {
          if ( !v28 )
          {
LABEL_98:
            if ( (unsigned __int8)is_mapped() && !(unsigned __int8)is_spec_ea() )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, void *))(*(_QWORD *)a3 + 32LL))(
                      a3,
                      a2,
                      &unk_4190BD,
                      src) )
                goto LABEL_126;
              if ( (unsigned __int8)is_loaded() )
              {
                v75 = 0;
                v73 = 2;
                v74 = v16;
                *(_QWORD *)&haystack[16] = 0x5000000000LL;
                v70 = 2;
                v72 = 0;
                *(__m128i *)haystack = _mm_load_si128((const __m128i *)&xmmword_4249B0);
                print_cdata();
                free_idcv();
              }
              v33 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a3 + 32LL))(a3, a2, ";");
              goto LABEL_62;
            }
LABEL_61:
            v33 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a3 + 32LL))(
                    a3,
                    a2,
                    "%s;",
                    (const char *)src);
LABEL_62:
            if ( !v33 )
              goto LABEL_126;
            if ( *(int *)(v14 + 88) <= 1 )
            {
              if ( *(_DWORD *)(v14 + 88) != 1 )
              {
LABEL_67:
                v38 = *(_QWORD *)a3;
                goto LABEL_68;
              }
              v37 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a3 + 32LL))(
                      a3,
                      a2,
                      " %s%s",
                      "// ",
                      "idb");
LABEL_66:
              if ( !v37 )
                goto LABEL_126;
              goto LABEL_67;
            }
            v34 = "weak";
            v35 = "// ";
            v36 = *(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL);
LABEL_65:
            v37 = v36(a3, a2, " %s%s", v35, v34);
            goto LABEL_66;
          }
LABEL_116:
          v47 = (*(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  "// %s%s;",
                  "extern ",
                  (const char *)src);
          goto LABEL_92;
        }
        v50 = src;
        if ( (_QWORD)v67 )
        {
          v51 = v67 + 9;
          v52 = v67 - 1;
          v53 = v67 + 8;
          if ( *((_QWORD *)&v67 + 1) >= (unsigned __int64)(v67 + 9) )
            goto LABEL_122;
        }
        else
        {
          if ( *((_QWORD *)&v67 + 1) > 9u )
          {
            *(_QWORD *)&v67 = 10;
            *((_BYTE *)src + 9) = 0;
            goto LABEL_115;
          }
          v52 = 0;
          v51 = 10;
          v53 = 9;
        }
        v63 = v53;
        v62 = v52;
        v59 = v51;
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, v51, 1);
        v53 = v63;
        v50 = src;
        v52 = v62;
        v51 = v59;
LABEL_122:
        *(_QWORD *)&v67 = v51;
        v50[v53] = 0;
        v50 = src;
        if ( v52 )
        {
          v56 = src;
          memmove((char *)src + 9, src, v52);
          v50 = v56;
        }
LABEL_115:
        v50[8] = 32;
        *(_QWORD *)v50 = 0x6461657268745F5FLL;
        if ( !v28 )
          goto LABEL_98;
        goto LABEL_116;
      }
    }
    if ( (unsigned int)get_tinfo_property() - 208 > 0x2F )
    {
      memset(haystack, 0, sizeof(haystack));
      cmt = get_cmt();
      v32 = *(_QWORD *)haystack;
      if ( cmt > 0 )
      {
        v32 = *(_QWORD *)haystack;
        v28 = strstr(*(const char **)haystack, "vd:hide") != nullptr;
      }
      if ( v32 )
      {
        *(_QWORD *)&haystack[8] = 0;
        qfree(v32);
      }
LABEL_57:
      v27 = (const char *)v68.m128i_i64[0];
      goto LABEL_58;
    }
    goto LABEL_125;
  }
LABEL_126:
  v40 = v68.m128i_i64[0];
LABEL_127:
  if ( v40 )
  {
    v68.m128i_i64[1] = 0;
    qfree(v40);
  }
  if ( src )
  {
    *(_QWORD *)&v67 = 0;
    qfree((__int64)src);
  }
  v19 = 0;
LABEL_28:
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree((__int64)v64);
  }
  return v19;
}
