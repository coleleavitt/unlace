__int64 __fastcall sub_DA1070(
        _QWORD **a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  __int64 v6; // r15
  __int64 *v7; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  char v17; // al
  _WORD *v18; // rax
  size_t v19; // rdx
  _WORD *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // rdi
  __int64 v29; // rdx
  void *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  _WORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  void *v60; // rcx
  __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  unsigned int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rsi
  _DWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rsi
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned int v83; // eax
  __int64 v84; // rax
  unsigned int v85; // eax
  _QWORD *v86; // rax
  _QWORD *i; // r15
  void *n; // [rsp+0h] [rbp-88h]
  unsigned int v89; // [rsp+8h] [rbp-80h]
  unsigned int v90; // [rsp+10h] [rbp-78h]
  _QWORD *v91; // [rsp+10h] [rbp-78h]
  __int64 v92; // [rsp+18h] [rbp-70h]
  void *v93; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v94; // [rsp+28h] [rbp-60h]
  void *v95; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v96; // [rsp+38h] [rbp-50h]

  v6 = a3;
  v7 = (__int64 *)a2;
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 == 1 )
  {
    v13 = *(_QWORD *)(a2 + 32);
    goto LABEL_22;
  }
  if ( v11 )
  {
    if ( v11 == 2 || v11 == 3 )
      goto LABEL_10;
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
    goto LABEL_22;
  }
  v12 = *(_QWORD *)(a2 + 32);
  if ( !v12 )
  {
    v13 = 64;
LABEL_22:
    if ( !v13 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v14 = *(unsigned int *)(a2 + 40);
  if ( *(_DWORD *)(v13 + 24) != (_DWORD)v14 && (_DWORD)v14 )
  {
    v13 = *(_QWORD *)(v12 + v14 + 32);
    goto LABEL_22;
  }
LABEL_6:
  if ( (*(_QWORD *)v13 & 2) == 0 )
  {
    v15 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v15 )
    {
      if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 49 <= 2 && (*(_BYTE *)(v15 + 68) & 1) != 0 )
      {
        v39 = sub_B78170(v15);
        if ( v39 >= (unsigned int)a5 )
          v39 = a5;
        v16 = v39;
LABEL_60:
        if ( !v16 )
          return 1;
        goto LABEL_12;
      }
    }
  }
LABEL_10:
  if ( (_DWORD)v6 != 10 || (v16 = 1, !a6) )
  {
    v16 = a5;
    goto LABEL_60;
  }
LABEL_12:
  v17 = sub_E23C20(a2);
  if ( (_DWORD)v6 != 13 && v17 == 1 )
  {
    v18 = (_WORD *)operator new[](a5 >> 3);
    v19 = a5 >> 3;
    v20 = v18;
    if ( v19 )
    {
      a2 = 0;
      memset(v18, 0, v19);
    }
    if ( (_DWORD)v6 == 12 )
    {
      v21 = v7[4];
      v22 = *v7;
      if ( *((_DWORD *)v7 + 6) )
        goto LABEL_30;
      v23 = *(_QWORD *)(v21 + 32);
      a2 = *((unsigned int *)v7 + 10);
      if ( *(_DWORD *)(v23 + 24) != (_DWORD)a2 && (_DWORD)a2 )
        v23 = *(_QWORD *)(v21 + a2 + 32);
      if ( !*(_BYTE *)(v23 + 60) || (v24 = *((unsigned int *)v7 + 10), v25 = v21 + v22 + 72, v24 != v22) )
LABEL_30:
        v25 = v21 + v22 + 40;
      v26 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      v27 = sub_21F9120(v26);
      v28 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      v89 = sub_21F9120(v28);
      n = (void *)sub_21F90D0(v28, a2, v29);
      if ( ((unsigned __int64)v89 + 63) >> 6 == 1 )
      {
        v30 = *(void **)v25;
        v94 = v27;
        if ( v27 > 0x40 )
          sub_2205470(&v93, v30, 0);
        else
          v93 = v30;
      }
      else
      {
        v84 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
        v85 = sub_21F9120(v84);
        sub_2205610(&v93, v27, ((unsigned __int64)v85 + 63) >> 6, *(_QWORD *)v25);
      }
      v31 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      if ( n == (void *)v31 )
        sub_21FFDA0(&v95, n, &v93);
      else
        sub_21FF7D0(&v95, v31, &v93);
      if ( v94 > 0x40 && v93 )
        operator delete[](v93);
      v92 = (unsigned int)sub_21F9130(v95);
      if ( n == v95 )
      {
        if ( v96 )
        {
          v86 = &v96[3 * *(v96 - 1)];
          if ( v96 != v86 )
          {
            do
            {
              v91 = v86 - 3;
              sub_9955A0(v86 - 3);
              v86 = v91;
            }
            while ( v96 != v91 );
          }
          operator delete[](v86 - 1, 24LL * *(v86 - 1) + 8);
        }
      }
      else
      {
        sub_21F9830(&v95);
      }
      v32 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      v90 = sub_21F9120(v32);
      v33 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      if ( ((unsigned __int64)(unsigned int)sub_21F9120(v33) + 63) >> 6 == 1 )
      {
        v34 = *(void **)v25;
        v94 = v90;
        if ( v90 > 0x40 )
          sub_2205470(&v93, v34, 0);
        else
          v93 = v34;
      }
      else
      {
        v82 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
        v83 = sub_21F9120(v82);
        sub_2205610(&v93, v90, ((unsigned __int64)v83 + 63) >> 6, *(_QWORD *)v25);
      }
      v35 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      if ( n == (void *)v35 )
        sub_21FFDA0(&v95, n, &v93);
      else
        sub_21FF7D0(&v95, v35, &v93);
      if ( v94 > 0x40 && v93 )
        operator delete[](v93);
      if ( n == v95 )
        sub_22010F0(&v93, &v95);
      else
        sub_21FEE00(&v93, &v95);
      if ( n == v95 )
      {
        if ( v96 )
        {
          for ( i = &v96[3 * *(v96 - 1)]; v96 != i; sub_9955A0(i) )
            i -= 3;
          operator delete[](i - 1, 24LL * *(i - 1) + 8);
        }
      }
      else
      {
        sub_21F9830(&v95);
      }
      v36 = sub_21F8CF0(*(unsigned int *)(v25 + 8));
      v37 = sub_21F9120(v36);
      sub_220BA60(&v93, v20, v37 >> 3);
      if ( v94 > 0x40 && v93 )
        operator delete[](v93);
      sub_C9EF70((__int64)*a1, a4, v92);
    }
    else
    {
      switch ( v6 )
      {
        case 0LL:
        case 1LL:
          v50 = v7[4];
          v51 = *v7;
          if ( !*((_DWORD *)v7 + 6) )
          {
            v52 = *(_QWORD *)(v50 + 32);
            v53 = *((unsigned int *)v7 + 10);
            if ( *(_DWORD *)(v52 + 24) != (_DWORD)v53 && (_DWORD)v53 )
              v52 = *(_QWORD *)(v50 + v53 + 32);
            if ( *(_BYTE *)(v52 + 60) && *((_DWORD *)v7 + 10) == v51 )
              goto LABEL_137;
          }
          goto LABEL_89;
        case 2LL:
        case 3LL:
          v45 = v7[4];
          v46 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_81;
          v47 = *(_QWORD *)(v45 + 32);
          v48 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v47 + 24) != (_DWORD)v48 && (_DWORD)v48 )
            v47 = *(_QWORD *)(v45 + v48 + 32);
          if ( *(_BYTE *)(v47 + 60) && *((_DWORD *)v7 + 10) == v46 )
            v49 = (_WORD *)(v45 + v46 + 72);
          else
LABEL_81:
            v49 = (_WORD *)(v45 + v46 + 40);
          *v20 = *v49;
          break;
        case 4LL:
          v64 = v7[4];
          v65 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_110;
          v66 = *(_QWORD *)(v64 + 32);
          v67 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v66 + 24) != (_DWORD)v67 && (_DWORD)v67 )
            v66 = *(_QWORD *)(v64 + v67 + 32);
          if ( !*(_BYTE *)(v66 + 60) || v65 != *((_DWORD *)v7 + 10) )
            goto LABEL_110;
          goto LABEL_118;
        case 5LL:
          v64 = v7[4];
          v65 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_110;
          v69 = *(_QWORD *)(v64 + 32);
          v70 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v69 + 24) != (_DWORD)v70 && (_DWORD)v70 )
            v69 = *(_QWORD *)(v64 + v70 + 32);
          if ( *(_BYTE *)(v69 + 60) && *((_DWORD *)v7 + 10) == v65 )
LABEL_118:
            v68 = (_DWORD *)(v64 + v65 + 72);
          else
LABEL_110:
            v68 = (_DWORD *)(v64 + v65 + 40);
          *(_DWORD *)v20 = *v68;
          break;
        case 6LL:
        case 7LL:
          v40 = v7[4];
          v41 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_72;
          v42 = *(_QWORD *)(v40 + 32);
          v43 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v42 + 24) != (_DWORD)v43 && (_DWORD)v43 )
            v42 = *(_QWORD *)(v40 + v43 + 32);
          if ( *(_BYTE *)(v42 + 60) && v41 == *((_DWORD *)v7 + 10) )
            v44 = (_QWORD *)(v40 + v41 + 72);
          else
LABEL_72:
            v44 = (_QWORD *)(v40 + v41 + 40);
          *(_QWORD *)v20 = *v44;
          break;
        case 8LL:
          v55 = v7[4];
          v56 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_97;
          v57 = *(_QWORD *)(v55 + 32);
          v58 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v57 + 24) != (_DWORD)v58 && (_DWORD)v58 )
            v57 = *(_QWORD *)(v55 + v58 + 32);
          if ( *(_BYTE *)(v57 + 60) && v56 == *((_DWORD *)v7 + 10) )
            v59 = v55 + v56 + 72;
          else
LABEL_97:
            v59 = v55 + v56 + 40;
          v60 = *(void **)v59;
          v61 = *(unsigned int *)(v59 + 8);
          v62 = (unsigned __int64)(v61 + 63) >> 6;
          v63 = *(_DWORD *)(v59 + 8) >> 3;
          if ( v62 == 1 )
          {
            LODWORD(v96) = *(_DWORD *)(v59 + 8);
            if ( (unsigned int)v61 > 0x40 )
              sub_2205470(&v95, v60, 0);
            else
              v95 = v60;
          }
          else
          {
            sub_2205610(&v95, v61, v62, v60);
          }
          goto LABEL_101;
        case 9LL:
          v71 = v7[4];
          v72 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_125;
          v73 = *(_QWORD *)(v71 + 32);
          v74 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v73 + 24) != (_DWORD)v74 && (_DWORD)v74 )
            v73 = *(_QWORD *)(v71 + v74 + 32);
          if ( *(_BYTE *)(v73 + 60) && v72 == *((_DWORD *)v7 + 10) )
            v75 = v71 + v72 + 72;
          else
LABEL_125:
            v75 = v71 + v72 + 40;
          v76 = *(_QWORD *)v75;
          v77 = *(unsigned int *)(v75 + 8);
          v78 = (unsigned __int64)(v77 + 63) >> 6;
          v63 = *(_DWORD *)(v75 + 8) >> 3;
          if ( v78 == 1 )
          {
            LODWORD(v96) = *(_DWORD *)(v75 + 8);
            if ( (unsigned int)v77 > 0x40 )
            {
              sub_2205470(&v95, v76, 1);
            }
            else
            {
              v79 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v77;
              if ( !(_DWORD)v77 )
                v79 = 0;
              v95 = (void *)(v76 & v79);
            }
          }
          else
          {
            sub_2205610(&v95, v77, v78, v76);
          }
LABEL_101:
          sub_220BA60(&v95, v20, v63);
          if ( (unsigned int)v96 > 0x40 && v95 )
            operator delete[](v95);
          break;
        case 10LL:
          v50 = v7[4];
          v51 = *v7;
          if ( *((_DWORD *)v7 + 6) )
            goto LABEL_89;
          v80 = *(_QWORD *)(v50 + 32);
          v81 = *((unsigned int *)v7 + 10);
          if ( *(_DWORD *)(v80 + 24) != (_DWORD)v81 && (_DWORD)v81 )
            v80 = *(_QWORD *)(v50 + v81 + 32);
          if ( *(_BYTE *)(v80 + 60) && v51 == *((_DWORD *)v7 + 10) )
LABEL_137:
            v54 = (_BYTE *)(v50 + v51 + 72);
          else
LABEL_89:
            v54 = (_BYTE *)(v50 + v51 + 40);
          *(_BYTE *)v20 = *v54;
          break;
      }
      sub_C9EF70((__int64)*a1, a4, v16);
    }
    sub_C9ED90(*a1, (__int64)v20, a4, v16, *(_DWORD *)a1[1]);
    operator delete[](v20);
  }
  return 1;
}
