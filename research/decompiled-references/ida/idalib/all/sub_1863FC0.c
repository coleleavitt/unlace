void __fastcall sub_1863FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _DWORD *v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 **v38; // rax
  __int64 *v39; // rdx
  unsigned __int64 v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rcx
  __int64 *v43; // rax
  _QWORD *v44; // rdi
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _DWORD *v49; // rdx
  __int64 v50; // rdi
  int v51; // eax
  unsigned __int64 v52; // rax
  __int64 v53; // rdi
  int v54; // eax
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  _DWORD *v60; // rdx
  __int64 v61; // rdi
  int v62; // eax
  __int64 v63; // rdi
  int v64; // eax
  unsigned __int64 v65; // rax
  _QWORD *v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rdi
  int v69; // eax
  __int64 *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  unsigned __int64 *v86; // rax
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v91; // rcx
  __int64 v92; // [rsp+10h] [rbp-F8h]
  __int64 *v93; // [rsp+18h] [rbp-F0h]
  __int64 v94; // [rsp+20h] [rbp-E8h]
  __int64 v96; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v97[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v99[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v100; // [rsp+B8h] [rbp-50h]
  unsigned int v101; // [rsp+C0h] [rbp-48h]
  char v102; // [rsp+C4h] [rbp-44h]

  v7 = (_QWORD *)a2;
  v93 = (__int64 *)(a1 + 8);
  while ( 2 )
  {
    v8 = v7[13];
    v9 = *(_QWORD *)(v8 + 96);
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v9 & 1) == 0 )
    {
      v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v12 = v9 & 2;
        if ( !(_DWORD)v12 )
          goto LABEL_5;
        v10 = sub_6E2500(v11, v7[13], v12, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        v9 = v10 | 1;
        *(_QWORD *)(v8 + 96) = v10 | 1;
      }
    }
    if ( v10 )
    {
      if ( (v10 & 4) != 0 )
      {
        v60 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v60 )
        {
          v61 = *(_QWORD *)v60;
          v62 = *(_DWORD *)(*(_QWORD *)v60 + 12LL);
          if ( v60[2] != v62 )
          {
            v60[2] = v62;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v61 + 152LL))(v61, v8);
            v13 = v7[16];
            if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
              goto LABEL_6;
LABEL_75:
            v14 = sub_B96980(v13);
            goto LABEL_7;
          }
        }
      }
    }
LABEL_5:
    v13 = v7[16];
    if ( (*(_BYTE *)(v13 + 24) & 1) != 0 )
      goto LABEL_75;
LABEL_6:
    v14 = *(_QWORD *)(v13 + 24);
LABEL_7:
    v15 = v7[13];
    v16 = *(_QWORD *)(v15 + 96);
    v17 = v16;
    v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v16 & 1) != 0 || (v19 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL), (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
    {
LABEL_54:
      if ( v18 )
      {
        if ( (v18 & 4) != 0 )
        {
          v49 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v49 )
          {
            v50 = *(_QWORD *)v49;
            v51 = *(_DWORD *)(*(_QWORD *)v49 + 12LL);
            if ( v49[2] != v51 )
            {
              v49[2] = v51;
              (*(void (__fastcall **)(__int64, __int64, _DWORD *, __int64, __int64))(*(_QWORD *)v50 + 152LL))(
                v50,
                v15,
                v49,
                a4,
                v17);
            }
          }
        }
      }
      v21 = v7[16];
      v15 = v7[13];
      v20 = *(_QWORD *)(v15 + 96);
      v17 = v20;
      v22 = v14 + 24LL * *(unsigned int *)(v21 + 16);
      v52 = v20 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v20 & 1) != 0 )
        goto LABEL_60;
      v19 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_60;
      goto LABEL_11;
    }
    v20 = v16 & 2;
    if ( (_DWORD)v20 )
    {
      v18 = sub_6E2500(v19, v7[13], v20, a4, v17, a6) & 0xFFFFFFFFFFFFFFFELL;
      v16 = v18 | 1;
      *(_QWORD *)(v15 + 96) = v18 | 1;
      goto LABEL_54;
    }
    v21 = v7[16];
    v22 = v14 + 24LL * *(unsigned int *)(v21 + 16);
LABEL_11:
    v17 &= 2u;
    if ( !(_DWORD)v17 )
    {
      if ( (*(_BYTE *)(v21 + 24) & 1) == 0 )
        goto LABEL_13;
      goto LABEL_66;
    }
    v52 = sub_6E2500(v19, v15, v20, a4, v17, a6) & 0xFFFFFFFFFFFFFFFELL;
    v20 = v52 | 1;
    *(_QWORD *)(v15 + 96) = v52 | 1;
LABEL_60:
    if ( v52 )
    {
      if ( (v52 & 4) != 0 )
      {
        v20 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v20 )
        {
          v53 = *(_QWORD *)v20;
          v54 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
          if ( *(_DWORD *)(v20 + 8) != v54 )
          {
            *(_DWORD *)(v20 + 8) = v54;
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v53 + 152LL))(
              v53,
              v15,
              v20,
              a4,
              v17);
          }
        }
      }
    }
    v21 = v7[16];
    if ( (*(_BYTE *)(v21 + 24) & 1) == 0 )
    {
LABEL_13:
      v23 = *(_QWORD *)(v21 + 24);
      goto LABEL_14;
    }
LABEL_66:
    v23 = sub_B96980(v21);
    if ( v23 == v22 )
      break;
    while ( 1 )
    {
      v24 = *(_QWORD *)(**(_QWORD **)(v23 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v24 + 8) & 0xF) != 0 )
        v24 = sub_F64F00(**(_QWORD **)(v23 + 16), v21, v20, a4, v17);
      v25 = sub_F63270(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL), v21, v20, a4, v17, a6);
      v17 = v25[13];
      v26 = v25;
      v27 = *(_QWORD *)(v17 + 96);
      if ( (v27 & 1) != 0 )
      {
        v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v44 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v27 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v27 & 2) == 0 )
          goto LABEL_24;
        a6 = v44[2295];
        v45 = v17 & 0xFFFFFFFFFFFFFFFBLL;
        if ( a6 )
        {
          v46 = v44[294];
          v44[304] += 24LL;
          v47 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          a4 = v47 + 24;
          if ( v44[295] >= v47 + 24 && v46 )
          {
            v44[294] = a4;
            v48 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v21 = 24;
            v94 = a6;
            v92 = v17;
            v48 = sub_986170((__int64)(v44 + 294), 24, 24, 3, v17, a6);
            a6 = v94;
            v17 = v92;
            v47 = v48 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v48 = a6;
          v45 = v47 | 4;
          *(_DWORD *)(v48 + 8) = 0;
          *(_QWORD *)(v48 + 16) = v17;
        }
        v28 = v45 & 0xFFFFFFFFFFFFFFFELL;
        v27 = v28 | 1;
        *(_QWORD *)(v17 + 96) = v28 | 1;
      }
      if ( v28 )
      {
        if ( (v28 & 4) != 0 )
        {
          v29 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v29 )
          {
            v30 = *(_QWORD *)v29;
            v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
            if ( v29[2] != v31 )
            {
              v29[2] = v31;
              v21 = v17;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v17);
            }
          }
        }
      }
LABEL_24:
      v20 = v26[16];
      if ( (*(_BYTE *)(v20 + 1) & 4) != 0 )
        break;
      v17 = v26[13];
      a4 = *(_QWORD *)(v17 + 96);
      v65 = a4 & 0xFFFFFFFFFFFFFFFELL;
      if ( (a4 & 1) == 0 )
      {
        v66 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (a4 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          a4 &= 2u;
          if ( !(_DWORD)a4 )
            goto LABEL_85;
          v21 = v26[13];
          v67 = sub_6E2500(v66, v21, v20, a4, v17, a6);
          v17 = v21;
          v65 = v67 & 0xFFFFFFFFFFFFFFFELL;
          a4 = v65 | 1;
          *(_QWORD *)(v21 + 96) = v65 | 1;
        }
      }
      if ( v65 )
      {
        if ( (v65 & 4) != 0 )
        {
          a4 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( a4 )
          {
            v68 = *(_QWORD *)a4;
            v69 = *(_DWORD *)(*(_QWORD *)a4 + 12LL);
            if ( *(_DWORD *)(a4 + 8) != v69 )
            {
              *(_DWORD *)(a4 + 8) = v69;
              v21 = v17;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 152LL))(v68, v17);
            }
          }
        }
      }
      v20 = v26[16];
LABEL_85:
      if ( *(_DWORD *)(v20 + 20) )
        break;
      v23 += 24;
LABEL_14:
      if ( v23 == v22 )
        goto LABEL_67;
    }
    v32 = *(_QWORD *)(**(_QWORD **)(v23 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v32 + 8) & 0xF) != 0 )
      v32 = sub_F64F00(**(_QWORD **)(v23 + 16), v21, v20, a4, v17);
    v33 = sub_F63270(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL), v21, v20, a4, v17, a6);
    v34 = (__int64)v33;
    if ( v33 && v7 != v33 )
    {
      v35 = v33[13];
      v20 = *(_QWORD *)(v35 + 96);
      v36 = v20 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v20 & 1) == 0 )
      {
        v37 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v20 &= 2u;
          if ( !(_DWORD)v20 )
            goto LABEL_32;
          v21 = v35;
          v36 = sub_6E2500(v37, v35, v20, a4, v17, a6) & 0xFFFFFFFFFFFFFFFELL;
          v20 = v36 | 1;
          *(_QWORD *)(v35 + 96) = v36 | 1;
        }
      }
      if ( v36 )
      {
        if ( (v36 & 4) != 0 )
        {
          v20 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            v63 = *(_QWORD *)v20;
            v64 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
            if ( *(_DWORD *)(v20 + 8) != v64 )
            {
              *(_DWORD *)(v20 + 8) = v64;
              v21 = v35;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 152LL))(v63, v35);
            }
          }
        }
      }
LABEL_32:
      if ( (*(_BYTE *)(*(_QWORD *)(v34 + 128) + 1LL) & 4) != 0 )
      {
        if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
          goto LABEL_131;
        v38 = (__int64 **)sub_B8C3D0(a2, v21, v20, a4, v17, a6);
        v39 = *v38;
        v40 = (unsigned __int64)&(*v38)[*((unsigned int *)v38 + 2)];
        if ( (unsigned __int64)v39 >= v40 )
        {
          if ( v39 != (__int64 *)v40 )
          {
            if ( *(_WORD *)(*(_QWORD *)v40 + 36LL) == 393 )
              goto LABEL_39;
            v70 = (__int64 *)(v40 + 8);
            while ( v39 != v70 )
            {
              v71 = *v70++;
              if ( *(_WORD *)(v71 + 36) == 393 )
                goto LABEL_39;
            }
          }
        }
        else
        {
          v41 = v39;
          while ( *(_WORD *)(*v41 + 36) != 393 )
          {
            if ( (__int64 *)v40 == ++v41 )
              goto LABEL_131;
          }
          if ( (__int64 *)v40 != v41 )
          {
LABEL_39:
            v42 = *v39;
            if ( *(_WORD *)(*v39 + 36) != 393 )
            {
              v43 = v39 + 1;
              do
                v42 = *v43++;
              while ( *(_WORD *)(v42 + 36) != 393 );
            }
            sub_168B9F0((__int64)v97, v93, *(_DWORD *)(v42 + 24), 0x10D5u, 0);
            if ( v100 )
            {
              sub_AE9DF0(v99, a2, 0xAu);
              if ( !v100 )
                goto LABEL_106;
            }
            else
            {
              if ( !v102 )
                goto LABEL_44;
              v74 = sub_168B9E0(v97);
              v77 = v98;
              if ( v98 )
                v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 32LL))(v98);
              v96 = v77;
              v78 = sub_1587BC0(v74, &v96, v72, v73, v75, v76);
              sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v101 + 8), a2, 0xAu);
              if ( !v100 )
              {
LABEL_106:
                if ( v102 )
                {
                  v81 = sub_168B9E0(v97);
                  v84 = v98;
                  if ( v98 )
                    v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 32LL))(v98);
                  v96 = v84;
                  v85 = sub_1587BC0(v81, &v96, v79, v80, v82, v83);
                  sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * v101 + 8), v34, 0xAu);
                }
LABEL_44:
                v7 = (_QWORD *)v34;
                sub_15F7200(v97);
                continue;
              }
            }
            sub_AE9DF0(v99, v34, 0xAu);
            goto LABEL_44;
          }
        }
LABEL_131:
        BUG();
      }
    }
    break;
  }
LABEL_67:
  v55 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v55 + 96), v55, v20, a4, v17, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 4) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v86 = sub_B8C3D0(a2, v55, v56, v57, v58, v59);
      v87 = *v86;
      v88 = *v86 + 8LL * *((unsigned int *)v86 + 2);
      if ( v87 < v88 )
      {
        v91 = v87;
        while ( *(_WORD *)(*(_QWORD *)v91 + 36LL) != 393 )
        {
          v91 += 8LL;
          if ( v88 == v91 )
            goto LABEL_132;
        }
        if ( v88 != v91 )
          goto LABEL_122;
      }
      else if ( v87 != v88 )
      {
        if ( *(_WORD *)(*(_QWORD *)v88 + 36LL) == 393 )
        {
LABEL_122:
          while ( *(_WORD *)(*(_QWORD *)v87 + 36LL) != 393 )
            v87 += 8LL;
          sub_168B9F0((__int64)v97, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)v87 + 24LL), 0x10CDu, 0);
          v96 = a2;
          sub_1852F10((__int64)v97, &v96);
          sub_15F7200(v97);
          return;
        }
        v89 = v88 + 8;
        for ( i = v89; v89 != v87; i = v89 )
        {
          v89 += 8LL;
          if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 393 )
            goto LABEL_122;
        }
      }
    }
LABEL_132:
    BUG();
  }
}
