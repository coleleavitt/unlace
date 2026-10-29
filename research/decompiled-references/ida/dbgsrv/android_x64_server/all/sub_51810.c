/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51810
// Address: 0x0000000000051810

//----- (0000000000051810) ----------------------------------------------------
__int64 __fastcall sub_51810(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  char **v12; // rdi
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rsi
  bool v17; // cf
  __int64 v18; // rsi
  __int64 v19; // r15
  void *v20; // r13
  int v21; // ebp
  int v22; // ebp
  signed __int64 v23; // r14
  int v24; // ebp
  signed __int64 v25; // rbp
  int v26; // ebx
  signed __int64 v27; // rbp
  int v28; // ebx
  signed __int64 v29; // rbp
  int v30; // ebx
  signed __int64 v31; // rbp
  int v32; // ebx
  int v33; // ebx
  void *v34; // r15
  signed __int64 v35; // rbp
  int v36; // ebx
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  char *v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  __int64 v46; // r8
  __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  void (__fastcall *v51)(__int64, __int64, __int64, _QWORD, __int64); // r14
  __int64 v52; // rax
  __int64 *v53; // r15
  int v54; // eax
  __int64 v55; // rbp
  __int64 v56; // rcx
  void (__fastcall *v57)(__int64, __int64, signed __int64, _QWORD, __int64); // r15
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // rcx
  char *v61; // rax
  void (__fastcall *v62)(__int64, __int64, signed __int64, _QWORD, __int64); // r14
  __int64 v63; // rax
  void (__fastcall *v64)(__int64, __int64, signed __int64, _QWORD, __int64); // r14
  __int64 v65; // rax
  void (__fastcall *v66)(__int64, __int64, signed __int64, _QWORD, __int64); // r14
  __int64 v67; // rax
  void (__fastcall *v68)(__int64, __int64, signed __int64, _QWORD, __int64); // r14
  __int64 v69; // rax
  void (__fastcall *v70)(__int64, __int64, signed __int64, _QWORD, __int64); // r14
  __int64 v71; // rax
  void (__fastcall *v72)(__int64, __int64, __int64, _QWORD, __int64); // r14
  __int64 v73; // rax
  void (__fastcall *v74)(__int64, __int64, __int64, _QWORD, __int64); // r14
  __int64 v75; // rax
  char *v76; // rax
  char **v78; // [rsp+0h] [rbp-B8h]
  __int64 v79; // [rsp+8h] [rbp-B0h]
  __int64 v80; // [rsp+10h] [rbp-A8h]
  __int64 *v81; // [rsp+18h] [rbp-A0h]
  unsigned int v82; // [rsp+20h] [rbp-98h]
  char **v83; // [rsp+28h] [rbp-90h]
  _QWORD *v84; // [rsp+30h] [rbp-88h]
  __int64 v85; // [rsp+38h] [rbp-80h]
  __int128 v86; // [rsp+40h] [rbp-78h] BYREF
  __int128 v87; // [rsp+50h] [rbp-68h]
  __int128 v88; // [rsp+60h] [rbp-58h]
  __int64 v89; // [rsp+70h] [rbp-48h]
  unsigned __int64 v90; // [rsp+80h] [rbp-38h]

  v90 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 536) )
  {
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  v2 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v3 = *(_QWORD *)(a1 + 480);
  v85 = v2 - v3;
  if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 536) + v3, 0) == -1 )
    goto LABEL_113;
  v4 = *(unsigned __int16 *)(a1 + 560);
  v5 = *(_QWORD *)(a1 + 472);
  v6 = *(unsigned __int16 *)(a1 + 558);
  v7 = qlseek(v5, 0, 1);
  v8 = qlsize(v5);
  v9 = v8 - v7;
  v10 = (v8 - v7) | v7;
  if ( v10 < 0 )
  {
    LODWORD(v11) = 0;
LABEL_129:
    sub_5E5B0((__int64)"%s is incorrect, maximum possible value is %u%s", "PHT entries", v11, &byte_EB522);
  }
  if ( (_WORD)v4 && (_WORD)v6 )
  {
    if ( v9 < v4 * v6 || 0xFFFFFFFFFFFFFFFFLL / v4 < v6 )
      goto LABEL_8;
  }
  else if ( v9 < v4 * v6 )
  {
LABEL_8:
    v11 = v9 / v6;
    goto LABEL_129;
  }
  v12 = (char **)(a1 + 32);
  v13 = (unsigned __int64 *)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 40);
  v78 = (char **)(a1 + 32);
  if ( v14 >= v4 )
  {
    if ( v14 != v4 )
    {
      v88 = 0;
      v87 = 0;
      v86 = 0;
      v89 = 0;
      sub_5C3A0((__int64)v78, v4, (unsigned __int64)&v86);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 48) >= v4 )
    {
      v15 = *v12;
    }
    else
    {
      LODWORD(v10) = a1 + 32;
      v15 = (char *)qvector_reserve((__int64)v12, *v12, v4, 0x38u);
      *v12 = v15;
      v14 = *v13;
    }
    memset(&v15[56 * v14], 0, 56 * (v4 - v14));
    *v13 = v4;
  }
  *(_BYTE *)(a1 + 72) = 1;
  LOBYTE(v10) = 1;
  if ( !(_WORD)v4 )
    goto LABEL_114;
  v83 = (char **)(a1 + 576);
  v10 = 0;
  v79 = 48;
  v84 = nullptr;
  v81 = (__int64 *)(a1 + 40);
  v82 = v4;
  do
  {
    v16 = v10 * *(unsigned __int16 *)(a1 + 558);
    v17 = __CFADD__(*(_QWORD *)(a1 + 536), v16);
    v18 = *(_QWORD *)(a1 + 536) + v16;
    if ( v17 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v18, 0) == -1 )
      goto LABEL_113;
    v80 = v10;
    if ( !*(_BYTE *)(a1 + 72) )
    {
      if ( !(_BYTE)under_debugger )
        interr(20100);
      BUG();
    }
    v19 = *(_QWORD *)(a1 + 32);
    v20 = (void *)(v19 + v79 - 48);
    v21 = lreadbytes(*(_QWORD *)(a1 + 472), v20, 4, *(_BYTE *)(a1 + 616));
    if ( v21 < 0 )
    {
      v51 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
      v52 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v53 = (__int64 *)(a1 + 40);
      v51(a1, 19, 4, v21, v52);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v55 = v54;
      v56 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
          goto LABEL_111;
LABEL_110:
        v76 = (char *)qvector_reserve((__int64)v78, *v78, v54, 0x38u);
        *v78 = v76;
        v56 = *v53;
LABEL_112:
        memset(&v76[56 * v56], 0, 56 * (v55 - v56));
        *v53 = v55;
        goto LABEL_113;
      }
      if ( v56 == v54 )
        goto LABEL_113;
LABEL_121:
      v88 = 0;
      v87 = 0;
      v86 = 0;
      v89 = 0;
      sub_5C3A0((__int64)v78, v54, (unsigned __int64)&v86);
      goto LABEL_113;
    }
    if ( *(_BYTE *)(a1 + 617) )
    {
      v22 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 44), 4, *(_BYTE *)(a1 + 616));
      if ( v22 < 0 )
      {
        v72 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
        v73 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
        v53 = (__int64 *)(a1 + 40);
        v72(a1, 19, 4, v22, v73);
        v54 = v80 - 1;
        if ( (_DWORD)v79 == 48 )
          v54 = 0;
        v55 = v54;
        v56 = *v81;
        if ( *v81 < (unsigned __int64)v54 )
        {
          if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)v54 )
            goto LABEL_110;
          goto LABEL_111;
        }
        if ( v56 != v54 )
          goto LABEL_121;
        goto LABEL_113;
      }
    }
    v23 = *(int *)(a1 + 428);
    v24 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 40), v23, *(_BYTE *)(a1 + 616));
    if ( v24 < 0 )
    {
      v57 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
      v58 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v57(a1, 19, v23, v24, v58);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v59 = v54;
      v60 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
        {
          v61 = *v78;
        }
        else
        {
          v61 = (char *)qvector_reserve((__int64)v78, *v78, v54, 0x38u);
          *v78 = v61;
          v60 = *v81;
        }
        memset(&v61[56 * v60], 0, 56 * (v59 - v60));
        *v81 = v59;
        goto LABEL_113;
      }
      if ( v60 == v54 )
        goto LABEL_113;
      goto LABEL_121;
    }
    v25 = *(int *)(a1 + 424);
    v26 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 32), v25, *(_BYTE *)(a1 + 616));
    if ( v26 < 0 )
    {
      v62 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
      v63 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v53 = (__int64 *)(a1 + 40);
      v62(a1, 19, v25, v26, v63);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v55 = v54;
      v56 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
          goto LABEL_111;
        goto LABEL_110;
      }
      if ( v56 == v54 )
        goto LABEL_113;
      goto LABEL_121;
    }
    v27 = *(int *)(a1 + 424);
    v28 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 24), v27, *(_BYTE *)(a1 + 616));
    if ( v28 < 0 )
    {
      v64 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
      v65 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v53 = (__int64 *)(a1 + 40);
      v64(a1, 19, v27, v28, v65);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v55 = v54;
      v56 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
          goto LABEL_111;
        goto LABEL_110;
      }
      if ( v56 == v54 )
        goto LABEL_113;
      goto LABEL_121;
    }
    v29 = *(int *)(a1 + 432);
    v30 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 16), v29, *(_BYTE *)(a1 + 616));
    if ( v30 < 0 )
    {
      v66 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
      v67 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v53 = (__int64 *)(a1 + 40);
      v66(a1, 19, v29, v30, v67);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v55 = v54;
      v56 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
          goto LABEL_111;
        goto LABEL_110;
      }
      if ( v56 == v54 )
        goto LABEL_113;
      goto LABEL_121;
    }
    v31 = *(int *)(a1 + 432);
    v32 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 8), v31, *(_BYTE *)(a1 + 616));
    if ( v32 < 0 )
    {
      v68 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
      v69 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v53 = (__int64 *)(a1 + 40);
      v68(a1, 19, v31, v32, v69);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v55 = v54;
      v56 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
          goto LABEL_111;
        goto LABEL_110;
      }
      if ( v56 == v54 )
        goto LABEL_113;
      goto LABEL_121;
    }
    if ( !*(_BYTE *)(a1 + 617) )
    {
      v33 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v19 + v79 - 44), 4, *(_BYTE *)(a1 + 616));
      if ( v33 < 0 )
      {
        v74 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
        v75 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
        v53 = (__int64 *)(a1 + 40);
        v74(a1, 19, 4, v33, v75);
        v54 = v80 - 1;
        if ( (_DWORD)v79 == 48 )
          v54 = 0;
        v55 = v54;
        v56 = *v81;
        if ( *v81 < (unsigned __int64)v54 )
        {
          if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v54 )
            goto LABEL_111;
          goto LABEL_110;
        }
        if ( v56 != v54 )
          goto LABEL_121;
LABEL_113:
        LODWORD(v10) = 0;
        goto LABEL_114;
      }
    }
    v34 = (void *)(v79 + v19);
    v35 = *(int *)(a1 + 432);
    v36 = lreadbytes(*(_QWORD *)(a1 + 472), v34, v35, *(_BYTE *)(a1 + 616));
    if ( v36 < 0 )
    {
      v70 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
      v71 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v53 = (__int64 *)(a1 + 40);
      v70(a1, 19, v35, v36, v71);
      v54 = v80 - 1;
      if ( (_DWORD)v79 == 48 )
        v54 = 0;
      v55 = v54;
      v56 = *v81;
      if ( *v81 < (unsigned __int64)v54 )
      {
        if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)v54 )
          goto LABEL_110;
LABEL_111:
        v76 = *v78;
        goto LABEL_112;
      }
      if ( v56 == v54 )
        goto LABEL_113;
      goto LABEL_121;
    }
    v37 = *((_DWORD *)v34 - 12);
    if ( v37 == 2 )
    {
      v84 = v20;
    }
    else if ( v37 == 1 )
    {
      v38 = *(_QWORD *)(a1 + 584);
      v39 = v38 + 1;
      if ( *(_QWORD *)(a1 + 592) >= (unsigned __int64)(v38 + 1) )
      {
        v40 = *v83;
      }
      else
      {
        v40 = (char *)qvector_reserve((__int64)v83, *v83, v39, 0x18u);
        *(_QWORD *)(a1 + 576) = v40;
        v38 = *(_QWORD *)(a1 + 584);
        v39 = v38 + 1;
      }
      *(_QWORD *)(a1 + 584) = v39;
      v41 = 3 * v38;
      *(_QWORD *)&v40[8 * v41] = *((_QWORD *)v34 - 5);
      *(_QWORD *)&v40[8 * v41 + 8] = *((_QWORD *)v34 - 2);
      *(_QWORD *)&v40[8 * v41 + 16] = *((_QWORD *)v34 - 4);
      v42 = *((_QWORD *)v34 - 4);
      if ( v42 < *(_QWORD *)(a1 + 56) )
        *(_QWORD *)(a1 + 56) = v42 & 0xFFFFFFFFFFFFF000LL;
    }
    v10 = v80 + 1;
    v79 += 56;
  }
  while ( (int)v80 + 1 < v82 );
  if ( v84 )
  {
    v43 = v84[5];
    if ( v84[4] > v43 )
      v43 = v84[4];
    v44 = v84[2];
    v45 = *(_QWORD *)(a1 + 584);
    v46 = -1;
    if ( v45 )
    {
      v47 = *(_QWORD *)(a1 + 576);
      LODWORD(v10) = 1;
      v48 = 0;
      while ( 1 )
      {
        v49 = 3 * v48;
        v50 = *(_QWORD *)(v47 + 24 * v48 + 16);
        if ( v44 >= v50 && v50 + *(_QWORD *)(v47 + 8 * v49 + 8) > v44 )
          break;
        v48 = (int)v10;
        LODWORD(v10) = v10 + 1;
        if ( v45 <= v48 )
          goto LABEL_123;
      }
      v46 = *(_QWORD *)(v47 + 8 * v49) + (unsigned int)(v44 - v50);
    }
LABEL_123:
    *(_QWORD *)a1 = v46;
    *(_QWORD *)(a1 + 8) = v44;
    *(_QWORD *)(a1 + 16) = v43;
    *(_DWORD *)(a1 + 24) = -1;
  }
  LOBYTE(v10) = 1;
LABEL_114:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v85, 0);
  return (unsigned int)v10;
}
// 158B40: using guessed type __int64 under_debugger;
