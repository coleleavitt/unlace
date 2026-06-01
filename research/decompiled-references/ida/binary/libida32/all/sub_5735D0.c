__int64 __fastcall sub_5735D0(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  char tinfo_property; // al
  __int64 v12; // rdi
  unsigned int v13; // r13d
  __int64 tinfo_size; // rax
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, __int128 *, __int64); // rdi
  char v17; // al
  char v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 (__fastcall ***v25)(_QWORD, _QWORD, __int128 *, __int64); // rdi
  char v26; // al
  char v27; // al
  int v28; // edx
  bool v29; // dl
  char v30; // al
  bool v31; // r10
  char v32; // r9
  char v33; // al
  char v34; // r9
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r11
  int qerrno; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  char *v42; // rdi
  __int64 v43; // rax
  char v44; // r9
  bool v45; // r10
  __int64 v46; // rsi
  int v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  char v50; // r9
  char v51; // r10
  char v52; // al
  __int64 v53; // rax
  __int64 v54; // r15
  char *v55; // rbx
  void *v56; // rdi
  void *v57; // rdi
  char *v58; // r15
  char v59; // dl
  int v60; // eax
  int v61; // eax
  int v62; // eax
  unsigned __int64 v63; // [rsp+8h] [rbp-140h]
  char v64; // [rsp+10h] [rbp-138h]
  char v65; // [rsp+10h] [rbp-138h]
  char v66; // [rsp+10h] [rbp-138h]
  bool v67; // [rsp+10h] [rbp-138h]
  char v68; // [rsp+10h] [rbp-138h]
  char v69; // [rsp+10h] [rbp-138h]
  char v70; // [rsp+10h] [rbp-138h]
  char v71; // [rsp+10h] [rbp-138h]
  char v72; // [rsp+10h] [rbp-138h]
  char v73; // [rsp+10h] [rbp-138h]
  int v74[2]; // [rsp+10h] [rbp-138h]
  int v75[2]; // [rsp+10h] [rbp-138h]
  char v76; // [rsp+10h] [rbp-138h]
  bool v77; // [rsp+18h] [rbp-130h]
  _QWORD *v78; // [rsp+18h] [rbp-130h]
  __int64 v79; // [rsp+18h] [rbp-130h]
  bool v80; // [rsp+20h] [rbp-128h]
  char v81; // [rsp+20h] [rbp-128h]
  char v82; // [rsp+20h] [rbp-128h]
  char v83; // [rsp+20h] [rbp-128h]
  char v84; // [rsp+2Dh] [rbp-11Bh]
  unsigned __int8 v85; // [rsp+2Dh] [rbp-11Bh]
  char v86; // [rsp+2Dh] [rbp-11Bh]
  bool v87; // [rsp+2Eh] [rbp-11Ah]
  char v88; // [rsp+2Eh] [rbp-11Ah]
  char v89; // [rsp+2Eh] [rbp-11Ah]
  char v90; // [rsp+2Eh] [rbp-11Ah]
  bool v91; // [rsp+2Eh] [rbp-11Ah]
  char v92; // [rsp+2Eh] [rbp-11Ah]
  char v93; // [rsp+2Eh] [rbp-11Ah]
  char v94; // [rsp+2Eh] [rbp-11Ah]
  char v95; // [rsp+2Fh] [rbp-119h]
  int v96[2]; // [rsp+38h] [rbp-110h] BYREF
  void *v97; // [rsp+40h] [rbp-108h] BYREF
  __int128 v98; // [rsp+48h] [rbp-100h]
  char *s1; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v100; // [rsp+68h] [rbp-E0h]
  __int128 v101; // [rsp+78h] [rbp-D0h]
  __int64 v102; // [rsp+88h] [rbp-C0h]
  int v103; // [rsp+90h] [rbp-B8h]
  __int128 v104; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int v105; // [rsp+B0h] [rbp-98h] BYREF
  char v106[8]; // [rsp+B8h] [rbp-90h] BYREF
  char v107; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v108[40]; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v109; // [rsp+108h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  v9 = deref_idcv(a2, 0);
  if ( v9 )
  {
    v10 = v9;
    tinfo_property = get_tinfo_property(*a3, 2);
    switch ( tinfo_property & 0xF )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xA:
      case 0xE:
        v64 = tinfo_property & 0xF;
        tinfo_size = get_tinfo_size(0, *a3, 0);
        v16 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int128 *, __int64))(a1 + 24);
        v63 = tinfo_size;
        v104 = 0;
        v17 = (**v16)(v16, a4, &v104, tinfo_size);
        v18 = v64;
        if ( !v17 )
          goto LABEL_9;
        goto LABEL_22;
      case 9:
        v19 = get_tinfo_size(0, *a3, 0);
        v20 = v19;
        if ( v19 <= 0x20 )
        {
          v21 = v19;
          free_idcv(v10);
          v22 = *(_QWORD *)(a1 + 40);
          if ( *(_QWORD *)(v22 + 1040) )
          {
            v23 = *(_QWORD *)(v22 + 880);
            if ( (int)v20 <= 16 && v23 < v20 )
              v21 = v23;
          }
          if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, _QWORD, _BYTE *, _QWORD))(a1 + 24))(
                 *(_QWORD *)(a1 + 24),
                 a4,
                 v108,
                 (int)v21) )
          {
            *(_BYTE *)v10 = 3;
            *(_OWORD *)(v10 + 8) = 0;
            cpu2ieee(v10 + 8, v108, v21);
          }
          return 0;
        }
        if ( !under_debugger )
          interr(21);
        goto LABEL_129;
      case 0xB:
        v12 = *a3;
        s1 = nullptr;
        *(_QWORD *)&v100 = 0;
        get_tinfo_details(v12, 11, &s1);
        if ( DWORD1(v100)
          && (unsigned __int8)((get_tinfo_property(s1, 2) & 0xF) - 2) <= 5u
          && get_tinfo_size(0, s1, 0) == 1 )
        {
          *(_DWORD *)(a1 + 32) |= 2u;
          free_idcv(v10);
          *(_BYTE *)v10 = 7;
          *(_QWORD *)(v10 + 8) = 0;
          *(_OWORD *)(v10 + 16) = 0;
          sub_35CD10((__int64 *)(v10 + 8), DWORD1(v100));
          (***(void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 24))(
            *(_QWORD *)(a1 + 24),
            a4,
            *(_QWORD *)(v10 + 8),
            DWORD1(v100));
        }
        clear_tinfo_t(&s1);
        return 0;
      case 0xC:
        qerrno = 1569;
        goto LABEL_39;
      case 0xD:
        if ( (tinfo_property & 0x30) != 0x20 )
          return 0;
        v65 = tinfo_property & 0xF;
        v24 = get_tinfo_size(0, *a3, 0);
        v25 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int128 *, __int64))(a1 + 24);
        v63 = v24;
        v104 = 0;
        v26 = (**v25)(v25, a4, &v104, v24);
        v18 = v65;
        if ( !v26 )
          goto LABEL_10;
LABEL_22:
        v66 = v18;
        v27 = getinf_flag(3, 32);
        v18 = v66;
        if ( !v27 )
          goto LABEL_23;
        if ( v63 <= 1 )
          goto LABEL_42;
        swap_value(&v104, &v104, (unsigned int)v63);
        v18 = v66;
LABEL_23:
        if ( v63 <= 3 )
        {
LABEL_42:
          v69 = v18;
          v39 = get_tinfo_property(*a3, 3);
          v28 = v104;
          v18 = v69;
          if ( v39 == 1 )
          {
            v40 = extend_sign((unsigned int)v104, (unsigned int)v63, 1);
            v18 = v69;
            LODWORD(v104) = v40;
            v28 = v40;
          }
        }
        else
        {
          v28 = v104;
        }
        v29 = v18 == 10 && v28 != 0;
        if ( !v29 )
          goto LABEL_9;
        v13 = *(_DWORD *)(a1 + 32) & 8;
        if ( v13 )
          goto LABEL_10;
        v67 = v29;
        *(_QWORD *)v96 = get_tinfo_property(*a3, 9);
        v30 = get_tinfo_property(*(_QWORD *)v96, 2);
        v31 = v67;
        if ( !v30 || (v32 = v30 & 0xF, (v30 & 0xF) == 0xC) )
        {
          clear_tinfo_t(v96);
          goto LABEL_10;
        }
        if ( *(_BYTE *)v10 == 7 )
          goto LABEL_32;
        v77 = v67;
        v68 = v30 & 0xF;
        v33 = get_tinfo_property(*(_QWORD *)v96, 2);
        v34 = v68;
        if ( (v33 & 0x3F) == 1 )
          goto LABEL_70;
        v35 = get_tinfo_property(*(_QWORD *)v96, 2);
        v32 = v68;
        v31 = v77;
        if ( (v35 & 0x3F) != 0xD )
          goto LABEL_32;
        s1 = nullptr;
        v102 = 0;
        v103 = 1;
        v100 = 0;
        v101 = 0;
        get_tinfo_details(*(_QWORD *)v96, 13, &s1);
        v32 = v68;
        v31 = v77;
        if ( (_QWORD)v100 != 1 )
          goto LABEL_85;
        if ( (_QWORD)v101 != 4 )
          goto LABEL_85;
        if ( (s1[64] & 0xFu) > 9 )
          goto LABEL_85;
        if ( *((_QWORD *)s1 + 1) != 32 )
          goto LABEL_85;
        if ( !*((_QWORD *)s1 + 3) )
          goto LABEL_85;
        v48 = strcmp(*((const char **)s1 + 2), "unused");
        v32 = v68;
        v31 = v77;
        if ( v48 )
          goto LABEL_85;
        v97 = nullptr;
        v98 = 0;
        if ( (v96[0] & 0x100) == 0 )
          goto LABEL_69;
        get_tinfo_pdata(&v97, *(_QWORD *)v96, 2);
        v32 = v68;
        if ( !(_QWORD)v98 )
          goto LABEL_125;
        v31 = v77;
        if ( (unsigned __int64)(v98 - 1) <= 2 )
        {
          if ( (_QWORD)v98 == 1 )
          {
LABEL_125:
            if ( v97 )
            {
              *(_QWORD *)&v98 = 0;
              qfree(v97);
              v32 = v68;
            }
LABEL_69:
            v70 = v32;
            sub_37B290(&s1);
            v34 = v70;
LABEL_70:
            v71 = v34;
            clear_tinfo_t(v96);
            v18 = v71;
LABEL_9:
            if ( v18 == 14 )
            {
              *(_QWORD *)&v104 = read_tinfo_bitfield_value(*a3, v104, a5);
LABEL_11:
              free_idcv(v10);
              if ( v63 > 4 )
              {
                *(_BYTE *)v10 = 9;
                *(_QWORD *)(v10 + 8) = v104;
              }
              else
              {
                *(_DWORD *)(v10 + 8) = v104;
              }
              return 0;
            }
LABEL_10:
            if ( a5 )
            {
              if ( !under_debugger )
                interr(898);
LABEL_129:
              BUG();
            }
            goto LABEL_11;
          }
        }
        else if ( *((char *)v97 + v98 - 2) == 95 && *((char *)v97 + v98 - 3) == 95 )
        {
          goto LABEL_125;
        }
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree(v97);
          v32 = v68;
          v31 = v77;
        }
LABEL_85:
        if ( s1 )
        {
          v79 = v10;
          v54 = 0;
          v86 = v32;
          *(_QWORD *)v74 = v100;
          v91 = v31;
          while ( *(_QWORD *)v74 != v54 )
          {
            v55 = &s1[128 * v54];
            clear_tinfo_t(v55 + 64);
            v56 = *((void **)v55 + 5);
            if ( v56 )
            {
              *((_QWORD *)v55 + 6) = 0;
              qfree(v56);
            }
            v57 = *((void **)v55 + 2);
            if ( v57 )
            {
              *((_QWORD *)v55 + 3) = 0;
              qfree(v57);
            }
            ++v54;
          }
          v10 = v79;
          *(_QWORD *)&v100 = 0;
          qfree(s1);
          v31 = v91;
          v32 = v86;
        }
LABEL_32:
        v36 = *(_QWORD *)(a1 + 72);
        LODWORD(v97) = v104;
        if ( v36 )
        {
          v37 = a1 + 64;
          do
          {
            if ( *(_DWORD *)(v36 + 32) >= (unsigned int)v104 )
            {
              v37 = v36;
              v36 = *(_QWORD *)(v36 + 16);
            }
            else
            {
              v36 = *(_QWORD *)(v36 + 24);
            }
          }
          while ( v36 );
          if ( a1 + 64 != v37 && (unsigned int)v104 >= *(_DWORD *)(v37 + 32) )
          {
            v47 = copy_idcv(v10);
            *(_DWORD *)(a1 + 48) = v47;
            if ( !v47 )
            {
              clear_tinfo_t(v96);
              return 0;
            }
            v13 = -1;
            goto LABEL_63;
          }
        }
        v41 = 6;
        v78 = (_QWORD *)(a1 + 56);
        v105 = v104;
        v42 = &v107;
        while ( v41 )
        {
          *(_DWORD *)v42 = 0;
          v42 += 4;
          --v41;
        }
        v87 = v31;
        v84 = v32;
        v106[0] = 2;
        copy_idcv(v106);
        v43 = *(_QWORD *)(a1 + 72);
        v44 = v84;
        v45 = v87;
        if ( v43 )
        {
          v46 = a1 + 64;
          do
          {
            if ( *(_DWORD *)(v43 + 32) >= v105 )
            {
              v46 = v43;
              v43 = *(_QWORD *)(v43 + 16);
            }
            else
            {
              v43 = *(_QWORD *)(v43 + 24);
            }
          }
          while ( v43 );
          if ( a1 + 64 != v46 && v105 >= *(_DWORD *)(v46 + 32) )
          {
LABEL_75:
            v80 = v45;
            v88 = v44;
            free_idcv(v106);
            v49 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
            v50 = v88;
            v85 = v49;
            v51 = v80;
            if ( *(_BYTE *)v10 == 7 )
            {
              v52 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __int64))(a1 + 24))(
                      *(_QWORD *)(a1 + 24),
                      (unsigned int)v97,
                      *(_QWORD *)(v10 + 8),
                      (*(_QWORD *)(v10 + 16) == 0) + *(_QWORD *)(v10 + 16) - 1LL);
              v51 = v80;
              v50 = v88;
              v59 = v80;
              goto LABEL_104;
            }
            if ( (unsigned __int8)(v88 - 2) > 5u )
              goto LABEL_77;
            *(_QWORD *)v75 = get_tinfo_size(0, *(_QWORD *)v96, 0);
            v50 = v88;
            s1 = nullptr;
            v51 = v80;
            v100 = 0;
            if ( (v96[0] & 0x100) != 0 )
            {
              get_tinfo_pdata(&s1, *(_QWORD *)v96, 2);
              v50 = v88;
              v51 = v80;
            }
            if ( *(_QWORD *)v75 == 1 )
            {
              v83 = v51;
              v94 = v50;
              v52 = sub_5701D0(a1, (__m128 *)v10, (unsigned int)v97, 1u);
            }
            else
            {
              if ( *(_QWORD *)v75 != 2 )
              {
                if ( *(_QWORD *)v75 == 4 && (_QWORD)v100 )
                {
                  v58 = s1;
                  v83 = v51;
                  v94 = v50;
                  v62 = strcmp(s1, "wchar_t");
                  v50 = v94;
                  v51 = v83;
                  if ( !v62 )
                  {
                    v52 = sub_5701D0(a1, (__m128 *)v10, (unsigned int)v97, 4u);
                    goto LABEL_111;
                  }
LABEL_114:
                  v52 = 0;
LABEL_102:
                  v59 = v52 | (*(_QWORD *)v75 != 1);
                  if ( v58 )
                  {
                    v95 = v51;
                    v81 = v50;
                    v92 = v52;
                    v76 = v52 | (*(_QWORD *)v75 != 1);
                    *(_QWORD *)&v100 = 0;
                    qfree(v58);
                    v51 = v95;
                    v50 = v81;
                    v52 = v92;
                    v59 = v76;
                  }
LABEL_104:
                  if ( v52 == 1 || !v59 )
                  {
LABEL_78:
                    v90 = v50;
                    v73 = v52;
                    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v85);
                    if ( !v13 )
                    {
                      v34 = v90;
                      if ( v73 )
                      {
                        v53 = sub_573340(v78, (unsigned int *)&v97);
                        copy_idcv(v53);
                        goto LABEL_63;
                      }
                      goto LABEL_70;
                    }
LABEL_63:
                    clear_tinfo_t(v96);
                    return v13;
                  }
LABEL_77:
                  v89 = v51;
                  v72 = v50;
                  v13 = sub_5712E0(a1, (_BYTE *)v10, v96, (unsigned int)v97, 0);
                  v50 = v72;
                  v52 = v89;
                  goto LABEL_78;
                }
LABEL_101:
                v58 = s1;
                v52 = 0;
                goto LABEL_102;
              }
              if ( !(_QWORD)v100 )
                goto LABEL_101;
              v58 = s1;
              v82 = v51;
              v93 = v50;
              v60 = strcmp(s1, "WCHAR");
              v50 = v93;
              v51 = v82;
              if ( v60 )
              {
                v61 = strcmp(v58, "wchar_t");
                v50 = v93;
                v51 = v82;
                if ( v61 )
                  goto LABEL_114;
              }
              v83 = v51;
              v94 = v50;
              v52 = sub_5701D0(a1, (__m128 *)v10, (unsigned int)v97, 2u);
            }
LABEL_111:
            v58 = s1;
            v50 = v94;
            v51 = v83;
            goto LABEL_102;
          }
        }
        else
        {
          v46 = a1 + 64;
        }
        sub_5734D0(v78, v46, (int *)&v105);
        v45 = v87;
        v44 = v84;
        goto LABEL_75;
      default:
        return 0;
    }
  }
  qerrno = get_qerrno();
LABEL_39:
  *(_DWORD *)(a1 + 48) = qerrno;
  return (unsigned int)-1;
}

