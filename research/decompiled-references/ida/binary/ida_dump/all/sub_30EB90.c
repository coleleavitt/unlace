__int64 __fastcall sub_30EB90(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int tinfo; // ebx
  __int64 ea_name; // rax
  char *v9; // rdx
  char *v10; // r12
  const char **v11; // rbp
  unsigned __int64 v12; // rdx
  int v13; // eax
  const char **v14; // rcx
  __int64 v15; // rbp
  size_t v16; // r12
  const char *v17; // rdi
  const char *v18; // r12
  const char **v19; // rbp
  const char *v20; // r13
  int *v21; // r8
  char *v22; // rbp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  int *i; // r11
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 aflags; // rax
  int *v33; // r8
  char *v34; // r12
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdi
  size_t v39; // rax
  char tinfo_property; // al
  char v41; // al
  int v42; // r12d
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdi
  char v46; // al
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  int v50; // edx
  int v51; // ecx
  __int64 v52; // rax
  __int64 tinfo_size; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-E0h]
  const char *v56; // [rsp+8h] [rbp-E0h]
  int *v57; // [rsp+8h] [rbp-E0h]
  int *v58; // [rsp+8h] [rbp-E0h]
  char *s2; // [rsp+10h] [rbp-D8h]
  char *s2a; // [rsp+10h] [rbp-D8h]
  char *s2b; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v62; // [rsp+18h] [rbp-D0h]
  const char **v63; // [rsp+18h] [rbp-D0h]
  __int64 v64; // [rsp+18h] [rbp-D0h]
  __int64 v65; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v66; // [rsp+18h] [rbp-D0h]
  int v67; // [rsp+20h] [rbp-C8h]
  __int64 v68; // [rsp+20h] [rbp-C8h]
  __int64 v69; // [rsp+20h] [rbp-C8h]
  __int64 v70; // [rsp+20h] [rbp-C8h]
  __int64 v71; // [rsp+20h] [rbp-C8h]
  __int64 v72; // [rsp+20h] [rbp-C8h]
  __int64 v73; // [rsp+28h] [rbp-C0h]
  __int64 v74; // [rsp+30h] [rbp-B8h]
  __int64 v75; // [rsp+30h] [rbp-B8h]
  __int64 v76; // [rsp+38h] [rbp-B0h]
  __int64 v77; // [rsp+48h] [rbp-A0h] BYREF
  char *s1; // [rsp+50h] [rbp-98h]
  __int128 v79; // [rsp+58h] [rbp-90h]
  char *v80; // [rsp+70h] [rbp-78h] BYREF
  __int128 v81; // [rsp+78h] [rbp-70h]
  _QWORD v82[2]; // [rsp+90h] [rbp-58h] BYREF
  __int16 v83; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v84; // [rsp+A8h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  LOBYTE(tinfo) = a2 == nullptr || *(_BYTE *)(a1 + 136) == 0;
  if ( (_BYTE)tinfo )
    return 0;
  if ( (*(_DWORD *)a2[8] & 0x1000) != 0 && *(_BYTE *)(a3 + 64) == 8 )
  {
    s1 = nullptr;
    v79 = 0;
    ea_name = get_ea_name();
    v9 = nullptr;
    if ( ea_name <= 0 )
      goto LABEL_45;
    v55 = a3;
    v10 = s1;
    v11 = (const char **)off_4EE240;
    while ( 1 )
    {
      if ( !*v11 )
      {
        v63 = v11;
        v15 = v55;
        v39 = strlen(nullptr);
        v9 = s1;
        v14 = v63;
        v16 = v39;
        goto LABEL_14;
      }
      s2 = (char *)*v11;
      v12 = strlen(*v11);
      if ( !v12 )
        break;
      if ( (_QWORD)v79 )
      {
        if ( (__int64)v79 - 1 >= v12 )
        {
          v62 = v12;
          v13 = strncmp(s1, s2, v12);
          v12 = v62;
          if ( !v13 )
            break;
        }
      }
      v11 += 3;
      if ( &off_4EE2A0 == (char **)v11 )
      {
LABEL_48:
        v9 = v10;
        goto LABEL_45;
      }
    }
    v14 = v11;
    v15 = v55;
    v16 = v12;
    v9 = s1;
LABEL_14:
    v17 = v14[2];
    v18 = &v9[v16];
    if ( !v17 )
      goto LABEL_45;
    v56 = nullptr;
    s2a = *(char **)(v15 + 72);
    v19 = (const char **)v14[1];
    v20 = v18;
    v10 = v9;
    v67 = *(_DWORD *)(*(_QWORD *)(a2[60] + 112) + 84LL);
    while ( strcmp(v20, *v19) )
    {
      ++v56;
      v19 += 6;
      if ( v56 == v17 )
        goto LABEL_48;
    }
    v21 = (int *)v19;
    v22 = s2a;
    v9 = v10;
    v24 = v21[2];
    v25 = *((_QWORD *)s2a + 4);
    if ( v24 >= v25 )
      goto LABEL_45;
    v26 = *((_QWORD *)s2a + 3);
    v27 = v26 + 80 * v24;
    if ( v67 != *(_DWORD *)(v27 + 4) )
      goto LABEL_45;
    for ( i = v21 + 3; i != v21 + 12; i += 3 )
    {
      v29 = *i;
      if ( (v29 & 0x80000000) != 0LL )
        break;
      if ( v29 >= v25 || v67 != *(_DWORD *)(v26 + 80 * v29 + 4) )
        goto LABEL_45;
    }
    if ( *(_BYTE *)v27 != 10 )
      goto LABEL_45;
    v30 = *(_QWORD *)(v27 + 8);
    if ( *(_BYTE *)v30 != 6 )
      goto LABEL_45;
    v31 = *(_QWORD *)(v30 + 8);
    v57 = v21;
    aflags = get_aflags();
    v33 = v57;
    if ( (aflags & 0x800) == 0 )
    {
      set_tinfo();
      v33 = v57;
    }
    v58 = v33;
    v80 = nullptr;
    v81 = 0;
    if ( (unsigned __int8)sub_1D2AB0((__int64 *)&v80, v31, 2) )
    {
      if ( (unsigned __int64)v81 > 6 )
      {
        v34 = v80;
        if ( !strncmp(v80, "RTYPE_", 6u) )
        {
          v83 = 256;
          v77 = 0;
          v82[1] = v34 + 6;
          v82[0] = get_idati();
          tinfo = create_tinfo();
          if ( (_BYTE)tinfo )
          {
            v35 = (__int64)v58;
            tinfo = 0;
            for ( s2b = nullptr; s2b != (_BYTE *)&qword_20 + 4; s2b += 12 )
            {
              v36 = *(int *)&s2b[v35 + 12];
              if ( (v36 & 0x80000000) != 0LL )
                break;
              if ( v36 < *((_QWORD *)v22 + 4) )
              {
                v37 = *((_QWORD *)v22 + 3) + 80 * v36;
                if ( *(_BYTE *)v37 == 6 )
                {
                  v68 = v35;
                  sub_32C540(v82, *(_QWORD *)(a2[60] + 112), &v77);
                  v43 = get_aflags();
                  v44 = v68;
                  if ( (v43 & 0x800) == 0 )
                  {
                    set_tinfo();
                    v44 = v68;
                  }
                  v65 = v44;
                  clear_tinfo_t();
                  v35 = v65;
                }
                if ( (*(_BYTE *)v37 & 0xFB) == 1 )
                {
                  v64 = v35;
                  tinfo_property = get_tinfo_property();
                  v35 = v64;
                  if ( (tinfo_property & 0x1F) != 0x12 )
                  {
                    v41 = get_tinfo_property();
                    v35 = v64;
                    if ( (v41 & 0x3F) != 0x22 )
                    {
                      sub_32C540(v82, *(_QWORD *)(a2[60] + 112), &v77);
                      v42 = sub_1C9210((char *)v37, a2[8]);
                      clear_tinfo_t();
                      tinfo |= v42;
                      v35 = v64;
                    }
                  }
                  continue;
                }
                if ( *(_BYTE *)v37 == 10 )
                {
                  v38 = *(_QWORD *)(v37 + 8);
                  if ( *(_BYTE *)v38 == 6 )
                  {
                    v72 = v35;
                    v54 = get_aflags();
                    v35 = v72;
                    if ( (v54 & 0x800) != 0 )
                    {
                      v38 = *(_QWORD *)(v37 + 8);
                    }
                    else
                    {
                      set_tinfo();
                      v38 = *(_QWORD *)(v37 + 8);
                      v35 = v72;
                    }
                  }
                  if ( *(_QWORD *)(v38 + 16) == -1 )
                  {
                    v69 = v35;
                    v66 = sub_32F330(v38, v82);
                    v35 = v69;
                    if ( v66 )
                    {
                      v70 = a2[41];
                      v73 = v82[0];
                      if ( v70 != v82[0] || (a4 & 2) != 0 )
                      {
                        v45 = *(_QWORD *)(v37 + 8);
                        if ( *(_BYTE *)v45 == 15 )
                        {
                          v76 = v35;
                          v75 = *(int *)(v45 + 4);
                          tinfo_size = get_tinfo_size();
                          v35 = v76;
                          if ( v75 == tinfo_size )
                          {
                            copy_tinfo_t();
                            v35 = v76;
LABEL_65:
                            v47 = -1;
                            v48 = *(_DWORD *)&s2b[v35 + 16];
                            v49 = *(_QWORD *)(v37 + 8);
                            if ( v48 >= 0 )
                              v47 = *(_DWORD *)(v49 + 4) * v48;
                            *(_DWORD *)(v49 + 16) = v47;
                            v50 = -1;
                            v51 = *(_DWORD *)&s2b[v35 + 20];
                            v52 = *(_QWORD *)(v37 + 8);
                            if ( v51 >= 0 )
                              v50 = *(_DWORD *)(v52 + 4) * v51;
                            *(_DWORD *)(v52 + 20) = v50;
                            if ( v70 == v73 )
                            {
                              v71 = v35;
                              sub_190300(a2[8]);
                              v35 = v71;
                            }
                            tinfo = v66;
                          }
                        }
                        else if ( *(_BYTE *)v45 == 5 )
                        {
                          v74 = v35;
                          v46 = sub_1C9210((char *)v45, a2[8]);
                          v35 = v74;
                          if ( v46 )
                            goto LABEL_65;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          clear_tinfo_t();
          v34 = v80;
        }
        goto LABEL_42;
      }
    }
    else
    {
      tinfo = 0;
    }
    v34 = v80;
LABEL_42:
    if ( v34 )
    {
      *(_QWORD *)&v81 = 0;
      qfree();
    }
    v9 = s1;
LABEL_45:
    if ( v9 )
    {
      *(_QWORD *)&v79 = 0;
      qfree();
    }
  }
  return tinfo;
}
