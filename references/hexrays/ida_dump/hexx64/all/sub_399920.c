__int64 __fastcall sub_399920(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdi
  _DWORD *v18; // rax
  __int32 v19; // edx
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  unsigned __int64 v25; // r14
  size_t v26; // r8
  __int64 v27; // r15
  __int64 v28; // r9
  __int64 v29; // rsi
  int v30; // eax
  int v31; // r14d
  const char *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  const char *v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  const char *v40; // rax
  unsigned __int64 v41; // r14
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 i; // rax
  const char *v45; // rsi
  const char *v46; // rdx
  const char *v47; // rcx
  __int64 v48; // rsi
  unsigned int type_ordinal; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // al
  unsigned int v53; // r8d
  char tinfo_property; // al
  __int64 v55; // rsi
  __int64 v56; // rax
  char v57; // al
  __int64 v58; // [rsp-10h] [rbp-1F0h]
  __int64 v59; // [rsp-8h] [rbp-1E8h]
  unsigned int v60; // [rsp+4h] [rbp-1DCh]
  unsigned __int64 v61; // [rsp+10h] [rbp-1D0h]
  __int64 v62; // [rsp+10h] [rbp-1D0h]
  void *v63; // [rsp+18h] [rbp-1C8h]
  void *v64; // [rsp+18h] [rbp-1C8h]
  void *v65; // [rsp+18h] [rbp-1C8h]
  __int64 v67; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+40h] [rbp-1A0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-198h] BYREF
  __m128i v70; // [rsp+50h] [rbp-190h] BYREF
  __int64 v71; // [rsp+60h] [rbp-180h]
  _DWORD *v72; // [rsp+70h] [rbp-170h] BYREF
  __int128 v73; // [rsp+78h] [rbp-168h]
  void *src; // [rsp+90h] [rbp-150h] BYREF
  __m128i v75; // [rsp+98h] [rbp-148h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-128h]
  __int64 v78; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v79; // [rsp+D8h] [rbp-108h]
  __int128 v80; // [rsp+E8h] [rbp-F8h]
  __int64 v81; // [rsp+F8h] [rbp-E8h]
  int v82; // [rsp+100h] [rbp-E0h]
  __int128 v83; // [rsp+110h] [rbp-D0h] BYREF
  void *v84; // [rsp+120h] [rbp-C0h] BYREF
  __m128i v85; // [rsp+128h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+138h] [rbp-A8h]
  __int128 v87; // [rsp+140h] [rbp-A0h]
  __int128 v88[3]; // [rsp+150h] [rbp-90h] BYREF
  __int64 v89; // [rsp+180h] [rbp-60h]
  int v90; // [rsp+188h] [rbp-58h]
  __int64 v91; // [rsp+190h] [rbp-50h]
  char v92; // [rsp+198h] [rbp-48h]
  unsigned __int64 v93; // [rsp+1A8h] [rbp-38h]

  v2 = a1[4];
  v93 = __readfsqword(0x28u);
  v79 = 0;
  v78 = 0;
  v81 = 0;
  v82 = 1;
  v80 = 0;
  v3 = sub_2574C0(v2, (__int64)a2, (__int64)&v78);
  if ( !(_BYTE)v3 )
    goto LABEL_11;
  v4 = _mm_loadu_si128(a2);
  v5 = a2[1].m128i_i64[0];
  v67 = 0;
  v71 = v5;
  v70 = v4;
  if ( !(unsigned __int8)sub_32E590((__int64)&v67, &v78) && sub_32E6D0((__int64)&v67, (__int64)&v78) )
  {
    v73 = 0;
    v72 = nullptr;
    v18 = (_DWORD *)qvector_reserve(&v72, 0, 8, 1);
    v72 = v18;
    *(_QWORD *)&v73 = 8;
    *v18 = 1970435187;
    *(_DWORD *)((char *)v18 + 3) = 1601463157;
    *((_BYTE *)v72 + 7) = 0;
    v19 = a2->m128i_i32[0];
    src = nullptr;
    v20 = a2->m128i_i64[1];
    v75 = 0;
    if ( v19 == 1 )
    {
      v21 = *(_DWORD *)(v20 + 8);
      if ( v21 != 65 )
      {
LABEL_25:
        if ( v21 == 64 )
        {
          sub_263730((__int64 *)&src, *(_QWORD *)(v20 + 24), v20 + 48, 0.0);
        }
        else
        {
          v84 = nullptr;
          v86 = 0;
          v89 = 1;
          v90 = -1;
          v91 = 0;
          v92 = 0;
          v83 = 0;
          v85 = 0;
          v87 = 0;
          v88[0] = 0;
          if ( (unsigned int)sub_38D3D0((__int64)a2, &v83, nullptr, nullptr) != -1 )
          {
            v22 = src;
            v23 = _mm_loadu_si128(&v75);
            v24 = _mm_loadu_si128(&v85);
            src = v84;
            v84 = v22;
            v75 = v24;
            v85 = v23;
          }
          clear_tinfo_t(v88);
          if ( v86 )
          {
            *(_QWORD *)&v87 = 0;
            qfree(v86);
          }
          if ( v84 )
          {
            v85.m128i_i64[0] = 0;
            qfree(v84);
          }
        }
        goto LABEL_32;
      }
      v37 = *(_QWORD *)(*(_QWORD *)(v20 + 24) + 432LL) + 104LL * *(int *)(v20 + 32);
    }
    else
    {
      if ( v19 != 2 )
      {
LABEL_24:
        v21 = *(_DWORD *)(v20 + 8);
        goto LABEL_25;
      }
      v37 = v20;
    }
    if ( v37 )
    {
      if ( &src == (void **)(v37 + 32) || (v38 = *(_QWORD *)(v37 + 40), v38 < 2) )
      {
LABEL_39:
        v30 = 0;
        if ( (_QWORD)v73 )
          v30 = v73 - 1;
        v31 = 0;
        v63 = (void *)v30;
        v61 = v30 + 1LL;
        while ( 1 )
        {
          v32 = s1;
          if ( (_QWORD)v73 )
            v32 = (const char *)v72;
          if ( !(unsigned int)get_named_type(0, v32, 1, 0, 0, 0, 0, 0, 0) )
            break;
          if ( ++v31 )
          {
            v33 = (__int64)v72;
            v34 = (__int64)v72;
            if ( v63 )
            {
              v39 = v73;
              if ( (unsigned __int64)v73 < v61 )
              {
                if ( *((_QWORD *)&v73 + 1) < v61 )
                {
                  v34 = qvector_reserve(&v72, v72, v61, 1);
                  v72 = (_DWORD *)v34;
                  v39 = v73;
                }
                memset((void *)(v34 + v39), 0, v61 - v39);
                v33 = (__int64)v72;
                *(_QWORD *)&v73 = v61;
              }
              else if ( v61 != (_QWORD)v73 )
              {
                *(_QWORD *)&v73 = v61;
              }
              *((_BYTE *)v63 + v33) = 0;
            }
            else if ( v72 )
            {
              *(_QWORD *)&v73 = 0;
              qfree(v72);
              v72 = nullptr;
              *((_QWORD *)&v73 + 1) = 0;
            }
            sub_FAAD0((__int64 *)&v72, (__int64)"_%d", v31);
          }
        }
        v76 = 0;
        v40 = s1;
        v77 = 0;
        if ( (_QWORD)v73 )
          v40 = (const char *)v72;
        print_tinfo(&v76, 0, 2, 32, 15, &v67, v40, 0);
        v41 = v77;
        v42 = v58;
        v43 = v59;
        for ( i = v77; v41 > 1; i = v41 )
        {
          v55 = v76;
          if ( *(_BYTE *)(v76 + v41 - 2) != 10 )
          {
            i = v41;
            goto LABEL_76;
          }
          if ( (__int64)(v41 - 1) > 1 )
          {
            if ( *((_QWORD *)&v77 + 1) < v41 - 1 )
            {
              v76 = qvector_reserve(&v76, v76, v41 - 1, 1);
              v55 = v76;
            }
            *(_QWORD *)&v77 = v41 - 1;
            *(_BYTE *)(v55 + v41 - 2) = 0;
            v41 = v77;
          }
          else if ( v76 )
          {
            *(_QWORD *)&v77 = 0;
            qfree(v76);
            v76 = 0;
            v41 = v77;
            *((_QWORD *)&v77 + 1) = 0;
          }
        }
        while ( 1 )
        {
LABEL_76:
          v46 = s1;
          if ( i )
            v46 = (const char *)v76;
          if ( !(unsigned __int8)sub_382A60(
                                   (__int64)&v76,
                                   0,
                                   (__int64)v46,
                                   (__int64)"The following new type will be created",
                                   v42,
                                   v43) )
            break;
          v47 = s1;
          if ( (_QWORD)v77 )
            v47 = (const char *)v76;
          if ( (unsigned __int8)parse_decl(&v67, &v72, 0, v47, 4) )
          {
            if ( !(unsigned int)save_tinfo(&v67, 0, 0, v72, 1) )
              goto LABEL_111;
            v48 = (__int64)v72;
            type_ordinal = get_type_ordinal(0);
            if ( type_ordinal )
            {
              *((_QWORD *)&v83 + 1) = type_ordinal;
              v60 = type_ordinal;
              v69 = 0;
              LOWORD(v84) = 257;
              *(_QWORD *)&v83 = get_idati(257, v48, v50, v51);
              v52 = create_tinfo(&v69, 61, 189, &v83);
              v53 = v60;
              if ( !v52
                || (tinfo_property = get_tinfo_property(v69, 2), v53 = v60, !tinfo_property)
                || (v56 = get_tinfo_property(v69, 5), v53 = v60, v56)
                || (v57 = get_tinfo_property(v69, 2), v53 = v60, (v57 & 0x3F) == 0x30) )
              {
                if ( !(unsigned int)save_tinfo(&v67, 0, v53, v72, 4) )
                {
                  clear_tinfo_t(&v69);
LABEL_111:
                  v4.m128i_i64[0] = 0;
                  v68 = 0;
                  v83 = 0;
                  v69 = 0;
                  copy_tinfo_t((char *)&v83 + 8, &v69);
                  v84 = nullptr;
                  copy_tinfo_t(&v84, &v68);
                  v85.m128i_i32[0] = 0;
                  v85.m128i_i16[2] = 0;
                  clear_tinfo_t(&v69);
                  clear_tinfo_t(&v68);
                  copy_tinfo_t(&v83, &v67);
                  create_tinfo(&v67, 10, 10, &v83);
                  clear_tinfo_t(&v84);
                  clear_tinfo_t((char *)&v83 + 8);
                  clear_tinfo_t(&v83);
                  if ( v76 )
                  {
                    *(_QWORD *)&v77 = 0;
                    qfree(v76);
                  }
                  if ( src )
                  {
                    v75.m128i_i64[0] = 0;
                    qfree(src);
                  }
                  if ( v72 )
                  {
                    *(_QWORD *)&v73 = 0;
                    qfree(v72);
                  }
                  goto LABEL_3;
                }
              }
              clear_tinfo_t(&v69);
            }
            v45 = s1;
            if ( (_QWORD)v73 )
              v45 = (const char *)v72;
            sub_2B4E70((__int64)"Could not create %s, maybe it already exists?", v45);
          }
          i = v77;
        }
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree(v76);
        }
        if ( src )
        {
          v75.m128i_i64[0] = 0;
          qfree(src);
        }
        if ( v72 )
        {
          *(_QWORD *)&v73 = 0;
          qfree(v72);
        }
        goto LABEL_52;
      }
      v64 = *(void **)(v37 + 32);
      src = (void *)qvector_reserve(&src, 0, *(_QWORD *)(v37 + 40), 1);
      v75.m128i_i64[0] = v38;
      memmove(src, v64, v38 - 1);
      *((char *)src + v38 - 1) = 0;
LABEL_32:
      v25 = v75.m128i_i64[0];
      if ( v75.m128i_i64[0] )
      {
        v26 = v75.m128i_i64[0] - 1;
        if ( v75.m128i_i64[0] != 1 )
        {
          v27 = v73;
          v28 = v75.m128i_i64[0] - 1;
          if ( (_QWORD)v73 )
          {
            v27 = v73 - 1;
            v28 = v26 + v73 - 1;
            v25 = v75.m128i_i64[0] + v73 - 1;
          }
          v29 = (__int64)v72;
          if ( *((_QWORD *)&v73 + 1) < v25 )
          {
            v62 = v28;
            v65 = (void *)(v75.m128i_i64[0] - 1);
            v72 = (_DWORD *)qvector_reserve(&v72, v72, v25, 1);
            v28 = v62;
            v29 = (__int64)v72;
            v26 = (size_t)v65;
          }
          *(_QWORD *)&v73 = v25;
          *(_BYTE *)(v29 + v28) = 0;
          memcpy((char *)v72 + v27, src, v26);
        }
      }
      goto LABEL_39;
    }
    goto LABEL_24;
  }
LABEL_3:
  v6 = v70.m128i_i64[1];
  if ( v70.m128i_i32[0] != 1 )
  {
    if ( v70.m128i_i32[0] != 2 )
    {
      v7 = *(_DWORD *)(v70.m128i_i64[1] + 8);
LABEL_6:
      if ( v7 != 64 )
        goto LABEL_7;
      apply_tinfo(*(_QWORD *)(v70.m128i_i64[1] + 24), &v67, 1);
      v35 = a1[16];
      *(_QWORD *)(v35 + 1344) = a1[3];
      *(_QWORD *)(v35 + 1352) = a1[4];
      sub_3901D0((__int64)a1);
LABEL_52:
      clear_tinfo_t(&v67);
      goto LABEL_11;
    }
    if ( !v70.m128i_i64[1] )
    {
      v7 = 0;
      goto LABEL_6;
    }
LABEL_51:
    sub_398E20((__int64)a1, v6, &v67, 0, *(double *)v4.m128i_i64);
    goto LABEL_52;
  }
  v7 = *(_DWORD *)(v70.m128i_i64[1] + 8);
  if ( v7 != 65 )
    goto LABEL_6;
  v6 = *(_QWORD *)(*(_QWORD *)(v70.m128i_i64[1] + 24) + 432LL) + 104LL * *(int *)(v70.m128i_i64[1] + 32);
  if ( v6 )
    goto LABEL_51;
LABEL_7:
  *(_QWORD *)&v83 = 0;
  v8 = sub_38D3D0((__int64)&v70, nullptr, (__int64 *)&v83, nullptr);
  if ( v8 == -1 )
  {
    clear_tinfo_t(&v83);
    goto LABEL_52;
  }
  v9 = set_tinfo_property4(&v83, 12, v8, &v67, 0, 4);
  if ( v9 )
  {
    v36 = (const char *)tinfo_errstr(v9, 12);
    sub_2B4E70((__int64)"%s failed: %s", "Setting field type", v36);
    v3 = 0;
  }
  else
  {
    v10 = a1[16];
    *(_QWORD *)(v10 + 1344) = a1[3];
    *(_QWORD *)(v10 + 1352) = a1[4];
    sub_3901D0((__int64)a1);
  }
  clear_tinfo_t(&v83);
  clear_tinfo_t(&v67);
LABEL_11:
  v11 = v78;
  if ( v78 )
  {
    v12 = v79;
    if ( (_QWORD)v79 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 144 * v13);
        clear_tinfo_t(v14 + 8);
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16);
        }
        ++v13;
        v11 = v78;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v79 = 0;
    qfree(v11);
  }
  return v3;
}
