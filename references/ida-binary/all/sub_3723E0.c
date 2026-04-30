__int64 __fastcall sub_3723E0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rdx
  const char *v15; // rsi
  const char *v16; // rsi
  __int64 *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rax
  size_t v25; // rdx
  __int64 v27; // r12
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  size_t v35; // rdx
  __int64 v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rax
  size_t v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rax
  size_t v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r14
  unsigned __int64 v49; // rdx
  __int64 v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rbx
  unsigned __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r8
  const char *v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rax
  size_t v59; // rdx
  char v60; // [rsp+0h] [rbp-C8h]
  __int64 v61; // [rsp+8h] [rbp-C0h]
  __int64 v62; // [rsp+18h] [rbp-B0h]
  __int64 v63; // [rsp+18h] [rbp-B0h]
  __int64 v64; // [rsp+18h] [rbp-B0h]
  __int64 v65; // [rsp+28h] [rbp-A0h]
  __int64 v66; // [rsp+38h] [rbp-90h] BYREF
  __int64 v67; // [rsp+40h] [rbp-88h] BYREF
  __int64 v68; // [rsp+48h] [rbp-80h] BYREF
  const char *v69; // [rsp+50h] [rbp-78h] BYREF
  __int128 v70; // [rsp+58h] [rbp-70h]
  const char *v71; // [rsp+70h] [rbp-58h] BYREF
  __int128 v72; // [rsp+78h] [rbp-50h]
  unsigned __int64 v73; // [rsp+88h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v14 = *(_QWORD *)(a1 + 24);
  if ( v14 == -1 )
    return 0;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    sub_169700(
      (int)"Coherency check failed: !items.empty()\n",
      a2,
      v14,
      a12,
      a13,
      a14,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      v60);
    if ( !*(_QWORD *)(a1 + 8) )
      return 0;
  }
  v69 = nullptr;
  v70 = 0;
  sub_169A50((__int64 *)&v69, (__int64)"$ pv2 blob %a");
  v15 = &s1;
  if ( (_QWORD)v70 )
    v15 = v69;
  netnode_check(&v71, v15, 0, 0);
  sub_370220((__int64)v71);
  v16 = &s1;
  v66 = -1;
  if ( (_QWORD)v70 )
    v16 = v69;
  netnode_check(&v66, v16, 0, 1);
  netnode_check(&v67, "$ pv known blobs", 0, 1);
  v68 = 1;
  netnode_supset(v67, v66, &v68, 8, 65);
  v71 = nullptr;
  v72 = 0;
  v17 = *(__int64 **)a1;
  v18 = *(_QWORD *)a1 + 40LL * *(_QWORD *)(a1 + 8);
  if ( v18 == *(_QWORD *)a1 )
  {
    v20 = 0;
    v28 = 8;
    v51 = 0;
    v27 = *(_QWORD *)(a1 + 24);
LABEL_55:
    v71 = (const char *)qvector_reserve(&v71, v51, v28, 1);
    v51 = (__int64)v71;
    v22 = v72;
    goto LABEL_37;
  }
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v23 = v20 + 8;
    if ( v20 >= 0xFFFFFFFFFFFFFFF8LL )
    {
      *(_QWORD *)&v72 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v24 = v20;
      v25 = 8;
      if ( *((_QWORD *)&v72 + 1) < v23 )
      {
        v71 = (const char *)qvector_reserve(&v71, v19, v20 + 8, 1);
        v19 = (__int64)v71;
        v24 = v72;
        v25 = v23 - v72;
      }
      memset((void *)(v19 + v24), 0, v25);
      *(_QWORD *)&v72 = v20 + 8;
      v19 = (__int64)v71;
    }
    v21 = *v17;
    v17 += 5;
    *(_QWORD *)(v19 + v20) = v21;
    v20 = v72;
    v22 = v72;
    if ( v17 == (__int64 *)v18 )
      break;
    v19 = (__int64)v71;
  }
  v27 = *(_QWORD *)(a1 + 24);
  v28 = v72 + 8;
  if ( (unsigned __int64)v72 >= 0xFFFFFFFFFFFFFFF8LL )
  {
    v28 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_19;
  }
  v51 = (__int64)v71;
  if ( *((_QWORD *)&v72 + 1) < v28 )
    goto LABEL_55;
LABEL_37:
  memset((void *)(v51 + v22), 0, v28 - v22);
LABEL_19:
  *(_QWORD *)&v72 = v28;
  *(_QWORD *)&v71[v20] = v27;
  netnode_setblob(v66, v71, v72, 0, 87);
  *(_QWORD *)&v72 = 0;
  v29 = 0;
  v61 = 0;
  v65 = *(_QWORD *)(a1 + 48);
  if ( !v65 )
    goto LABEL_53;
  do
  {
    v30 = v29 + 4;
    v31 = v29 + 4;
    v32 = *(_QWORD *)(a1 + 40) + 40 * v61;
    if ( v29 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v33 = (__int64)v71;
      v34 = v29;
      v35 = 4;
      if ( *((_QWORD *)&v72 + 1) < v30 )
      {
        v71 = (const char *)qvector_reserve(&v71, v71, v29 + 4, 1);
        v33 = (__int64)v71;
        v34 = v72;
        v35 = v30 - v72;
      }
      memset((void *)(v33 + v34), 0, v35);
    }
    *(_QWORD *)&v72 = v31;
    *(_DWORD *)&v71[v29] = *(_DWORD *)(v32 + 8);
    v36 = v72;
    v37 = v72 + 4;
    v38 = v72 + 4;
    if ( (unsigned __int64)v72 >= 0xFFFFFFFFFFFFFFFCLL )
    {
      v38 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v39 = (__int64)v71;
      v40 = v72;
      v41 = 4;
      if ( *((_QWORD *)&v72 + 1) < v37 )
      {
        v71 = (const char *)qvector_reserve(&v71, v71, v72 + 4, 1);
        v39 = (__int64)v71;
        v40 = v72;
        v41 = v37 - v72;
      }
      memset((void *)(v39 + v40), 0, v41);
    }
    *(_QWORD *)&v72 = v38;
    v42 = 0;
    *(_DWORD *)&v71[v36] = *(_DWORD *)(v32 + 12);
    v43 = *(_QWORD *)(v32 + 24);
    if ( v43 )
    {
      do
      {
        v47 = v72;
        v48 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 8 * v42);
        v49 = v72 + 8;
        v50 = v72 + 8;
        if ( (unsigned __int64)v72 < 0xFFFFFFFFFFFFFFF8LL )
        {
          v44 = (__int64)v71;
          v45 = v72;
          v46 = 8;
          if ( *((_QWORD *)&v72 + 1) < v49 )
          {
            v62 = v72 + 8;
            v71 = (const char *)qvector_reserve(&v71, v71, v49, 1);
            v44 = (__int64)v71;
            v45 = v72;
            v46 = v62 - v72;
          }
          memset((void *)(v44 + v45), 0, v46);
        }
        else
        {
          v50 = 0x7FFFFFFFFFFFFFFFLL;
        }
        ++v42;
        *(_QWORD *)&v72 = v50;
        *(_QWORD *)&v71[v47] = v48;
      }
      while ( v42 != v43 );
    }
    v52 = v72;
    v53 = v72 + 8;
    v54 = v72 + 8;
    if ( (unsigned __int64)v72 < 0xFFFFFFFFFFFFFFF8LL )
    {
      v57 = (__int64)v71;
      v58 = v72;
      v59 = 8;
      if ( *((_QWORD *)&v72 + 1) < v53 )
      {
        v64 = v72 + 8;
        v71 = (const char *)qvector_reserve(&v71, v71, v72 + 8, 1);
        v57 = (__int64)v71;
        v58 = v72;
        v54 = v64;
        v59 = v53 - v72;
      }
      v63 = v54;
      memset((void *)(v57 + v58), 0, v59);
      v55 = v63;
    }
    else
    {
      v55 = 0x7FFFFFFFFFFFFFFFLL;
    }
    *(_QWORD *)&v72 = v55;
    ++v61;
    *(_QWORD *)&v71[v52] = -1;
    v29 = v72;
  }
  while ( v61 != v65 );
  if ( (_QWORD)v72 )
  {
    v56 = v71;
    netnode_setblob(v66, v71, v72, 0, 80);
  }
  else
  {
LABEL_53:
    v56 = nullptr;
    netnode_delblob(v66, 0, 80);
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71, v56);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69, v56);
  }
  return 1;
}
