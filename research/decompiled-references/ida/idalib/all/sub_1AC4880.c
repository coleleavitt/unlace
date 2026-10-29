__int64 __fastcall sub_1AC4880(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  char v16; // al
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r13
  __int64 v37; // rax
  __int64 *v38; // r12
  __int64 v39; // r13
  __int64 *v40; // rdx
  __int64 *v41; // rbx
  __int64 *v42; // r12
  unsigned __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  unsigned int v50; // eax
  _QWORD *v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // eax
  __int64 v58; // r13
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  _DWORD *v62; // rax
  __int64 v63; // rdi
  unsigned int v64; // eax
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdi
  unsigned __int64 v73; // rax
  unsigned __int16 v74; // ax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // r14d
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r14
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbp
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v101; // [rsp+0h] [rbp-F8h]
  __int64 *v103; // [rsp+10h] [rbp-E8h]
  __int64 *v104; // [rsp+18h] [rbp-E0h]
  int v105; // [rsp+24h] [rbp-D4h] BYREF
  __int64 v106; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v107[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v109[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v110; // [rsp+A8h] [rbp-50h]
  unsigned int v111; // [rsp+B0h] [rbp-48h]
  char v112; // [rsp+B4h] [rbp-44h]

  v9 = sub_BFD550(a4);
  if ( (*(_WORD *)v9 & 0x1FF) == 0x7C )
  {
    v30 = sub_C03930(v9, a2);
    v31 = sub_168B6C0(a1);
    v36 = sub_A71450(v31, v30);
    v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v37 + 17) & 4) != 0 )
      goto LABEL_21;
    v72 = *(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v73 = *(unsigned __int8 *)(v72 + 16);
    if ( (_BYTE)v73 == 13 )
    {
      v74 = (*(_WORD *)(v72 + 18) >> 3) & 0x1FF;
      if ( v74 > 0x1B3u && v74 <= 0x1E8u )
        goto LABEL_21;
    }
    else if ( (_BYTE)v73 == 47 )
    {
      v78 = sub_F60F10(v72, v30, v32, v33, v34, v35);
      if ( (*((_BYTE *)v78 + 74) & 1) != 0 || (v78[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_21;
    }
    else if ( (unsigned __int8)v73 <= 0x2Au )
    {
      v32 = 0x40600004C00LL;
      if ( _bittest64(&v32, v73) )
        goto LABEL_21;
    }
    v75 = sub_C00A40(v9, v30, v32, v33, v34);
    sub_168B9F0((__int64)v107, (__int64 *)a1, v75, 0xB70u, 0);
    if ( v110 )
    {
      sub_AE9DF0(v109, v36, 8u);
    }
    else if ( v112 )
    {
      v94 = sub_168B9E0(v107);
      v97 = v108;
      if ( v108 )
        v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
      v106 = v97;
      v98 = sub_1587BC0(v94, &v106, v92, v93, v95, v96);
      sub_AE9DF0((unsigned __int8 **)(*v98 + 32LL * v111 + 8), v36, 8u);
    }
    LODWORD(v106) = 1;
    sub_1587D10((__int64)v107, (int *)&v106);
    sub_15F7200(v107);
    return 1;
  }
  else
  {
    v10 = sub_F63240(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, v6, v7, v8);
    v15 = v10;
    if ( v10 )
    {
      v16 = *((_BYTE *)v10 + 73) >> 5;
      if ( v16 != 3 && v16 )
      {
        v66 = sub_C00A40(v9, a2, v11, (__int64)v12, v13);
        sub_168B9F0((__int64)v107, (__int64 *)a1, v66, 0xB6Eu, 0);
        v105 = 0;
      }
      else
      {
        if ( (*((_BYTE *)v15 + 74) & 1) != 0 )
        {
          if ( (*((_BYTE *)v15 + 28) & 0x7Fu) - 59 > 2 )
            goto LABEL_11;
          v17 = v15[13];
          v18 = *(_QWORD *)(v17 + 96);
          v11 = v18 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v18 & 1) == 0 )
          {
            v12 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (v18 & 2) == 0 )
              {
LABEL_10:
                if ( *(char *)v15[16] < 0 )
                {
LABEL_11:
                  v19 = (__int64)v15;
                  v20 = 0x40600004C00LL;
                  v25 = sub_B7E900(v19, a2, v11, (__int64)v12, v13, v14);
                  if ( v25 )
                  {
                    do
                    {
LABEL_12:
                      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 48) & 0xFFFFFFFFFFFFFFF0LL);
                      if ( (*(_BYTE *)(v26 + 17) & 4) == 0 )
                      {
                        v48 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                        v49 = *(unsigned __int8 *)(v48 + 16);
                        if ( (_BYTE)v49 == 13 )
                        {
                          if ( (((*(_WORD *)(v48 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
                            goto LABEL_34;
                        }
                        else if ( (_BYTE)v49 == 47 )
                        {
                          v51 = sub_F60F10(v48, a2, v21, v22, v23, v24);
                          if ( (*((_BYTE *)v51 + 74) & 1) == 0 && (v51[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                            goto LABEL_34;
                        }
                        else if ( (unsigned __int8)v49 > 0x2Au || !_bittest64(&v20, v49) )
                        {
LABEL_34:
                          v50 = sub_C00A40(v9, a2, v21, v22, v23);
                          sub_168B9F0((__int64)v107, (__int64 *)a1, v50, 0xB6Du, 0);
                          sub_15F7200(v107);
                          sub_168B9F0((__int64)v107, (__int64 *)a1, *(_DWORD *)(v25 + 24), 0x1678u, 0);
                          sub_15F7200(v107);
                          return 1;
                        }
                      }
                      v27 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v25 = v27;
                      if ( !v27 )
                        goto LABEL_21;
                    }
                    while ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 );
                    while ( 1 )
                    {
                      v28 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                      v25 = v28;
                      if ( !v28 )
                        break;
                      v21 = (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49;
                      if ( (unsigned int)v21 <= 2 )
                        goto LABEL_12;
                    }
                    if ( (*(_DWORD *)v9 & 0x8000) != 0 )
                      return v9;
LABEL_22:
                    v38 = *(__int64 **)(a1 + 104);
                    v104 = &v38[*(unsigned int *)(a1 + 112)];
                    if ( v38 != v104 )
                    {
                      v39 = *v38;
                      if ( a3 != *(_BYTE *)(*v38 + 40) )
                      {
                        v103 = v38 + 1;
                        while ( 1 )
                        {
                          v40 = *(__int64 **)(v39 + 24);
                          v41 = &v40[*(_QWORD *)(v39 + 32)];
                          v42 = v40;
                          if ( v41 != v40 )
                            break;
LABEL_29:
                          if ( v104 != v103 )
                          {
                            v39 = *v103++;
                            if ( *(_BYTE *)(v39 + 40) != a3 )
                              continue;
                          }
                          return v9;
                        }
                        while ( 1 )
                        {
                          v43 = *v42;
                          if ( (*(_DWORD *)*v42 & 0x8000) == 0 )
                          {
                            v44 = *v42;
                            if ( sub_1AC1A90(v9, *v42) )
                              break;
                          }
                          if ( v41 == ++v42 )
                            goto LABEL_29;
                        }
                        v52 = sub_C00A40(v9, v44, v45, v46, v47);
                        v53 = a1;
                        sub_168B9F0((__int64)v107, (__int64 *)a1, v52, 0x1330u, 0);
                        if ( v110 )
                        {
                          v53 = a3;
                          sub_1AC1EE0(v109, a3);
                        }
                        else
                        {
                          if ( !v112 )
                          {
LABEL_41:
                            sub_15F7200(v107);
                            v57 = sub_C00A40(v43, v53, v54, v55, v56);
                            sub_168B9F0((__int64)v107, (__int64 *)a1, v57, 0x1675u, 0);
                            LOBYTE(v106) = *(_BYTE *)(v39 + 8);
                            sub_1AA5620((__int64)v107, (char *)&v106);
                            sub_15F7200(v107);
                            return 1;
                          }
                          v83 = sub_168B9E0(v107);
                          v84 = v108;
                          if ( v108 )
                            v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
                          v106 = v84;
                          v85 = sub_1587BC0(v83, &v106, v79, v80, v81, v82);
                          v53 = a3;
                          sub_1AC1EE0((unsigned __int8 **)(*v85 + 32LL * v111 + 8), a3);
                        }
                        v77 = *(unsigned __int8 *)(v39 + 40);
                        if ( v110 )
                        {
                          v53 = *(unsigned __int8 *)(v39 + 40);
                          sub_1AC1EE0(v109, v53);
                        }
                        else if ( v112 )
                        {
                          v87 = sub_168B9E0(v107);
                          v90 = v108;
                          if ( v108 )
                          {
                            v101 = v87;
                            v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v108 + 32LL))(v108);
                            v87 = v101;
                          }
                          v106 = v90;
                          v91 = sub_1587BC0(v87, &v106, v86, v87, v88, v89);
                          v53 = v77;
                          sub_1AC1EE0((unsigned __int8 **)(*v91 + 32LL * v111 + 8), v77);
                        }
                        goto LABEL_41;
                      }
                    }
                    return v9;
                  }
LABEL_21:
                  if ( (*(_DWORD *)v9 & 0x8000) != 0 )
                    return v9;
                  goto LABEL_22;
                }
                v76 = sub_C00A40(v9, a2, v11, (__int64)v12, v13);
                sub_168B9F0((__int64)v107, (__int64 *)a1, v76, 0xB6Eu, 0);
                v105 = 2;
                goto LABEL_54;
              }
              v58 = v12[2295];
              v59 = v17 & 0xFFFFFFFFFFFFFFFBLL;
              if ( v58 )
              {
                a2 = v12[294];
                v12[304] += 24LL;
                v60 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v12[295] >= v60 + 24 && a2 )
                {
                  v12[294] = v60 + 24;
                  v61 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  a2 = 24;
                  v61 = sub_986170((__int64)(v12 + 294), 24, 24, 3, v13, v14);
                  v60 = v61 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v61 = v58;
                v59 = v60 | 4;
                *(_DWORD *)(v61 + 8) = 0;
                *(_QWORD *)(v61 + 16) = v17;
              }
              v11 = v59 & 0xFFFFFFFFFFFFFFFELL;
              v18 = v11 | 1;
              *(_QWORD *)(v17 + 96) = v11 | 1;
            }
          }
          if ( v11 )
          {
            v11 &= 4u;
            if ( (_DWORD)v11 )
            {
              v62 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v62 )
              {
                v63 = *(_QWORD *)v62;
                v11 = *(unsigned int *)(*(_QWORD *)v62 + 12LL);
                if ( v62[2] != (_DWORD)v11 )
                {
                  v62[2] = v11;
                  a2 = v17;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 152LL))(v63, v17);
                }
              }
            }
          }
          goto LABEL_10;
        }
        v64 = sub_C00A40(v9, a2, v11, (__int64)v12, v13);
        sub_168B9F0((__int64)v107, (__int64 *)a1, v64, 0xB6Eu, 0);
        v105 = 1;
      }
LABEL_54:
      v65 = sub_1587D10((__int64)v107, &v105);
      v106 = *(_QWORD *)(v9 + 8);
      sub_162B6D0(v65, &v106);
      sub_15F7200(v107);
      return 1;
    }
    v67 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v67 + 17) & 4) != 0 )
      goto LABEL_21;
    v68 = *(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v69 = *(unsigned __int8 *)(v68 + 16);
    if ( (_BYTE)v69 == 13 )
    {
      if ( (((*(_WORD *)(v68 + 18) >> 3) + 76) & 0x1FFu) <= 0x34 )
        goto LABEL_21;
    }
    else if ( (_BYTE)v69 == 47 )
    {
      v99 = sub_F60F10(v68, a2, v11, (__int64)v12, v13, v14);
      if ( (*((_BYTE *)v99 + 74) & 1) != 0 || (v99[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_21;
    }
    else if ( (unsigned __int8)v69 <= 0x2Au )
    {
      v11 = 0x40600004C00LL;
      if ( _bittest64((const __int64 *)&v11, v69) )
        goto LABEL_21;
    }
    v70 = sub_C00A40(v9, a2, v11, (__int64)v12, v13);
    sub_168B9F0((__int64)v107, (__int64 *)a1, v70, 0xB70u, 0);
    v106 = *(_QWORD *)(v9 + 8);
    v71 = sub_162B6D0((__int64)v107, &v106);
    v105 = 0;
    sub_1587D10(v71, &v105);
    sub_15F7200(v107);
    return 1;
  }
}
