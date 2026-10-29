__int64 __fastcall sub_16562A0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r13
  char v10; // al
  __int64 v11; // r9
  __int64 v12; // r12
  bool v13; // zf
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  _QWORD *v28; // rdi
  __int64 (__fastcall *v29)(_QWORD *); // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r15
  _QWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  char v47; // al
  _BYTE *v48; // rdi
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  _DWORD *v54; // rsi
  __int64 v55; // rdi
  int v56; // eax
  __int64 v57; // rdi
  int v58; // eax
  __int64 v59; // r8
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  _DWORD *v64; // rax
  __int64 v65; // rdi
  int v66; // edx
  __int64 v67; // r8
  unsigned __int64 v68; // rdx
  __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rax
  _DWORD *v72; // rax
  __int64 v73; // rdi
  int v74; // edx
  unsigned __int64 v75; // rsi
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rax
  _QWORD *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdi
  __int64 v86; // r14
  __int64 v87; // rdi
  __int64 v88; // rax
  int v89; // eax
  _QWORD *v90; // rcx
  unsigned int v91; // [rsp+4h] [rbp-A4h]
  __int64 v92; // [rsp+8h] [rbp-A0h]
  __int64 v93; // [rsp+8h] [rbp-A0h]
  __int64 v94; // [rsp+8h] [rbp-A0h]
  __int64 v95; // [rsp+8h] [rbp-A0h]
  __int64 v96; // [rsp+8h] [rbp-A0h]
  __int64 v97; // [rsp+18h] [rbp-90h]
  __int64 v98; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v100; // [rsp+28h] [rbp-80h]
  _BYTE v101[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = (unsigned __int64)(a1 + 8);
  v4 = a1;
  v9 = sub_B8E180((unsigned __int64)(a1 + 8));
  if ( v9 && *(_QWORD *)(a2 + 40) == a1[5] )
  {
    v79 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v4[2] & 4) != 0 )
      v79 = (_QWORD *)*v79;
    v80 = sub_B91570((__int64)v79, a2, v5, v6, v7, v8);
    v85 = *(_QWORD *)(a2 + 16);
    v86 = v80;
    v87 = (v85 & 4) != 0 ? *(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF8LL) : v85 & 0xFFFFFFFFFFFFFFF8LL;
    v88 = sub_B91570(v87, a2, v81, v82, v83, v84);
    if ( v86 == v88 )
      return 2;
    if ( (*(_BYTE *)(v86 + 8) & 0x7F) != 0x18 && (*(_BYTE *)(v86 + 8) & 0x7F) != 0 )
    {
      v89 = *(_BYTE *)(v88 + 8) & 0x7F;
      if ( v89 )
      {
        if ( v89 != 24 )
          return 2;
      }
    }
  }
  v91 = 1;
  ptr = v101;
  v100 = 0x800000000LL;
  while ( 1 )
  {
    v10 = sub_B8E180(v2);
    v12 = v4[13];
    v13 = v10 == 0;
    v14 = *(_QWORD *)(v12 + 96);
    v15 = v14;
    if ( v13 )
      goto LABEL_96;
    v16 = v14 & 1;
    v17 = v14 & 0xFFFFFFFFFFFFFFFELL;
    if ( !v4[16] )
    {
      if ( (v14 & 1) == 0 )
      {
        v90 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v14 & 2) == 0 )
            goto LABEL_119;
          v67 = v90[2295];
          v68 = v12 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v67 )
          {
            v69 = v90[294];
            v90[304] += 24LL;
            v70 = (v69 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v90[295] >= v70 + 24 && v69 )
            {
              v90[294] = v70 + 24;
              v71 = (v69 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v96 = v67;
              v71 = sub_986170((__int64)(v90 + 294), 24, 24, 3, v67, v11);
              v67 = v96;
              v70 = v71 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v71 = v67;
            v68 = v70 | 4;
            *(_DWORD *)(v71 + 8) = 0;
            *(_QWORD *)(v71 + 16) = v12;
          }
          v17 = v68 & 0xFFFFFFFFFFFFFFFELL;
          v14 = v17 | 1;
          *(_QWORD *)(v12 + 96) = v17 | 1;
        }
      }
      if ( v17 )
      {
        if ( (v17 & 4) != 0 )
        {
          v72 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v72 )
          {
            v73 = *(_QWORD *)v72;
            v74 = *(_DWORD *)(*(_QWORD *)v72 + 12LL);
            if ( v72[2] != v74 )
            {
              v72[2] = v74;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 152LL))(v73, v12);
            }
          }
        }
      }
      if ( !v4[16] )
      {
LABEL_119:
        v48 = ptr;
        v91 = 2;
        goto LABEL_45;
      }
      v12 = v4[13];
      v14 = *(_QWORD *)(v12 + 96);
      v15 = v14;
LABEL_96:
      v16 = v15 & 1;
      v17 = v14 & 0xFFFFFFFFFFFFFFFELL;
    }
    if ( !v16 )
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v14 & 2) == 0 )
          goto LABEL_9;
        v59 = *(_QWORD *)(v16 + 18360);
        v60 = v12 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v59 )
        {
          v61 = *(_QWORD *)(v16 + 2352);
          *(_QWORD *)(v16 + 2432) += 24LL;
          v62 = (v61 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v16 + 2360) >= v62 + 24 && v61 )
          {
            *(_QWORD *)(v16 + 2352) = v62 + 24;
            v63 = (v61 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v95 = v59;
            v63 = sub_986170(v16 + 2352, 24, 24, 3, v59, v11);
            v59 = v95;
            v62 = v63 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v63 = v59;
          v60 = v62 | 4;
          *(_DWORD *)(v63 + 8) = 0;
          *(_QWORD *)(v63 + 16) = v12;
        }
        v17 = v60 & 0xFFFFFFFFFFFFFFFELL;
        v14 = v17 | 1;
        *(_QWORD *)(v12 + 96) = v17 | 1;
      }
    }
    if ( !v17
      || (v17 & 4) == 0
      || (v64 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
      || (v65 = *(_QWORD *)v64, v66 = *(_DWORD *)(*(_QWORD *)v64 + 12LL), v64[2] == v66) )
    {
LABEL_9:
      v18 = v4[16];
      if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
        goto LABEL_82;
      goto LABEL_10;
    }
    v64[2] = v66;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 152LL))(v65, v12);
    v18 = v4[16];
    if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
    {
LABEL_82:
      v19 = sub_B96980(v18);
      goto LABEL_11;
    }
LABEL_10:
    v19 = *(_QWORD *)(v18 + 24);
LABEL_11:
    v20 = v4[13];
    v21 = *(_QWORD *)(v20 + 96);
    v22 = v21;
    v23 = v21 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v21 & 1) != 0 )
      goto LABEL_56;
    v16 = v21 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_56;
    if ( (v21 & 2) != 0 )
    {
      v11 = *(_QWORD *)(v16 + 18360);
      v50 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v11 )
      {
        v51 = *(_QWORD *)(v16 + 2352);
        *(_QWORD *)(v16 + 2432) += 24LL;
        v52 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v16 + 2360) >= v52 + 24 && v51 )
        {
          *(_QWORD *)(v16 + 2352) = v52 + 24;
          v53 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v98 = v11;
          v94 = v20;
          v53 = sub_986170(v16 + 2352, 24, 24, 3, v20, v11);
          v11 = v98;
          v20 = v94;
          v52 = v53 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v53 = v11;
        v50 = v52 | 4;
        *(_DWORD *)(v53 + 8) = 0;
        *(_QWORD *)(v53 + 16) = v20;
      }
      v23 = v50 & 0xFFFFFFFFFFFFFFFELL;
      v22 = v23 | 1;
      *(_QWORD *)(v20 + 96) = v23 | 1;
LABEL_56:
      if ( v23 )
      {
        if ( (v23 & 4) != 0 )
        {
          v54 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v54 )
          {
            v55 = *(_QWORD *)v54;
            v56 = *(_DWORD *)(*(_QWORD *)v54 + 12LL);
            if ( v54[2] != v56 )
            {
              v54[2] = v56;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 152LL))(v55, v20);
            }
          }
        }
      }
      v24 = v4[16];
      v20 = v4[13];
      v25 = *(_QWORD *)(v20 + 96);
      v26 = v19 + 24LL * *(unsigned int *)(v24 + 16);
      v22 = v25 & 0xFFFFFFFFFFFFFFFELL;
      LOBYTE(v21) = v25;
      if ( (v25 & 1) != 0 )
        goto LABEL_62;
      v16 = v25 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_62;
      goto LABEL_15;
    }
    v24 = v4[16];
    v25 = 3LL * *(unsigned int *)(v24 + 16);
    v26 = v19 + 24LL * *(unsigned int *)(v24 + 16);
LABEL_15:
    if ( (v21 & 2) == 0 )
    {
      if ( (*(_BYTE *)(v24 + 24) & 1) == 0 )
        goto LABEL_17;
      goto LABEL_68;
    }
    v11 = *(_QWORD *)(v16 + 18360);
    v75 = v20 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v11 )
    {
      v76 = *(_QWORD *)(v16 + 2352);
      *(_QWORD *)(v16 + 2432) += 24LL;
      v77 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v16 + 2360) >= v77 + 24 && v76 )
      {
        *(_QWORD *)(v16 + 2352) = v77 + 24;
        v78 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v97 = v11;
        v93 = v20;
        v78 = sub_986170(v16 + 2352, 24, 24, 3, v20, v11);
        v11 = v97;
        v20 = v93;
        v77 = v78 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v78 = v11;
      v75 = v77 | 4;
      *(_DWORD *)(v78 + 8) = 0;
      *(_QWORD *)(v78 + 16) = v20;
    }
    v22 = v75 & 0xFFFFFFFFFFFFFFFELL;
    v25 = v22 | 1;
    *(_QWORD *)(v20 + 96) = v22 | 1;
LABEL_62:
    if ( v22 )
    {
      v22 &= 4u;
      if ( (_DWORD)v22 )
      {
        v25 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v25 )
        {
          v57 = *(_QWORD *)v25;
          v58 = *(_DWORD *)(*(_QWORD *)v25 + 12LL);
          if ( *(_DWORD *)(v25 + 8) != v58 )
          {
            *(_DWORD *)(v25 + 8) = v58;
            v22 = v20;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 152LL))(v57, v20);
          }
        }
      }
    }
    v24 = v4[16];
    if ( (*(_BYTE *)(v24 + 24) & 1) == 0 )
    {
LABEL_17:
      v27 = *(_QWORD *)(v24 + 24);
      goto LABEL_37;
    }
LABEL_68:
    v27 = sub_B96980(v24);
    if ( v27 != v26 )
      break;
LABEL_69:
    v48 = ptr;
    if ( !(_DWORD)v100 )
      goto LABEL_45;
    v4 = *((_QWORD **)ptr + (unsigned int)v100 - 1);
    LODWORD(v100) = v100 - 1;
    v2 = (unsigned __int64)(v4 + 8);
  }
  while ( 1 )
  {
    v45 = *(_QWORD *)(**(_QWORD **)(v27 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v45 + 8) & 0xF) != 0 )
      v45 = sub_F64F00(**(_QWORD **)(v27 + 16), v22, v25, v16, v20);
    v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v47 = *(_BYTE *)(v46 + 16);
    if ( v47 == 48 )
    {
      v28 = sub_F60F10(v46, v22, v25, v16, v20, v11);
      v29 = *(__int64 (__fastcall **)(_QWORD *))(*v28 + 32LL);
      if ( (char *)v29 == (char *)sub_A01140 )
        goto LABEL_19;
    }
    else
    {
      if ( v47 != 29 )
      {
        v91 = 2;
        goto LABEL_36;
      }
      v28 = sub_F61460(v46, v22, v25, v16, v20, v11);
      v29 = *(__int64 (__fastcall **)(_QWORD *))(*v28 + 32LL);
      if ( (char *)v29 == (char *)sub_A01140 )
      {
LABEL_19:
        v32 = sub_B70A60((__int64)v28);
        if ( a2 == v32 )
          break;
        goto LABEL_20;
      }
    }
    v32 = v29(v28);
    if ( a2 == v32 )
      break;
LABEL_20:
    if ( v9 && *(_QWORD *)(a2 + 40) == *(_QWORD *)(v32 + 40) )
    {
      v33 = (_QWORD *)(*(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v32 + 16) & 4) != 0 )
        v33 = (_QWORD *)*v33;
      v34 = sub_B91570((__int64)v33, v22, v30, v31, v20, v11);
      v38 = *(_QWORD *)(a2 + 16);
      if ( (v38 & 4) != 0 )
        v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
      v92 = v34;
      v40 = sub_B91570(v39, v22, v34, v35, v36, v37);
      if ( v92 == v40 )
      {
        v91 = 2;
      }
      else if ( (*(_BYTE *)(v92 + 8) & 0x7F) != 0 && (*(_BYTE *)(v92 + 8) & 0x7F) != 0x18 )
      {
        v41 = *(_BYTE *)(v40 + 8) & 0x7F;
        if ( v41 != 24 )
        {
          v13 = v41 == 0;
          v42 = 2;
          if ( v13 )
            v42 = v91;
          v91 = v42;
        }
      }
    }
    v43 = (unsigned int)v100;
    v16 = HIDWORD(v100);
    v44 = (unsigned int)v100 + 1LL;
    if ( v44 > HIDWORD(v100) )
    {
      v22 = (__int64)v101;
      sub_2237220(&ptr, v101, v44, 8);
      v43 = (unsigned int)v100;
    }
    v25 = (__int64)ptr;
    *((_QWORD *)ptr + v43) = v32;
    LODWORD(v100) = v100 + 1;
LABEL_36:
    v27 += 24;
LABEL_37:
    if ( v27 == v26 )
      goto LABEL_69;
  }
  v91 = 0;
  v48 = ptr;
LABEL_45:
  if ( v48 != v101 )
    free(v48);
  return v91;
}
