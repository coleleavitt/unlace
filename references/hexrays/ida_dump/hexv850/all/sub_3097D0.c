__int64 __fastcall sub_3097D0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  __int64 ea_name; // rax
  char *v12; // rdx
  char *v13; // r12
  const char **v14; // rbp
  unsigned __int64 v15; // rdx
  int v16; // eax
  char *v17; // rax
  const char **v18; // rcx
  __int64 v19; // rbp
  size_t v20; // r12
  const char *v21; // rdi
  const char *v22; // r12
  __int64 v23; // rax
  const char **v24; // rbp
  const char *v25; // r13
  int *v26; // r8
  char *v27; // rbp
  __int64 *v28; // r13
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  int *i; // r11
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 aflags; // rax
  int *v38; // r8
  char *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rdi
  size_t v46; // rax
  char tinfo_property; // al
  char v48; // al
  int v49; // r12d
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdi
  char v53; // al
  int v54; // edx
  int v55; // ecx
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  __int64 v59; // rax
  __int64 tinfo_size; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+8h] [rbp-E0h]
  const char *v63; // [rsp+8h] [rbp-E0h]
  int *v64; // [rsp+8h] [rbp-E0h]
  int *v65; // [rsp+8h] [rbp-E0h]
  char *s2; // [rsp+10h] [rbp-D8h]
  char *s2a; // [rsp+10h] [rbp-D8h]
  char *s2b; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v69; // [rsp+18h] [rbp-D0h]
  __int64 *v70; // [rsp+18h] [rbp-D0h]
  const char **v71; // [rsp+18h] [rbp-D0h]
  __int64 v72; // [rsp+18h] [rbp-D0h]
  __int64 v73; // [rsp+18h] [rbp-D0h]
  __int64 v74; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v75; // [rsp+18h] [rbp-D0h]
  __int64 v76; // [rsp+18h] [rbp-D0h]
  int v77; // [rsp+20h] [rbp-C8h]
  __int64 v78; // [rsp+20h] [rbp-C8h]
  __int64 v79; // [rsp+20h] [rbp-C8h]
  __int64 v80; // [rsp+20h] [rbp-C8h]
  __int64 v81; // [rsp+20h] [rbp-C8h]
  __int64 v82; // [rsp+20h] [rbp-C8h]
  __int64 v83; // [rsp+28h] [rbp-C0h]
  __int64 v84; // [rsp+30h] [rbp-B8h]
  __int64 v85; // [rsp+30h] [rbp-B8h]
  __int64 v86; // [rsp+38h] [rbp-B0h]
  __int64 v87; // [rsp+48h] [rbp-A0h] BYREF
  char *s1; // [rsp+50h] [rbp-98h] BYREF
  __int128 v89; // [rsp+58h] [rbp-90h]
  char *v90; // [rsp+70h] [rbp-78h] BYREF
  __int128 v91; // [rsp+78h] [rbp-70h]
  _QWORD v92[2]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v93; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  LOBYTE(v4) = a2 == 0 || *(_BYTE *)(a1 + 136) == 0;
  if ( (_BYTE)v4 )
    return 0;
  if ( (**(_DWORD **)(a2 + 64) & 0x1000) != 0 && *(_BYTE *)(a3 + 64) == 8 )
  {
    v8 = *(_QWORD *)(a3 + 40);
    s1 = nullptr;
    v89 = 0;
    ea_name = get_ea_name(&s1, v8, 512, 0);
    v12 = s1;
    if ( ea_name <= 0 )
      goto LABEL_45;
    v62 = a3;
    v13 = s1;
    v14 = (const char **)off_4C11A0;
    while ( 1 )
    {
      if ( !*v14 )
      {
        v71 = v14;
        v19 = v62;
        v46 = strlen(nullptr);
        v12 = v13;
        v18 = v71;
        v20 = v46;
        goto LABEL_14;
      }
      s2 = (char *)*v14;
      v15 = strlen(*v14);
      if ( !v15 )
        break;
      if ( (_QWORD)v89 )
      {
        if ( (__int64)v89 - 1 >= v15 )
        {
          v69 = v15;
          v16 = strncmp(v13, s2, v15);
          v15 = v69;
          if ( !v16 )
            break;
        }
      }
      v14 += 3;
      if ( &off_4C1200 == (char **)v14 )
      {
LABEL_48:
        v12 = v13;
        goto LABEL_45;
      }
    }
    v17 = v13;
    v18 = v14;
    v19 = v62;
    v20 = v15;
    v12 = v17;
LABEL_14:
    v21 = v18[2];
    v22 = &v12[v20];
    if ( !v21 )
      goto LABEL_45;
    v63 = nullptr;
    v23 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
    s2a = *(char **)(v19 + 72);
    v70 = (__int64 *)a2;
    v24 = (const char **)v18[1];
    v25 = v22;
    v13 = v12;
    v77 = *(_DWORD *)(v23 + 84);
    while ( strcmp(v25, *v24) )
    {
      ++v63;
      v24 += 6;
      if ( v63 == v21 )
        goto LABEL_48;
    }
    v26 = (int *)v24;
    v27 = s2a;
    v28 = v70;
    v12 = v13;
    v29 = v26[2];
    v30 = *((_QWORD *)s2a + 4);
    if ( v29 >= v30 )
      goto LABEL_45;
    v31 = *((_QWORD *)s2a + 3);
    v32 = v31 + 80 * v29;
    if ( v77 != *(_DWORD *)(v32 + 4) )
      goto LABEL_45;
    for ( i = v26 + 3; i != v26 + 12; i += 3 )
    {
      v34 = *i;
      if ( (v34 & 0x80000000) != 0LL )
        break;
      if ( v34 >= v30 || v77 != *(_DWORD *)(v31 + 80 * v34 + 4) )
        goto LABEL_45;
    }
    if ( *(_BYTE *)v32 != 10 )
      goto LABEL_45;
    v35 = *(_QWORD *)(v32 + 8);
    if ( *(_BYTE *)v35 != 6 )
      goto LABEL_45;
    v36 = *(_QWORD *)(v35 + 8);
    v64 = v26;
    aflags = get_aflags(v36);
    v38 = v64;
    if ( (aflags & 0x800) == 0 )
    {
      set_tinfo(v36, a1 + 136);
      v38 = v64;
    }
    v65 = v38;
    v90 = nullptr;
    v91 = 0;
    if ( (unsigned __int8)sub_1CDDD0((__int64 *)&v90, v36, 2u, 0) )
    {
      if ( (unsigned __int64)v91 > 6 )
      {
        v39 = v90;
        if ( !strncmp(v90, "RTYPE_", 6u) )
        {
          v93 = 256;
          v87 = 0;
          v92[1] = v39 + 6;
          v92[0] = get_idati(0, "RTYPE_", v40, v41);
          v4 = create_tinfo(&v87, 61, 61, v92);
          if ( (_BYTE)v4 )
          {
            v42 = (__int64)v65;
            v4 = 0;
            for ( s2b = nullptr; s2b != (_BYTE *)&qword_20 + 4; s2b += 12 )
            {
              v43 = *(int *)&s2b[v42 + 12];
              if ( (v43 & 0x80000000) != 0LL )
                break;
              if ( v43 < *((_QWORD *)v27 + 4) )
              {
                v44 = *((_QWORD *)v27 + 3) + 80 * v43;
                if ( *(_BYTE *)v44 == 6 )
                {
                  v78 = v42;
                  sub_326AD0(v92, *(_QWORD *)(v28[60] + 112), &v87);
                  v73 = *(_QWORD *)(v44 + 8);
                  v50 = get_aflags(v73);
                  v51 = v78;
                  if ( (v50 & 0x800) == 0 )
                  {
                    set_tinfo(v73, v92);
                    v51 = v78;
                  }
                  v74 = v51;
                  clear_tinfo_t(v92);
                  v42 = v74;
                }
                if ( (*(_BYTE *)v44 & 0xFB) == 1 )
                {
                  v72 = v42;
                  tinfo_property = get_tinfo_property(v87, 2);
                  v42 = v72;
                  if ( (tinfo_property & 0x1F) != 0x12 )
                  {
                    v48 = get_tinfo_property(v87, 2);
                    v42 = v72;
                    if ( (v48 & 0x3F) != 0x22 )
                    {
                      sub_326AD0(v92, *(_QWORD *)(v28[60] + 112), &v87);
                      v49 = sub_1C4390((char *)v44, v28[8], v92);
                      clear_tinfo_t(v92);
                      v4 |= v49;
                      v42 = v72;
                    }
                  }
                  continue;
                }
                if ( *(_BYTE *)v44 == 10 )
                {
                  v45 = *(_QWORD *)(v44 + 8);
                  if ( *(_BYTE *)v45 == 6 )
                  {
                    v82 = v42;
                    v76 = *(_QWORD *)(v45 + 8);
                    v61 = get_aflags(v76);
                    v42 = v82;
                    if ( (v61 & 0x800) != 0 )
                    {
                      v45 = *(_QWORD *)(v44 + 8);
                    }
                    else
                    {
                      set_tinfo(v76, &v87);
                      v45 = *(_QWORD *)(v44 + 8);
                      v42 = v82;
                    }
                  }
                  if ( *(_QWORD *)(v45 + 16) == -1 )
                  {
                    v79 = v42;
                    v75 = sub_3297A0(v45, v92);
                    v42 = v79;
                    if ( v75 )
                    {
                      v80 = v28[41];
                      v83 = v92[0];
                      if ( v80 != v92[0] || (a4 & 2) != 0 )
                      {
                        v52 = *(_QWORD *)(v44 + 8);
                        if ( *(_BYTE *)v52 == 15 )
                        {
                          v86 = v42;
                          v85 = *(int *)(v52 + 4);
                          tinfo_size = get_tinfo_size(0, v87, 0);
                          v42 = v86;
                          if ( v85 == tinfo_size )
                          {
                            copy_tinfo_t(*(_QWORD *)(*(_QWORD *)(v44 + 8) + 8LL) + 48LL, &v87);
                            v42 = v86;
LABEL_65:
                            v54 = -1;
                            v55 = *(_DWORD *)&s2b[v42 + 16];
                            v56 = *(_QWORD *)(v44 + 8);
                            if ( v55 >= 0 )
                              v54 = *(_DWORD *)(v56 + 4) * v55;
                            *(_DWORD *)(v56 + 16) = v54;
                            v57 = -1;
                            v58 = *(_DWORD *)&s2b[v42 + 20];
                            v59 = *(_QWORD *)(v44 + 8);
                            if ( v58 >= 0 )
                              v57 = *(_DWORD *)(v59 + 4) * v58;
                            *(_DWORD *)(v59 + 20) = v57;
                            if ( v80 == v83 )
                            {
                              v81 = v42;
                              sub_18B740(v28[8]);
                              v42 = v81;
                            }
                            v4 = v75;
                          }
                        }
                        else if ( *(_BYTE *)v52 == 5 )
                        {
                          v84 = v42;
                          v53 = sub_1C4390((char *)v52, v28[8], &v87);
                          v42 = v84;
                          if ( v53 )
                            goto LABEL_65;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          clear_tinfo_t(&v87);
          v39 = v90;
        }
        goto LABEL_42;
      }
    }
    else
    {
      v4 = 0;
    }
    v39 = v90;
LABEL_42:
    if ( v39 )
    {
      *(_QWORD *)&v91 = 0;
      qfree(v39);
    }
    v12 = s1;
LABEL_45:
    if ( v12 )
    {
      *(_QWORD *)&v89 = 0;
      qfree(v12);
    }
  }
  return v4;
}
