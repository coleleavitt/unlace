void __fastcall sub_A55FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int8 v11; // dl
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // r15
  __int64 *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // r15
  unsigned __int64 *v37; // r13
  unsigned __int64 v38; // r14
  unsigned __int64 *v39; // rax
  __int64 *v40; // r15
  __int64 v41; // rax
  __int64 *v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 *v45; // rbx
  __int64 v46; // rsi
  char *v47; // rax
  char *v48; // rdx
  _QWORD *v49; // rcx
  __int64 v50; // rsi
  __int64 *v51; // r14
  char *v52; // rcx
  __int64 v53; // rsi
  char *v54; // rcx
  __int64 v55; // rsi
  __int64 *v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 *v61; // rbx
  __int64 v62; // rsi
  _QWORD *v63; // rax
  char *v64; // rdx
  _QWORD *v65; // rax
  char *v66; // rdx
  __int64 v67; // rax
  unsigned __int64 *v68; // rax
  __int64 v69; // [rsp+8h] [rbp-170h]
  __int64 v70; // [rsp+10h] [rbp-168h]
  void *v71; // [rsp+20h] [rbp-158h] BYREF
  __int64 v72; // [rsp+28h] [rbp-150h]
  int v73; // [rsp+30h] [rbp-148h]
  char v74; // [rsp+34h] [rbp-144h]
  __int64 v75; // [rsp+38h] [rbp-140h] BYREF
  void *ptr; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+88h] [rbp-F0h]
  int v78; // [rsp+90h] [rbp-E8h]
  char v79; // [rsp+94h] [rbp-E4h]
  __int64 v80; // [rsp+98h] [rbp-E0h] BYREF
  void *v81; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v82; // [rsp+E8h] [rbp-90h]
  int v83; // [rsp+F0h] [rbp-88h]
  char v84; // [rsp+F4h] [rbp-84h]
  __int64 v85; // [rsp+F8h] [rbp-80h] BYREF

  v69 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35 > 1 )
    v9 = sub_F3F310(v9, a2, a3, a4);
  v10 = *(_QWORD *)(*(_QWORD *)(a4 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v70 = v10;
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 35 > 1 )
    v70 = sub_F3F310(v10, a2, a3, a4);
  v74 = 1;
  v73 = 0;
  v11 = *(_BYTE *)(v9 + 19);
  v71 = &v75;
  v12 = *(_WORD *)(v9 + 18);
  v72 = 8;
  v13 = v11 >> 2;
  v14 = (v12 & 0x3F8) + 48LL;
  v15 = (__int64 *)(v9 + v14);
  v16 = (__int64 *)(v9 + v14 + 8 * v13);
  if ( v16 != (__int64 *)(v9 + v14) )
  {
    do
    {
      a2 = *v15++;
      sub_A55B80(a1, a2, (__int64)&v71, a4, a5, a6);
    }
    while ( v16 != v15 );
  }
  v17 = sub_9A4000(v9, a2, v13, a4, a5);
  sub_A55B80(a1, v17, (__int64)&v71, v18, v19, v20);
  v78 = 0;
  v79 = 1;
  v24 = *(unsigned __int8 *)(v70 + 19);
  ptr = &v80;
  v77 = 8;
  v25 = (*(_WORD *)(v70 + 18) & 0x3F8) + 48LL;
  v26 = (unsigned __int8)v24 >> 2;
  v27 = (__int64 *)(v70 + v25);
  v28 = (__int64 *)(v70 + v25 + 8 * v26);
  if ( v28 != (__int64 *)(v70 + v25) )
  {
    do
    {
      v24 = *v27++;
      sub_A55B80(a1, v24, (__int64)&ptr, v21, v22, v23);
    }
    while ( v28 != v27 );
  }
  v29 = sub_9A4000(v70, v24, v26, v21, v22);
  sub_A55B80(a1, v29, (__int64)&ptr, v30, v31, v32);
  v36 = v71;
  if ( v74 )
    v37 = (unsigned __int64 *)((char *)v71 + 8 * HIDWORD(v72));
  else
    v37 = (unsigned __int64 *)((char *)v71 + 8 * (unsigned int)v72);
  if ( v71 == v37 )
    goto LABEL_16;
  v38 = *(_QWORD *)v71;
  if ( *(_QWORD *)v71 < 0xFFFFFFFFFFFFFFFELL )
    goto LABEL_85;
  v39 = (unsigned __int64 *)((char *)v71 + 8);
  do
  {
    v36 = v39;
    if ( v37 == v39 )
      goto LABEL_16;
    v38 = *v39++;
  }
  while ( v38 >= 0xFFFFFFFFFFFFFFFELL );
  while ( 1 )
  {
LABEL_85:
    if ( v79 )
    {
      v65 = ptr;
      v66 = (char *)ptr + 8 * HIDWORD(v77);
      if ( ptr == v66 )
        goto LABEL_93;
      while ( *v65 != v38 )
      {
        if ( v66 == (char *)++v65 )
          goto LABEL_93;
      }
    }
    else if ( !sub_2212830(&ptr, v38) )
    {
      goto LABEL_93;
    }
    v67 = *(unsigned int *)(a5 + 8);
    v33 = *(unsigned int *)(a5 + 12);
    if ( v67 + 1 > v33 )
    {
      sub_22134E0(a5, a5 + 16, v67 + 1, 8);
      v67 = *(unsigned int *)(a5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a5 + 8 * v67) = v38;
    ++*(_DWORD *)(a5 + 8);
LABEL_93:
    if ( v36 + 1 == v37 )
      goto LABEL_16;
    v38 = v36[1];
    if ( v38 >= 0xFFFFFFFFFFFFFFFELL )
      break;
    ++v36;
  }
  v68 = v36 + 2;
  while ( 1 )
  {
    v36 = v68;
    if ( v68 == v37 )
      break;
    v38 = *v68++;
    if ( v38 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_85;
  }
LABEL_16:
  v82 = 8;
  v83 = 0;
  v81 = &v85;
  v84 = 1;
  sub_A55B80(a1, v69, (__int64)&v81, v33, v34, v35);
  if ( HIDWORD(v82) == v83 )
  {
    v56 = *(__int64 **)a5;
    v59 = *(unsigned int *)(a5 + 8);
  }
  else
  {
    v40 = *(__int64 **)a5;
    v41 = 8LL * *(unsigned int *)(a5 + 8);
    v42 = (__int64 *)(*(_QWORD *)a5 + v41);
    v43 = v41 >> 3;
    v44 = v41 >> 5;
    if ( v44 )
    {
      v45 = &v40[4 * v44];
      while ( 1 )
      {
        v46 = *v40;
        if ( v84 )
          break;
        if ( sub_2212830(&v81, v46) )
          goto LABEL_63;
        v51 = v40 + 1;
        v50 = v40[1];
        if ( v84 )
        {
          v47 = (char *)v81;
          v48 = (char *)v81 + 8 * HIDWORD(v82);
LABEL_26:
          if ( v47 != v48 )
          {
            if ( v50 == *(_QWORD *)v47 )
              goto LABEL_62;
            v52 = v47;
            while ( 1 )
            {
              v52 += 8;
              if ( v52 == v48 )
                break;
              if ( *(_QWORD *)v52 == v50 )
                goto LABEL_62;
            }
          }
          v53 = v40[2];
          v51 = v40 + 2;
          goto LABEL_32;
        }
        if ( sub_2212830(&v81, v50) )
          goto LABEL_62;
        v51 = v40 + 2;
        v53 = v40[2];
        if ( v84 )
        {
          v47 = (char *)v81;
          v48 = (char *)v81 + 8 * HIDWORD(v82);
LABEL_32:
          if ( v47 != v48 )
          {
            if ( v53 == *(_QWORD *)v47 )
              goto LABEL_62;
            v54 = v47;
            while ( 1 )
            {
              v54 += 8;
              if ( v54 == v48 )
                break;
              if ( v53 == *(_QWORD *)v54 )
                goto LABEL_62;
            }
          }
          v55 = v40[3];
          v51 = v40 + 3;
LABEL_38:
          if ( v47 != v48 )
          {
            if ( v55 == *(_QWORD *)v47 )
              goto LABEL_62;
            while ( 1 )
            {
              v47 += 8;
              if ( v47 == v48 )
                break;
              if ( *(_QWORD *)v47 == v55 )
                goto LABEL_62;
            }
          }
          goto LABEL_43;
        }
        if ( sub_2212830(&v81, v53) )
        {
LABEL_62:
          v40 = v51;
          goto LABEL_63;
        }
        v51 = v40 + 3;
        v55 = v40[3];
        if ( v84 )
        {
          v47 = (char *)v81;
          v48 = (char *)v81 + 8 * HIDWORD(v82);
          goto LABEL_38;
        }
        if ( sub_2212830(&v81, v55) )
          goto LABEL_62;
LABEL_43:
        v40 += 4;
        if ( v40 == v45 )
        {
          v43 = v42 - v40;
          goto LABEL_45;
        }
      }
      v47 = (char *)v81;
      v48 = (char *)v81 + 8 * HIDWORD(v82);
      if ( v81 != v48 )
      {
        if ( *(_QWORD *)v81 == v46 )
          goto LABEL_63;
        v49 = v81;
        while ( v48 != (char *)++v49 )
        {
          if ( v46 == *v49 )
            goto LABEL_63;
        }
      }
      v50 = v40[1];
      v51 = v40 + 1;
      goto LABEL_26;
    }
LABEL_45:
    if ( v43 != 2 )
    {
      if ( v43 != 3 )
      {
        if ( v43 != 1 )
          goto LABEL_48;
LABEL_108:
        if ( sub_A3B720((__int64)&v81, *v40) )
          goto LABEL_63;
LABEL_48:
        v40 = v42;
        goto LABEL_49;
      }
      if ( sub_A3B720((__int64)&v81, *v40) )
        goto LABEL_63;
      ++v40;
    }
    if ( !sub_A3B720((__int64)&v81, *v40) )
    {
      ++v40;
      goto LABEL_108;
    }
LABEL_63:
    if ( v42 != v40 )
    {
      v61 = v40 + 1;
      if ( v42 != v40 + 1 )
      {
        v62 = *v61;
        if ( !v84 )
          goto LABEL_72;
LABEL_66:
        v63 = v81;
        v64 = (char *)v81 + 8 * HIDWORD(v82);
        if ( v81 == v64 )
        {
LABEL_74:
          ++v61;
          *v40++ = v62;
          if ( v42 != v61 )
            goto LABEL_71;
        }
        else
        {
          while ( v62 != *v63 )
          {
            if ( v64 == (char *)++v63 )
              goto LABEL_74;
          }
          while ( v42 != ++v61 )
          {
LABEL_71:
            v62 = *v61;
            if ( v84 )
              goto LABEL_66;
LABEL_72:
            if ( !sub_2212830(&v81, v62) )
            {
              v62 = *v61;
              goto LABEL_74;
            }
          }
        }
      }
    }
LABEL_49:
    v56 = *(__int64 **)a5;
    v57 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8) - (_QWORD)v42;
    if ( v42 != (__int64 *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)) )
    {
      memmove(v40, v42, *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8) - (_QWORD)v42);
      v56 = *(__int64 **)a5;
    }
    v58 = ((char *)v40 + v57 - (char *)v56) >> 3;
    v59 = (unsigned int)v58;
    *(_DWORD *)(a5 + 8) = v58;
  }
  v60 = 8 * v59;
  if ( (unsigned __int64)v60 > 8 )
    qsort(v56, v60 >> 3, 8u, (__compar_fn_t)sub_A39A80);
  if ( !v84 )
    free(v81);
  if ( v79 )
  {
    if ( v74 )
      return;
LABEL_102:
    free(v71);
    return;
  }
  free(ptr);
  if ( !v74 )
    goto LABEL_102;
}

