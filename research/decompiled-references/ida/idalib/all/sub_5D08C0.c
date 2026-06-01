__int64 __fastcall sub_5D08C0(__int64 *a1, unsigned __int64 *a2, const void *a3)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // r14
  char v7; // r13
  void **v8; // r15
  __int64 aflags; // rax
  void **v10; // rdx
  unsigned __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  int *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rbp
  __int64 v22; // rax
  char *i; // r12
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // rbp
  __int64 v26; // rax
  char v27; // al
  void *v28; // r15
  char v29; // al
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // r8
  int *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // al
  void **n; // [rsp+0h] [rbp-248h]
  size_t na; // [rsp+0h] [rbp-248h]
  size_t nb; // [rsp+0h] [rbp-248h]
  void **v40; // [rsp+8h] [rbp-240h]
  void *v41; // [rsp+10h] [rbp-238h] BYREF
  int v42[2]; // [rsp+18h] [rbp-230h] BYREF
  char *s2; // [rsp+20h] [rbp-228h] BYREF
  void *v44[2]; // [rsp+28h] [rbp-220h]
  int v45; // [rsp+38h] [rbp-210h]
  char *s1; // [rsp+40h] [rbp-208h] BYREF
  void *v47[2]; // [rsp+48h] [rbp-200h]
  int v48; // [rsp+58h] [rbp-1F0h]
  void *v49; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v50; // [rsp+68h] [rbp-1E0h]
  __int64 v51; // [rsp+78h] [rbp-1D0h]
  void *v52; // [rsp+80h] [rbp-1C8h] BYREF
  __int128 v53; // [rsp+88h] [rbp-1C0h]
  int v54; // [rsp+98h] [rbp-1B0h]
  __int128 v55; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-198h]
  __int64 v57; // [rsp+B8h] [rbp-190h]
  __int64 v58; // [rsp+C0h] [rbp-188h]
  int v59; // [rsp+C8h] [rbp-180h] BYREF
  int v60; // [rsp+D0h] [rbp-178h]
  int v61; // [rsp+D8h] [rbp-170h]
  __int64 v62; // [rsp+E0h] [rbp-168h]
  _QWORD v63[8]; // [rsp+208h] [rbp-40h] BYREF

  v63[0] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *a1;
  v6 = *a2;
  s2 = nullptr;
  *(_OWORD *)v44 = 0;
  v7 = sub_5CD340(v4, a2, (__int64 *)&v41, v42);
  if ( v7 )
  {
    v8 = (void **)v41;
    if ( v41 != (void *)-1LL )
      sub_3A4190((__int64)a1, (char *)v41, (char *)v41 + 1, 0x23u);
    if ( (get_aflags(v6) & 0x800) == 0 )
    {
      aflags = get_aflags(v8);
      v10 = v8;
      if ( (aflags & 0x800) != 0 || (n = *(void ***)v42, v22 = get_aflags(*(_QWORD *)v42), v10 = n, (v22 & 0x800) != 0) )
      {
        if ( v10 != (void **)-1LL )
        {
          v40 = v10;
          n = &v52;
          v52 = nullptr;
          if ( (unsigned __int8)sub_694940(a1, &v52, v10) )
          {
            get_aflags(v40);
            sub_6185D0((int)a1, v6);
          }
          clear_tinfo_t(&v52);
        }
      }
    }
    if ( (get_aflags(v8) & 0x4000000) != 0 || (get_aflags(*(_QWORD *)v42) & 0x4000000) != 0 )
      set_abits(v6, 0x4000000);
    if ( (sub_631AD0(*a1, 10) & 0x8000000) != 0 )
    {
      if ( (sub_3BE900(a1, v6, 4) & 0x4000) == 0 )
      {
        if ( !(unsigned __int8)sub_5C50C0(v6, (__int64)v8) && !(unsigned __int8)sub_5C50C0(v6, *(__int64 *)v42) )
        {
          sub_4D9890(
            (int)a1,
            (int)n,
            v40,
            (__int64)v41,
            v42[0],
            (int)s2,
            (int)v44[0],
            (int)v44[1],
            v45,
            (int)s1,
            (int)v47[0],
            (int)v47[1],
            v48,
            (int)v49,
            v50,
            *((__int64 *)&v50 + 1));
          v7 = 0;
        }
        goto LABEL_51;
      }
      *(_OWORD *)v47 = 0;
      s1 = nullptr;
      if ( (unsigned __int8)sub_5C4E40((__int64 *)&s2, (__int64)v8, a3)
        || (na = *(_QWORD *)v42, (unsigned __int8)sub_5C4E40((__int64 *)&s2, *(__int64 *)v42, a3)) )
      {
        if ( get_ea_name(&s1, v6, 512, 0) > 0 )
        {
          v21 = s1;
          i = s2;
          if ( strcmp(s1, s2) )
          {
            while ( *v21 == 106 )
            {
              if ( v21[1] != 95 )
                goto LABEL_61;
              v21 += 2;
            }
            v21 += *v21 == 46;
LABEL_61:
            while ( *i == 106 )
            {
              if ( i[1] != 95 )
                goto LABEL_63;
              i += 2;
            }
            i += *i == 46;
LABEL_63:
            v49 = nullptr;
            v52 = nullptr;
            v50 = 0;
            v53 = 0;
            v27 = decorate_name(&v49, v21, 0, 16, 0);
            v28 = v52;
            if ( !v27 )
              goto LABEL_115;
            v29 = decorate_name(&v52, i, 0, 16, 0);
            v28 = v52;
            if ( !v29 )
              goto LABEL_115;
            v21 = (char *)haystack;
            if ( (_QWORD)v50 )
            {
              v21 = (char *)v49;
              v30 = *(_BYTE *)v49;
              if ( *(_BYTE *)v49 == 106 )
              {
                while ( v21[1] == 95 )
                {
                  v30 = v21[2];
                  v21 += 2;
                  if ( v30 != 106 )
                    goto LABEL_111;
                }
              }
              else
              {
LABEL_111:
                if ( v30 == 46 )
                  ++v21;
              }
            }
            if ( (_QWORD)v53 )
            {
              v36 = *(_BYTE *)v52;
              for ( i = (char *)v52; v36 == 106; i += 2 )
              {
                if ( i[1] != 95 )
                  goto LABEL_83;
                v36 = i[2];
              }
              if ( v36 == 46 )
                ++i;
              goto LABEL_83;
            }
            i = (char *)haystack;
            if ( *v21 == 95 )
            {
              do
              {
                ++v21;
LABEL_83:
                ;
              }
              while ( *v21 == 95 );
              while ( *i == 95 )
                ++i;
            }
            if ( strcmp(v21, i) )
            {
LABEL_115:
              nb = sub_5C41B0(v21);
              if ( nb != sub_5C41B0(i) || strncmp(v21, i, nb) )
              {
                if ( v28 )
                {
                  *(_QWORD *)&v53 = 0;
                  qfree(v28);
                }
                if ( v49 )
                {
                  *(_QWORD *)&v50 = 0;
                  qfree(v49);
                }
                goto LABEL_69;
              }
            }
            if ( v28 )
            {
              *(_QWORD *)&v53 = 0;
              qfree(v28);
            }
            if ( !v49 )
              goto LABEL_38;
            *(_QWORD *)&v50 = 0;
            qfree(v49);
            v21 = s1;
          }
LABEL_39:
          if ( v21 )
          {
            v47[0] = nullptr;
            qfree(v21);
          }
LABEL_51:
          v24 = sub_505D70((__int64)(a1 + 213), v6);
          v25 = v24;
          if ( v24 )
          {
            v26 = v24[2];
            if ( (v26 & 0x8000) != 0 )
            {
              v25 = sub_505D70((__int64)(a1 + 213), v25[3]);
              v26 = v25[2];
            }
          }
          else
          {
            v26 = 0x1003E0003LL;
          }
          LOBYTE(v26) = v26 | 0x80;
          v25[2] = v26;
          if ( v7 && (sub_631AD0(*a1, 10) & 0x4000000) != 0 )
            v25[2] |= 0x40u;
          sub_5C77B0((__int64)a1, v25, 0);
          sub_39ADA0(0x26u, v25);
          goto LABEL_58;
        }
      }
      else
      {
        if ( na != -1 )
          goto LABEL_38;
        if ( (sub_3BE900(a1, (unsigned __int64)v8, 4) & 0x4000) != 0 )
          goto LABEL_38;
        v56 = -1;
        v33 = &v59;
        v57 = 0;
        v58 = 0;
        v55 = -1;
        do
        {
          *(_WORD *)v33 = 0;
          v33 += 10;
          *((_WORD *)v33 - 19) = 0;
          *((_WORD *)v33 - 18) = 0;
          *(v33 - 2) = 0;
          *((_WORD *)v33 - 17) = 0;
          *((_OWORD *)v33 - 2) = 0;
          *((_QWORD *)v33 - 2) = 0;
        }
        while ( v63 != (_QWORD *)v33 );
        if ( (unsigned int)decode_insn(&v55, v8, v63, v31, v32, 0, 0.0)
          && ((unsigned __int8)sub_4CC920(a1, (__int64)&v55, 3u) || (unsigned __int8)is_indirect_jump_insn((__int64)&v55)) )
        {
LABEL_38:
          v21 = s1;
          goto LABEL_39;
        }
        if ( get_ea_name(&s1, v6, 0, 0) > 0 )
        {
          if ( (unsigned __int8)sub_4D7EC0(
                                  a1,
                                  (__int64)v8,
                                  s1,
                                  0x1800u,
                                  v34,
                                  v35,
                                  -1,
                                  (int)v40,
                                  (int)v41,
                                  v42[0],
                                  (int)s2,
                                  v44[0],
                                  (__int64)v44[1],
                                  v45,
                                  (int)s1,
                                  v47[0],
                                  (__int64)v47[1],
                                  v48,
                                  (int)v49,
                                  v50,
                                  SDWORD2(v50),
                                  v51,
                                  (int)v52,
                                  v53,
                                  *((__int64 *)&v53 + 1),
                                  v54,
                                  v55,
                                  SDWORD2(v55),
                                  v56,
                                  v57,
                                  v58,
                                  v59,
                                  v60,
                                  v61,
                                  v62) )
          {
            if ( (~((unsigned __int16)sub_3BE900(a1, v6, 4) >> 8) & 0xC0) == 0 )
              sub_4CE550(a1, v8);
            if ( (get_aflags(v6) & 0x400) != 0 )
              set_abits(v8, 1024);
          }
          goto LABEL_38;
        }
      }
LABEL_69:
      if ( s1 )
      {
        v47[0] = nullptr;
        qfree(s1);
      }
      goto LABEL_15;
    }
  }
  v11 = sub_3C1F00(a1, v6);
  if ( (sub_631AD0(*a1, 10) & 0x10000000) == 0 || (sub_3BE900(a1, v6, 4) & 0x4000) != 0 )
    goto LABEL_15;
  v15 = 0x100000000LL;
  if ( *(_DWORD *)(a1[3] + 24) == 8 )
    v15 = -1;
  if ( v11 < v15 && (sub_3BE900(a1, v11, 4) & 0x10000) != 0 && !(unsigned int)is_align_insn(v11) )
    goto LABEL_15;
  v56 = -1;
  v16 = &v59;
  v57 = 0;
  v58 = 0;
  v55 = -1;
  do
  {
    *(_WORD *)v16 = 0;
    v16 += 10;
    *((_WORD *)v16 - 19) = 0;
    *((_WORD *)v16 - 18) = 0;
    *(v16 - 2) = 0;
    *((_WORD *)v16 - 17) = 0;
    *((_OWORD *)v16 - 2) = 0;
    *((_QWORD *)v16 - 2) = 0;
  }
  while ( v16 != (int *)v63 );
  if ( (int)decode_insn(&v55, v6, v63, 0, 0, v14, 0.0) <= 0
    || !(unsigned __int8)sub_4CC920(a1, (__int64)&v55, 3u)
    || (v17 = *(_QWORD *)(*a1 + 1616),
        v52 = (void *)(netnode_altval(*(_QWORD *)(v17 + 8), 0, 65) + 1),
        netnode_supset(*(_QWORD *)(v17 + 8), 0, &v52, 8, 65, v18),
        sub_35A790(&s2),
        !(unsigned __int8)sub_4D7EC0(
                            a1,
                            v6,
                            s2,
                            0x20u,
                            v19,
                            v20,
                            (int)n,
                            (int)v40,
                            (int)v41,
                            v42[0],
                            (int)s2,
                            v44[0],
                            (__int64)v44[1],
                            v45,
                            (int)s1,
                            v47[0],
                            (__int64)v47[1],
                            v48,
                            (int)v49,
                            v50,
                            SDWORD2(v50),
                            v51,
                            (int)v52,
                            v53,
                            *((__int64 *)&v53 + 1),
                            v54,
                            v55,
                            SDWORD2(v55),
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
  if ( (sub_631AD0(*a1, 10) & 0x4000000) != 0 )
  {
    a2[2] |= 0x40u;
    sub_5C77B0((__int64)a1, a2, 0);
  }
LABEL_58:
  v12 = 1;
LABEL_16:
  if ( s2 )
  {
    v44[0] = nullptr;
    qfree(s2);
  }
  return v12;
}
