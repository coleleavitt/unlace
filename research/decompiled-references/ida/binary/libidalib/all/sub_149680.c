__int64 __fastcall sub_149680(__int64 a1, char a2, const char *a3)
{
  _DWORD *ph; // rbx
  int v5; // eax
  int v6; // edx
  __int64 v7; // r15
  char *v8; // r13
  char *v9; // rsi
  char *v10; // r14
  char *v11; // r8
  unsigned __int64 v12; // rax
  char *v13; // r8
  unsigned int v14; // r15d
  unsigned int v15; // r15d
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r15
  size_t v19; // rax
  size_t v20; // r13
  size_t v21; // r9
  size_t v22; // rdx
  char *v23; // rax
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // r15
  char *v27; // rax
  int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int16 sreg_range_num; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  size_t v35; // r13
  void *v36; // r12
  __int64 v37; // r8
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rdx
  int *v41; // rax
  int v42; // r14d
  int *v43; // rcx
  int v44; // edx
  __int64 v45; // r12
  unsigned __int64 v46; // r15
  int v47; // r13d
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rbp
  int v51; // eax
  unsigned int v52; // ebp
  __int64 v53; // rdx
  __int64 v54; // r12
  __int64 v55; // rbx
  _QWORD *v56; // rax
  __int64 v58; // [rsp+8h] [rbp-D0h]
  size_t v60; // [rsp+20h] [rbp-B8h]
  size_t v61; // [rsp+28h] [rbp-B0h]
  char *v62; // [rsp+40h] [rbp-98h] BYREF
  __int128 v63; // [rsp+48h] [rbp-90h]
  __int64 v64; // [rsp+60h] [rbp-78h]
  __int128 v65; // [rsp+68h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+88h] [rbp-50h]
  unsigned __int64 v68; // [rsp+98h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  ph = (_DWORD *)get_ph();
  v5 = ph[18];
  v6 = ph[17];
  if ( v5 == v6 )
  {
    v52 = 0;
    sub_92200((__int64)"No segment registers defined by the processor module");
    return v52;
  }
  if ( (unsigned __int16)word_254108 > v5 - v6 )
    word_254108 = 0;
  v63 = 0;
  v62 = (char *)qvector_reserve();
  v7 = 50;
  *(_QWORD *)&v63 = 13;
  v8 = "BUTTON YES NONE\nBUTTON NO NONE\nBUTTON CANCEL NONE\n";
  strcpy(v62, "STARTITEM 1\n");
  v9 = v62;
  if ( a2 )
  {
    v7 = 0;
    v8 = "";
  }
  v37 = v63 - 1;
  v38 = v7 + v63 - 1;
  v39 = v7 + v63;
  if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v7 + v63) )
  {
    v62 = (char *)qvector_reserve();
    v37 = v63 - 1;
    v9 = v62;
    v39 = v7 + v63;
  }
  *(_QWORD *)&v63 = v39;
  v9[v38] = 0;
  v10 = v62;
  v11 = &v62[v37];
  if ( (unsigned int)v7 >= 8 )
  {
    *(_QWORD *)v11 = *(_QWORD *)v8;
    *(_QWORD *)&v11[v7 - 8] = *(_QWORD *)&v8[v7 - 8];
    v12 = (unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v13 = &v11[-v12];
    v14 = ((_DWORD)v13 + v7) & 0xFFFFFFF8;
    if ( v14 >= 8 )
    {
      v15 = v14 & 0xFFFFFFF8;
      v16 = 0;
      do
      {
        v17 = v16;
        v16 += 8;
        *(_QWORD *)(v12 + v17) = *(_QWORD *)(v8 - v13 + v17);
      }
      while ( v16 < v15 );
    }
    v10 = v62;
  }
  if ( a3 )
  {
    v18 = v63;
    v19 = strlen(a3);
    v20 = v19;
    v21 = v19;
    if ( (_QWORD)v63 )
    {
      v18 = v63 - 1;
      v21 = v19 + v63 - 1;
    }
    v22 = v21 + 1;
    v23 = v10;
    if ( *((_QWORD *)&v63 + 1) < v21 + 1 )
    {
      v61 = v21;
      v60 = v21 + 1;
      v23 = (char *)qvector_reserve();
      v21 = v61;
      v22 = v60;
      v62 = v23;
    }
    *(_QWORD *)&v63 = v22;
    v23[v21] = 0;
    memmove(&v62[v18], a3, v20);
    v10 = v62;
  }
  v24 = v63;
  if ( !(_QWORD)v63 )
  {
    v26 = 5;
    v25 = 4;
    v27 = v10;
    if ( *((_QWORD *)&v63 + 1) >= 5u )
      goto LABEL_20;
LABEL_63:
    v27 = (char *)qvector_reserve();
    v62 = v27;
    goto LABEL_20;
  }
  v25 = v63 + 3;
  v26 = v63 + 4;
  v27 = v10;
  v24 = v63 - 1;
  if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 4) )
    goto LABEL_63;
LABEL_20:
  *(_QWORD *)&v63 = v26;
  v27[v25] = 0;
  *(_DWORD *)&v62[v24] = 170861834;
  src = nullptr;
  *(_OWORD *)n = 0;
  v28 = ph[17];
  v64 = 0;
  *(_QWORD *)&xmmword_2540F8 = 0;
  v65 = 0;
  if ( v28 <= ph[18] )
  {
    do
    {
      if ( ph[20] != v28 )
      {
        get_reg_name();
        v35 = n[0];
        v36 = nullptr;
        if ( n[0] )
        {
          v36 = (void *)qalloc_or_throw();
          memcpy(v36, src, n[0]);
        }
        v29 = v65;
        v30 = v64;
        if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
        {
          v64 = qvector_reserve();
          v29 = v65;
          v30 = v64;
        }
        v31 = v30 + 24 * v29;
        *(_QWORD *)v31 = v36;
        *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
        *(_QWORD *)&v65 = v65 + 1;
        sreg_range_num = get_sreg_range_num();
        v33 = xmmword_2540F8;
        v34 = qword_2540F0;
        if ( *((_QWORD *)&xmmword_2540F8 + 1) < (unsigned __int64)(xmmword_2540F8 + 1) )
        {
          qword_2540F0 = qvector_reserve();
          v34 = qword_2540F0;
          v33 = xmmword_2540F8;
        }
        *(_WORD *)(v34 + 2 * v33) = sreg_range_num;
        *(_QWORD *)&xmmword_2540F8 = xmmword_2540F8 + 1;
      }
      ++v28;
    }
    while ( ph[18] >= v28 );
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
  v58 = qalloc_or_throw();
  sub_148F40(v58, (__int64)ph, (__int64)&word_254108, a2);
  src = nullptr;
  *(_OWORD *)n = 0;
  v40 = *(int *)(v58 + 48);
  if ( (int)v40 > 0 )
  {
    v41 = *(int **)(v58 + 56);
    v42 = 1;
    v43 = &v41[v40];
    do
    {
      v44 = *v41++;
      v42 += v44 + 1;
    }
    while ( v43 != v41 );
  }
  byte_2540E0 = 1;
  v45 = v64;
  if ( 24LL * (_QWORD)v65 )
  {
    v46 = 0;
    v47 = 1;
    do
    {
      sub_96630((__int64 *)&v62);
      v48 = *(_QWORD *)(v45 + 8);
      v49 = v48 - 1;
      if ( v46 >= v48 - 1 )
        v49 = v46;
      if ( v48 )
        v46 = v49;
      v45 += 24;
      ++v47;
    }
    while ( v45 != v64 + 24LL * (_QWORD)v65 );
  }
  sub_96630((__int64 *)&v62);
  sub_96630((__int64 *)&v62);
  v50 = qword_2540E8;
  v51 = sub_8F810((__int64)v62, sub_148B30, &word_254108, v58, &src);
  qword_2540E8 = v50;
  if ( v51 && n[0] )
    v52 = getn_sreg_range();
  else
    v52 = 0;
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v53 = v64;
  if ( v64 )
  {
    v54 = v65;
    if ( (_QWORD)v65 )
    {
      v55 = 0;
      do
      {
        v56 = (_QWORD *)(v53 + 24 * v55);
        if ( *v56 )
        {
          v56[1] = 0;
          qfree();
          v53 = v64;
        }
        ++v55;
      }
      while ( v54 != v55 );
    }
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree();
  }
  return v52;
}

