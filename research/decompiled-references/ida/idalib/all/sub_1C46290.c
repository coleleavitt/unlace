unsigned __int64 __fastcall sub_1C46290(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  unsigned int v9; // ebp
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rsi
  _DWORD *v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int16 v47; // ax
  size_t v48; // rax
  const char *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  char v52; // al
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  _QWORD *v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r13
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  char v79; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v80; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+10h] [rbp-E8h]
  __int64 v83; // [rsp+10h] [rbp-E8h]
  __int64 v84; // [rsp+18h] [rbp-E0h]
  __int64 v85[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v86[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+40h] [rbp-B8h]
  int v88; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v89[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v90; // [rsp+A8h] [rbp-50h]
  unsigned int v91; // [rsp+B0h] [rbp-48h]
  char v92; // [rsp+B4h] [rbp-44h]

  v7 = *(unsigned int *)(a1 + 40);
  v79 = a5;
  if ( !(_DWORD)v7 )
    BUG();
  v9 = a2;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7 - 8);
  v12 = *(_QWORD *)(v11 + 1472);
  if ( (*(_BYTE *)(v11 + 8) & 7) != 2 )
  {
    v15 = 0;
    v16 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
    v17 = *(_DWORD *)v16;
LABEL_7:
    if ( v17 == 2 || (unsigned int)(v17 - 4) <= 3 && *(_BYTE *)(v16 + 596) )
    {
      if ( !*(_BYTE *)(v11 + 1464) )
        goto LABEL_41;
LABEL_11:
      if ( a3 )
      {
        v18 = sub_19B4A30(a1, (unsigned __int64)a3, (unsigned int)a2, 0, 0, 0, a6, a7);
        if ( v18 == 1 )
          return 1;
        a3 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
      }
      return sub_EEF0A0(*(_QWORD **)(a1 + 248), a2, (__int64)a3, 0, a5, v15);
    }
    if ( !*(_BYTE *)(v11 + 1464) )
      goto LABEL_41;
    if ( a3 )
    {
      v82 = v15;
      if ( (*(_WORD *)a3 & 0x1FF) != 0x35 )
      {
        v51 = sub_19179A0(a1, a3, 1u, v16, a5, v15, a6, a7);
        if ( v51 == 1 )
          return 1;
        a3 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFELL);
        v52 = sub_B8E180(*(_QWORD *)(a1 + 544));
        v15 = v82;
        if ( v52 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
          *(_QWORD *)(v11 + 1472) = v12;
          v31 = v12;
        }
        else
        {
          v86[0] = a3[1];
          v69 = sub_6D5440(v86);
          v15 = v82;
          v12 = v69;
          v31 = *(_QWORD *)(v11 + 1472);
        }
        goto LABEL_39;
      }
      sub_168B9F0((__int64)v86, (__int64 *)(a1 + 8), a2, 0x1000u, 0);
      v85[0] = sub_EEC8C0((unsigned __int64)a3, a1 + 8, *(double *)a6.m128_u64);
      sub_1587DB0((__int64)v86, v85);
      sub_15F7200(v86);
      v15 = v82;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
    v31 = *(_QWORD *)(v11 + 1472);
LABEL_39:
    if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      *(_QWORD *)(v11 + 1472) = v12;
    goto LABEL_41;
  }
  v13 = *(_QWORD *)(v11 + 1592);
  if ( (*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v19 = *(_QWORD *)(v13 + 56);
  v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v19 & 4) != 0 )
    v20 = (_QWORD *)v20[4];
  v21 = *(_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v21 + 16) != 26 )
    v21 = sub_F63050(*(_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, a4);
  v22 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v22 )
  {
    v15 = v11;
    v16 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
    v17 = *(_DWORD *)v16;
    goto LABEL_7;
  }
  v16 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
  v17 = *(_DWORD *)v16;
  if ( (*(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v22 + 17) & 4) != 0 )
  {
    v15 = v11;
    goto LABEL_7;
  }
  if ( v17 == 2 )
    goto LABEL_11;
  v23 = (unsigned int)(v17 - 4);
  if ( (unsigned int)v23 <= 3 )
  {
    if ( *(_BYTE *)(v16 + 596) )
      goto LABEL_11;
  }
  v24 = *(_QWORD *)(v11 + 1592);
  if ( *(char *)(v24 + 28) < 0 )
    return 1;
  v25 = (__int64 *)(*(_QWORD *)(v11 + 1472) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v25 )
  {
    v78 = sub_C1D490(*(_QWORD *)(v11 + 1592), a2, v23, v16);
    *(_QWORD *)(v11 + 1472) = v78;
    v25 = (__int64 *)(v78 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v26 = sub_F57E80(*v25);
  v28 = v26;
  if ( v26 && *(_BYTE *)(v26 + 16) != 16 )
    v28 = 0;
  if ( (unsigned __int8)sub_1C45430((__int64 *)a1, v24, (unsigned int)a2, (__int64)a3, v28, v27, *(double *)a6.m128_u64) )
  {
    sub_B88650(v24, 1);
    return 1;
  }
  v77 = sub_C1D490(v24, v24, v29, v30);
  v15 = v11;
  v12 = v77;
  *(_QWORD *)(v11 + 1472) = v77;
LABEL_41:
  v83 = v15;
  v32 = sub_1C33590(a4, v12);
  v35 = v83;
  v84 = v32;
  v36 = *(_BYTE *)(v11 + 8) & 7;
  if ( v36 == 1 )
  {
    v37 = *(_QWORD *)(*(_QWORD *)(v11 + 1544) & 0xFFFFFFFFFFFFFFF0LL);
    v38 = (unsigned int)*(unsigned __int8 *)(v37 + 16) - 25;
    if ( (unsigned int)v38 > 1 )
      v37 = sub_F63050(v37, v12, v38, v33);
    if ( (*(_BYTE *)(v37 + 21) & 1) == 0 )
      goto LABEL_45;
    sub_168B9F0((__int64)v86, (__int64 *)(a1 + 8), a2, 0x10E1u, 0);
    if ( v90 )
    {
      sub_1C2FE50(v89, 1);
    }
    else if ( v92 )
    {
      v64 = sub_168B9E0(v86);
      v67 = v87;
      if ( v87 )
        v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
      v85[0] = v67;
      v68 = sub_1587BC0(v64, v85, v62, v63, v65, v66);
      sub_1C2FE50((unsigned __int8 **)(*v68 + 32LL * v91 + 8), 1);
    }
LABEL_74:
    sub_15F7200(v86);
    return 1;
  }
  if ( v36 == 3 )
  {
    sub_168B9F0((__int64)v86, (__int64 *)(a1 + 8), a2, 0x1355u, 0);
    v47 = *(_WORD *)(v11 + 1560);
    if ( v47 == 1 )
    {
      v48 = j__strlen("Objective-C @finally statement");
      v49 = "Objective-C @finally statement";
    }
    else if ( v47 )
    {
      v48 = j__strlen("OpenMP region");
      v49 = "OpenMP region";
    }
    else
    {
      v48 = j__strlen("default captured statement");
      v49 = "default captured statement";
    }
    v85[0] = (__int64)v49;
    v85[1] = v48;
    sub_166BAF0((__int64)v86, (__int64)v85);
    goto LABEL_74;
  }
  v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 + 1592) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v54 = (unsigned int)*(unsigned __int8 *)(v53 + 16) - 25;
  if ( (unsigned int)v54 > 1 )
    v53 = sub_F63050(v53, v12, v54, v33);
  if ( (*(_BYTE *)(v53 + 21) & 1) != 0 )
  {
    sub_168B9F0((__int64)v86, (__int64 *)(a1 + 8), a2, 0x10E1u, 0);
    if ( v90 )
    {
      sub_1C2FE50(v89, 2);
    }
    else if ( v92 )
    {
      v57 = sub_168B9E0(v86);
      v60 = v87;
      if ( v87 )
        v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
      v85[0] = v60;
      v61 = sub_1587BC0(v57, v85, v55, v56, v58, v59);
      sub_1C2FE50((unsigned __int8 **)(*v61 + 32LL * v91 + 8), 2);
    }
    goto LABEL_74;
  }
LABEL_45:
  v39 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v39 + 17) & 4) != 0 )
  {
LABEL_80:
    if ( !a3 )
      goto LABEL_56;
    goto LABEL_81;
  }
  v40 = *(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v40 + 16) != 13 || ((*(_WORD *)(v40 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    if ( !a3 )
    {
      sub_168B9F0((__int64)v86, (__int64 *)(a1 + 8), a2, 0xD05u, 0);
      sub_15F7200(v86);
      return 1;
    }
    if ( (*(_DWORD *)a3 & 0x10000) != 0 )
      goto LABEL_81;
    LODWORD(v86[0]) = 3;
    v86[1] = 0;
    v87 = v12;
    v88 = 0;
    LODWORD(v89[0]) = a2;
    BYTE4(v89[0]) = 0;
    result = sub_1C37220(a1, (__int64)v86, (__int64)a4, (__int64)a3, v79, a6, a7);
    if ( result == 1 )
      return result;
    a3 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    sub_16F9290(
      (__int64 *)a1,
      (__int64 *)(result & 0xFFFFFFFFFFFFFFFELL),
      v12,
      (unsigned int)a2,
      0,
      0,
      *(double *)a6.m128_u64,
      0);
    goto LABEL_80;
  }
  if ( a3 )
  {
    if ( (*(_WORD *)a3 & 0x1FF) != 0x35 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      {
        if ( (*(_DWORD *)a3 & 0x10000) == 0 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v41 + 16) != 13 || ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) != 0x1B3 )
          {
            v42 = (__int64 *)(a1 + 8);
LABEL_55:
            sub_168B9F0((__int64)v86, v42, v9, 0x1354u, 0);
            sub_15F7200(v86);
            goto LABEL_56;
          }
        }
      }
      else
      {
        v42 = (__int64 *)(a1 + 8);
        v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v70 + 16) != 13 || ((*(_WORD *)(v70 + 18) >> 3) & 0x1FF) != 0x1B3 )
          goto LABEL_55;
        sub_168B9F0((__int64)v86, v42, v9, 0x1620u, 0);
        if ( v90 )
        {
          sub_AE9DF0(v89, (__int64)"literal", 1u);
        }
        else if ( v92 )
        {
          v74 = sub_168B9E0(v86);
          v75 = v87;
          if ( v87 )
            v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 32LL))(v87);
          v85[0] = v75;
          v76 = sub_1587BC0(v74, v85, v71, (__int64)v85, v72, v73);
          sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v91 + 8), (__int64)"literal", 1u);
        }
        LODWORD(v85[0]) = 2;
        sub_1587D10((__int64)v86, (int *)v85);
        sub_15F7200(v86);
      }
    }
LABEL_81:
    v50 = sub_19B4A30(a1, (unsigned __int64)a3, v9, 0, 0, 0, a6, a7);
    if ( v50 == 1 )
      return 1;
    v43 = (_DWORD *)(v50 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_57;
  }
LABEL_56:
  v43 = nullptr;
LABEL_57:
  result = sub_EEF0A0(*(_QWORD **)(a1 + 248), v9, (__int64)v43, v84, v34, v35);
  if ( *(_BYTE *)(v11 + 1464) || v84 )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
    v45 = *(unsigned int *)(v44 + 144);
    if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(v44 + 148) )
    {
      v81 = result;
      sub_2237220(v44 + 136, v44 + 152, v45 + 1, 8);
      v45 = *(unsigned int *)(v44 + 144);
      result = v81;
    }
    *(_QWORD *)(*(_QWORD *)(v44 + 136) + 8 * v45) = result;
    ++*(_DWORD *)(v44 + 144);
  }
  v46 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  if ( !*(_DWORD *)(v46 + 16) )
    *(_DWORD *)(v46 + 16) = v9;
  if ( (*(_BYTE *)(v11 + 8) & 7) == 1 && *(_BYTE *)(v11 + 1464) && v43 && (*v43 & 0x40000) != 0 )
  {
    v80 = result;
    sub_B88650(*(_QWORD *)(v11 + 1528), 1);
    return v80;
  }
  return result;
}
