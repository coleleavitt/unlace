void __fastcall sub_17C72D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  _BYTE *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char *v37; // rax
  int v38; // esi
  __int64 v39; // rdi
  int v40; // eax
  unsigned int v41; // edx
  int v42; // eax
  unsigned __int64 v43; // rsi
  int v44; // edx
  __int64 *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  _QWORD *v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // r15
  __int64 *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // [rsp+0h] [rbp-E0h]
  __int64 v70; // [rsp+0h] [rbp-E0h]
  __int64 v71; // [rsp+10h] [rbp-D0h] BYREF
  _QWORD v72[25]; // [rsp+18h] [rbp-C8h] BYREF

  if ( *(char *)(a3 + 28) < 0 )
    return;
  if ( (*(_BYTE *)(a1[29] + 2) & 4) != 0 )
  {
    v7 = *(_QWORD *)(a3 + 40);
    if ( (v7 & 7) != 0 )
      BUG();
    v8 = *(__int64 **)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v9 = *v8;
    if ( (unsigned int)*v8 == 3 )
    {
      if ( *((_WORD *)v8 + 8) != 17747 || *((_BYTE *)v8 + 18) != 76 )
        goto LABEL_7;
      v45 = (__int64 *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a3 + 80) & 4) != 0 )
        v46 = v45[1];
      else
        v46 = *v45;
      *(_QWORD *)(a1[31] + 1536) = v46;
      v47 = (_QWORD *)a1[31];
      v48 = sub_A8A1F0(v47);
      v52 = *(_QWORD *)(v48 + 48);
      if ( v52 )
      {
LABEL_66:
        v53 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_67;
      }
    }
    else
    {
      if ( (_DWORD)v9 != 5 )
      {
        if ( (_DWORD)v9 == 2 && *((_WORD *)v8 + 8) == 25705 )
        {
          v56 = (_QWORD *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
          v57 = (*(_QWORD *)(a3 + 80) & 4) != 0 ? v56[1] : *v56;
          v58 = (__int64 *)(v57 & 0xFFFFFFFFFFFFFFF0LL);
          v59 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
          {
            if ( sub_F67340(v59) )
              goto LABEL_76;
            v64 = *v58;
            if ( *(_BYTE *)(*v58 + 16) != 42 )
              v64 = sub_F63050(*v58, a2, v60, v61);
            if ( sub_F612F0(*(_QWORD *)(*(_QWORD *)(v64 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v60, v61, v62, v63) )
            {
LABEL_76:
              *(_QWORD *)(a1[31] + 1520) = v57;
              *(_QWORD *)(a3 + 48) = *(_QWORD *)(sub_A8A430((_QWORD *)a1[31], a2, v60, v61, v62, v63)
                                               & 0xFFFFFFFFFFFFFFF0LL);
              return;
            }
          }
        }
        goto LABEL_7;
      }
      if ( *((_DWORD *)v8 + 4) != 1935764547 || *((_BYTE *)v8 + 20) != 115 )
        goto LABEL_7;
      v54 = (__int64 *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a3 + 80) & 4) != 0 )
        v55 = v54[1];
      else
        v55 = *v54;
      *(_QWORD *)(a1[31] + 1528) = v55;
      v47 = (_QWORD *)a1[31];
      v48 = sub_A8A180(v47);
      v52 = *(_QWORD *)(v48 + 48);
      if ( v52 )
        goto LABEL_66;
    }
    v53 = (_QWORD *)(sub_A7AA70((__int64)v47, v48, v52, v49, v50, v51) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_67:
    *(_QWORD *)(a3 + 48) = *v53;
    return;
  }
LABEL_7:
  if ( *(_DWORD *)a4 != 2
    || (v13 = sub_16C47B0(**(_QWORD **)(a4 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        v14 = *(_BYTE *)(v13 + 28) & 0x7F,
        v15 = (unsigned int)(v14 - 58),
        (unsigned int)v15 > 9) )
  {
    sub_168B9F0((__int64)v72, a1 + 1, *(_DWORD *)(a3 + 24), 0x1328u, 0);
    v71 = *(_QWORD *)(a3 + 40);
    sub_15894B0((__int64)v72, &v71);
    sub_15F7200(v72);
    v43 = **(_QWORD **)(a4 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)(v43 + 24) )
    {
      v44 = *(_DWORD *)(a3 + 24);
LABEL_51:
      sub_17AE800((__int64)a1, v43, v44);
    }
LABEL_47:
    sub_B88650(a3, 1);
    return;
  }
  if ( *(char *)(v13 + 28) < 0 )
    goto LABEL_47;
  if ( (unsigned int)(v14 - 64) <= 2 )
  {
    v16 = sub_B7A5B0((_QWORD *)v13, 1, v15, v10, v11);
    v20 = sub_B7A5B0((_QWORD *)a3, 0, v17, v18, v19);
    v72[0] = 0;
    v21 = (_BYTE *)v20;
    if ( v16 )
    {
      if ( v20 )
      {
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
        if ( v69 != (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v21 + 32LL))(v21)
          && !(unsigned __int8)sub_1E61520(a1, v16, v72, 0) )
        {
          *(_QWORD *)(a3 + 48) = *(_QWORD *)(v13 + 48);
          v22 = *(_QWORD *)(v13 + 80);
          if ( (v22 & 4) != 0 )
          {
            v65 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            v66 = v65[1];
            v70 = *v65;
            v67 = sub_B8C330(a3);
            v68 = sub_9C3B30((__int64 *)(v67 + 2352), 16, 3u);
            *(_QWORD *)(v68 + 8) = v66;
            *(_QWORD *)v68 = v70;
            *(_QWORD *)(a3 + 80) = *(_QWORD *)(a3 + 80) & 3LL | v68 | 4;
          }
          else
          {
            *(_QWORD *)(a3 + 80) = *(_QWORD *)(a3 + 80) & 3LL | v22 & 0xFFFFFFFFFFFFFFF8LL;
          }
          sub_1A39AF0(a1, v72[0]);
          if ( (v21[28] & 0x7F) == 0x3E && (char)v21[76] >= 0 )
            sub_179D210((__int64)a1, a2, (__int64)v21, v10, v11, v12);
        }
      }
    }
  }
  if ( (unsigned __int8)sub_17C7020((__int64)a1, v13, a3, v10, v11, v12) )
    return;
  if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 64 <= 2 )
  {
    v27 = *(_QWORD *)(v13 + 72);
    *(_QWORD *)(a3 + 72) = v27;
    v28 = (unsigned __int64)sub_BAF470((__int64 *)(v27 + 64), v27, v23, v24, v25, v26);
    v31 = *(_QWORD *)(a3 + 72);
    *(_QWORD *)(a3 + 64) = v28 & 0xFFFFFFFFFFFFFFFCLL;
    v32 = *(_WORD *)(a3 + 30) & 0x3FFF;
    v33 = (unsigned int)v32 | *(_WORD *)(v28 + 30) & 0x26;
    *(_WORD *)(a3 + 30) = v32 | *(_WORD *)(v28 + 30) & 0x26 | *(_WORD *)(a3 + 30) & 0xC000;
    v34 = *(_QWORD *)(v31 + 64);
    if ( (v34 & 1) != 0 || (v34 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v35 = v34 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v34 & 0xFFFFFFFFFFFFFFFELL) != 0 && (v34 & 4) != 0 && (v36 = v34 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        *(_QWORD *)(v36 + 16) = a3;
      else
        v35 = a3 & 0xFFFFFFFFFFFFFFFALL;
      *(_QWORD *)(v31 + 64) = v35 | 1;
    }
    else
    {
      *(_QWORD *)(v31 + 64) = sub_6E2500((_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL), a3, v33, v32, v29, v30) | 1;
    }
    sub_17C44D0(a1, (__int64 *)a3, v13, 1u);
  }
  v37 = (char *)a1[29];
  if ( *v37 < 0 )
    return;
  if ( (v37[1] & 8) != 0 )
  {
    if ( (*(_BYTE *)(a1[68] + 8) & 0x7Fu) - 59 > 2 || (*(_BYTE *)(v13 + 28) & 0x7Fu) - 64 > 2 )
      return;
    sub_168B9F0((__int64)v72, a1 + 1, *(_DWORD *)(a3 + 24), 0x1326u, 0);
    v71 = *(_QWORD *)(a3 + 40);
    sub_15894B0((__int64)v72, &v71);
    sub_15F7200(v72);
    v44 = *(_DWORD *)(a3 + 24);
    v43 = v13;
    goto LABEL_51;
  }
  if ( (((unsigned __int8)v37[21] | (unsigned __int8)*v37) & 2) != 0 )
    return;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[33] + 152) + 24LL) & 0x10) == 0 )
    goto LABEL_42;
  if ( (*(_BYTE *)(v13 + 29) & 2) != 0 )
    return;
  v38 = *(_DWORD *)(v13 + 24);
  v39 = *(_QWORD *)(a1[31] + 2312);
  if ( v38 )
  {
    v40 = sub_1021680(v39, v38);
    if ( v40 && v40 != 3 )
      return;
    v39 = *(_QWORD *)(a1[31] + 2312);
  }
  v41 = *(_DWORD *)(a3 + 24);
  if ( !v41 )
  {
LABEL_43:
    sub_168B9F0((__int64)v72, a1 + 1, v41, 0x161Bu, 0);
    v71 = *(_QWORD *)(a3 + 40);
    sub_15894B0((__int64)v72, &v71);
    sub_15F7200(v72);
    sub_17AE800((__int64)a1, v13, *(_DWORD *)(a3 + 24));
    return;
  }
  v42 = sub_1021680(v39, v41);
  if ( !v42 || v42 == 3 )
  {
LABEL_42:
    v41 = *(_DWORD *)(a3 + 24);
    goto LABEL_43;
  }
}
