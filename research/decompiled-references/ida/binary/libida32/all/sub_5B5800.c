__int64 __fastcall sub_5B5800(__int64 *a1, __int64 a2, const void *a3)
{
  __int64 v4; // rdi
  unsigned int v6; // r14d
  char v7; // r13
  unsigned int v8; // r15d
  __int64 aflags; // rax
  __int64 v10; // rdx
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  __int64 v14; // r9
  int *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rbp
  __int64 v20; // rax
  char *i; // r12
  unsigned int *v22; // rax
  unsigned int *v23; // rbp
  __int64 v24; // rax
  char v25; // al
  void *v26; // r15
  char v27; // al
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // r8
  int *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al
  void **n; // [rsp+0h] [rbp-1B8h]
  int na; // [rsp+0h] [rbp-1B8h]
  size_t nb; // [rsp+0h] [rbp-1B8h]
  void *v38; // [rsp+8h] [rbp-1B0h]
  __int64 v39; // [rsp+10h] [rbp-1A8h]
  int v40; // [rsp+18h] [rbp-1A0h] BYREF
  int v41; // [rsp+1Ch] [rbp-19Ch] BYREF
  char *s2; // [rsp+20h] [rbp-198h] BYREF
  void *v43[2]; // [rsp+28h] [rbp-190h]
  int v44; // [rsp+38h] [rbp-180h]
  char *s1; // [rsp+40h] [rbp-178h] BYREF
  void *v46[2]; // [rsp+48h] [rbp-170h]
  int v47; // [rsp+58h] [rbp-160h]
  void *v48; // [rsp+60h] [rbp-158h] BYREF
  __int128 v49; // [rsp+68h] [rbp-150h]
  __int64 v50; // [rsp+78h] [rbp-140h]
  void *v51; // [rsp+80h] [rbp-138h] BYREF
  __int128 v52; // [rsp+88h] [rbp-130h]
  int v53; // [rsp+98h] [rbp-120h]
  __int64 v54; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-110h]
  __int64 v56; // [rsp+B0h] [rbp-108h]
  int v57; // [rsp+B8h] [rbp-100h] BYREF
  int v58; // [rsp+C0h] [rbp-F8h]
  int v59; // [rsp+C8h] [rbp-F0h]
  int v60; // [rsp+D0h] [rbp-E8h]
  int v61; // [rsp+D8h] [rbp-E0h]
  __int64 v62; // [rsp+E0h] [rbp-D8h]
  _QWORD v63[8]; // [rsp+178h] [rbp-40h] BYREF

  v63[0] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *a1;
  v6 = *(_DWORD *)a2;
  s2 = nullptr;
  *(_OWORD *)v43 = 0;
  v7 = sub_5B2430(v4, (unsigned int *)a2, (unsigned int *)&v40, &v41);
  if ( v7 )
  {
    v8 = v40;
    if ( v40 != -1 )
      sub_39F720((__int64)a1, v40, v40 + 1, 0x23u);
    if ( (get_aflags(v6) & 0x800) == 0 )
    {
      aflags = get_aflags(v8);
      v10 = v8;
      if ( (aflags & 0x800) != 0
        || (LODWORD(n) = v41, v20 = get_aflags((unsigned int)v41), v10 = (unsigned int)n, (v20 & 0x800) != 0) )
      {
        if ( (_DWORD)v10 != -1 )
        {
          HIDWORD(v38) = v10;
          n = &v51;
          v51 = nullptr;
          if ( (unsigned __int8)sub_674C60(a1, &v51, v10) )
          {
            get_aflags(HIDWORD(v38));
            sub_5FC4F0((int)a1, v6);
          }
          clear_tinfo_t(&v51);
        }
      }
    }
    if ( (get_aflags(v8) & 0x4000000) != 0 || (get_aflags((unsigned int)v41) & 0x4000000) != 0 )
      set_abits(v6, 0x4000000);
    if ( (sub_614FB0(*a1, 10) & 0x8000000) != 0 )
    {
      if ( (sub_3B9AA0((__int64)a1, v6, 4) & 0x4000) == 0 )
      {
        if ( !(unsigned __int8)sub_5AAB20(v6, v8) && !(unsigned __int8)sub_5AAB20(v6, v41) )
        {
          sub_4C2750(
            (int)a1,
            (int)n,
            v38,
            v39,
            v40,
            (int)s2,
            (int)v43[0],
            (int)v43[1],
            v44,
            (int)s1,
            (int)v46[0],
            (int)v46[1],
            v47,
            (int)v48,
            v49,
            *((__int64 *)&v49 + 1));
          v7 = 0;
        }
        goto LABEL_48;
      }
      *(_OWORD *)v46 = 0;
      s1 = nullptr;
      if ( (unsigned __int8)sub_5AA8A0((__int64 *)&s2, v8, a3)
        || (na = v41, (unsigned __int8)sub_5AA8A0((__int64 *)&s2, v41, a3)) )
      {
        if ( get_ea_name(&s1, v6, 512, 0) > 0 )
        {
          v19 = s1;
          i = s2;
          if ( strcmp(s1, s2) )
          {
            while ( *v19 == 106 )
            {
              if ( v19[1] != 95 )
                goto LABEL_58;
              v19 += 2;
            }
            v19 += *v19 == 46;
LABEL_58:
            while ( *i == 106 )
            {
              if ( i[1] != 95 )
                goto LABEL_60;
              i += 2;
            }
            i += *i == 46;
LABEL_60:
            v48 = nullptr;
            v51 = nullptr;
            v49 = 0;
            v52 = 0;
            v25 = decorate_name(&v48, v19, 0, 16, 0);
            v26 = v51;
            if ( !v25 )
              goto LABEL_114;
            v27 = decorate_name(&v51, i, 0, 16, 0);
            v26 = v51;
            if ( !v27 )
              goto LABEL_114;
            v19 = (char *)haystack;
            if ( (_QWORD)v49 )
            {
              v19 = (char *)v48;
              v28 = *(_BYTE *)v48;
              if ( *(_BYTE *)v48 == 106 )
              {
                while ( v19[1] == 95 )
                {
                  v28 = v19[2];
                  v19 += 2;
                  if ( v28 != 106 )
                    goto LABEL_110;
                }
              }
              else
              {
LABEL_110:
                if ( v28 == 46 )
                  ++v19;
              }
            }
            if ( (_QWORD)v52 )
            {
              v34 = *(_BYTE *)v51;
              for ( i = (char *)v51; v34 == 106; i += 2 )
              {
                if ( i[1] != 95 )
                  goto LABEL_82;
                v34 = i[2];
              }
              if ( v34 == 46 )
                ++i;
              goto LABEL_82;
            }
            i = (char *)haystack;
            if ( *v19 == 95 )
            {
              do
              {
                ++v19;
LABEL_82:
                ;
              }
              while ( *v19 == 95 );
              while ( *i == 95 )
                ++i;
            }
            if ( strcmp(v19, i) )
            {
LABEL_114:
              nb = sub_5A9C60(v19);
              if ( nb != sub_5A9C60(i) || strncmp(v19, i, nb) )
              {
                if ( v26 )
                {
                  *(_QWORD *)&v52 = 0;
                  qfree(v26);
                }
                if ( v48 )
                {
                  *(_QWORD *)&v49 = 0;
                  qfree(v48);
                }
                goto LABEL_66;
              }
            }
            if ( v26 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v26);
            }
            if ( !v48 )
              goto LABEL_35;
            *(_QWORD *)&v49 = 0;
            qfree(v48);
            v19 = s1;
          }
LABEL_36:
          if ( v19 )
          {
            v46[0] = nullptr;
            qfree(v19);
          }
LABEL_48:
          v22 = sub_4EE820((__int64)(a1 + 203), v6);
          v23 = v22;
          if ( v22 )
          {
            v24 = *((_QWORD *)v22 + 1);
            if ( (v24 & 0x8000) != 0 )
            {
              v23 = sub_4EE820((__int64)(a1 + 203), v23[4]);
              v24 = *((_QWORD *)v23 + 1);
            }
          }
          else
          {
            v24 = 0;
          }
          LOBYTE(v24) = v24 | 0x80;
          *((_QWORD *)v23 + 1) = v24;
          if ( v7 && (sub_614FB0(*a1, 10) & 0x4000000) != 0 )
            *((_QWORD *)v23 + 1) |= 0x40uLL;
          sub_5ACD60((__int64)a1, v23, 0);
          sub_396090(0x26u, v23);
          goto LABEL_55;
        }
      }
      else
      {
        if ( na != -1 )
          goto LABEL_35;
        if ( (sub_3B9AA0((__int64)a1, v8, 4) & 0x4000) != 0 )
          goto LABEL_35;
        v54 = -1;
        v56 = 0;
        v55 = 0xFFFFFFFFLL;
        v31 = &v57;
        do
        {
          *(_WORD *)v31 = 0;
          v31 += 6;
          *((_WORD *)v31 - 11) = 0;
          *((_WORD *)v31 - 10) = 0;
          *(v31 - 1) = 0;
          *((_WORD *)v31 - 9) = 0;
          *((_QWORD *)v31 - 2) = 0;
          *(v31 - 2) = 0;
        }
        while ( v63 != (_QWORD *)v31 );
        if ( (unsigned int)decode_insn(&v54, v8, v63, v29, v30, 0)
          && ((unsigned __int8)sub_4B5BC0(a1, (__int64)&v54, 3u) || (unsigned __int8)is_indirect_jump_insn(&v54)) )
        {
LABEL_35:
          v19 = s1;
          goto LABEL_36;
        }
        if ( get_ea_name(&s1, v6, 0, 0) > 0 )
        {
          if ( (unsigned __int8)sub_4C0DE0(
                                  a1,
                                  v8,
                                  s1,
                                  0x1800u,
                                  v32,
                                  v33,
                                  -1,
                                  (int)v38,
                                  v39,
                                  v40,
                                  (int)s2,
                                  v43[0],
                                  (__int64)v43[1],
                                  v44,
                                  (int)s1,
                                  v46[0],
                                  (__int64)v46[1],
                                  v47,
                                  (int)v48,
                                  v49,
                                  SDWORD2(v49),
                                  v50,
                                  (int)v51,
                                  v52,
                                  *((__int64 *)&v52 + 1),
                                  v53,
                                  v54,
                                  v55,
                                  v56,
                                  v57,
                                  v58,
                                  v59,
                                  v60,
                                  v61,
                                  v62) )
          {
            if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v6, 4) >> 8) & 0xC0) == 0 )
              sub_4B7790(a1, v8);
            if ( (get_aflags(v6) & 0x400) != 0 )
              set_abits(v8, 1024);
          }
          goto LABEL_35;
        }
      }
LABEL_66:
      if ( s1 )
      {
        v46[0] = nullptr;
        qfree(s1);
      }
      goto LABEL_15;
    }
  }
  v11 = sub_3BCF60((__int64)a1, v6);
  if ( (sub_614FB0(*a1, 10) & 0x10000000) == 0
    || (sub_3B9AA0((__int64)a1, v6, 4) & 0x4000) != 0
    || v11 != -1 && (sub_3B9AA0((__int64)a1, v11, 4) & 0x10000) != 0 && !(unsigned int)is_align_insn(v11) )
  {
    goto LABEL_15;
  }
  v54 = -1;
  v56 = 0;
  v55 = 0xFFFFFFFFLL;
  v15 = &v57;
  do
  {
    *(_WORD *)v15 = 0;
    v15 += 6;
    *((_WORD *)v15 - 11) = 0;
    *((_WORD *)v15 - 10) = 0;
    *(v15 - 1) = 0;
    *((_WORD *)v15 - 9) = 0;
    *((_QWORD *)v15 - 2) = 0;
    *(v15 - 2) = 0;
  }
  while ( v15 != (int *)v63 );
  if ( (int)decode_insn(&v54, v6, v63, 0, 0, v14) <= 0
    || !(unsigned __int8)sub_4B5BC0(a1, (__int64)&v54, 3u)
    || (v16 = *(_QWORD *)(*a1 + 1424),
        LODWORD(v51) = netnode_altval(*(unsigned int *)(v16 + 8), 0, 65) + 1,
        netnode_supset(*(unsigned int *)(v16 + 8), 0, &v51, 4, 65),
        sub_3573A0(&s2),
        !(unsigned __int8)sub_4C0DE0(
                            a1,
                            v6,
                            s2,
                            0x20u,
                            v17,
                            v18,
                            (int)n,
                            (int)v38,
                            v39,
                            v40,
                            (int)s2,
                            v43[0],
                            (__int64)v43[1],
                            v44,
                            (int)s1,
                            v46[0],
                            (__int64)v46[1],
                            v47,
                            (int)v48,
                            v49,
                            SDWORD2(v49),
                            v50,
                            (int)v51,
                            v52,
                            *((__int64 *)&v52 + 1),
                            v53,
                            v54,
                            v55,
                            v56,
                            v57,
                            v58,
                            v59,
                            v60,
                            v61,
                            v62)) )
  {
LABEL_15:
    v12 = 0;
    goto LABEL_16;
  }
  if ( (sub_614FB0(*a1, 10) & 0x4000000) != 0 )
  {
    *(_QWORD *)(a2 + 8) |= 0x40uLL;
    sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
  }
LABEL_55:
  v12 = 1;
LABEL_16:
  if ( s2 )
  {
    v43[0] = nullptr;
    qfree(s2);
  }
  return v12;
}

