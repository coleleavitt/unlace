void __fastcall sub_E4B5F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // r14
  size_t v9; // rbp
  char v10; // r13
  const char *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned int *v15; // r12
  __int64 v16; // rax
  const char *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int *v19; // rdx
  bool v20; // zf
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rdi
  unsigned __int64 v30; // rax
  unsigned int *v31; // rsi
  size_t v32; // r12
  _BYTE *v33; // rdi
  unsigned __int64 v34; // rax
  __int64 (__fastcall **v35)(); // rax
  unsigned int v36; // ebx
  int v37; // r12d
  unsigned int *v38; // rsi
  _BYTE *v39; // rdi
  size_t v40; // r13
  const void *v41; // rsi
  __int64 v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rbp
  unsigned int *v45; // r12
  __int64 v46; // rdx
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned int *v49; // rsi
  void *v50; // rdi
  size_t v51; // rbx
  const void *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  _DWORD *v56; // rdx
  size_t v57; // rbp
  const void *v58; // rsi
  char v59; // [rsp+1Fh] [rbp-C9h]
  __int64 v60; // [rsp+28h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+30h] [rbp-B8h]
  __int64 v62; // [rsp+40h] [rbp-A8h]
  void *v63; // [rsp+50h] [rbp-98h] BYREF
  size_t v64; // [rsp+58h] [rbp-90h]
  _BYTE v65[16]; // [rsp+60h] [rbp-88h] BYREF
  __int64 (__fastcall **v66)(); // [rsp+70h] [rbp-78h] BYREF
  int v67; // [rsp+78h] [rbp-70h]
  __int128 v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  char v70; // [rsp+98h] [rbp-50h]
  int v71; // [rsp+9Ch] [rbp-4Ch]
  void **v72; // [rsp+A0h] [rbp-48h]

  v7 = a5;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2320LL) + 368LL) <= 3u )
  {
    v9 = 0;
    v10 = a4;
    v61 = 0;
    v11 = &byte_22CD811;
    v62 = 0;
    v12 = sub_B8A3E0(a2, a2, a3, a4, a5, a6);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 88);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 40);
        if ( (v14 & 7) != 0 )
        {
          v9 = 0;
        }
        else
        {
          v9 = v14 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v9 )
          {
            v15 = *(unsigned int **)(v9 + 16);
            v9 = *v15;
            v11 = (const char *)(v15 + 4);
          }
        }
        if ( v7 )
        {
          v16 = *(_QWORD *)(v12 + 40);
          if ( (v16 & 7) != 0 )
          {
            v18 = 0;
            v17 = &byte_22CD811;
          }
          else
          {
            v17 = &byte_22CD811;
            v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v18 )
            {
              v19 = *(unsigned int **)(v18 + 16);
              v18 = *v19;
              v17 = (const char *)(v19 + 4);
            }
          }
          *(_QWORD *)&v61 = v17;
          *((_QWORD *)&v61 + 1) = v18;
          v59 = 1;
          goto LABEL_43;
        }
      }
    }
    else
    {
      v43 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v43 = (_QWORD *)*v43;
      v44 = *(v43 - 1);
      if ( (v44 & 7) != 0 )
      {
        v9 = 0;
        v11 = &byte_22CD811;
      }
      else
      {
        v11 = &byte_22CD811;
        v9 = v44 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          v45 = *(unsigned int **)(v9 + 16);
          v9 = *v45;
          v11 = (const char *)(v45 + 4);
        }
      }
    }
    v59 = 0;
LABEL_43:
    v65[0] = 0;
    v72 = &v63;
    v63 = v65;
    v68 = 0;
    v66 = &off_2BC1EC8;
    v64 = 0;
    v67 = 0;
    v70 = 0;
    v71 = 1;
    v69 = 0;
    sub_2257B70(&v66, 0, 0, 0);
    v60 = *(_QWORD *)(a2 + 40);
    sub_FBB170(&v60, &v66);
    v46 = *(_QWORD *)(a2 + 56) >> 17;
    LOBYTE(v62) = v59;
    sub_E4B180(a3, v10, v46 & 1, v11, v9, v47, (void *)v61, *((size_t *)&v61 + 1), v59, v63, v64);
    v66 = &off_2BC1EC8;
    sub_2257A60(&v66);
    if ( v63 != v65 )
      operator delete(v63);
    return;
  }
  v20 = (*(_BYTE *)(a2 + 58) & 2) == 0;
  v21 = &unk_22CD816;
  v22 = *(_QWORD *)(a3 + 32);
  if ( !v20 )
    v21 = &unk_22CD812;
  if ( (unsigned __int64)(*(_QWORD *)(a3 + 24) - v22) > 2 )
  {
    v23 = a3;
    *(_WORD *)v22 = *(_WORD *)v21;
    *(_BYTE *)(v22 + 2) = v21[2];
    *(_QWORD *)(a3 + 32) += 3LL;
  }
  else
  {
    v23 = sub_22581D0(a3, v21, 3);
  }
  v24 = *(_QWORD *)(sub_B84890(a2) + 40);
  if ( (v24 & 7) != 0 )
    goto LABEL_20;
  v28 = *(_QWORD *)(v23 + 24);
  v29 = *(_BYTE **)(v23 + 32);
  v30 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v30 )
    goto LABEL_21;
  v31 = *(unsigned int **)(v30 + 16);
  v32 = *v31;
  v21 = v31 + 4;
  if ( v28 - (unsigned __int64)v29 < v32 )
  {
    v23 = sub_22581D0(v23, v21, v32);
LABEL_20:
    v29 = *(_BYTE **)(v23 + 32);
    v28 = *(_QWORD *)(v23 + 24);
    goto LABEL_21;
  }
  if ( !v32 )
  {
LABEL_21:
    if ( v28 > (unsigned __int64)v29 )
      goto LABEL_22;
LABEL_55:
    v21 = (_BYTE *)(&qword_58 + 7);
    sub_2257CD0(v23, 95);
    if ( !v7 )
      goto LABEL_23;
    goto LABEL_56;
  }
  memcpy(v29, v21, v32);
  v28 = *(_QWORD *)(v23 + 24);
  v29 = (_BYTE *)(v32 + *(_QWORD *)(v23 + 32));
  *(_QWORD *)(v23 + 32) = v29;
  if ( v28 <= (unsigned __int64)v29 )
    goto LABEL_55;
LABEL_22:
  *(_QWORD *)(v23 + 32) = v29 + 1;
  *v29 = 95;
  if ( !v7 )
  {
LABEL_23:
    v33 = *(_BYTE **)(a3 + 32);
    v34 = *(_QWORD *)(a3 + 24);
    goto LABEL_24;
  }
LABEL_56:
  v53 = sub_B8A3E0(a2, (__int64)v21, v28, v25, v26, v27);
  if ( !v53 )
    goto LABEL_23;
  v54 = *(_QWORD *)(v53 + 40);
  v33 = *(_BYTE **)(a3 + 32);
  v34 = *(_QWORD *)(a3 + 24);
  if ( (v54 & 7) != 0 )
    goto LABEL_24;
  v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v55 )
    goto LABEL_24;
  v56 = *(_DWORD **)(v55 + 16);
  v57 = (unsigned int)*v56;
  v58 = v56 + 4;
  if ( v34 - (unsigned __int64)v33 < v57 )
  {
    sub_22581D0(a3, v58, v57);
    goto LABEL_23;
  }
  if ( *v56 )
  {
    memcpy(v33, v58, v57);
    v34 = *(_QWORD *)(a3 + 24);
    v33 = (_BYTE *)(v57 + *(_QWORD *)(a3 + 32));
    *(_QWORD *)(a3 + 32) = v33;
  }
LABEL_24:
  if ( v34 <= (unsigned __int64)v33 )
  {
    sub_2257CD0(a3, 95);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v33 + 1;
    *v33 = 95;
  }
  v35 = *(__int64 (__fastcall ***)())(a2 + 40);
  v36 = 0;
  v66 = v35;
  v37 = sub_FBABF0(&v66);
  if ( v37 )
  {
    while ( 1 )
    {
      v42 = sub_FBAC20(&v66, v36);
      if ( v42 )
      {
        v38 = *(unsigned int **)(v42 + 16);
        v39 = *(_BYTE **)(a3 + 32);
        v40 = *v38;
        v41 = v38 + 4;
        if ( v40 > *(_QWORD *)(a3 + 24) - (_QWORD)v39 )
        {
          sub_22581D0(a3, v41, v40);
          v39 = *(_BYTE **)(a3 + 32);
LABEL_30:
          if ( (unsigned __int64)v39 >= *(_QWORD *)(a3 + 24) )
            goto LABEL_36;
          goto LABEL_31;
        }
        if ( !v40 )
          goto LABEL_30;
        memcpy(v39, v41, v40);
        *(_QWORD *)(a3 + 32) += v40;
        v39 = *(_BYTE **)(a3 + 32);
      }
      else
      {
        v39 = *(_BYTE **)(a3 + 32);
      }
      if ( (unsigned __int64)v39 >= *(_QWORD *)(a3 + 24) )
      {
LABEL_36:
        sub_2257CD0(a3, 95);
        goto LABEL_32;
      }
LABEL_31:
      *(_QWORD *)(a3 + 32) = v39 + 1;
      *v39 = 95;
LABEL_32:
      if ( v37 == ++v36 )
        return;
    }
  }
  v48 = sub_FBAC20(&v66, 0);
  if ( v48 )
  {
    v49 = *(unsigned int **)(v48 + 16);
    v50 = *(void **)(a3 + 32);
    v51 = *v49;
    v52 = v49 + 4;
    if ( v51 > *(_QWORD *)(a3 + 24) - (_QWORD)v50 )
    {
      sub_22581D0(a3, v52, v51);
    }
    else if ( v51 )
    {
      memcpy(v50, v52, v51);
      *(_QWORD *)(a3 + 32) += v51;
    }
  }
}

