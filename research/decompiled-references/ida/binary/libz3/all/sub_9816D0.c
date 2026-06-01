void __fastcall sub_9816D0(char *a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int *v14; // r8
  char *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  bool v38; // al
  unsigned int v39; // edx
  char *v40; // rcx
  int v41; // eax
  __int64 v42; // r15
  __int64 v43; // rax
  char *v44; // r12
  bool v45; // dl
  __int64 v46; // rbp
  __int64 v47; // r10
  char *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // r15
  char *v55; // rbx
  char *v56; // r10
  __int64 v57; // rsi
  char *v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rdx
  int v61; // eax
  char *v62; // r10
  char *v63; // r14
  __int64 i; // r15
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rbx
  char *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // r12
  unsigned int v73; // eax
  __int64 v74; // rdx
  char *v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rsi
  int v81; // r8d
  __int64 v83; // [rsp+8h] [rbp-70h]
  __int64 v84; // [rsp+8h] [rbp-70h]
  __int64 v85; // [rsp+8h] [rbp-70h]
  unsigned int *v86; // [rsp+10h] [rbp-68h]
  unsigned int *v87; // [rsp+10h] [rbp-68h]
  unsigned int *v88; // [rsp+10h] [rbp-68h]
  unsigned int *v89; // [rsp+10h] [rbp-68h]
  __int64 v90; // [rsp+10h] [rbp-68h]
  unsigned int v91; // [rsp+10h] [rbp-68h]
  char *v92; // [rsp+18h] [rbp-60h]
  unsigned int v93; // [rsp+20h] [rbp-58h]
  __int64 v94; // [rsp+28h] [rbp-50h]
  __int64 v95; // [rsp+28h] [rbp-50h]
  __int64 v96; // [rsp+30h] [rbp-48h]
  bool v97; // [rsp+3Fh] [rbp-39h]

  if ( a2 - a1 <= 64 )
    return;
  v5 = (unsigned int *)a2;
  v7 = a4 + 64;
  v8 = a2 - a1;
  while ( 1 )
  {
    v9 = v8;
    v10 = *(_QWORD *)(a4 + 704);
    v11 = v8 >> 3;
    v12 = v9 >> 2;
    v13 = v10;
    if ( !a3 )
      break;
    v14 = (unsigned int *)&a1[4 * v11];
    --a3;
    v15 = a1 + 4;
    v16 = v10 + 16LL * *((unsigned int *)a1 + 1);
    v17 = v10 + 16LL * *v14;
    if ( (*(_BYTE *)(v17 + 4) & 1) != 0 || (*(_BYTE *)(v16 + 4) & 1) != 0 )
    {
      v86 = v14;
      LODWORD(v17) = sub_182EB00(v7, v10 + 16LL * *v14, v16);
      v13 = *(_QWORD *)(a4 + 704);
      v14 = v86;
      LODWORD(v17) = (unsigned int)v17 >> 31;
      v10 = v13;
    }
    else
    {
      LOBYTE(v17) = *(_DWORD *)v17 < *(_DWORD *)v16;
    }
    v18 = v13 + 16LL * *(v5 - 1);
    if ( (_BYTE)v17 )
    {
      v19 = v13 + 16LL * *v14;
      if ( (*(_BYTE *)(v18 + 4) & 1) != 0 || (*(_BYTE *)(v19 + 4) & 1) != 0 )
      {
        v87 = v14;
        v30 = sub_182EB00(v7, v13 + 16LL * *(v5 - 1), v19);
        v13 = *(_QWORD *)(a4 + 704);
        v14 = v87;
        v10 = v13;
        if ( v30 < 0 )
        {
LABEL_11:
          v20 = *(_DWORD *)a1;
          *(_DWORD *)a1 = *v14;
          *v14 = v20;
          v21 = *(unsigned int *)a1;
          goto LABEL_12;
        }
      }
      else if ( *(_DWORD *)v18 < *(_DWORD *)v19 )
      {
        goto LABEL_11;
      }
      v31 = *(v5 - 1);
      v32 = v13 + 16 * v31;
      v33 = v13 + 16LL * *((unsigned int *)a1 + 1);
      if ( (*(_BYTE *)(v32 + 4) & 1) != 0 || (*(_BYTE *)(v33 + 4) & 1) != 0 )
      {
        if ( (int)sub_182EB00(v7, v32, v33) >= 0 )
        {
          v13 = *(_QWORD *)(a4 + 704);
LABEL_48:
          v21 = *((unsigned int *)a1 + 1);
          v10 = v13;
          *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
          goto LABEL_12;
        }
        v10 = *(_QWORD *)(a4 + 704);
        LODWORD(v31) = *(v5 - 1);
      }
      else if ( *(_DWORD *)v32 >= *(_DWORD *)v33 )
      {
        goto LABEL_48;
      }
      v34 = *(_DWORD *)a1;
      *(_DWORD *)a1 = v31;
      *(v5 - 1) = v34;
      v21 = *(unsigned int *)a1;
    }
    else
    {
      v29 = v13 + 16LL * *((unsigned int *)a1 + 1);
      if ( (*(_BYTE *)(v18 + 4) & 1) != 0 || (*(_BYTE *)(v29 + 4) & 1) != 0 )
      {
        v88 = v14;
        v35 = sub_182EB00(v7, v13 + 16LL * *(v5 - 1), v29);
        v13 = *(_QWORD *)(a4 + 704);
        v14 = v88;
        v10 = v13;
        if ( v35 < 0 )
        {
LABEL_32:
          v21 = *((unsigned int *)a1 + 1);
          *(_QWORD *)a1 = __ROL8__(*(_QWORD *)a1, 32);
          goto LABEL_12;
        }
      }
      else if ( *(_DWORD *)v18 < *(_DWORD *)v29 )
      {
        goto LABEL_32;
      }
      v36 = v13 + 16LL * *(v5 - 1);
      v37 = v13 + 16LL * *v14;
      if ( (*(_BYTE *)(v36 + 4) & 1) != 0 || (*(_BYTE *)(v37 + 4) & 1) != 0 )
      {
        v89 = v14;
        v41 = sub_182EB00(v7, v36, v37);
        v13 = *(_QWORD *)(a4 + 704);
        v14 = v89;
        v39 = *(_DWORD *)a1;
        if ( v41 >= 0 )
        {
LABEL_50:
          v10 = v13;
          *(_DWORD *)a1 = *v14;
          *v14 = v39;
          v21 = *(unsigned int *)a1;
          goto LABEL_12;
        }
      }
      else
      {
        v38 = *(_DWORD *)v36 < *(_DWORD *)v37;
        v39 = *(_DWORD *)a1;
        if ( !v38 )
          goto LABEL_50;
      }
      v10 = v13;
      *(_DWORD *)a1 = *(v5 - 1);
      *(v5 - 1) = v39;
      v21 = *(unsigned int *)a1;
    }
LABEL_12:
    v22 = v5;
    while ( 2 )
    {
      while ( 1 )
      {
        v23 = v10 + 16 * v21;
        v24 = v10 + 16LL * *(unsigned int *)v15;
        if ( (*(_BYTE *)(v23 + 4) & 1) != 0 || (*(_BYTE *)(v24 + 4) & 1) != 0 )
          break;
        if ( *(_DWORD *)v23 >= *(_DWORD *)v24 )
          goto LABEL_18;
LABEL_14:
        v15 += 4;
      }
      v25 = sub_182EB00(v7, v23, v24);
      v10 = *(_QWORD *)(a4 + 704);
      v21 = *(unsigned int *)a1;
      if ( v25 < 0 )
        goto LABEL_14;
LABEL_18:
      --v22;
      while ( 2 )
      {
        v26 = v10 + 16 * v21;
        v27 = v10 + 16LL * *v22;
        if ( (*(_BYTE *)(v27 + 4) & 1) == 0 && (*(_BYTE *)(v26 + 4) & 1) == 0 )
        {
          if ( *(_DWORD *)v27 >= *(_DWORD *)v26 )
            goto LABEL_24;
LABEL_20:
          v10 = *(_QWORD *)(a4 + 704);
          v21 = *(unsigned int *)a1;
          --v22;
          continue;
        }
        break;
      }
      if ( (int)sub_182EB00(v7, v27, v26) < 0 )
        goto LABEL_20;
LABEL_24:
      if ( v15 < (char *)v22 )
      {
        v28 = *(_DWORD *)v15;
        v15 += 4;
        v10 = *(_QWORD *)(a4 + 704);
        *((_DWORD *)v15 - 1) = *v22;
        *v22 = v28;
        v21 = *(unsigned int *)a1;
        continue;
      }
      break;
    }
    sub_9816D0(v15, v5, a3, a4);
    v8 = v15 - a1;
    if ( v15 - a1 <= 64 )
      return;
    v5 = (unsigned int *)v15;
  }
  v92 = (char *)v5;
  v42 = v11 - 1;
  v43 = *(_QWORD *)(a4 + 704);
  v44 = a1;
  v96 = (v12 - 1) >> 1;
  v94 = v42;
  v97 = (v12 & 1) == 0;
  while ( 1 )
  {
    v93 = *(_DWORD *)&v44[4 * v42];
    if ( v96 <= v42 )
    {
      v48 = &v44[4 * v42];
      if ( v94 != v42 || !v97 )
        goto LABEL_103;
      v51 = v42;
LABEL_100:
      v80 = 2 * v51 + 2;
      v81 = *(_DWORD *)&v44[4 * v80 - 4];
      v51 = v80 - 1;
      v47 = 4 * v51;
      *(_DWORD *)v48 = v81;
      v48 = &v44[4 * v51];
      goto LABEL_62;
    }
    v83 = v42;
    while ( 1 )
    {
      v49 = v43 + 16LL * *(unsigned int *)&v44[8 * v42 + 4];
      v50 = v43 + 16LL * *(unsigned int *)&v44[8 * v42 + 8];
      if ( (*(_BYTE *)(v49 + 4) & 1) != 0 || (*(_BYTE *)(v50 + 4) & 1) != 0 )
      {
        v45 = (int)sub_182EB00(v7, v49, v50) < 0;
        v43 = *(_QWORD *)(a4 + 704);
      }
      else
      {
        v45 = *(_DWORD *)v49 < *(_DWORD *)v50;
      }
      v46 = 2 * (v42 + 1) - v45;
      v47 = 4 * v46;
      v48 = &v44[4 * v46];
      *(_DWORD *)&v44[4 * v42] = *(_DWORD *)v48;
      if ( v96 <= v46 )
        break;
      v42 = v46;
    }
    v42 = v83;
    v51 = v46;
    if ( v94 == v46 && v97 )
      goto LABEL_100;
LABEL_62:
    if ( v42 < v51 )
      break;
LABEL_103:
    *(_DWORD *)v48 = v93;
LABEL_72:
    --v42;
  }
  v84 = v42;
  v52 = (v51 - 1) >> 1;
  v53 = v43;
  v90 = v7;
  v54 = v47;
  v55 = v44;
  while ( 1 )
  {
    v58 = &v55[4 * v52];
    v59 = v53 + 16LL * v93;
    v60 = 16LL * *(unsigned int *)v58 + v53;
    if ( (*(_BYTE *)(v59 + 4) & 1) != 0 || (*(_BYTE *)(v60 + 4) & 1) != 0 )
    {
      v61 = sub_182EB00(v90, v59, v60);
      v56 = &v55[v54];
      if ( v61 >= 0 )
      {
LABEL_70:
        v42 = v84;
        v44 = v55;
        v7 = v90;
        *(_DWORD *)v56 = v93;
        if ( !v84 )
          goto LABEL_74;
LABEL_71:
        v43 = *(_QWORD *)(a4 + 704);
        goto LABEL_72;
      }
    }
    else
    {
      v56 = &v55[v54];
      if ( *(_DWORD *)v59 >= *(_DWORD *)v60 )
        goto LABEL_70;
    }
    *(_DWORD *)v56 = *(_DWORD *)v58;
    if ( v84 >= v52 )
      break;
    v57 = v52;
    v53 = *(_QWORD *)(a4 + 704);
    v52 = (v52 - 1) / 2;
    v54 = 4 * v57;
  }
  v42 = v84;
  v44 = v55;
  v62 = &v55[4 * v52];
  v7 = v90;
  *(_DWORD *)v62 = v93;
  if ( v84 )
    goto LABEL_71;
LABEL_74:
  v63 = v44;
  if ( v92 - v44 > 4 )
  {
    v85 = v7;
    do
    {
      while ( 1 )
      {
        v92 -= 4;
        v91 = *(_DWORD *)v92;
        *(_DWORD *)v92 = *(_DWORD *)v63;
        v95 = ((v92 - v63) >> 2) & 1;
        if ( v92 - v63 <= 8 )
          break;
        for ( i = 0; ; i = v66 )
        {
          v69 = *(_QWORD *)(a4 + 704);
          v70 = v69 + 16LL * *(unsigned int *)&v63[8 * i + 4];
          v71 = 16LL * *(unsigned int *)&v63[8 * i + 8] + v69;
          if ( (*(_BYTE *)(v70 + 4) & 1) != 0 || (*(_BYTE *)(v71 + 4) & 1) != 0 )
            v65 = (unsigned int)sub_182EB00(v85, v70, v71) >> 31;
          else
            LOBYTE(v65) = *(_DWORD *)v70 < *(_DWORD *)v71;
          v66 = 2 * (i + 1) - (unsigned __int8)v65;
          v67 = 4 * v66;
          v68 = &v63[4 * v66];
          *(_DWORD *)&v63[4 * i] = *(_DWORD *)v68;
          if ( (((v92 - v63) >> 2) - 1) / 2 <= v66 )
            break;
        }
        if ( !v95 && v66 == (((v92 - v63) >> 2) - 2) >> 1 )
          goto LABEL_98;
        v72 = (v66 - 1) / 2;
        if ( v66 )
          goto LABEL_92;
        *(_DWORD *)v68 = v91;
      }
      v40 = v63;
      if ( !v95 && (unsigned __int64)(((v92 - v63) >> 2) - 1) <= 2 )
      {
        v68 = v63;
        v66 = 0;
LABEL_98:
        v79 = 2 * v66 + 2;
        v67 = 4 * v79 - 4;
        *(_DWORD *)v68 = *(_DWORD *)&v63[4 * v79 - 4];
        v72 = (v79 >> 1) - 1;
LABEL_92:
        while ( 1 )
        {
          v75 = &v63[4 * v72];
          v76 = *(_QWORD *)(a4 + 704);
          v77 = v76 + 16LL * v91;
          v78 = 16LL * *(unsigned int *)v75 + v76;
          if ( (*(_BYTE *)(v77 + 4) & 1) != 0 || (*(_BYTE *)(v78 + 4) & 1) != 0 )
            v73 = (unsigned int)sub_182EB00(v85, v77, v78) >> 31;
          else
            LOBYTE(v73) = *(_DWORD *)v77 < *(_DWORD *)v78;
          v40 = &v63[v67];
          if ( !(_BYTE)v73 )
            break;
          *(_DWORD *)v40 = *(_DWORD *)v75;
          v74 = v72;
          if ( !v72 )
          {
            v40 = v63;
            break;
          }
          v72 = (v72 - 1) / 2;
          v67 = 4 * v74;
        }
      }
      *(_DWORD *)v40 = v91;
    }
    while ( v92 - v63 > 4 );
  }
}

