unsigned __int64 __fastcall sub_682080(unsigned __int64 a1, double a2, double a3)
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
  __int64 v13; // rbp
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 *i; // r13
  __int64 v19; // rax
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  void *v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r12
  __int64 v27; // r15
  unsigned __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // rax
  char *v31; // rsi
  int v32; // edi
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 *v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  bool v39; // cf
  int v40; // eax
  int v41; // ebx
  __int64 v42; // r12
  __int64 v43; // r12
  unsigned __int64 v44; // r13
  int v45; // eax
  __int64 v46; // r14
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // r10
  int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // r8
  __int64 v54; // r10
  unsigned __int64 v55; // r11
  char *v56; // rsi
  __int64 v57; // rax
  _QWORD *v58; // r12
  __int64 *v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rax
  _QWORD *v62; // rdx
  __int64 v63; // rcx
  __int64 *v65; // [rsp+20h] [rbp-248h]
  void *v66; // [rsp+20h] [rbp-248h]
  unsigned __int64 v67; // [rsp+28h] [rbp-240h]
  unsigned __int64 v68; // [rsp+28h] [rbp-240h]
  size_t na; // [rsp+30h] [rbp-238h]
  size_t n; // [rsp+30h] [rbp-238h]
  __int64 v71; // [rsp+38h] [rbp-230h]
  __int64 v72; // [rsp+38h] [rbp-230h]
  __int64 v73; // [rsp+40h] [rbp-228h] BYREF
  unsigned __int64 v74; // [rsp+48h] [rbp-220h] BYREF
  void *v75; // [rsp+50h] [rbp-218h] BYREF
  __int128 v76; // [rsp+58h] [rbp-210h]
  void *v77; // [rsp+70h] [rbp-1F8h] BYREF
  __int128 v78; // [rsp+78h] [rbp-1F0h]
  void *v79; // [rsp+90h] [rbp-1D8h] BYREF
  __int128 v80; // [rsp+98h] [rbp-1D0h]
  char *s2; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v82; // [rsp+B8h] [rbp-1B0h]
  void *v83; // [rsp+D0h] [rbp-198h] BYREF
  __int128 v84; // [rsp+D8h] [rbp-190h]
  _BYTE src[10]; // [rsp+21Eh] [rbp-4Ah] BYREF
  unsigned __int64 v86[8]; // [rsp+228h] [rbp-40h] BYREF

  v86[0] = __readfsqword(0x28u);
  v3 = *(__m128i **)(a1 + 1672);
  if ( v3[101].m128i_i64[1] != -1 )
    return v86[0] - __readfsqword(0x28u);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 152) == 2 )
    v6 = sub_5075C0((__int64)&v3[101].m128i_i64[1], (__int64)v5, (__int64)"$ segs", 192);
  else
    v6 = sub_507E70((_QWORD *)a1, (__int64)&v3[101].m128i_i64[1], v5, (__int64)"$ segs", 192);
  if ( !v6 )
    sub_387C60(1269);
  v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B37458), (__m128i)(unsigned __int64)sub_67DB20);
  v3[105] = v7;
  sub_51E650(a1, (__int64)sub_67EEF0, (__int64)sub_67DAD0, (__int64)sub_67D980);
  sub_50F560(*(_QWORD **)(a1 + 1672));
  v8 = *(_QWORD *)(a1 + 632);
  if ( v8 )
    netnode_check(v8 + 104, "$ ignore micro", 0, 1);
  sub_437780(a1);
  sub_4D0400(a1);
  sub_608BD0(a1);
  sub_587120(*(_QWORD *)(a1 + 1672));
  sub_69A900(a1);
  sub_6906B0(a1);
  sub_52FC80();
  sub_52CF80(a1);
  sub_3DAD10(*(__int64 **)(a1 + 1672));
  netnode_check(&v73, "$ segstrings", 0, 0);
  if ( (unsigned __int8)sub_7BE6E0(a1, &v73) )
  {
    v13 = v73;
    goto LABEL_12;
  }
  v15 = sub_634EF0(a1, (__int64)&v73, v9, v10, v11, v12);
  v7.m128i_i64[0] = 0;
  v75 = nullptr;
  v16 = v15;
  v17 = *(_QWORD *)(a1 + 1672);
  v77 = nullptr;
  v79 = nullptr;
  s2 = nullptr;
  v76 = 0;
  v78 = 0;
  v80 = 0;
  v82 = 0;
  for ( i = sub_506150(v17 + 1624); i; i = sub_505EB0(*(_QWORD *)(a1 + 1672) + 1624LL, *i) )
  {
    if ( *((_BYTE *)i + 184) == 6 )
    {
      v29 = v78;
      v30 = v82;
      v31 = s2;
      LODWORD(v83) = v78;
      v32 = v78;
      v33 = v82 + 1;
      if ( &v83 < (void **)s2 || &v83 >= (void **)&s2[4 * *((_QWORD *)&v82 + 1)] )
      {
        if ( *((_QWORD *)&v82 + 1) < v33 )
        {
          s2 = (char *)qvector_reserve(&s2, s2, v33, 4);
          v31 = s2;
          v32 = (int)v83;
          v30 = v82;
        }
        *(_DWORD *)&v31[4 * v30] = v32;
      }
      else
      {
        if ( *((_QWORD *)&v82 + 1) < v33 )
        {
          s2 = (char *)qvector_reserve(&s2, s2, v33, 4);
          v31 = s2;
          v30 = v82;
        }
        *(_DWORD *)&v31[4 * v30] = v29;
      }
      *(_QWORD *)&v82 = v82 + 1;
    }
    v24 = (void *)i[2];
    v25 = v78;
    v26 = v77;
    v27 = *((_QWORD *)&v78 + 1);
    v83 = v24;
    v28 = v78 + 1;
    if ( &v83 < v77 || &v83 >= (void **)((char *)v77 + 8 * *((_QWORD *)&v78 + 1)) )
    {
      if ( *((_QWORD *)&v78 + 1) < v28 )
      {
        v26 = (_QWORD *)qvector_reserve(&v77, 0, v28, 8);
        v34 = *((_QWORD *)&v78 + 1);
        *((_QWORD *)&v78 + 1) = v27;
        v35 = (__int64 *)v77;
        v36 = v78 - 1;
        if ( (__int64)v78 - 1 >= 0 )
        {
          v37 = v26;
          do
          {
            v38 = *v35;
            ++v37;
            ++v35;
            *(v37 - 1) = v38;
            v39 = v36-- == 0;
          }
          while ( !v39 );
          v35 = (__int64 *)v77;
        }
        qfree(v35);
        v25 = v78;
        v77 = v26;
        *((_QWORD *)&v78 + 1) = v34;
      }
      v26[v25] = v83;
    }
    else
    {
      if ( *((_QWORD *)&v78 + 1) < v28 )
      {
        v66 = v24;
        v26 = (_QWORD *)qvector_reserve(&v77, 0, v28, 8);
        v59 = (__int64 *)v77;
        v60 = *((_QWORD *)&v78 + 1);
        *((_QWORD *)&v78 + 1) = v27;
        v61 = v78 - 1;
        if ( (__int64)v78 - 1 >= 0 )
        {
          v62 = v26;
          do
          {
            v63 = *v59;
            ++v62;
            ++v59;
            *(v62 - 1) = v63;
            v39 = v61-- == 0;
          }
          while ( !v39 );
          v59 = (__int64 *)v77;
        }
        qfree(v59);
        v25 = v78;
        v77 = v26;
        v24 = v66;
        *((_QWORD *)&v78 + 1) = v60;
      }
      v26[v25] = v24;
    }
    v19 = v80;
    *(_QWORD *)&v78 = v78 + 1;
    v20 = v79;
    v21 = i[6];
    if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v80 + 1) )
    {
      v79 = (void *)qvector_reserve(&v79, v79, v80 + 1, 8);
      v20 = v79;
      v19 = v80;
    }
    v20[v19] = v21;
    *(_QWORD *)&v80 = v80 + 1;
    v22 = i[2];
    if ( !v22 )
    {
      v23 = i[3];
      if ( !v23 )
        continue;
LABEL_25:
      if ( v23 < v16 )
        v23 += v16;
      if ( netnode_get_name(v23, &v75) > 0 )
        i[3] = (int)sub_5135D0(a1, (const char *)&v75);
      else
        i[3] = 0;
      goto LABEL_29;
    }
    if ( v22 < v16 )
      v22 += v16;
    if ( netnode_get_name(v22, &v75) > 0 )
    {
      v40 = sub_513300(a1, *i, (const char *)&v75);
      v23 = i[3];
      i[2] = v40;
      if ( v23 )
        goto LABEL_25;
    }
    else
    {
      v23 = i[3];
      i[2] = 0;
      if ( v23 )
        goto LABEL_25;
    }
LABEL_29:
    update_segm(i);
  }
  v41 = 0;
  v42 = 0;
  if ( (_QWORD)v82 )
  {
    while ( 1 )
    {
      v84 = 0;
      v83 = nullptr;
      v83 = (void *)qvector_reserve(&v83, 0, 1, 1);
      *((_BYTE *)v83 + v84) = 1;
      *(_QWORD *)&v84 = v84 + 1;
      v43 = *(int *)&s2[4 * v42];
      v65 = (__int64 *)sub_505DE0(*(_QWORD *)(a1 + 1672) + 1624LL, v43);
      v44 = v16 + *((_QWORD *)v77 + v43);
      v45 = netnode_altval(v44, -1, 65);
      v46 = (unsigned int)(v45 - 1);
      v47 = 0;
      if ( v45 > 0 )
        break;
LABEL_74:
      v58 = *(_QWORD **)(a1 + 1672);
      v74 = sub_3BDD60(v58, *v65);
      sub_7BE7C0(&v74, *v58, 29, v83, v84, 83);
      if ( v83 )
      {
        *(_QWORD *)&v84 = 0;
        qfree(v83);
      }
      v42 = ++v41;
      if ( v41 >= (unsigned __int64)v82 )
        goto LABEL_77;
    }
    while ( 2 )
    {
      v48 = netnode_altval(v44, v47, 65);
      if ( (_QWORD)v78 )
      {
        v49 = -1;
        v50 = 0;
        v51 = 0;
        do
        {
          if ( v48 == v16 + *((_QWORD *)v77 + v51) )
            v49 = *((_QWORD *)v79 + v51);
          v51 = ++v50;
        }
        while ( v50 < (unsigned __int64)v78 );
        if ( v49 != -1 )
        {
          v52 = pack_dq(src, v86, v49) - (_QWORD)src;
          v53 = v52;
          if ( v52 )
          {
            v54 = v84;
            v55 = v84 + v52;
            if ( !__CFADD__((_QWORD)v84, v52) )
              goto LABEL_68;
            if ( (unsigned __int64)v84 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v55 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_68:
              v56 = (char *)v83;
              v57 = v84;
              if ( *((_QWORD *)&v84 + 1) < v55 )
              {
                v72 = v84;
                n = v53;
                v68 = v55;
                v83 = (void *)qvector_reserve(&v83, v83, v55, 1);
                v56 = (char *)v83;
                v54 = v72;
                v57 = v84;
                v53 = n;
                v55 = v68;
              }
              v71 = v54;
              na = v53;
              v67 = v55;
              memset(&v56[v57], 0, v55 - v57);
              v53 = na;
              v54 = v71;
              *(_QWORD *)&v84 = v67;
            }
            else if ( (_QWORD)v84 != 0x7FFFFFFFFFFFFFFFLL )
            {
              *(_QWORD *)&v84 = 0x7FFFFFFFFFFFFFFFLL;
            }
            memcpy((char *)v83 + v54, src, v53);
          }
        }
      }
      if ( v46 == v47 )
        goto LABEL_74;
      ++v47;
      continue;
    }
  }
LABEL_77:
  sub_504B40(*(_QWORD *)(a1 + 1672) + 1624LL);
  v13 = sub_50ECB0(a1);
  if ( s2 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(s2);
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
LABEL_12:
  sub_514010(*(_QWORD *)(a1 + 1672), v13);
  sub_51CE10(a1);
  sub_5B4140(a1);
  sub_624200(a1);
  sub_642970(a1);
  sub_4F2C00(a1);
  sub_5D6D80(a1, *(double *)v7.m128i_i64, a3);
  sub_689F00(a1);
  netnode_check(*(_QWORD *)(**(_QWORD **)(a1 + 1872) + 1672LL) + 2448LL, "$ enums", 0, 1);
  sub_4220E0(a1);
  sub_3C7310(*(__m128i **)(a1 + 1672));
  sub_3C7900(*(__m128i **)(a1 + 1672));
  sub_63C680(a1);
  sub_453AC0(a1);
  sub_4345B0(a1);
  if ( dword_2CCC3C8 )
    sub_387AC0();
  s2 = (char *)-1LL;
  netnode_check(&s2, "$ intermediate updates", 0, 1);
  v83 = &dword_0 + 1;
  netnode_supset(s2, 0, &v83, 8, 65, v14);
  sub_531110(*(_QWORD *)(a1 + 1872));
  sub_52D080(a1);
  sub_3A57D0(a1);
  if ( !byte_2CCB4CB )
    sub_67F2D0(*(_QWORD *)(a1 + 1672));
  sub_511440(a1);
  return sub_6BB310(*(_QWORD *)(a1 + 1672));
}
