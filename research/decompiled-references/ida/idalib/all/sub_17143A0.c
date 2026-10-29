void __fastcall sub_17143A0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // r12
  __int64 v7; // r14
  bool v8; // cf
  bool v9; // zf
  unsigned __int64 v10; // rax
  char v11; // r13
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 *v27; // rdi
  __int64 v28; // r10
  __int64 *v29; // rdi
  unsigned int v30; // edx
  __int64 v31; // r12
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbp
  int v35; // edx
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r13
  __int64 v38; // rax
  int v39; // edi
  int v40; // r10d
  __int64 v41; // r8
  __int64 *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 *v47; // rdi
  __int64 v48; // r9
  __int64 *v49; // rdi
  __int64 v50; // rsi
  unsigned __int64 v51; // rax
  int v52; // edx
  int v53; // r8d
  __int64 v54; // rdi
  _QWORD *v55; // rcx
  __int64 v56; // rdi
  __int16 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  char v61; // dl
  __int64 v62; // rax
  __int64 *v63; // r12
  __int64 v64; // r8
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // esi
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r11
  int v72; // edi
  int v73; // r10d
  __int64 v74; // r9
  unsigned __int64 v75; // rdx
  unsigned __int8 v76; // cl
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  int v81; // [rsp+8h] [rbp-130h]
  __int64 *v82; // [rsp+8h] [rbp-130h]
  __int16 v83; // [rsp+12h] [rbp-126h]
  unsigned int v84; // [rsp+14h] [rbp-124h]
  __int64 v85; // [rsp+18h] [rbp-120h]
  __int16 v86; // [rsp+18h] [rbp-120h]
  __int64 *v87; // [rsp+20h] [rbp-118h]
  char v88; // [rsp+37h] [rbp-101h] BYREF
  __int64 v89; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v90[4]; // [rsp+40h] [rbp-F8h] BYREF
  int v91; // [rsp+50h] [rbp-E8h]
  __int64 v92; // [rsp+54h] [rbp-E4h]
  int v93; // [rsp+60h] [rbp-D8h]
  __m128 v94; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v95; // [rsp+78h] [rbp-C0h]
  char v96; // [rsp+80h] [rbp-B8h]
  __int64 v97; // [rsp+88h] [rbp-B0h]
  __int64 *v98; // [rsp+90h] [rbp-A8h]
  __int64 v99; // [rsp+98h] [rbp-A0h]
  __m128 v100; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-88h]
  _BYTE v102[112]; // [rsp+C8h] [rbp-70h] BYREF

  if ( *((_DWORD *)a2 + 6) )
  {
    sub_1706C30((__int64)a1, (__int64)a2);
    return;
  }
  v5 = (__int64 *)*a2;
  if ( (*(_BYTE *)(*a2 + 28LL) & 0x7Fu) - 53 <= 1 )
  {
    v7 = a2[9];
    v8 = *((_DWORD *)a2 + 8) == 0;
    v9 = *((_DWORD *)a2 + 8) == 1;
    v100.m128_u64[0] = a2[5];
    v10 = a2[6];
    v11 = v8 || v9;
    *(_OWORD *)(a2 + 5) = 0;
    v100.m128_u64[1] = v10;
    v12 = a2[7];
    a2[7] = 0;
    v101 = v12;
    v13 = sub_16FE9F0((__int64)a1, v5[8]);
    v14 = v5[8];
    v91 = v13;
    v97 = v7;
    v94 = v100;
    *(_QWORD *)v90 = v14;
    v100 = 0;
    v95 = v101;
    v92 = 0;
    v93 = 0;
    v101 = 0;
    v96 = v96 & 0x80 | 0x40;
    v98 = nullptr;
    v99 = 0;
    sub_15A3440(v90, v11, v14, v15, v16, v17);
    sub_1705410((__int64)&v100);
    v98 = v5;
    sub_17048E0((__int64)&v100, (__int64)v90);
    sub_17143A0(a1, &v100, a3);
    sub_1705410((__int64)v102);
    sub_1705410((__int64)&v94);
    return;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(*v5 + 32))(*a2);
  v19 = *a2;
  v20 = v18;
  LOWORD(v18) = *(_WORD *)(v18 + 30);
  v88 = 0;
  v83 = v18 & 0x3FFF;
  if ( (unsigned __int8)sub_16FFF90((__int64)a1, v19, &v88) )
  {
    v21 = *a2;
    v22 = *(_BYTE *)(*a2 + 28LL) & 0x7F;
    if ( v22 == 71 )
      v22 = *(_BYTE *)(*(_QWORD *)(v21 + 48) + 28LL) & 0x7F;
    if ( v22 != 38 )
    {
      v23 = *(_QWORD *)(v21 + 40);
      v87 = (__int64 *)a1[30];
      v24 = v87[2];
      v25 = *((unsigned int *)v87 + 8);
      if ( (_DWORD)v25 )
      {
        v26 = (v25 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
        v27 = (__int64 *)(v24 + 24LL * v26);
        v28 = *v27;
        if ( v23 != *v27 )
        {
          v39 = 1;
          if ( v28 == -1 )
            goto LABEL_28;
          while ( 1 )
          {
            v40 = v39 + 1;
            v26 = (v25 - 1) & (v39 + v26);
            v27 = (__int64 *)(v24 + 24LL * v26);
            v41 = *v27;
            if ( v23 == *v27 )
              break;
            v39 = v40;
            if ( v41 == -1 )
              goto LABEL_28;
          }
        }
        if ( v27 != (__int64 *)(v24 + 24 * v25) )
        {
          v29 = v27 + 1;
          sub_16FE500(v29);
          v31 = v30;
          v32 = sub_16FE540(v29);
          v85 = a3;
          v34 = v20;
          v81 = v35;
          v36 = v32;
          while ( 1 )
          {
            if ( v36 == v33 )
            {
LABEL_14:
              if ( v81 == (_DWORD)v31 )
              {
                v20 = v34;
                a3 = v85;
                v82 = (__int64 *)a1[30];
LABEL_29:
                v42 = (__int64 *)a1[29];
                v86 = v83 & 0x868;
                if ( v42 != v82 )
                {
                  while ( 2 )
                  {
                    v43 = v42[2];
                    v44 = *(_QWORD *)(*a2 + 40LL);
                    v45 = *((unsigned int *)v42 + 8);
                    if ( (_DWORD)v45 )
                    {
                      v46 = (v45 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
                      v47 = (__int64 *)(v43 + 24LL * v46);
                      v48 = *v47;
                      if ( v44 == *v47 )
                      {
LABEL_32:
                        if ( v47 != (__int64 *)(v43 + 24 * v45) )
                        {
                          v49 = v47 + 1;
                          v50 = (__int64)sub_16FE500(v49);
                          v51 = sub_16FE540(v49);
                          while ( 2 )
                          {
                            while ( 2 )
                            {
                              if ( v51 == v50 && v53 == v52 )
                                goto LABEL_43;
                              v54 = v50;
                              v50 &= 0xFFFFFFFFFFFFFFF8LL;
                              v55 = (_QWORD *)v50;
                              v56 = (v54 >> 2) & 1;
                              if ( v56 )
                              {
                                v71 = *(_QWORD *)v50;
                                if ( (*(_WORD *)(*(_QWORD *)v50 + 30LL) & 0x3EFF) != 6 || !v86 )
                                {
                                  if ( (*(_WORD *)(*(_QWORD *)v50 + 30LL) & 0x40) == 0 )
                                    goto LABEL_59;
                                  goto LABEL_65;
                                }
                              }
                              else
                              {
                                if ( v50 )
                                {
                                  v57 = *(_WORD *)(v50 + 30) & 0x3FFF;
                                  if ( (*(_WORD *)(v50 + 30) & 0x3EFF) == 6 && v86 )
                                    goto LABEL_71;
                                  if ( (*(_BYTE *)(v50 + 30) & 0x40) != 0 )
                                    goto LABEL_40;
                                }
                                else
                                {
                                  if ( (MEMORY[0x10102464C459D] & 0x3EFF) == 6 && v86 )
                                    goto LABEL_74;
                                  if ( (MEMORY[0x10102464C459D] & 0x40) != 0 )
                                    goto LABEL_67;
                                }
LABEL_59:
                                if ( (v83 & 0x40) == 0 )
                                {
                                  if ( (_DWORD)v56 || !v50 )
LABEL_69:
                                    v55 = (_QWORD *)*v55;
LABEL_41:
                                  if ( (*(_BYTE *)(*(_QWORD *)(a1[22] + 232LL) + 1LL) & 8) == 0
                                    || (unsigned __int8)sub_16FF5F0((__int64)(a1 + 22), (__int64)a2, a3, (__int64)v55) )
                                  {
                                    return;
                                  }
                                  goto LABEL_43;
                                }
                                if ( !v56 )
                                {
                                  if ( !v50 )
                                  {
LABEL_67:
                                    if ( v83 == (MEMORY[0x10102464C459D] & 0x3FFF) )
                                    {
                                      v55 = nullptr;
                                      goto LABEL_69;
                                    }
LABEL_74:
                                    v53 = 0;
                                    continue;
                                  }
                                  v57 = *(_WORD *)(v50 + 30) & 0x3FFF;
LABEL_40:
                                  if ( v83 == v57 )
                                    goto LABEL_41;
LABEL_71:
                                  v53 = 0;
                                  v50 = 0;
                                  continue;
                                }
                                v71 = *(_QWORD *)v50;
LABEL_65:
                                if ( v83 == (*(_WORD *)(v71 + 30) & 0x3FFF) )
                                  goto LABEL_69;
                              }
                              break;
                            }
                            v50 = (v50 + 16) | 4;
                            continue;
                          }
                        }
                      }
                      else
                      {
                        v72 = 1;
                        if ( v48 != -1 )
                        {
                          do
                          {
                            v73 = v72 + 1;
                            v46 = (v45 - 1) & (v46 + v72);
                            v47 = (__int64 *)(v43 + 24LL * v46);
                            v74 = *v47;
                            if ( v44 == *v47 )
                              goto LABEL_32;
                            v72 = v73;
                          }
                          while ( v74 != -1 );
                        }
                      }
                    }
LABEL_43:
                    v42 = (__int64 *)*v42;
                    if ( v82 == v42 )
                      break;
                    continue;
                  }
                }
                sub_1705CB0(&v100, (__int64)(a1 + 3), v20);
                if ( !(_BYTE)v101 )
                  return;
                if ( v88 )
                {
                  *((_BYTE *)a2 + 64) |= 8u;
                  *((_DWORD *)a2 + 4) = 75;
                }
                else
                {
                  sub_17044D0(a1, a2, (_DWORD *)a2 + 4, v58, v59, v60);
                }
                v61 = *((_BYTE *)a2 + 64);
                v62 = *a2;
                if ( (v61 & 4) != 0 && !a2[9] && (v61 & 8) == 0 )
                {
                  v75 = *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v62 + 16) & 4) != 0 )
                    v75 = *(_QWORD *)v75;
                  v76 = *(_BYTE *)(v75 + 8) & 0x7F;
                  if ( v76 == 24 )
                  {
                    v77 = v75 - 48;
                    if ( v77 )
                    {
                      a2[9] = sub_E91C40(*(_QWORD **)(a1[22] + 248LL), 0, v77);
                      v62 = *a2;
                      goto LABEL_49;
                    }
LABEL_94:
                    *((_BYTE *)a2 + 64) &= ~4u;
                  }
                  else
                  {
                    v78 = (unsigned int)v76 - 58;
                    if ( (unsigned int)v78 > 4 || v75 == 64 )
                      goto LABEL_94;
                    v79 = *(_QWORD *)(v75 - 16);
                    if ( v79 )
                      v80 = v79 & 0xFFFFFFFFFFFFFFF0LL;
                    else
                      v80 = sub_A7AA70(*(_QWORD *)(a1[22] + 248LL), v75 - 64, v75, v78, v59, v60);
                    a2[9] = sub_E91A00(*(_QWORD **)(a1[22] + 248LL), 0, *(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL));
                    v62 = *a2;
                  }
                }
LABEL_49:
                v63 = v87 + 2;
                v89 = *(_QWORD *)(v62 + 40);
                v9 = (unsigned __int8)sub_16FE650(v87 + 2, &v89, v90) == 0;
                v65 = *(_QWORD *)v90;
                if ( v9 )
                {
                  v100.m128_u64[0] = *(_QWORD *)v90;
                  v66 = *((unsigned int *)v87 + 8);
                  v67 = 2 * v66;
                  v68 = (unsigned int)(*((_DWORD *)v87 + 6) + 1);
                  v69 = (unsigned int)(4 * v68);
                  if ( (unsigned int)v69 < 3 * (int)v66 )
                  {
                    if ( (int)v66 - *((_DWORD *)v87 + 7) - (int)v68 > (unsigned int)v66 >> 3 )
                      goto LABEL_52;
                    v67 = *((_DWORD *)v87 + 8);
                  }
                  sub_16FFD30(v63, v67, v68, v66, v64, v69);
                  sub_16FE650(v63, &v89, &v100);
                  LODWORD(v68) = *((_DWORD *)v87 + 6) + 1;
                  v65 = v100.m128_u64[0];
LABEL_52:
                  v9 = *(_QWORD *)v65 == -1;
                  *((_DWORD *)v87 + 6) = v68;
                  if ( !v9 )
                    --*((_DWORD *)v87 + 7);
                  v70 = v89;
                  *(_OWORD *)(v65 + 8) = 0;
                  *(_QWORD *)v65 = v70;
                }
                sub_16FF6E0(v65 + 8, *a2, -1431655765 * ((__int64)(a1[1] - *a1) >> 5));
                sub_1706C30((__int64)a1, (__int64)a2);
                if ( !v88 )
                {
                  sub_17048E0((__int64)&v100, (__int64)a2);
                  sub_1714200((__int64)a1, &v100);
                  sub_1705410((__int64)v102);
                }
                return;
              }
            }
            v37 = v33 & 0xFFFFFFFFFFFFFFF8LL;
            v38 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v33 & 4) == 0 )
            {
              while ( 1 )
              {
                if ( v37 )
                {
                  if ( v34 == (*(__int64 (__fastcall **)(unsigned __int64))(v38 + 32))(v37) )
                    goto LABEL_24;
                }
                else
                {
                  v31 = 0;
                  if ( v34 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38) )
                    goto LABEL_24;
                }
                v33 = 0;
                v31 = 0;
                if ( !v36 )
                  goto LABEL_14;
                v37 = 0;
                v38 = 0x10102464C457FLL;
              }
            }
            v84 = *(_DWORD *)(v37 + 8);
            if ( v34 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38) )
            {
              v31 = v84;
LABEL_24:
              *(_QWORD *)(*a1 + 96 * v31) = *a2;
              return;
            }
            v33 = (v37 + 16) | 4;
          }
        }
      }
LABEL_28:
      v82 = v87;
      goto LABEL_29;
    }
  }
}
