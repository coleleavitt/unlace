void __fastcall sub_6C0E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int8 v10; // dl
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // r15
  __int64 v14; // rsi
  __int64 i; // rax
  __int64 v16; // rdi
  int v17; // edx
  __int64 v18; // rsi
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // r15
  __int64 *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rsi
  char *v29; // r8
  char *v30; // r14
  __int64 v31; // r13
  char *v32; // r14
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  char *v35; // r13
  char *v36; // rbp
  __int64 v37; // rsi
  char *v38; // rdx
  __int64 v39; // rdi
  char *v40; // rcx
  char *v41; // rax
  char *v42; // r15
  char *v43; // rbp
  __int64 v44; // rsi
  _QWORD *v45; // rax
  char *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rdx
  _QWORD *v50; // rax
  char *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  char *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  signed __int64 v58; // rax
  char v59; // al
  __int64 v60; // rsi
  _QWORD *v61; // rdx
  __int64 v62; // rdi
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  __int64 v65; // rsi
  char *v66; // rcx
  char *v67; // rax
  __int64 v68; // rsi
  char *v69; // rcx
  char *v70; // rax
  __int64 v71; // rsi
  char *v72; // rax
  char *v73; // rdx
  __int64 v74; // rsi
  char *v75; // rcx
  _QWORD *v76; // rax
  char v77; // al
  __int64 v78; // rsi
  _QWORD *v79; // rcx
  _QWORD *v80; // rax
  __int64 *v81; // [rsp+0h] [rbp-168h]
  char *v82; // [rsp+0h] [rbp-168h]
  char *v83; // [rsp+0h] [rbp-168h]
  void *ptr; // [rsp+10h] [rbp-158h] BYREF
  __int64 v86; // [rsp+18h] [rbp-150h]
  int v87; // [rsp+20h] [rbp-148h]
  char v88; // [rsp+24h] [rbp-144h]
  char v89; // [rsp+28h] [rbp-140h] BYREF
  void *v90; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v91; // [rsp+78h] [rbp-F0h]
  int v92; // [rsp+80h] [rbp-E8h]
  char v93; // [rsp+84h] [rbp-E4h]
  char v94; // [rsp+88h] [rbp-E0h] BYREF
  void *v95; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-90h]
  int v97; // [rsp+E0h] [rbp-88h]
  char v98; // [rsp+E4h] [rbp-84h]
  char v99; // [rsp+E8h] [rbp-80h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 34 > 1 )
    v8 = sub_B0D320(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 > 1 )
    v9 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL));
  v88 = 1;
  ptr = &v89;
  v87 = 0;
  v10 = *(_BYTE *)(v8 + 19);
  v86 = 8;
  v11 = (*(_WORD *)(v8 + 18) & 0x3F8) + 48LL;
  v12 = 8LL * (v10 >> 2);
  v13 = (__int64 *)(v8 + v11);
  v81 = (__int64 *)(v8 + v12 + v11);
  if ( v12 )
  {
    do
    {
      v14 = *v13++;
      sub_6C0780(a1, v14, (__int64)&ptr);
    }
    while ( v81 != v13 );
  }
  for ( i = *(_QWORD *)(v8 + 24); ; i = *(_QWORD *)(v16 + 24) )
  {
    v16 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(v16 + 16);
    if ( (unsigned int)(v17 - 34) <= 1 )
    {
      if ( (_BYTE)v17 == 35 )
        goto LABEL_10;
      continue;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      break;
    v57 = sub_B0D320(v16);
    v16 = v57;
    if ( !v57 )
      break;
    if ( *(_BYTE *)(v57 + 16) == 35 )
    {
LABEL_10:
      v18 = sub_B07AF0(v16);
      goto LABEL_11;
    }
  }
  v18 = 0;
LABEL_11:
  sub_6C0780(a1, v18, (__int64)&ptr);
  v92 = 0;
  v90 = &v94;
  v93 = 1;
  v19 = *(_BYTE *)(v9 + 19);
  v91 = 8;
  v20 = (*(_WORD *)(v9 + 18) & 0x3F8) + 48LL;
  v21 = 8LL * (v19 >> 2);
  v22 = (__int64 *)(v9 + v20 + v21);
  v23 = (__int64 *)(v9 + v20);
  if ( v21 )
  {
    do
    {
      v24 = *v23++;
      sub_6C0780(a1, v24, (__int64)&v90);
    }
    while ( v22 != v23 );
  }
  v25 = *(_QWORD *)(v9 + 24);
  while ( 2 )
  {
    v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
    v27 = *(unsigned __int8 *)(v26 + 16);
    if ( (unsigned int)(v27 - 34) <= 1 )
    {
      if ( (_BYTE)v27 == 35 )
        goto LABEL_16;
LABEL_70:
      v25 = *(_QWORD *)(v26 + 24);
      continue;
    }
    break;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 <= 1 )
  {
    v56 = sub_B0D320(v26);
    v26 = v56;
    if ( v56 )
    {
      if ( *(_BYTE *)(v56 + 16) == 35 )
      {
LABEL_16:
        v28 = sub_B07AF0(v26);
        goto LABEL_17;
      }
      goto LABEL_70;
    }
  }
  v28 = 0;
LABEL_17:
  sub_6C0780(a1, v28, (__int64)&v90);
  v29 = (char *)ptr;
  if ( v88 )
    v30 = (char *)ptr + 8 * HIDWORD(v86);
  else
    v30 = (char *)ptr + 8 * (unsigned int)v86;
  if ( ptr != v30 )
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 < 0xFFFFFFFFFFFFFFFELL )
        break;
      v29 += 8;
      if ( v30 == v29 )
        goto LABEL_22;
    }
    if ( v29 != v30 )
    {
      if ( !v93 )
        goto LABEL_64;
LABEL_52:
      v50 = v90;
      v51 = (char *)v90 + 8 * HIDWORD(v91);
      if ( v90 == v51 )
      {
        do
        {
LABEL_58:
          v54 = v29 + 8;
          if ( v29 + 8 == v30 )
            goto LABEL_22;
          v31 = *(_QWORD *)v54;
          for ( v29 += 8; *(_QWORD *)v54 >= 0xFFFFFFFFFFFFFFFELL; v29 = v54 )
          {
            v54 += 8;
            if ( v30 == v54 )
              goto LABEL_22;
            v31 = *(_QWORD *)v54;
          }
          if ( v30 == v54 )
            goto LABEL_22;
          if ( v93 )
            goto LABEL_52;
LABEL_64:
          v82 = v29;
          v55 = sub_25D5370(&v90, v31);
          v29 = v82;
        }
        while ( !v55 );
        v52 = *(unsigned int *)(a5 + 8);
        v53 = v52 + 1;
        if ( *(unsigned int *)(a5 + 12) >= (unsigned __int64)(v52 + 1) )
          goto LABEL_57;
      }
      else
      {
        while ( *v50 != v31 )
        {
          if ( v51 == (char *)++v50 )
            goto LABEL_58;
        }
        v52 = *(unsigned int *)(a5 + 8);
        v53 = v52 + 1;
        if ( *(unsigned int *)(a5 + 12) >= (unsigned __int64)(v52 + 1) )
        {
LABEL_57:
          *(_QWORD *)(*(_QWORD *)a5 + 8 * v52) = v31;
          ++*(_DWORD *)(a5 + 8);
          goto LABEL_58;
        }
      }
      v83 = v29;
      sub_25D6060(a5, a5 + 16, v53, 8);
      v52 = *(unsigned int *)(a5 + 8);
      v29 = v83;
      goto LABEL_57;
    }
  }
LABEL_22:
  v95 = &v99;
  v97 = 0;
  v96 = 8;
  v98 = 1;
  sub_6C0780(a1, a2, (__int64)&v95);
  v32 = *(char **)a5;
  v33 = *(unsigned int *)(a5 + 8);
  if ( HIDWORD(v96) == v97 )
    goto LABEL_42;
  v34 = 8 * v33;
  v35 = &v32[v34];
  if ( !(v34 >> 5) )
  {
    if ( v34 != 16 )
    {
      if ( v34 != 24 )
      {
        if ( v34 != 8 )
        {
          *(_DWORD *)(a5 + 8) = 0;
          goto LABEL_44;
        }
LABEL_83:
        v59 = v98;
        goto LABEL_84;
      }
      goto LABEL_119;
    }
LABEL_134:
    v77 = v98;
LABEL_135:
    v78 = *(_QWORD *)v32;
    if ( v77 )
    {
      v61 = v95;
      v62 = HIDWORD(v96);
LABEL_137:
      v79 = &v61[v62];
      v80 = v61;
      if ( v61 != v79 )
      {
        while ( *v80 != v78 )
        {
          if ( v79 == ++v80 )
            goto LABEL_142;
        }
        goto LABEL_30;
      }
LABEL_142:
      v60 = *((_QWORD *)v32 + 1);
      v32 += 8;
      goto LABEL_86;
    }
    if ( sub_25D5370(&v95, v78) )
      goto LABEL_30;
    v59 = v98;
    v32 += 8;
LABEL_84:
    v60 = *(_QWORD *)v32;
    if ( !v59 )
    {
      if ( !sub_25D5370(&v95, v60) )
        goto LABEL_133;
      goto LABEL_30;
    }
    v61 = v95;
    v62 = HIDWORD(v96);
LABEL_86:
    v63 = v61;
    v64 = &v61[v62];
    if ( v63 == v64 )
      goto LABEL_133;
    while ( v60 != *v63 )
    {
      if ( v64 == ++v63 )
        goto LABEL_133;
    }
LABEL_30:
    v42 = v32;
LABEL_31:
    if ( v35 == v42 )
      goto LABEL_39;
    v43 = v42 + 8;
    if ( v35 == v42 + 8 )
      goto LABEL_39;
    while ( 1 )
    {
      v44 = *(_QWORD *)v43;
      if ( v98 )
      {
        v45 = v95;
        v46 = (char *)v95 + 8 * HIDWORD(v96);
        if ( v95 == v46 )
          goto LABEL_93;
        while ( v44 != *v45 )
        {
          if ( v46 == (char *)++v45 )
            goto LABEL_93;
        }
LABEL_38:
        v43 += 8;
        if ( v35 == v43 )
          goto LABEL_39;
      }
      else
      {
        if ( sub_25D5370(&v95, v44) )
          goto LABEL_38;
        v44 = *(_QWORD *)v43;
LABEL_93:
        v43 += 8;
        *(_QWORD *)v42 = v44;
        v42 += 8;
        if ( v35 == v43 )
          goto LABEL_39;
      }
    }
  }
  v36 = &v32[32 * (v34 >> 5)];
  do
  {
    while ( 1 )
    {
      v37 = *(_QWORD *)v32;
      if ( v98 )
      {
        v38 = (char *)v95;
        v39 = HIDWORD(v96);
        v40 = (char *)v95 + 8 * HIDWORD(v96);
        v41 = (char *)v95;
        if ( v95 == v40 )
          goto LABEL_79;
        do
        {
          if ( v37 == *(_QWORD *)v41 )
            goto LABEL_30;
          v41 += 8;
        }
        while ( v40 != v41 );
        v65 = *((_QWORD *)v32 + 1);
        v42 = v32 + 8;
        goto LABEL_98;
      }
      if ( sub_25D5370(&v95, v37) )
        goto LABEL_30;
      v65 = *((_QWORD *)v32 + 1);
      v42 = v32 + 8;
      if ( !v98 )
        break;
      v38 = (char *)v95;
      v39 = HIDWORD(v96);
LABEL_98:
      v66 = &v38[8 * v39];
      v67 = v38;
      if ( v38 == v66 )
        goto LABEL_79;
      do
      {
        if ( *(_QWORD *)v67 == v65 )
          goto LABEL_31;
        v67 += 8;
      }
      while ( v67 != v66 );
      v68 = *((_QWORD *)v32 + 2);
      v42 = v32 + 16;
LABEL_102:
      v69 = &v38[8 * v39];
      v70 = v38;
      if ( v38 != v69 )
      {
        do
        {
          if ( *(_QWORD *)v70 == v68 )
            goto LABEL_31;
          v70 += 8;
        }
        while ( v70 != v69 );
        v71 = *((_QWORD *)v32 + 3);
        v42 = v32 + 24;
        goto LABEL_106;
      }
LABEL_79:
      v32 += 32;
      if ( v32 == v36 )
        goto LABEL_80;
    }
    if ( sub_25D5370(&v95, v65) )
      goto LABEL_31;
    v68 = *((_QWORD *)v32 + 2);
    v42 = v32 + 16;
    if ( v98 )
    {
      v38 = (char *)v95;
      v39 = HIDWORD(v96);
      goto LABEL_102;
    }
    if ( sub_25D5370(&v95, v68) )
      goto LABEL_31;
    v71 = *((_QWORD *)v32 + 3);
    v42 = v32 + 24;
    if ( !v98 )
    {
      if ( sub_25D5370(&v95, v71) )
        goto LABEL_31;
      goto LABEL_79;
    }
    v38 = (char *)v95;
    v39 = HIDWORD(v96);
LABEL_106:
    v72 = v38;
    v73 = &v38[8 * v39];
    if ( v72 == v73 )
      goto LABEL_79;
    do
    {
      if ( *(_QWORD *)v72 == v71 )
        goto LABEL_31;
      v72 += 8;
    }
    while ( v72 != v73 );
    v32 += 32;
  }
  while ( v32 != v36 );
LABEL_80:
  v58 = v35 - v32;
  if ( v35 - v32 == 16 )
    goto LABEL_134;
  if ( v58 == 24 )
  {
LABEL_119:
    v74 = *(_QWORD *)v32;
    if ( v98 )
    {
      v61 = v95;
      v62 = HIDWORD(v96);
      v75 = (char *)v95 + 8 * HIDWORD(v96);
      v76 = v95;
      if ( v95 != v75 )
      {
        while ( v74 != *v76 )
        {
          if ( v75 == (char *)++v76 )
            goto LABEL_145;
        }
        goto LABEL_30;
      }
LABEL_145:
      v78 = *((_QWORD *)v32 + 1);
      v32 += 8;
      goto LABEL_137;
    }
    if ( sub_25D5370(&v95, v74) )
      goto LABEL_30;
    v77 = v98;
    v32 += 8;
    goto LABEL_135;
  }
  if ( v58 == 8 )
    goto LABEL_83;
LABEL_133:
  v42 = v35;
LABEL_39:
  v32 = *(char **)a5;
  v47 = *(unsigned int *)(a5 + 8);
  v48 = *(_QWORD *)a5 + 8 * v47 - (_QWORD)v35;
  if ( v48 <= 8 )
  {
    if ( v48 == 8 )
    {
      *(_QWORD *)v42 = *(_QWORD *)v35;
      v32 = *(char **)a5;
    }
    LODWORD(v49) = (&v42[v48] - v32) >> 3;
  }
  else
  {
    memmove(v42, v35, *(_QWORD *)a5 + 8 * v47 - (_QWORD)v35);
    v32 = *(char **)a5;
    v49 = (__int64)&v42[v48 - *(_QWORD *)a5] >> 3;
  }
  *(_DWORD *)(a5 + 8) = v49;
  v33 = (unsigned int)v49;
LABEL_42:
  if ( v33 > 1 )
    qsort(v32, (__int64)(8 * v33) >> 3, 8u, (__compar_fn_t)sub_6A7BA0);
LABEL_44:
  if ( !v98 )
    free(v95);
  if ( !v93 )
    free(v90);
  if ( !v88 )
    free(ptr);
}

