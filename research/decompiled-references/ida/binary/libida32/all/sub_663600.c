unsigned __int64 __fastcall sub_663600(__int64 a1, double a2, double a3)
{
  __m128i *v3; // rbp
  const char *v5; // rsi
  char v6; // al
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rax
  unsigned int *i; // r12
  __int64 v18; // rax
  unsigned int v19; // r14d
  _DWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // r8d
  __int64 v24; // rax
  _DWORD *v25; // r14
  __int64 v26; // r15
  unsigned __int64 v27; // rdx
  int v28; // r14d
  __int64 v29; // rax
  char *v30; // rsi
  int v31; // edi
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  int *v34; // rdi
  __int64 v35; // rax
  _DWORD *v36; // rdx
  int v37; // ecx
  bool v38; // cf
  unsigned int v39; // eax
  int v40; // ebx
  __int64 v41; // r12
  unsigned int v42; // r14d
  int v43; // r13d
  unsigned int v44; // r12d
  int v45; // eax
  unsigned int v46; // r10d
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rax
  size_t v50; // r8
  __int64 v51; // r10
  unsigned __int64 v52; // r11
  char *v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // r12
  int v56; // eax
  __int64 v57; // rsi
  int *v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rax
  _DWORD *v61; // rdx
  int v62; // ecx
  int *v64; // [rsp+10h] [rbp-1B8h]
  unsigned int v65; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v66; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v67; // [rsp+20h] [rbp-1A8h]
  size_t na; // [rsp+30h] [rbp-198h]
  size_t n; // [rsp+30h] [rbp-198h]
  __int64 v70; // [rsp+38h] [rbp-190h]
  __int64 v71; // [rsp+38h] [rbp-190h]
  unsigned int v72; // [rsp+48h] [rbp-180h] BYREF
  int v73; // [rsp+4Ch] [rbp-17Ch] BYREF
  void *v74; // [rsp+50h] [rbp-178h] BYREF
  __int128 v75; // [rsp+58h] [rbp-170h]
  void *v76; // [rsp+70h] [rbp-158h] BYREF
  __int128 v77; // [rsp+78h] [rbp-150h]
  void *v78; // [rsp+90h] [rbp-138h] BYREF
  __int128 v79; // [rsp+98h] [rbp-130h]
  char *s2; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v81; // [rsp+B8h] [rbp-110h]
  void *ptr; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v83; // [rsp+D8h] [rbp-F0h]
  _BYTE src[5]; // [rsp+183h] [rbp-45h] BYREF
  unsigned __int64 v85[8]; // [rsp+188h] [rbp-40h] BYREF

  v85[0] = __readfsqword(0x28u);
  v3 = *(__m128i **)(a1 + 1480);
  if ( v3[97].m128i_i32[0] != -1 )
    return v85[0] - __readfsqword(0x28u);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 152) == 2 )
    v6 = sub_4EFFD0((__int64)v3[97].m128i_i64, (__int64)v5, (__int64)"$ segs", 104);
  else
    v6 = sub_4F0870((_QWORD *)a1, v3 + 97, v5, (__int64)"$ segs", 104);
  if ( !v6 )
    sub_383F40(1269);
  v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B0D498), (__m128i)(unsigned __int64)sub_65FA80);
  v3[100] = v7;
  sub_5066A0(a1, (__int64)sub_65F9A0, (__int64)sub_65FA30, (__int64)sub_65F880);
  sub_4F7DE0(*(_QWORD **)(a1 + 1480));
  v8 = *(_QWORD *)(a1 + 544);
  if ( v8 )
    netnode_check(v8 + 104, "$ ignore micro", 0, 1);
  sub_423870(a1);
  sub_4B95D0(a1);
  sub_5ECD10(a1);
  sub_56D5C0(*(_QWORD *)(a1 + 1480));
  sub_67A9B0(a1);
  sub_670D50(a1);
  sub_517880();
  sub_514CE0(a1);
  sub_3D4E50(*(__int64 **)(a1 + 1480));
  netnode_check(&v72, "$ segstrings", 0, 0);
  if ( (unsigned __int8)sub_79B370(a1, &v72) )
  {
    v13 = v72;
    goto LABEL_12;
  }
  v14 = sub_6180E0(a1, (__int64)&v72, v9, v10, v11, v12);
  v7.m128i_i64[0] = 0;
  v74 = nullptr;
  v15 = v14;
  v16 = *(_QWORD *)(a1 + 1480);
  v76 = nullptr;
  v78 = nullptr;
  s2 = nullptr;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  for ( i = sub_4EEBF0(v16 + 1552); i; i = sub_4EE960(*(_QWORD *)(a1 + 1480) + 1552LL, *i) )
  {
    if ( *((_BYTE *)i + 96) == 6 )
    {
      v28 = v77;
      v29 = v81;
      v30 = s2;
      LODWORD(ptr) = v77;
      v31 = v77;
      v32 = v81 + 1;
      if ( &ptr < (void **)s2 || &ptr >= (void **)&s2[4 * *((_QWORD *)&v81 + 1)] )
      {
        if ( *((_QWORD *)&v81 + 1) < v32 )
        {
          s2 = (char *)qvector_reserve(&s2, s2, v32, 4);
          v30 = s2;
          v31 = (int)ptr;
          v29 = v81;
        }
        *(_DWORD *)&v30[4 * v29] = v31;
      }
      else
      {
        if ( *((_QWORD *)&v81 + 1) < v32 )
        {
          s2 = (char *)qvector_reserve(&s2, s2, v32, 4);
          v30 = s2;
          v29 = v81;
        }
        *(_DWORD *)&v30[4 * v29] = v28;
      }
      *(_QWORD *)&v81 = v81 + 1;
    }
    v23 = i[2];
    v24 = v77;
    v25 = v76;
    v26 = *((_QWORD *)&v77 + 1);
    LODWORD(ptr) = v23;
    v27 = v77 + 1;
    if ( &ptr < v76 || &ptr >= (void **)((char *)v76 + 4 * *((_QWORD *)&v77 + 1)) )
    {
      if ( *((_QWORD *)&v77 + 1) < v27 )
      {
        v25 = (_DWORD *)qvector_reserve(&v76, 0, v27, 4);
        v33 = *((_QWORD *)&v77 + 1);
        *((_QWORD *)&v77 + 1) = v26;
        v34 = (int *)v76;
        v35 = v77 - 1;
        if ( (__int64)v77 - 1 >= 0 )
        {
          v36 = v25;
          do
          {
            v37 = *v34;
            ++v36;
            ++v34;
            *(v36 - 1) = v37;
            v38 = v35-- == 0;
          }
          while ( !v38 );
          v34 = (int *)v76;
        }
        qfree(v34);
        v24 = v77;
        v76 = v25;
        *((_QWORD *)&v77 + 1) = v33;
      }
      v25[v24] = (_DWORD)ptr;
    }
    else
    {
      if ( *((_QWORD *)&v77 + 1) < v27 )
      {
        v65 = v23;
        v25 = (_DWORD *)qvector_reserve(&v76, 0, v27, 4);
        v58 = (int *)v76;
        v59 = *((_QWORD *)&v77 + 1);
        *((_QWORD *)&v77 + 1) = v26;
        v60 = v77 - 1;
        if ( (__int64)v77 - 1 >= 0 )
        {
          v61 = v25;
          do
          {
            v62 = *v58;
            ++v61;
            ++v58;
            *(v61 - 1) = v62;
            v38 = v60-- == 0;
          }
          while ( !v38 );
          v58 = (int *)v76;
        }
        qfree(v58);
        v24 = v77;
        v76 = v25;
        v23 = v65;
        *((_QWORD *)&v77 + 1) = v59;
      }
      v25[v24] = v23;
    }
    v18 = v79;
    *(_QWORD *)&v77 = v77 + 1;
    v19 = i[7];
    v20 = v78;
    if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
    {
      v78 = (void *)qvector_reserve(&v78, v78, v79 + 1, 4);
      v20 = v78;
      v18 = v79;
    }
    v20[v18] = v19;
    *(_QWORD *)&v79 = v79 + 1;
    v21 = i[2];
    if ( !(_DWORD)v21 )
    {
      v22 = i[3];
      if ( !(_DWORD)v22 )
        continue;
LABEL_25:
      if ( (unsigned int)v22 < v15 )
        v22 = (unsigned int)v22 + v15;
      if ( netnode_get_name(v22, &v74) > 0 )
        i[3] = sub_4FBB40(a1, (const char *)&v74);
      else
        i[3] = 0;
      goto LABEL_29;
    }
    if ( (unsigned int)v21 < v15 )
      v21 = (unsigned int)v21 + v15;
    if ( netnode_get_name(v21, &v74) > 0 )
    {
      v39 = sub_4FB850(a1, *i, (const char *)&v74);
      v22 = i[3];
      i[2] = v39;
      if ( (_DWORD)v22 )
        goto LABEL_25;
    }
    else
    {
      i[2] = 0;
      v22 = i[3];
      if ( (_DWORD)v22 )
        goto LABEL_25;
    }
LABEL_29:
    update_segm(i);
  }
  v40 = 0;
  if ( (_QWORD)v81 )
  {
    while ( 1 )
    {
      v83 = 0;
      ptr = nullptr;
      ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
      *((_BYTE *)ptr + v83) = 1;
      *(_QWORD *)&v83 = v83 + 1;
      v41 = *(int *)&s2[4 * (_QWORD)i];
      v64 = (int *)sub_4EE890(*(_QWORD *)(a1 + 1480) + 1552LL, v41);
      v42 = v15 + *((_DWORD *)v76 + v41);
      v43 = netnode_altval(v42, 0xFFFFFFFFLL, 65);
      v44 = 0;
      if ( v43 > 0 )
        break;
LABEL_73:
      v55 = *(__int64 **)(a1 + 1480);
      v56 = sub_3B90A0(v55, *v64);
      v57 = *v55;
      v73 = v56;
      sub_79B440(&v73, v57, 29, ptr, v83, 83);
      if ( ptr )
      {
        *(_QWORD *)&v83 = 0;
        qfree(ptr);
      }
      i = (unsigned int *)++v40;
      if ( v40 >= (unsigned __int64)v81 )
        goto LABEL_76;
    }
    while ( 2 )
    {
      v45 = netnode_altval(v42, v44, 65);
      if ( (_QWORD)v77 )
      {
        v46 = -1;
        v47 = 0;
        v48 = 0;
        do
        {
          if ( v45 == v15 + *((_DWORD *)v76 + v48) )
            v46 = *((_DWORD *)v78 + v48);
          v48 = ++v47;
        }
        while ( v47 < (unsigned __int64)v77 );
        if ( v46 != -1 )
        {
          v49 = pack_dd(src, v85, v46) - (_QWORD)src;
          v50 = v49;
          if ( v49 )
          {
            v51 = v83;
            v52 = v83 + v49;
            if ( !__CFADD__((_QWORD)v83, v49) )
              goto LABEL_68;
            if ( (unsigned __int64)v83 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_68:
              v53 = (char *)ptr;
              v54 = v83;
              if ( *((_QWORD *)&v83 + 1) < v52 )
              {
                v71 = v83;
                n = v50;
                v67 = v52;
                ptr = (void *)qvector_reserve(&ptr, ptr, v52, 1);
                v53 = (char *)ptr;
                v51 = v71;
                v54 = v83;
                v50 = n;
                v52 = v67;
              }
              v70 = v51;
              na = v50;
              v66 = v52;
              memset(&v53[v54], 0, v52 - v54);
              v50 = na;
              v51 = v70;
              *(_QWORD *)&v83 = v66;
            }
            else if ( (_QWORD)v83 != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v83 = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy((char *)ptr + v51, src, v50);
          }
        }
      }
      if ( v43 == ++v44 )
        goto LABEL_73;
      continue;
    }
  }
LABEL_76:
  sub_4ED600((unsigned int *)(*(_QWORD *)(a1 + 1480) + 1552LL));
  v13 = sub_4F7540(a1);
  if ( s2 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(s2);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
LABEL_12:
  sub_4FC580(*(_QWORD *)(a1 + 1480), v13);
  sub_504ED0(a1);
  sub_599F60(a1);
  sub_607F00(a1);
  sub_6256D0(a1);
  sub_4DB3E0(a1);
  sub_5BBB30(a1, *(double *)v7.m128i_i64, a3);
  sub_66A900(a1);
  netnode_check(*(_QWORD *)(**(_QWORD **)(a1 + 1680) + 1480LL) + 2348LL, "$ enums", 0, 1);
  sub_40E9B0(a1);
  sub_3C2210(*(_QWORD *)(a1 + 1480));
  sub_3C27C0(*(__m128i **)(a1 + 1480));
  sub_61F570(a1);
  sub_43FEE0(a1);
  sub_4206E0(a1);
  if ( dword_2CA24C8 )
    sub_395C70((int)"HIDECANCEL\nUpgrading the database");
  sub_518BD0(*(_QWORD *)(a1 + 1680));
  sub_514DE0(a1);
  sub_3A1110(a1);
  if ( !byte_2CA15CB )
    sub_660E70(*(_QWORD *)(a1 + 1480));
  sub_4F99C0(a1);
  return sub_69A940(*(_QWORD *)(a1 + 1480));
}

