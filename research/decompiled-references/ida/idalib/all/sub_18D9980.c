// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_18D9980(__int64 a1, __int64 a2, __int64 *a3, int a4, unsigned __int16 *a5, double a6)
{
  unsigned int v7; // ebp
  __int64 v9; // rcx
  unsigned int v10; // rax^4
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  unsigned __int8 v18; // cl
  char v19; // dl
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int16 *v22; // rcx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  char v25; // r13
  unsigned __int16 *v26; // rsi
  int v27; // eax
  unsigned __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 j; // rbp
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rbp
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 *v46; // rax
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int16 **v50; // r14
  unsigned __int16 *v51; // rax
  char v52; // dl
  unsigned __int16 *v53; // r13
  _QWORD *v54; // rdi
  __int64 *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 i; // rbp
  __int64 v63; // rax
  _QWORD *v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  unsigned int v68; // eax
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 k; // rbp
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // [rsp+10h] [rbp-2108h]
  unsigned __int16 **v84; // [rsp+18h] [rbp-2100h]
  bool v85; // [rsp+24h] [rbp-20F4h]
  __int64 v86; // [rsp+28h] [rbp-20F0h]
  unsigned __int16 *v87; // [rsp+30h] [rbp-20E8h]
  __int64 *v88; // [rsp+38h] [rbp-20E0h]
  unsigned __int16 *v89; // [rsp+40h] [rbp-20D8h] BYREF
  __int64 *v90; // [rsp+48h] [rbp-20D0h] BYREF
  __int64 v91; // [rsp+50h] [rbp-20C8h] BYREF
  unsigned __int64 v92; // [rsp+58h] [rbp-20C0h] BYREF
  _WORD v93[2]; // [rsp+60h] [rbp-20B8h] BYREF
  int v94; // [rsp+64h] [rbp-20B4h]
  int v95; // [rsp+68h] [rbp-20B0h]
  int v96; // [rsp+6Ch] [rbp-20ACh]
  int v97; // [rsp+70h] [rbp-20A8h] BYREF
  __int64 v98; // [rsp+78h] [rbp-20A0h]
  __int64 v99; // [rsp+80h] [rbp-2098h]
  int v100; // [rsp+88h] [rbp-2090h]
  __int64 *v101; // [rsp+90h] [rbp-2088h]
  _QWORD v102[2]; // [rsp+A0h] [rbp-2078h] BYREF
  __int64 v103; // [rsp+B0h] [rbp-2068h]
  unsigned __int8 *v104; // [rsp+C0h] [rbp-2058h] BYREF
  char v105; // [rsp+118h] [rbp-2000h]
  unsigned int v106; // [rsp+120h] [rbp-1FF8h]
  char v107; // [rsp+124h] [rbp-1FF4h]
  __int64 (__fastcall **v108)(); // [rsp+130h] [rbp-1FE8h] BYREF
  int v109; // [rsp+138h] [rbp-1FE0h]
  _QWORD *v110; // [rsp+140h] [rbp-1FD8h]

  v7 = a2;
  v90 = a3;
  v89 = a5;
  v91 = *a3;
  v9 = *(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
  {
    if ( (*(_BYTE *)(v9 + 17) & 4) != 0 )
      goto LABEL_5;
    LODWORD(v102[0]) = a2;
    HIDWORD(v102[0]) = (unsigned __int64)sub_EEC8C0((unsigned __int64)a5, a2, a6) >> 32;
    v109 = 5261;
    v108 = off_2BC64B0;
    v110 = v102;
    if ( !(unsigned __int8)sub_1E63C20(a1, (unsigned int)a2, v91, 1, &v108) )
      goto LABEL_4;
    return 1;
  }
  v10 = (unsigned __int64)sub_EEC8C0((unsigned __int64)a5, a2, a6) >> 32;
  v11 = *(_QWORD *)(a1 + 248);
  v102[0] = __PAIR64__(v10, a2);
  v12 = sub_A71450(v11, v91);
  v109 = 3070;
  v110 = v102;
  v108 = off_2BC6FB8;
  if ( (unsigned __int8)sub_1E63C20(a1, (unsigned int)a2, v12, 0, &v108) )
    return 1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
  {
    if ( (unsigned __int8)sub_17AF2A0(
                            a1,
                            &v90,
                            &v91,
                            a2,
                            (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 ? 3443 : 5432) )
    {
      a3 = v90;
      goto LABEL_5;
    }
    return 1;
  }
LABEL_4:
  a3 = v90;
LABEL_5:
  v13 = *a3;
  v96 = a4;
  v94 = a2;
  v101 = a3;
  v99 = v13;
  v93[0] = 1025;
  v97 = 17;
  v98 = 0;
  v100 = 0;
  v95 = a2;
  v84 = &v89;
  sub_1A19220((unsigned int)&v108, a1, (unsigned int)&v97, (unsigned int)v93, (unsigned int)&v89, 1, 0, 1);
  v14 = sub_1A1D600(
          (unsigned int)&v108,
          a1,
          (unsigned int)&v97,
          (unsigned int)v93,
          (unsigned int)&v89,
          1,
          (__int64)&v91);
  if ( v14 == 1 )
    goto LABEL_49;
  v17 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v89 = (unsigned __int16 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  v18 = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 8LL) & 0x7F;
  v19 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8;
  if ( v18 > 0x12u )
  {
    if ( ((v18 + 94) & 0x7Fu) <= 5 )
      goto LABEL_8;
  }
  else if ( ((1LL << v18) & 0x40182) != 0 )
  {
LABEL_8:
    LOBYTE(v84) = 0;
    v20 = 0;
    v85 = v19 == 0;
    goto LABEL_9;
  }
  v46 = *(__int64 **)(a1 + 608);
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 + 2);
    if ( (v47 & 1) != 0 )
      goto LABEL_8;
    while ( 1 )
    {
      v46 = (__int64 *)*v46;
      if ( !v46 )
        break;
      if ( (v46[1] & 1) != 0 )
        goto LABEL_8;
    }
    if ( (v47 & 0x100) != 0 )
      goto LABEL_8;
  }
  if ( v19 )
    v85 = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                     + 16LL)
                          - 2) <= 4u;
  else
    v85 = 1;
  if ( (*(_WORD *)v17 & 0x1FF) != 0x35
    || (v48 = *(_QWORD *)(v17 + 16), v49 = (*(_QWORD *)(v17 + 24) - v48) >> 3, !(_DWORD)v49) )
  {
LABEL_45:
    v20 = 4;
    LOBYTE(v84) = 1;
LABEL_9:
    v86 = v91;
    v21 = sub_EEE9A0(48, *(_QWORD **)(a1 + 248), 8u);
    v22 = v89;
    v23 = v21;
    v24 = (unsigned __int64)v90;
    *(_WORD *)v23 = *(_WORD *)v23 & 0xFE00 | 0x4C;
    if ( unk_2CD7484 )
    {
      v88 = (__int64 *)v24;
      v87 = v22;
      sub_EE9B50(76);
      v24 = (unsigned __int64)v88;
      v22 = v87;
    }
    v25 = *(_BYTE *)(v23 + 1);
    *(_QWORD *)(v23 + 32) = v22;
    v26 = (unsigned __int16 *)v86;
    *(_DWORD *)(v23 + 16) = v7;
    *(_QWORD *)(v23 + 24) = v24 & 0xFFFFFFFFFFFFFFFBLL | v20;
    *(_QWORD *)(v23 + 8) = v86;
    *(_QWORD *)(v23 + 40) = 0;
    *(_BYTE *)(v23 + 1) = (2 * v85) | v25 & 0xF9;
    *(_WORD *)(v23 + 1) &= 0xF807u;
    v27 = sub_B629B0(v23);
    v30 = (unsigned int)(v27 << 6);
    *(_BYTE *)(v23 + 1) = ((_BYTE)v27 << 6) | *(_BYTE *)(v23 + 1) & 0x3F;
    v31 = *(_BYTE *)(v23 + 2) & 0xF8;
    *(_BYTE *)(v23 + 2) = *(_BYTE *)(v23 + 2) & 0xF8 | ((unsigned __int8)v27 >> 2) & 7;
    if ( (_BYTE)v84 )
    {
      v26 = v89;
      if ( ((*(_DWORD *)v89 >> 14) & 0xC) == 0
        && (*(_BYTE *)(*(_QWORD *)(v91 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
        && (unsigned __int8)sub_17CAF90(a1, v89, 0xF93u, a6, v30, v28) )
      {
        goto LABEL_49;
      }
    }
    else
    {
      v61 = *(_QWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v61 & 8) != 0 )
      {
        v31 = v61 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
              | *(_QWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 9)
            & 0x7FFFFB) != 0 )
        {
          v75 = (__int64 *)(a1 + 8);
          v44 = 1;
          sub_168B9F0((__int64)v102, v75, v7, 0xD72u, 0);
          v92 = __PAIR64__((unsigned __int64)sub_EEC8C0((unsigned __int64)v89, (__int64)v75, a6) >> 32, v7);
          sub_1587DB0((__int64)v102, (__int64 *)&v92);
          sub_15F7200(v102);
          goto LABEL_22;
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              ;
              i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
        {
          if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
              || (v63 = sub_F63050(i, v86, v31, v30)) == 0 )
            {
              v64 = sub_F63240(i, v86, v31, v30, v28, v29);
              if ( v64 && (unsigned __int8)sub_F58560((__int64)v64) )
              {
                v68 = sub_C00A40(v23, v86, v65, v66, v67);
                v26 = *(unsigned __int16 **)(v23 + 8);
                sub_17D0CF0(a1, (__int64)v26, v68, 6, 2, v69, v83, (int)v84);
              }
              if ( (unsigned int)sub_F65A30(v91, (__int64)v26, v65, v66) )
              {
                v30 = *(unsigned int *)(a1 + 4532);
                *(_WORD *)(a1 + 4512) = 257;
                v70 = *(unsigned int *)(a1 + 4528);
                if ( v70 + 1 > v30 )
                {
                  v26 = (unsigned __int16 *)(a1 + 4536);
                  sub_2237220(a1 + 4520, a1 + 4536, v70 + 1, 8);
                  v70 = *(unsigned int *)(a1 + 4528);
                }
                *(_QWORD *)(*(_QWORD *)(a1 + 4520) + 8 * v70) = v23 | 4;
                v71 = *(unsigned int *)(a1 + 40);
                ++*(_DWORD *)(a1 + 4528);
                if ( !(_DWORD)v71 )
                {
                  *(_DWORD *)byte_8 = 0;
                  BUG();
                }
                v31 = *(_QWORD *)(a1 + 32);
                *(_BYTE *)(*(_QWORD *)(v31 + 8 * v71 - 8) + 8LL) |= 8u;
              }
              break;
            }
            i = v63;
          }
        }
      }
    }
    for ( j = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          ;
          j = *(_QWORD *)(*(_QWORD *)(j + 32) & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(j + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
          || (v33 = sub_F63050(j, v26, v31, v30)) == 0 )
        {
          v34 = sub_F63240(j, (__int64)v26, v31, v30, v28, v29);
          if ( v34 && sub_F58550((__int64)v34) )
            goto LABEL_20;
          for ( k = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                ;
                k = *(_QWORD *)(*(_QWORD *)(k + 32) & 0xFFFFFFFFFFFFFFF0LL) )
          {
            if ( (unsigned __int8)(*(_BYTE *)(k + 16) - 2) > 4u )
            {
              if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(k + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
                || (v73 = sub_F63050(k, v26, v35, v36)) == 0 )
              {
                v74 = sub_F63240(k, (__int64)v26, v35, v36, v37, v38);
                if ( !v74 || !sub_F58570((__int64)v74) )
                {
LABEL_21:
                  v44 = sub_19A3E40(a1, v23);
                  goto LABEL_22;
                }
LABEL_20:
                v39 = *(_QWORD *)(v23 + 32);
                v40 = sub_C00A40(v39, (__int64)v26, v35, v36, v37);
                sub_17D2830(a1, v39, v40, v41, v42, v43);
                goto LABEL_21;
              }
              k = v73;
            }
          }
        }
        j = v33;
      }
    }
  }
  v50 = nullptr;
  v84 = (unsigned __int16 **)(8LL * (unsigned int)(v49 - 1));
  while ( 1 )
  {
    v53 = *(unsigned __int16 **)((char *)v50 + v48);
    v54 = *(_QWORD **)(a1 + 248);
    if ( ((*(_DWORD *)v53 >> 14) & 0xC) != 0 )
      goto LABEL_38;
    v55 = *(__int64 **)(a1 + 248);
    if ( !(unsigned __int8)sub_C0D200(v53, v55, 0, nullptr, v15) )
      break;
    v54 = *(_QWORD **)(a1 + 248);
LABEL_38:
    v51 = (unsigned __int16 *)sub_C09AC0(v54, (__int64)v53, 0, 0, v15, v16);
    *(unsigned __int16 **)((char *)v50 + *(_QWORD *)(v17 + 16)) = v51;
    if ( v51 )
    {
      v52 = (*(_DWORD *)v51 >> 14) | (*(_DWORD *)v17 >> 14);
      *(_BYTE *)(v17 + 1) = ((v52 & 0x1F) << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
      *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | ((unsigned __int8)(v52 & 0x1F) >> 2);
    }
    if ( v50 == v84 )
      goto LABEL_45;
    v48 = *(_QWORD *)(v17 + 16);
    ++v50;
  }
  v58 = sub_C00A40((unsigned __int64)v53, (__int64)v55, v56, v57, v15);
  sub_168B9F0((__int64)v102, (__int64 *)(a1 + 8), v58, 0xF93u, 0);
  v59 = sub_BFEF90((__int64)v53);
  v60 = v59;
  if ( v105 )
  {
    sub_AE9DF0(&v104, v59, 0xAu);
  }
  else if ( v107 )
  {
    v80 = sub_168B9E0(v102);
    v81 = v103;
    if ( v103 )
      v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103);
    v92 = v81;
    v82 = sub_1587BC0(v80, (__int64 *)&v92, v76, v77, v78, v79);
    sub_AE9DF0((unsigned __int8 **)(*v82 + 32LL * v106 + 8), v60, 0xAu);
  }
  sub_15F7200(v102);
LABEL_49:
  v44 = 1;
LABEL_22:
  sub_1A0BB10(&v108);
  return v44;
}
