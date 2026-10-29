__int64 __fastcall sub_CD87C0(_QWORD *a1, __int64 a2, unsigned int a3, _QWORD *a4, int a5, int a6)
{
  __int64 v6; // rax
  char v8; // dl
  int v9; // r13d
  _QWORD *v10; // r12
  __m128i *p_src; // rbx
  __int64 *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __m128i *v18; // rax
  int *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  _DWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  __int64 v28; // r14
  __m128i *v29; // r15
  char *v30; // rsi
  unsigned __int64 v31; // rdx
  char *v32; // rbp
  char *v33; // rbx
  unsigned int *v34; // r12
  unsigned int v35; // ecx
  unsigned int *v36; // rdx
  char *v37; // rax
  char *v38; // rsi
  __m128i *v39; // r10
  _DWORD *v40; // rdi
  unsigned int *v41; // rdx
  __int64 *v42; // rax
  unsigned int v43; // ecx
  __int64 *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  bool v48; // di
  unsigned __int64 v49; // rax
  __int64 v50; // r11
  char *v51; // r14
  __m128i *v52; // rbp
  char *v53; // r12
  unsigned int *v54; // rbx
  unsigned int v55; // ecx
  unsigned int *v56; // rdx
  char *v57; // rax
  char *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  void *v63; // rdi
  int v64; // [rsp+0h] [rbp-F8h]
  int v65; // [rsp+8h] [rbp-F0h]
  __int64 *v66; // [rsp+8h] [rbp-F0h]
  int v67; // [rsp+10h] [rbp-E8h]
  __int64 *v68; // [rsp+10h] [rbp-E8h]
  __int64 *v69; // [rsp+10h] [rbp-E8h]
  int v71; // [rsp+20h] [rbp-D8h]
  void *v72; // [rsp+20h] [rbp-D8h]
  _QWORD *v73; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  int v75[2]; // [rsp+38h] [rbp-C0h]
  int src; // [rsp+40h] [rbp-B8h] BYREF
  void *v77; // [rsp+48h] [rbp-B0h]

  v6 = *(_QWORD *)(a2 + 24);
  v67 = a5;
  if ( !v6 )
    return 5;
  v8 = *(_BYTE *)(v6 + 17);
  v9 = a2;
  v10 = a4;
  if ( (v8 & 1) != 0 && (v8 & 2) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 17) & 8) == 0 && (*(_DWORD *)v6 || *(_DWORD *)(v6 + 4) != 3) )
      return 5;
  }
  else if ( *(_DWORD *)v6 || *(_DWORD *)(v6 + 4) != 3 )
  {
    if ( a3 == 2 && (*(_BYTE *)(v6 + 17) & 8) != 0 )
    {
      v22 = (_DWORD *)a4[1];
      if ( *v22 < *(_DWORD *)*a4 )
      {
        v23 = sub_15DC610(*a1, a2, 2, (int)&ptr, a5, a6, v64, v65, a5, (int)a1, v71, (char)v73, (int)v22, *a4, src, v77);
        v24 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v25 = *v68;
        if ( *v68 )
        {
          v26 = v68[1];
          v27 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v26, v25);
        }
        *v68 = v24;
        return 4;
      }
    }
    return 5;
  }
  p_src = (__m128i *)&src;
  ptr = &src;
  *(_QWORD *)v75 = 0x1000000000LL;
  if ( !a3 )
    return 5;
  v13 = a4;
  LODWORD(v14) = 16;
  LODWORD(v15) = 0;
  v66 = &a4[a3];
  while ( 1 )
  {
    v16 = *v13;
    v17 = (unsigned int)v15;
    v15 = (unsigned int)(v15 + 1);
    ++v13;
    p_src->m128i_i64[v17] = v16;
    v75[0] = v15;
    if ( v66 == v13 )
      break;
    if ( (unsigned int)v15 >= (unsigned int)v14 )
    {
      v14 = (unsigned int)(2 * v14);
      v18 = (__m128i *)sub_186B270(8 * v14);
      LODWORD(v15) = v75[0];
      v19 = (int *)ptr;
      p_src = v18;
      if ( v75[0] )
      {
        if ( (unsigned int)(v75[0] - 1) <= 2 || v18 == (__m128i *)((char *)ptr + 8) )
        {
          v49 = 0;
          v50 = 8LL * (unsigned int)v75[0];
          do
          {
            p_src->m128i_i64[v49 / 8] = *(_QWORD *)&v19[v49 / 4];
            v49 += 8LL;
          }
          while ( v49 != v50 );
        }
        else
        {
          v20 = 0;
          v21 = 16LL * ((unsigned int)v75[0] >> 1);
          do
          {
            p_src[v20 / 0x10] = _mm_loadu_si128((const __m128i *)&v19[v20 / 4]);
            v20 += 16LL;
          }
          while ( v20 != v21 );
          if ( (v15 & 1) != 0 )
            p_src->m128i_i64[(unsigned int)v15 & 0xFFFFFFFE] = *(_QWORD *)&v19[2 * (v15 & 0xFFFFFFFE)];
        }
      }
      if ( v19 != &src && v19 )
      {
        sub_186B220(v19);
        LODWORD(v15) = v75[0];
      }
      ptr = p_src;
      v75[1] = v14;
    }
  }
  v28 = 8 * v15;
  v29 = (__m128i *)((char *)p_src + 8 * v15);
  if ( v29 == p_src )
    goto LABEL_53;
  v30 = &p_src->m128i_i8[8 * v15];
  _BitScanReverse64(&v31, v28 >> 3);
  sub_CD6F20(p_src, v30, 2LL * (int)v31);
  a5 = (_DWORD)p_src + 8;
  if ( (unsigned __int64)v28 > 0x80 )
  {
    LODWORD(v66) = a3;
    v51 = &p_src->m128i_i8[8];
    v73 = v10;
    v52 = p_src + 8;
    v53 = (char *)p_src;
    do
    {
      v54 = *(unsigned int **)v51;
      v55 = **(_DWORD **)v51;
      if ( v55 < **(_DWORD **)v53 )
      {
        if ( v51 - v53 <= 8 )
        {
          if ( v51 - v53 == 8 )
            *(_QWORD *)v51 = *(_QWORD *)v53;
        }
        else
        {
          memmove(v53 + 8, v53, v51 - v53);
        }
        *(_QWORD *)v53 = v54;
      }
      else
      {
        v56 = *((unsigned int **)v51 - 1);
        v57 = v51 - 8;
        if ( v55 >= *v56 )
        {
          v58 = v51;
        }
        else
        {
          do
          {
            *((_QWORD *)v57 + 1) = v56;
            v58 = v57;
            v56 = *((unsigned int **)v57 - 1);
            v57 -= 8;
          }
          while ( v55 < *v56 );
        }
        *(_QWORD *)v58 = v54;
      }
      v51 += 8;
    }
    while ( v52 != (__m128i *)v51 );
    v39 = v52;
    v10 = v73;
    a3 = (unsigned int)v66;
    do
    {
      v40 = (_DWORD *)v39->m128i_i64[0];
      v41 = (unsigned int *)v39[-1].m128i_i64[1];
      v42 = &v39[-1].m128i_i64[1];
      v43 = *(_DWORD *)v39->m128i_i64[0];
      if ( v43 >= *v41 )
      {
        v44 = (__int64 *)v39;
      }
      else
      {
        do
        {
          v42[1] = (__int64)v41;
          v44 = v42;
          v41 = (unsigned int *)*--v42;
        }
        while ( v43 < *v41 );
      }
      v39 = (__m128i *)((char *)v39 + 8);
      *v44 = (__int64)v40;
    }
    while ( v29 != v39 );
  }
  else
  {
    if ( v28 == 8 )
      goto LABEL_53;
    LODWORD(v66) = a3;
    v32 = (char *)p_src;
    v33 = &p_src->m128i_i8[8];
    v73 = v10;
    do
    {
      v34 = *(unsigned int **)v33;
      v35 = **(_DWORD **)v33;
      if ( v35 < **(_DWORD **)v32 )
      {
        if ( v33 - v32 <= 8 )
        {
          if ( v33 - v32 == 8 )
            *(_QWORD *)v33 = *(_QWORD *)v32;
        }
        else
        {
          memmove(v32 + 8, v32, v33 - v32);
        }
        *(_QWORD *)v32 = v34;
      }
      else
      {
        v36 = *((unsigned int **)v33 - 1);
        v37 = v33 - 8;
        if ( v35 >= *v36 )
        {
          v38 = v33;
        }
        else
        {
          do
          {
            *((_QWORD *)v37 + 1) = v36;
            v38 = v37;
            v36 = *((unsigned int **)v37 - 1);
            v37 -= 8;
          }
          while ( v35 < *v36 );
        }
        *(_QWORD *)v38 = v34;
      }
      v33 += 8;
    }
    while ( v29 != (__m128i *)v33 );
    a3 = (unsigned int)v66;
    v10 = v73;
  }
  p_src = (__m128i *)ptr;
LABEL_53:
  v45 = 0;
  do
  {
    v46 = v10[v45];
    v47 = p_src->m128i_i64[v45];
    v48 = (int)v45++ + 1 < a3;
  }
  while ( v46 == v47 && v48 );
  if ( v46 == v47 )
  {
    if ( p_src != (__m128i *)&src )
      sub_186B220(p_src);
    return 5;
  }
  v59 = sub_15DC610(
          *a1,
          v9,
          a3,
          (int)p_src,
          a5,
          a6,
          v64,
          (int)v66,
          v67,
          (int)a1,
          (int)&src,
          (char)v73,
          (int)ptr,
          v75[0],
          src,
          v77);
  v60 = v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  v61 = *v69;
  if ( *v69 )
  {
    v62 = v69[1];
    v27 = (*(_DWORD *)(v61 + 8))-- == 1;
    if ( v27 )
      sub_15D7BC0(v62, v61);
  }
  v63 = ptr;
  *v69 = v60;
  if ( v63 && v63 != v72 )
    sub_186B220(v63);
  return 4;
}

