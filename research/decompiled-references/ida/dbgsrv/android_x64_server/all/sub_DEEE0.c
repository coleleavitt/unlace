/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DEEE0
// Address: 0x00000000000DEEE0

//----- (00000000000DEEE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_DEEE0(__int64 a1, __int64 a2)
{
  __int64 *v4; // r13
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  size_t v7; // rcx
  char *v8; // rax
  size_t v9; // rsi
  _BYTE *v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  size_t v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  size_t v17; // rcx
  char *v18; // rax
  size_t v19; // rsi
  const void *v20; // rbx
  __int64 v21; // rdi
  size_t v22; // r15
  size_t v23; // rsi
  char *v24; // rax
  size_t v25; // rsi
  const void *v26; // rbx
  __int64 v27; // rdi
  size_t v28; // r15
  size_t v29; // rsi
  char *v30; // rax
  size_t v31; // rsi
  size_t v32; // r15
  size_t v33; // rcx
  unsigned __int64 v34; // rsi
  char *v35; // rax
  size_t v36; // rsi
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  char *v39; // rax
  size_t v40; // rsi
  __int64 v41; // rdi
  const void *v42; // r15
  size_t v43; // rbx
  size_t v44; // rsi
  char *v45; // rax
  size_t v46; // rsi
  __int64 v47; // rbx
  size_t v48; // rcx
  unsigned __int64 v49; // rsi
  char *v50; // rax
  size_t v51; // rsi
  __int64 v52; // rdx
  unsigned __int64 v53; // rsi
  size_t v54; // rcx
  char *v55; // rax
  size_t v56; // rsi
  size_t v58; // rsi
  size_t v59; // r15
  unsigned __int64 v60; // rsi
  char *v61; // rax
  size_t v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rdx
  size_t v65; // rcx
  size_t v66; // rsi
  char *v67; // rax
  size_t v68; // rsi
  const void *v69; // rbx
  __int64 v70; // rdi
  size_t v71; // r15
  size_t v72; // rsi
  char *v73; // rax
  size_t v74; // rsi
  size_t v75; // r15
  size_t v76; // rcx
  unsigned __int64 v77; // rsi
  char *v78; // rax
  size_t v79; // rsi
  _BYTE *v80; // rbx
  char **v81[8]; // [rsp+8h] [rbp-40h] BYREF

  v81[2] = (char **)__readfsqword(0x28u);
  v81[0] = (char **)a2;
  v81[1] = (char **)a1;
  v4 = (__int64 *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v5 + 1;
  if ( v5 + 1 >= v6 )
  {
    v9 = 2 * v6;
    if ( v9 < v7 )
      v9 = v5 + 1;
    *(_QWORD *)(a2 + 16) = v9;
    v8 = (char *)realloc(*(void **)a2, v9);
    *(_QWORD *)a2 = v8;
    v5 = *(_QWORD *)(a2 + 8);
    v7 = v5 + 1;
  }
  else
  {
    v8 = *(char **)a2;
  }
  *v4 = v7;
  v8[v5] = 40;
  if ( *(_BYTE *)(a1 + 48) )
  {
    v10 = *(_BYTE **)(a1 + 24);
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 24LL))(*(_QWORD *)(a1 + 24), a2);
      if ( v10[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2);
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
      v13 = v11 + 1;
      if ( v11 + 1 >= v12 )
      {
        v19 = 2 * v12;
        if ( v19 < v13 )
          v19 = v11 + 1;
        *(_QWORD *)(a2 + 16) = v19;
        v14 = (char *)realloc(*(void **)a2, v19);
        *(_QWORD *)a2 = v14;
        v11 = *(_QWORD *)(a2 + 8);
        v13 = v11 + 1;
      }
      else
      {
        v14 = *(char **)a2;
      }
      *v4 = v13;
      v14[v11] = 32;
      v20 = *(const void **)(a1 + 32);
      v21 = *v4;
      v22 = *(_QWORD *)(a1 + 40) - (_QWORD)v20;
      if ( v22 )
      {
        v23 = *(_QWORD *)(a2 + 16);
        if ( v21 + v22 >= v23 )
        {
          v31 = 2 * v23;
          if ( v31 < v21 + v22 )
            v31 = v21 + v22;
          *(_QWORD *)(a2 + 16) = v31;
          v24 = (char *)realloc(*(void **)a2, v31);
          *(_QWORD *)a2 = v24;
          v21 = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v24 = *(char **)a2;
        }
        memmove(&v24[v21], v20, v22);
        v32 = *v4 + v22;
        *v4 = v32;
        v21 = v32;
      }
      v33 = v21 + 1;
      v34 = *(_QWORD *)(a2 + 16);
      if ( v21 + 1 >= v34 )
      {
        v36 = 2 * v34;
        if ( v36 < v33 )
          v36 = v21 + 1;
        *(_QWORD *)(a2 + 16) = v36;
        v35 = (char *)realloc(*(void **)a2, v36);
        *(_QWORD *)a2 = v35;
        v21 = *(_QWORD *)(a2 + 8);
        v33 = v21 + 1;
      }
      else
      {
        v35 = *(char **)a2;
      }
      *v4 = v33;
      v35[v21] = 32;
    }
    v37 = *(_QWORD *)(a2 + 8);
    v38 = *(_QWORD *)(a2 + 16);
    if ( v37 + 4 >= v38 )
    {
      v40 = 2 * v38;
      if ( v40 < v37 + 4 )
        v40 = v37 + 4;
      *(_QWORD *)(a2 + 16) = v40;
      v39 = (char *)realloc(*(void **)a2, v40);
      *(_QWORD *)a2 = v39;
      v37 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v39 = *(char **)a2;
    }
    *(_DWORD *)&v39[v37] = 539897390;
    v41 = *v4 + 4;
    *v4 = v41;
    v42 = *(const void **)(a1 + 32);
    v43 = *(_QWORD *)(a1 + 40) - (_QWORD)v42;
    if ( v43 )
    {
      v44 = *(_QWORD *)(a2 + 16);
      if ( v41 + v43 >= v44 )
      {
        v46 = 2 * v44;
        if ( v46 < v41 + v43 )
          v46 = v41 + v43;
        *(_QWORD *)(a2 + 16) = v46;
        v45 = (char *)realloc(*(void **)a2, v46);
        *(_QWORD *)a2 = v45;
        v41 = *(_QWORD *)(a2 + 8);
      }
      else
      {
        v45 = *(char **)a2;
      }
      memmove(&v45[v41], v42, v43);
      v47 = *v4 + v43;
      *v4 = v47;
      v41 = v47;
    }
    v48 = v41 + 1;
    v49 = *(_QWORD *)(a2 + 16);
    if ( v41 + 1 >= v49 )
    {
      v51 = 2 * v49;
      if ( v51 < v48 )
        v51 = v41 + 1;
      *(_QWORD *)(a2 + 16) = v51;
      v50 = (char *)realloc(*(void **)a2, v51);
      *(_QWORD *)a2 = v50;
      v41 = *(_QWORD *)(a2 + 8);
      v48 = v41 + 1;
    }
    else
    {
      v50 = *(char **)a2;
    }
    *v4 = v48;
    v50[v41] = 32;
    sub_DF400(v81);
  }
  else
  {
    sub_DF400(v81);
    v15 = *(_QWORD *)(a2 + 8);
    v16 = *(_QWORD *)(a2 + 16);
    v17 = v15 + 1;
    if ( v15 + 1 >= v16 )
    {
      v25 = 2 * v16;
      if ( v25 < v17 )
        v25 = v15 + 1;
      *(_QWORD *)(a2 + 16) = v25;
      v18 = (char *)realloc(*(void **)a2, v25);
      *(_QWORD *)a2 = v18;
      v15 = *(_QWORD *)(a2 + 8);
      v17 = v15 + 1;
    }
    else
    {
      v18 = *(char **)a2;
    }
    *v4 = v17;
    v18[v15] = 32;
    v26 = *(const void **)(a1 + 32);
    v27 = *v4;
    v28 = *(_QWORD *)(a1 + 40) - (_QWORD)v26;
    if ( v28 )
    {
      v29 = *(_QWORD *)(a2 + 16);
      if ( v27 + v28 >= v29 )
      {
        v58 = 2 * v29;
        if ( v58 < v27 + v28 )
          v58 = v27 + v28;
        *(_QWORD *)(a2 + 16) = v58;
        v30 = (char *)realloc(*(void **)a2, v58);
        *(_QWORD *)a2 = v30;
        v27 = *(_QWORD *)(a2 + 8);
      }
      else
      {
        v30 = *(char **)a2;
      }
      memmove(&v30[v27], v26, v28);
      v59 = *v4 + v28;
      *v4 = v59;
      v27 = v59;
    }
    v60 = *(_QWORD *)(a2 + 16);
    if ( v27 + 4 >= v60 )
    {
      v62 = 2 * v60;
      if ( v62 < v27 + 4 )
        v62 = v27 + 4;
      *(_QWORD *)(a2 + 16) = v62;
      v61 = (char *)realloc(*(void **)a2, v62);
      *(_QWORD *)a2 = v61;
      v27 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v61 = *(char **)a2;
    }
    *(_DWORD *)&v61[v27] = 774778400;
    v63 = *v4;
    v64 = *v4 + 4;
    *v4 = v64;
    if ( *(_QWORD *)(a1 + 24) )
    {
      v65 = v63 + 5;
      v66 = *(_QWORD *)(a2 + 16);
      if ( v65 >= v66 )
      {
        v68 = 2 * v66;
        if ( v68 < v65 )
          v68 = v65;
        *(_QWORD *)(a2 + 16) = v68;
        v67 = (char *)realloc(*(void **)a2, v68);
        *(_QWORD *)a2 = v67;
        v64 = *(_QWORD *)(a2 + 8);
        v65 = v64 + 1;
      }
      else
      {
        v67 = *(char **)a2;
      }
      *v4 = v65;
      v67[v64] = 32;
      v69 = *(const void **)(a1 + 32);
      v70 = *v4;
      v71 = *(_QWORD *)(a1 + 40) - (_QWORD)v69;
      if ( v71 )
      {
        v72 = *(_QWORD *)(a2 + 16);
        if ( v70 + v71 >= v72 )
        {
          v74 = 2 * v72;
          if ( v74 < v70 + v71 )
            v74 = v70 + v71;
          *(_QWORD *)(a2 + 16) = v74;
          v73 = (char *)realloc(*(void **)a2, v74);
          *(_QWORD *)a2 = v73;
          v70 = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v73 = *(char **)a2;
        }
        memmove(&v73[v70], v69, v71);
        v75 = *v4 + v71;
        *v4 = v75;
        v70 = v75;
      }
      v76 = v70 + 1;
      v77 = *(_QWORD *)(a2 + 16);
      if ( v70 + 1 >= v77 )
      {
        v79 = 2 * v77;
        if ( v79 < v76 )
          v79 = v70 + 1;
        *(_QWORD *)(a2 + 16) = v79;
        v78 = (char *)realloc(*(void **)a2, v79);
        *(_QWORD *)a2 = v78;
        v70 = *(_QWORD *)(a2 + 8);
        v76 = v70 + 1;
      }
      else
      {
        v78 = *(char **)a2;
      }
      *(_QWORD *)(a2 + 8) = v76;
      v78[v70] = 32;
      v80 = *(_BYTE **)(a1 + 24);
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v80 + 24LL))(v80, a2);
      if ( v80[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v80 + 32LL))(v80, a2);
    }
  }
  v52 = *(_QWORD *)(a2 + 8);
  v53 = *(_QWORD *)(a2 + 16);
  v54 = v52 + 1;
  if ( v52 + 1 >= v53 )
  {
    v56 = 2 * v53;
    if ( v56 < v54 )
      v56 = v52 + 1;
    *(_QWORD *)(a2 + 16) = v56;
    v55 = (char *)realloc(*(void **)a2, v56);
    *(_QWORD *)a2 = v55;
    v52 = *(_QWORD *)(a2 + 8);
    v54 = v52 + 1;
  }
  else
  {
    v55 = *(char **)a2;
  }
  *v4 = v54;
  v55[v52] = 41;
  return __readfsqword(0x28u);
}
