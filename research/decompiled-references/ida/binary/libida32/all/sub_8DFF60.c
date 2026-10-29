signed __int64 __fastcall sub_8DFF60(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _WORD *a5,
        int a6)
{
  char v6; // r10
  _WORD *v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rbp
  unsigned __int8 *v12; // rbx
  char *v13; // rsi
  int v14; // edi
  int v15; // eax
  __int64 v16; // rdi
  char *v17; // rsi
  int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rax
  char *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  _QWORD *v25; // r15
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rsi
  char *v30; // rsi
  __int64 v31; // r10
  int v32; // r14d
  char *v33; // r11
  __int64 v34; // rsi
  unsigned __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // rsi
  _QWORD *v38; // r10
  char *v40; // rsi
  int v41; // edi
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  char *v45; // rsi
  int v46; // edi
  int v47; // edx
  __int64 v48; // rcx
  char *v49; // r8
  __int64 v50; // rsi
  __int64 v51; // r9
  char *v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r8
  char *v55; // r11
  __int64 v56; // r10
  unsigned __int64 v57; // rdi
  int v58; // r14d
  unsigned __int64 v59; // rdx
  char *v60; // r10
  __int64 v61; // r9
  unsigned __int64 v62; // rsi
  unsigned int v63; // ecx
  char *v64; // r8
  char v65; // cl
  unsigned int v66; // edx
  __int64 v67; // rdi
  unsigned int v68; // r9d
  unsigned __int64 v69; // r8
  _QWORD *v70; // rax
  int v71; // edx
  char v72; // cl
  unsigned int v73; // edx
  __int64 v74; // rsi
  unsigned int v75; // ecx
  unsigned __int64 v76; // rsi
  _QWORD *v77; // rax
  int v78; // edx
  char *v79; // rax
  unsigned __int64 v80; // [rsp+0h] [rbp-60h]
  int v81; // [rsp+8h] [rbp-58h]
  unsigned __int64 v83; // [rsp+18h] [rbp-48h]
  unsigned int v86; // [rsp+2Ch] [rbp-34h]

  if ( a4 <= 2 )
    return 0;
  v83 = (unsigned __int64)a1 + a2 - 8;
  if ( a2 <= 8 )
    return 0;
  v6 = a4;
  v7 = a5 + 2;
  v8 = 8;
  v9 = a3 + a4;
  v86 = (unsigned __int16)*a5;
  v10 = *(unsigned __int8 *)(a3 + a4 - 1);
  v80 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( *a5 )
      v8 = 4LL * (1 << (v86 - 1)) + 4;
    v11 = (char *)a5 + v8;
    v12 = (unsigned __int8 *)(v9 - 2);
    v25 = a1;
    v40 = &v11[8 * v10];
    v41 = *((_DWORD *)v40 + 1);
    HIWORD(v42) = (unsigned int)(v41 + 0x8000) >> 16;
    LOWORD(v42) = 0;
    v43 = (__int64)(unsigned int)(v42 - v41) >> SBYTE2(v42);
    v44 = *(int *)v40;
    v45 = &v11[8 * *(unsigned __int8 *)(v9 - 2)];
    v46 = *((_DWORD *)v45 + 1);
    v22 = (unsigned __int16)v7[v44 + v43];
    HIWORD(v47) = (unsigned int)(v46 + 0x8000) >> 16;
    LOWORD(v47) = 0;
    v26 = (unsigned __int16)v7[*(int *)v45 + ((__int64)(unsigned int)(v47 - v46) >> SBYTE2(v47))];
    v27 = 0;
LABEL_14:
    v29 = v26;
    v28 = v22;
    if ( (v6 & 2) != 0 )
      goto LABEL_15;
    goto LABEL_8;
  }
  if ( *a5 )
    v8 = 4LL * (1 << (*a5 - 1)) + 4;
  v11 = (char *)a5 + v8;
  v12 = (unsigned __int8 *)(v9 - 3);
  v13 = &v11[8 * v10];
  v14 = *((_DWORD *)v13 + 1);
  HIWORD(v15) = (unsigned int)(v14 + 0x8000) >> 16;
  LOWORD(v15) = 0;
  v16 = (unsigned __int16)v7[*(int *)v13 + ((__int64)(unsigned int)(v15 - v14) >> SBYTE2(v15))];
  v17 = &v11[8 * *(unsigned __int8 *)(v9 - 2)];
  v18 = *((_DWORD *)v17 + 1);
  HIWORD(v15) = (unsigned int)(v18 + 0x8000) >> 16;
  v19 = (unsigned int)(v18 + 0x8000) >> 16;
  LOWORD(v15) = 0;
  v20 = (unsigned int)(v15 - v18);
  v21 = &v11[8 * *(unsigned __int8 *)(v9 - 3)];
  v22 = (unsigned __int16)v7[*(int *)v17 + (v20 >> v19)];
  v23 = (v16 + *((unsigned int *)v21 + 1)) >> 16;
  v24 = (unsigned int)v16 & dword_23B2600[v23];
  v25 = (unsigned __int64 *)((char *)a1 + ((unsigned int)v23 >> 3));
  v26 = (unsigned __int16)v7[*(int *)v21 + (v16 >> v23)];
  v27 = v23 & 7;
  v80 = v24 >> (8 * (unsigned __int8)((unsigned int)v23 >> 3));
  if ( !a6 )
  {
    *a1 = v24;
    if ( (unsigned __int64)v25 > v83 )
      v25 = (_QWORD *)v83;
    goto LABEL_14;
  }
  *a1 = v24;
  v28 = v22;
  v29 = v26;
  if ( (v6 & 2) != 0 )
    goto LABEL_15;
LABEL_8:
  v30 = &v11[8 * *(v12 - 1)];
  v31 = (v22 + *((unsigned int *)v30 + 1)) >> 16;
  v32 = v27 + v31;
  v22 = (unsigned __int16)v7[*(int *)v30 + (v22 >> ((unsigned int)(v22 + *((_DWORD *)v30 + 1)) >> 16))];
  v33 = &v11[8 * *(v12 - 2)];
  v34 = (v26 + *((unsigned int *)v33 + 1)) >> 16;
  v35 = v80
      | ((unsigned __int64)(dword_23B2600[v31] & (unsigned int)v28) << v27)
      | ((unsigned __int64)((unsigned int)v26 & dword_23B2600[v34]) << ((unsigned __int8)v27 + (unsigned __int8)v31));
  v28 = v22;
  v27 = (v27 + v31 + v34) & 7;
  v26 = (unsigned __int16)v7[*(int *)v33 + (v26 >> ((unsigned int)(v26 + *((_DWORD *)v33 + 1)) >> 16))];
  *v25 = v35;
  v36 = (unsigned int)(v32 + v34) >> 3;
  v37 = v35 >> (8 * (unsigned __int8)v36);
  v38 = (_QWORD *)((char *)v25 + v36);
  v80 = v37;
  v29 = v26;
  if ( a6 )
  {
    v25 = v38;
    v12 -= 2;
  }
  else
  {
    v25 = v38;
    if ( v83 <= (unsigned __int64)v38 )
      v25 = (_QWORD *)v83;
    v12 -= 2;
  }
LABEL_15:
  if ( a3 < (unsigned __int64)v12 )
  {
    do
    {
      while ( 1 )
      {
        v48 = *(v12 - 1);
        v12 -= 4;
        v49 = &v11[8 * v48];
        v50 = (v22 + *((unsigned int *)v49 + 1)) >> 16;
        v51 = (unsigned __int16)v7[*(int *)v49 + (v22 >> ((unsigned int)(v22 + *((_DWORD *)v49 + 1)) >> 16))];
        v52 = &v11[8 * v12[2]];
        v53 = (v26 + *((unsigned int *)v52 + 1)) >> 16;
        v81 = v27 + v50 + v53;
        v54 = (unsigned __int16)v7[*(int *)v52 + (v26 >> ((unsigned int)(v26 + *((_DWORD *)v52 + 1)) >> 16))];
        v55 = &v11[8 * v12[1]];
        v56 = (v51 + *((unsigned int *)v55 + 1)) >> 16;
        v57 = ((unsigned __int64)(dword_23B2600[(unsigned int)v50] & (unsigned int)v22) << v27)
            | ((unsigned __int64)(dword_23B2600[(unsigned int)v53] & (unsigned int)v26) << ((unsigned __int8)v27
                                                                                          + (unsigned __int8)v50));
        v58 = v81 + v56;
        v59 = (unsigned __int64)((unsigned int)v51 & dword_23B2600[v56]) << v81;
        LOBYTE(v53) = v81 + ((unsigned int)(v51 + *((_DWORD *)v55 + 1)) >> 16);
        v60 = &v11[8 * *v12];
        v22 = (unsigned __int16)v7[*(int *)v55 + (v51 >> ((unsigned int)(v51 + *((_DWORD *)v55 + 1)) >> 16))];
        v61 = (v54 + *((unsigned int *)v60 + 1)) >> 16;
        v62 = ((unsigned __int64)((unsigned int)v54 & dword_23B2600[v61]) << v53) | v59 | v57 | v80;
        v27 = (v58 + v61) & 7;
        v63 = (unsigned int)(v58 + v61) >> 3;
        v26 = (unsigned __int16)v7[*(int *)v60 + (v54 >> ((unsigned int)(v54 + *((_DWORD *)v60 + 1)) >> 16))];
        *v25 = v62;
        v64 = (char *)v25 + v63;
        v80 = v62 >> (8 * (unsigned __int8)v63);
        if ( !a6 )
          break;
        v25 = (_QWORD *)((char *)v25 + v63);
        if ( a3 >= (unsigned __int64)v12 )
          goto LABEL_22;
      }
      v25 = (_QWORD *)((char *)v25 + v63);
      if ( v83 <= (unsigned __int64)v64 )
        v25 = (_QWORD *)v83;
    }
    while ( a3 < (unsigned __int64)v12 );
LABEL_22:
    v29 = v26;
    v28 = v22;
  }
  v65 = v27;
  v66 = v86 + v27;
  v67 = dword_23B2600[v86];
  v68 = v66 >> 3;
  v69 = v80 | ((v67 & v28) << v65);
  v70 = (_QWORD *)((char *)v25 + (v66 >> 3));
  *v25 = v69;
  if ( v83 <= (unsigned __int64)v70 )
    v70 = (_QWORD *)v83;
  v71 = v66 & 7;
  v72 = v71;
  v73 = v86 + v71;
  v74 = (v67 & v29) << v72;
  v75 = v73 >> 3;
  v76 = (v69 >> (8 * (unsigned __int8)v68)) | v74;
  *v70 = v76;
  v77 = (_QWORD *)((char *)v70 + (v73 >> 3));
  if ( v83 <= (unsigned __int64)v77 )
    v77 = (_QWORD *)v83;
  v78 = v73 & 7;
  *v77 = (v76 >> (8 * (unsigned __int8)v75)) | (1LL << v78);
  v79 = (char *)v77 + ((unsigned int)(v78 + 1) >> 3);
  if ( v83 <= (unsigned __int64)v79 )
    return 0;
  return ((((_BYTE)v78 + 1) & 7) != 0) + v79 - (char *)a1;
}

