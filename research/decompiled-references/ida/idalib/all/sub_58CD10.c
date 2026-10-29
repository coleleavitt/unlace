__int64 __fastcall sub_58CD10(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  char tinfo_property; // al
  __int64 tinfo_size; // rax
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int128 *, __int64); // rdi
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r13d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbp
  unsigned int v22; // r14d
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 (__fastcall ***v27)(_QWORD, __int64, __int128 *, __int64); // rdi
  char v28; // al
  char v29; // al
  __int64 v30; // rdi
  char v31; // al
  bool v32; // r10
  unsigned __int8 v33; // r9
  char v34; // al
  unsigned __int8 v35; // r9
  char v36; // al
  _QWORD *v37; // rax
  _QWORD *v38; // r11
  int qerrno; // eax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  char *v43; // rdi
  _QWORD *v44; // rax
  unsigned __int8 v45; // r9
  bool v46; // r10
  _QWORD *v47; // rsi
  int v48; // eax
  int v49; // eax
  unsigned __int8 v50; // al
  unsigned __int8 v51; // r9
  char v52; // r10
  char v53; // al
  _QWORD *v54; // rax
  __int64 v55; // r15
  char *v56; // rbx
  void *v57; // rdi
  void *v58; // rdi
  char *v59; // r15
  char v60; // dl
  int v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned __int64 v64; // [rsp+8h] [rbp-150h]
  unsigned __int8 v65; // [rsp+10h] [rbp-148h]
  char v66; // [rsp+10h] [rbp-148h]
  unsigned __int8 v67; // [rsp+10h] [rbp-148h]
  bool v68; // [rsp+10h] [rbp-148h]
  unsigned __int8 v69; // [rsp+10h] [rbp-148h]
  unsigned __int8 v70; // [rsp+10h] [rbp-148h]
  unsigned __int8 v71; // [rsp+10h] [rbp-148h]
  unsigned __int8 v72; // [rsp+10h] [rbp-148h]
  unsigned __int8 v73; // [rsp+10h] [rbp-148h]
  char v74; // [rsp+10h] [rbp-148h]
  int v75[2]; // [rsp+10h] [rbp-148h]
  int v76[2]; // [rsp+10h] [rbp-148h]
  char v77; // [rsp+10h] [rbp-148h]
  bool v78; // [rsp+18h] [rbp-140h]
  _QWORD *v79; // [rsp+18h] [rbp-140h]
  __int64 v80; // [rsp+18h] [rbp-140h]
  bool v81; // [rsp+20h] [rbp-138h]
  unsigned __int8 v82; // [rsp+20h] [rbp-138h]
  char v83; // [rsp+20h] [rbp-138h]
  char v84; // [rsp+20h] [rbp-138h]
  unsigned __int8 v85; // [rsp+2Dh] [rbp-12Bh]
  unsigned __int8 v86; // [rsp+2Dh] [rbp-12Bh]
  unsigned __int8 v87; // [rsp+2Dh] [rbp-12Bh]
  bool v88; // [rsp+2Eh] [rbp-12Ah]
  unsigned __int8 v89; // [rsp+2Eh] [rbp-12Ah]
  char v90; // [rsp+2Eh] [rbp-12Ah]
  unsigned __int8 v91; // [rsp+2Eh] [rbp-12Ah]
  bool v92; // [rsp+2Eh] [rbp-12Ah]
  char v93; // [rsp+2Eh] [rbp-12Ah]
  unsigned __int8 v94; // [rsp+2Eh] [rbp-12Ah]
  unsigned __int8 v95; // [rsp+2Eh] [rbp-12Ah]
  char v96; // [rsp+2Fh] [rbp-129h]
  int v97[2]; // [rsp+38h] [rbp-120h] BYREF
  void *v98; // [rsp+40h] [rbp-118h] BYREF
  __int128 v99; // [rsp+48h] [rbp-110h]
  char *s1; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v101; // [rsp+68h] [rbp-F0h]
  __int128 v102; // [rsp+78h] [rbp-E0h]
  __int64 v103; // [rsp+88h] [rbp-D0h]
  int v104; // [rsp+90h] [rbp-C8h]
  __int128 v105; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v106; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v107; // [rsp+C0h] [rbp-98h] BYREF
  char v108[8]; // [rsp+C8h] [rbp-90h] BYREF
  char v109; // [rsp+D0h] [rbp-88h] BYREF
  _BYTE v110[40]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v111; // [rsp+118h] [rbp-40h]

  v111 = __readfsqword(0x28u);
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
        v65 = tinfo_property & 0xF;
        tinfo_size = get_tinfo_size(0, *a3, 0);
        v13 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int128 *, __int64))(a1 + 24);
        v64 = tinfo_size;
        v105 = 0;
        v106 = 0;
        v14 = (**v13)(v13, a4, &v105, tinfo_size);
        v17 = v65;
        if ( !v14 )
          goto LABEL_4;
        goto LABEL_23;
      case 9:
        v20 = get_tinfo_size(0, *a3, 0);
        v21 = v20;
        if ( v20 <= 0x20 )
        {
          v22 = v20;
          free_idcv(v10);
          v23 = *(_QWORD *)(a1 + 40);
          if ( *(_QWORD *)(v23 + 1208) )
          {
            v24 = *(_QWORD *)(v23 + 1048);
            if ( (int)v21 <= 16 && v24 < v21 )
              v22 = v24;
          }
          if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, __int64, _BYTE *, _QWORD))(a1 + 24))(
                 *(_QWORD *)(a1 + 24),
                 a4,
                 v110,
                 (int)v22) )
          {
            *(_BYTE *)v10 = 3;
            *(_OWORD *)(v10 + 8) = 0;
            cpu2ieee(v10 + 8, v110, v22);
          }
          return 0;
        }
        if ( !under_debugger )
          interr(21);
        goto LABEL_129;
      case 0xB:
        v25 = *a3;
        s1 = nullptr;
        *(_QWORD *)&v101 = 0;
        get_tinfo_details(v25, 11, &s1);
        if ( DWORD1(v101)
          && (unsigned __int8)((get_tinfo_property(s1, 2) & 0xF) - 2) <= 5u
          && get_tinfo_size(0, s1, 0) == 1 )
        {
          *(_DWORD *)(a1 + 32) |= 2u;
          free_idcv(v10);
          *(_BYTE *)v10 = 7;
          *(_QWORD *)(v10 + 8) = 0;
          *(_OWORD *)(v10 + 16) = 0;
          sub_3600E0((__int64 *)(v10 + 8), DWORD1(v101));
          (***(void (__fastcall ****)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 24))(
            *(_QWORD *)(a1 + 24),
            a4,
            *(_QWORD *)(v10 + 8),
            DWORD1(v101));
        }
        clear_tinfo_t(&s1);
        return 0;
      case 0xC:
        qerrno = 1569;
        goto LABEL_40;
      case 0xD:
        if ( (tinfo_property & 0x30) != 0x20 )
          return 0;
        v66 = tinfo_property & 0xF;
        v26 = get_tinfo_size(0, *a3, 0);
        v27 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int128 *, __int64))(a1 + 24);
        v64 = v26;
        v105 = 0;
        v106 = 0;
        v28 = (**v27)(v27, a4, &v105, v26);
        LOBYTE(v17) = v66;
        if ( !v28 )
          goto LABEL_5;
LABEL_23:
        v67 = v17;
        v29 = getinf_flag(3, 32);
        v17 = v67;
        if ( !v29 )
          goto LABEL_24;
        if ( v64 <= 1 )
          goto LABEL_42;
        swap_value(&v105, &v105, (unsigned int)v64);
        v17 = v67;
LABEL_24:
        if ( v64 <= 7 )
        {
LABEL_42:
          v70 = v17;
          v40 = get_tinfo_property(*a3, 3);
          v30 = v105;
          v17 = v70;
          if ( v40 == 1 )
          {
            v41 = extend_sign(v105, (unsigned int)v64, 1);
            v17 = v70;
            *(_QWORD *)&v105 = v41;
            v30 = v41;
          }
        }
        else
        {
          v30 = v105;
        }
        if ( (_BYTE)v17 != 10 || v30 == 0 )
          goto LABEL_4;
        v18 = *(_DWORD *)(a1 + 32) & 8;
        if ( v18 )
          goto LABEL_5;
        v68 = (_BYTE)v17 == 10 && v30 != 0;
        *(_QWORD *)v97 = get_tinfo_property(*a3, 9);
        v31 = get_tinfo_property(*(_QWORD *)v97, 2);
        v32 = v68;
        if ( !v31 || (v33 = v31 & 0xF, (v31 & 0xF) == 0xC) )
        {
          clear_tinfo_t(v97);
          goto LABEL_5;
        }
        if ( *(_BYTE *)v10 == 7 )
          goto LABEL_33;
        v78 = v68;
        v69 = v31 & 0xF;
        v34 = get_tinfo_property(*(_QWORD *)v97, 2);
        v35 = v69;
        if ( (v34 & 0x3F) == 1 )
          goto LABEL_70;
        v36 = get_tinfo_property(*(_QWORD *)v97, 2);
        v33 = v69;
        v32 = v78;
        if ( (v36 & 0x3F) != 0xD )
          goto LABEL_33;
        s1 = nullptr;
        v103 = 0;
        v104 = 1;
        v101 = 0;
        v102 = 0;
        get_tinfo_details(*(_QWORD *)v97, 13, &s1);
        v33 = v69;
        v32 = v78;
        if ( (_QWORD)v101 != 1 )
          goto LABEL_85;
        if ( (_QWORD)v102 != 4 )
          goto LABEL_85;
        if ( (s1[64] & 0xFu) > 9 )
          goto LABEL_85;
        if ( *((_QWORD *)s1 + 1) != 32 )
          goto LABEL_85;
        if ( !*((_QWORD *)s1 + 3) )
          goto LABEL_85;
        v49 = strcmp(*((const char **)s1 + 2), "unused");
        v33 = v69;
        v32 = v78;
        if ( v49 )
          goto LABEL_85;
        v98 = nullptr;
        v99 = 0;
        if ( (v97[0] & 0x100) == 0 )
          goto LABEL_69;
        get_tinfo_pdata(&v98, *(_QWORD *)v97, 2);
        v33 = v69;
        if ( !(_QWORD)v99 )
          goto LABEL_125;
        v32 = v78;
        if ( (unsigned __int64)(v99 - 1) <= 2 )
        {
          if ( (_QWORD)v99 == 1 )
          {
LABEL_125:
            if ( v98 )
            {
              *(_QWORD *)&v99 = 0;
              qfree(v98);
              v33 = v69;
            }
LABEL_69:
            v71 = v33;
            sub_37ECD0(&s1);
            v35 = v71;
LABEL_70:
            v72 = v35;
            clear_tinfo_t(v97);
            v17 = v72;
LABEL_4:
            if ( (_BYTE)v17 == 14 )
            {
              *(_QWORD *)&v105 = read_tinfo_bitfield_value(*a3, v105, a5, v15, v16, v17);
LABEL_6:
              free_idcv(v10);
              if ( v64 > 8 )
                *(_BYTE *)v10 = 9;
              *(_QWORD *)(v10 + 8) = v105;
              return 0;
            }
LABEL_5:
            if ( a5 )
            {
              if ( !under_debugger )
                interr(898);
LABEL_129:
              BUG();
            }
            goto LABEL_6;
          }
        }
        else if ( *((char *)v98 + v99 - 2) == 95 && *((char *)v98 + v99 - 3) == 95 )
        {
          goto LABEL_125;
        }
        if ( v98 )
        {
          *(_QWORD *)&v99 = 0;
          qfree(v98);
          v33 = v69;
          v32 = v78;
        }
LABEL_85:
        if ( s1 )
        {
          v80 = v10;
          v55 = 0;
          v87 = v33;
          *(_QWORD *)v75 = v101;
          v92 = v32;
          while ( *(_QWORD *)v75 != v55 )
          {
            v56 = &s1[144 * v55];
            clear_tinfo_t(v56 + 64);
            v57 = *((void **)v56 + 5);
            if ( v57 )
            {
              *((_QWORD *)v56 + 6) = 0;
              qfree(v57);
            }
            v58 = *((void **)v56 + 2);
            if ( v58 )
            {
              *((_QWORD *)v56 + 3) = 0;
              qfree(v58);
            }
            ++v55;
          }
          v10 = v80;
          *(_QWORD *)&v101 = 0;
          qfree(s1);
          v32 = v92;
          v33 = v87;
        }
LABEL_33:
        v37 = *(_QWORD **)(a1 + 72);
        v98 = (void *)v105;
        if ( v37 )
        {
          v38 = (_QWORD *)(a1 + 64);
          do
          {
            if ( v37[4] >= (unsigned __int64)v105 )
            {
              v38 = v37;
              v37 = (_QWORD *)v37[2];
            }
            else
            {
              v37 = (_QWORD *)v37[3];
            }
          }
          while ( v37 );
          if ( (_QWORD *)(a1 + 64) != v38 && (unsigned __int64)v105 >= v38[4] )
          {
            v48 = copy_idcv(v10);
            *(_DWORD *)(a1 + 48) = v48;
            if ( !v48 )
            {
              clear_tinfo_t(v97);
              return 0;
            }
            v18 = -1;
            goto LABEL_63;
          }
        }
        v42 = 6;
        v79 = (_QWORD *)(a1 + 56);
        v107 = v105;
        v43 = &v109;
        while ( v42 )
        {
          *(_DWORD *)v43 = 0;
          v43 += 4;
          --v42;
        }
        v88 = v32;
        v85 = v33;
        v108[0] = 2;
        copy_idcv(v108);
        v44 = *(_QWORD **)(a1 + 72);
        v45 = v85;
        v46 = v88;
        if ( v44 )
        {
          v47 = (_QWORD *)(a1 + 64);
          do
          {
            if ( v44[4] >= v107 )
            {
              v47 = v44;
              v44 = (_QWORD *)v44[2];
            }
            else
            {
              v44 = (_QWORD *)v44[3];
            }
          }
          while ( v44 );
          if ( (_QWORD *)(a1 + 64) != v47 && v107 >= v47[4] )
          {
LABEL_75:
            v81 = v46;
            v89 = v45;
            free_idcv(v108);
            v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
            v51 = v89;
            v86 = v50;
            v52 = v81;
            if ( *(_BYTE *)v10 == 7 )
            {
              v53 = (***(__int64 (__fastcall ****)(_QWORD, void *, _QWORD, __int64))(a1 + 24))(
                      *(_QWORD *)(a1 + 24),
                      v98,
                      *(_QWORD *)(v10 + 8),
                      (*(_QWORD *)(v10 + 16) == 0) + *(_QWORD *)(v10 + 16) - 1LL);
              v52 = v81;
              v51 = v89;
              v60 = v81;
              goto LABEL_104;
            }
            if ( (unsigned __int8)(v89 - 2) > 5u )
              goto LABEL_77;
            *(_QWORD *)v76 = get_tinfo_size(0, *(_QWORD *)v97, 0);
            v51 = v89;
            s1 = nullptr;
            v52 = v81;
            v101 = 0;
            if ( (v97[0] & 0x100) != 0 )
            {
              get_tinfo_pdata(&s1, *(_QWORD *)v97, 2);
              v51 = v89;
              v52 = v81;
            }
            if ( *(_QWORD *)v76 == 1 )
            {
              v84 = v52;
              v95 = v51;
              v53 = sub_5898D0(a1, (__m128 *)v10, (__int64)v98, 1u);
            }
            else
            {
              if ( *(_QWORD *)v76 != 2 )
              {
                if ( *(_QWORD *)v76 == 4 && (_QWORD)v101 )
                {
                  v59 = s1;
                  v84 = v52;
                  v95 = v51;
                  v63 = strcmp(s1, "wchar_t");
                  v51 = v95;
                  v52 = v84;
                  if ( !v63 )
                  {
                    v53 = sub_5898D0(a1, (__m128 *)v10, (__int64)v98, 4u);
                    goto LABEL_111;
                  }
LABEL_114:
                  v53 = 0;
LABEL_102:
                  v60 = v53 | (*(_QWORD *)v76 != 1);
                  if ( v59 )
                  {
                    v96 = v52;
                    v82 = v51;
                    v93 = v53;
                    v77 = v53 | (*(_QWORD *)v76 != 1);
                    *(_QWORD *)&v101 = 0;
                    qfree(v59);
                    v52 = v96;
                    v51 = v82;
                    v53 = v93;
                    v60 = v77;
                  }
LABEL_104:
                  if ( v53 == 1 || !v60 )
                  {
LABEL_78:
                    v91 = v51;
                    v74 = v53;
                    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v86);
                    if ( !v18 )
                    {
                      v35 = v91;
                      if ( v74 )
                      {
                        v54 = sub_58CA80(v79, (unsigned __int64 *)&v98);
                        copy_idcv(v54);
                        goto LABEL_63;
                      }
                      goto LABEL_70;
                    }
LABEL_63:
                    clear_tinfo_t(v97);
                    return v18;
                  }
LABEL_77:
                  v90 = v52;
                  v73 = v51;
                  v18 = sub_58A9F0(a1, (_BYTE *)v10, v97, (__int64)v98, 0);
                  v51 = v73;
                  v53 = v90;
                  goto LABEL_78;
                }
LABEL_101:
                v59 = s1;
                v53 = 0;
                goto LABEL_102;
              }
              if ( !(_QWORD)v101 )
                goto LABEL_101;
              v59 = s1;
              v83 = v52;
              v94 = v51;
              v61 = strcmp(s1, "WCHAR");
              v51 = v94;
              v52 = v83;
              if ( v61 )
              {
                v62 = strcmp(v59, "wchar_t");
                v51 = v94;
                v52 = v83;
                if ( v62 )
                  goto LABEL_114;
              }
              v84 = v52;
              v95 = v51;
              v53 = sub_5898D0(a1, (__m128 *)v10, (__int64)v98, 2u);
            }
LABEL_111:
            v59 = s1;
            v51 = v95;
            v52 = v84;
            goto LABEL_102;
          }
        }
        else
        {
          v47 = (_QWORD *)(a1 + 64);
        }
        sub_58CC10(v79, v47, (__int64 *)&v107);
        v46 = v88;
        v45 = v85;
        goto LABEL_75;
      default:
        return 0;
    }
  }
  qerrno = get_qerrno();
LABEL_40:
  *(_DWORD *)(a1 + 48) = qerrno;
  return (unsigned int)-1;
}
