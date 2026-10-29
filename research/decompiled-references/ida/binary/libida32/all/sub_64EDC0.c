unsigned __int64 __fastcall sub_64EDC0(
        __int64 *a1,
        int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7)
{
  unsigned int tinfo_size; // r14d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rax
  char *v17; // r14
  size_t v18; // rax
  __int64 v19; // r8
  size_t v20; // r10
  size_t v21; // r11
  __int64 v22; // rsi
  __int64 v23; // rdx
  _WORD *v24; // rsi
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r15
  size_t v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v33; // r12
  size_t v34; // r14
  __int64 v35; // rsi
  size_t v36; // r15
  __int64 v37; // r13
  size_t v38; // r8
  _BYTE *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  size_t v51; // [rsp+0h] [rbp-490h]
  __int64 v52; // [rsp+8h] [rbp-488h]
  size_t v53; // [rsp+10h] [rbp-480h]
  __int64 v54; // [rsp+18h] [rbp-478h]
  __int64 v55; // [rsp+18h] [rbp-478h]
  __int64 i; // [rsp+28h] [rbp-468h]
  __int64 v58; // [rsp+28h] [rbp-468h]
  __int64 v59; // [rsp+28h] [rbp-468h]
  size_t v60; // [rsp+28h] [rbp-468h]
  void *src; // [rsp+30h] [rbp-460h] BYREF
  __int128 v62; // [rsp+38h] [rbp-458h]
  char v63[1032]; // [rsp+50h] [rbp-440h] BYREF
  unsigned __int64 v64; // [rsp+458h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  if ( a2 >= 0 )
  {
    sub_357520(a1);
    goto LABEL_3;
  }
  v42 = a1[1];
  v43 = v42;
  if ( !v42 )
  {
    v46 = *a1;
    v45 = 6;
    v44 = 5;
    if ( (unsigned __int64)a1[2] >= 6 )
      goto LABEL_47;
LABEL_49:
    v55 = v44;
    v59 = v45;
    v49 = qvector_reserve(a1, v46, v45, 1);
    v44 = v55;
    v45 = v59;
    *a1 = v49;
    v46 = v49;
    goto LABEL_47;
  }
  v44 = v42 + 4;
  v45 = v42 + 5;
  v46 = *a1;
  v43 = v42 - 1;
  if ( a1[2] < (unsigned __int64)(v42 + 5) )
    goto LABEL_49;
LABEL_47:
  a1[1] = v45;
  *(_BYTE *)(v46 + v44) = 0;
  v47 = v43 + *a1;
  *(_DWORD *)v47 = 1163010080;
  *(_BYTE *)(v47 + 4) = 84;
LABEL_3:
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( (get_tinfo_property(*a3, 2) & 0x3F) == 1 )
  {
    v11 = a1[1];
    v12 = v11;
    if ( v11 )
    {
      v15 = v11 + 4;
      v14 = v11 + 5;
      v13 = *a1;
      v12 = v11 - 1;
      if ( a1[2] >= (unsigned __int64)(v11 + 5) )
        goto LABEL_6;
    }
    else
    {
      v13 = *a1;
      v14 = 6;
      v15 = 5;
      if ( (unsigned __int64)a1[2] >= 6 )
      {
LABEL_6:
        a1[1] = v14;
        *(_BYTE *)(v13 + v15) = 0;
        v16 = v12 + *a1;
        *(_DWORD *)v16 = 538976288;
        *(_BYTE *)(v16 + 4) = 32;
        goto LABEL_7;
      }
    }
    v58 = v15;
    v40 = qvector_reserve(a1, v13, v14, 1);
    v15 = v58;
    *a1 = v40;
    v13 = v40;
    goto LABEL_6;
  }
  sub_357520(a1);
  if ( a7 )
  {
    print_argloc(v63, 1024, a5, tinfo_size, a7);
    goto LABEL_8;
  }
LABEL_7:
  v63[0] = 0;
LABEL_8:
  sub_357520(a1);
  for ( i = 0; i != 5; ++i )
  {
    if ( _bittest(&a6, i) )
    {
      v17 = off_2B0D2E0[i];
      if ( v17 )
      {
        v18 = strlen(off_2B0D2E0[i]);
        v19 = a1[1];
        v20 = v18;
        v21 = v18;
        if ( v19 )
        {
          --v19;
          v21 = v18 + v19;
        }
        v22 = *a1;
        v23 = v21 + 1;
        if ( a1[2] < v21 + 1 )
        {
          v51 = v18;
          v52 = v19;
          v53 = v21;
          v54 = v21 + 1;
          v41 = qvector_reserve(a1, v22, v23, 1);
          v20 = v51;
          v19 = v52;
          *a1 = v41;
          v21 = v53;
          v22 = v41;
          v23 = v54;
        }
        a1[1] = v23;
        *(_BYTE *)(v22 + v21) = 0;
        memmove((void *)(v19 + *a1), v17, v20);
      }
    }
  }
  v62 = 0;
  src = nullptr;
  if ( !(unsigned __int8)print_tinfo((int)&src, 0, 0, 0, 8, (int)a3, *(_QWORD *)a4, 0) )
  {
    v24 = src;
    if ( *((_QWORD *)&v62 + 1) <= 2u )
    {
      src = (void *)qvector_reserve(&src, src, 3, 1);
      v24 = src;
    }
    *(_QWORD *)&v62 = 3;
    *v24 = 8255;
    *((_BYTE *)src + 2) = 0;
    v25 = *(_QWORD *)(a4 + 8);
    if ( v25 )
    {
      v36 = v25 - 1;
      if ( v25 != 1 )
      {
        v37 = v62;
        v38 = v25 - 1;
        if ( (_QWORD)v62 )
        {
          v37 = v62 - 1;
          v38 = v36 + v62 - 1;
          v25 += v62 - 1;
        }
        v39 = src;
        if ( *((_QWORD *)&v62 + 1) < v25 )
        {
          v60 = v38;
          src = (void *)qvector_reserve(&src, src, v25, 1);
          v38 = v60;
          v39 = src;
        }
        *(_QWORD *)&v62 = v25;
        v39[v38] = 0;
        memcpy((char *)src + v37, *(const void **)a4, v36);
      }
    }
  }
  v26 = v62;
  if ( (_QWORD)v62 )
  {
    v27 = v62 - 1;
    if ( (_QWORD)v62 != 1 )
    {
      v33 = a1[1];
      v34 = v62 - 1;
      if ( v33 )
      {
        --v33;
        v34 = v27 + v33;
        v26 = v62 + v33;
      }
      v35 = *a1;
      if ( a1[2] < v26 )
      {
        v50 = qvector_reserve(a1, v35, v26, 1);
        *a1 = v50;
        v35 = v50;
      }
      a1[1] = v26;
      *(_BYTE *)(v35 + v34) = 0;
      memcpy((void *)(v33 + *a1), src, v27);
    }
  }
  v28 = a1[1];
  v29 = 2;
  v30 = v28;
  if ( v28 )
  {
    v29 = v28 + 1;
    v30 = v28 - 1;
  }
  v31 = *a1;
  if ( a1[2] < v29 )
  {
    v48 = qvector_reserve(a1, v31, v29, 1);
    *a1 = v48;
    v31 = v48;
  }
  a1[1] = v29;
  *(_BYTE *)(v31 + v30) = 10;
  *(_BYTE *)(*a1 + v30 + 1) = 0;
  if ( src )
  {
    *(_QWORD *)&v62 = 0;
    qfree(src);
  }
  return v64 - __readfsqword(0x28u);
}

