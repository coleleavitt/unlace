__int64 __fastcall sub_8B1630(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  bool v7; // zf
  __int64 *v10; // rdi
  unsigned int v11; // r14d
  _DWORD *v12; // r8
  _DWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  signed __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // r13
  size_t v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // edx
  __int16 v26; // ax
  __int64 v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  char *v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  char *v35; // rax
  void *v36; // rdi
  __int64 v37; // rax
  char *v38; // rdi
  void *v39; // rbx
  __m128i v40; // xmm1
  __m128i v41; // xmm1
  void *v42; // rdi
  char *v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rbx
  char *v46; // rax
  void *v47; // rdi
  __m128i v48; // [rsp+0h] [rbp-168h] BYREF
  __int64 *v49; // [rsp+10h] [rbp-158h]
  size_t v50; // [rsp+18h] [rbp-150h]
  size_t n; // [rsp+20h] [rbp-148h]
  void **v52; // [rsp+28h] [rbp-140h]
  void *v53; // [rsp+30h] [rbp-138h] BYREF
  __int128 v54; // [rsp+38h] [rbp-130h]
  void *v55; // [rsp+50h] [rbp-118h] BYREF
  __m128i v56; // [rsp+58h] [rbp-110h] BYREF
  int v57; // [rsp+70h] [rbp-F8h] BYREF
  __int16 v58; // [rsp+74h] [rbp-F4h]
  __int64 v59; // [rsp+78h] [rbp-F0h]
  __int64 v60; // [rsp+80h] [rbp-E8h]
  __int64 v61; // [rsp+90h] [rbp-D8h] BYREF
  void *v62; // [rsp+98h] [rbp-D0h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-C8h]
  void *v64; // [rsp+B0h] [rbp-B8h]
  __int128 v65; // [rsp+B8h] [rbp-B0h]
  void *v66; // [rsp+C8h] [rbp-A0h]
  __int128 v67; // [rsp+D0h] [rbp-98h]
  __int64 v68; // [rsp+E0h] [rbp-88h]
  void *ptr; // [rsp+E8h] [rbp-80h]
  __int128 v70; // [rsp+F0h] [rbp-78h]
  unsigned __int64 v71; // [rsp+128h] [rbp-40h]

  v7 = a1[54] == 0;
  v71 = __readfsqword(0x28u);
  if ( v7 && !(unsigned __int8)sub_8AE7E0((__int64)a1, (char **)a3, 0) )
    return 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return 1;
  v10 = (__int64 *)a1[54];
  v52 = &v53;
  v53 = nullptr;
  v54 = 0;
  v11 = sub_812960(v10, a2, 1, (__int64 *)&v53, a3);
  if ( v11 == 2 )
    sub_8AF780();
  if ( v11 )
  {
    sub_8ACB40((__int64)v52, a4);
    sub_813110((char **)&v55, v11, 0);
    v38 = *(char **)a3;
    v39 = v55;
    v55 = nullptr;
    v40 = _mm_loadu_si128(&v56);
    v56 = 0;
    if ( v38 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      v48 = v40;
      qfree(v38);
      v41 = _mm_load_si128(&v48);
      v42 = v55;
      *(_QWORD *)a3 = v39;
      *(__m128i *)(a3 + 8) = v41;
      if ( v42 )
      {
        v56.m128i_i64[0] = 0;
        qfree(v42);
      }
    }
    else
    {
      *(_QWORD *)a3 = v39;
      *(__m128i *)(a3 + 8) = v40;
    }
    v43 = (char *)v53;
    if ( v53 )
    {
      v44 = v54;
      if ( (_QWORD)v54 )
      {
        v45 = 0;
        do
        {
          v46 = &v43[32 * v45];
          v47 = *((void **)v46 + 1);
          if ( v47 )
          {
            *((_QWORD *)v46 + 2) = 0;
            qfree(v47);
            v43 = (char *)v53;
          }
          ++v45;
        }
        while ( v44 != v45 );
      }
      *(_QWORD *)&v54 = 0;
      qfree(v43);
      return 0;
    }
    return 0;
  }
  if ( (_QWORD)v54 != 2 || *((_DWORD *)v53 + 8) != 10 )
  {
    if ( !under_debugger )
      interr(3193);
LABEL_90:
    BUG();
  }
  sub_8ACB40((__int64)v52, a4);
  v12 = *(_DWORD **)a2;
  v48.m128i_i64[0] = *(_QWORD *)a2 + 6LL * *(_QWORD *)(a2 + 8);
  if ( (_DWORD *)v48.m128i_i64[0] == v12 )
    goto LABEL_40;
  v13 = v12;
  v49 = &v61;
  do
  {
    v14 = a1[17];
    v15 = a1[16];
    v61 = 112;
    v62 = nullptr;
    v64 = nullptr;
    v66 = nullptr;
    v14 *= 152;
    v63 = 0;
    v16 = v15 + v14;
    v68 = 0;
    v17 = 0x86BCA1AF286BCA1BLL * (v14 >> 3);
    v65 = 0;
    ptr = nullptr;
    v67 = 0;
    v70 = 0;
    if ( v17 >> 2 > 0 )
    {
      v18 = v15 + 608 * (v17 >> 2);
      while ( *(_DWORD *)v15 != *v13 || *(_WORD *)(v15 + 4) != *((_WORD *)v13 + 2) )
      {
        v19 = v15 + 152;
        if ( *(_DWORD *)(v15 + 152) == *v13 && *(_WORD *)(v15 + 156) == *((_WORD *)v13 + 2)
          || (v19 = v15 + 304, *(_DWORD *)(v15 + 304) == *v13) && *(_WORD *)(v15 + 308) == *((_WORD *)v13 + 2) )
        {
LABEL_51:
          v15 = v19;
          goto LABEL_18;
        }
        v19 = v15 + 456;
        if ( *(_DWORD *)(v15 + 456) == *v13 )
        {
          if ( *(_WORD *)(v15 + 460) == *((_WORD *)v13 + 2) )
            goto LABEL_51;
          v15 += 608;
          if ( v18 == v15 )
          {
LABEL_56:
            v17 = 0x86BCA1AF286BCA1BLL * ((v16 - v15) >> 3);
            goto LABEL_57;
          }
        }
        else
        {
          v15 += 608;
          if ( v18 == v15 )
            goto LABEL_56;
        }
      }
      goto LABEL_18;
    }
LABEL_57:
    if ( v17 == 2 )
      goto LABEL_63;
    if ( v17 == 3 )
    {
      if ( *(_DWORD *)v15 == *v13 && *(_WORD *)(v15 + 4) == *((_WORD *)v13 + 2) )
        goto LABEL_18;
      v15 += 152;
LABEL_63:
      if ( *(_DWORD *)v15 == *v13 && *(_WORD *)(v15 + 4) == *((_WORD *)v13 + 2) )
        goto LABEL_18;
      v15 += 152;
      goto LABEL_65;
    }
    if ( v17 != 1 )
      goto LABEL_60;
LABEL_65:
    if ( *(_DWORD *)v15 != *v13 || *(_WORD *)(v15 + 4) != *((_WORD *)v13 + 2) )
LABEL_60:
      v15 = v16;
LABEL_18:
    v20 = *(int *)(v15 + 12);
    if ( (int)v20 >= 7 )
      v20 = 0;
    v21 = off_2C82080[v20];
    if ( v21 )
    {
      v22 = strlen(off_2C82080[v20]);
      if ( v22 )
      {
        n = v22;
        v50 = v22 + 1;
        v62 = (void *)qvector_reserve(&v62, 0, v22 + 1, 1);
        *(_QWORD *)&v63 = v50;
        v50 = n;
        memmove(v62, v21, n);
        *((_BYTE *)v62 + n) = 0;
      }
    }
    *(_DWORD *)((char *)&v61 + 2) = *v13;
    HIWORD(v61) = *((_WORD *)v13 + 2);
    sub_8A55B0((__int64)v49);
    v23 = a1[58];
    v24 = v23 + 6LL * a1[59];
    if ( v23 != v24 )
    {
      while ( *v13 != *(_DWORD *)v23 || *((_WORD *)v13 + 2) != *(_WORD *)(v23 + 4) )
      {
        v23 += 6;
        if ( v24 == v23 )
          goto LABEL_30;
      }
      if ( v23 != v24 )
      {
        memmove((void *)v23, (const void *)(v23 + 6), v24 - v23 - 6);
        --a1[59];
      }
    }
LABEL_30:
    if ( ptr )
    {
      *(_QWORD *)&v70 = 0;
      qfree(ptr);
    }
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v66);
    }
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v64);
    }
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62);
    }
    v13 = (_DWORD *)((char *)v13 + 6);
  }
  while ( (_DWORD *)v48.m128i_i64[0] != v13 );
  v12 = *(_DWORD **)a2;
LABEL_40:
  v25 = *v12;
  v26 = *((_WORD *)v12 + 2);
  v59 = 0;
  LODWORD(v61) = v25;
  WORD2(v61) = v26;
  v57 = v25;
  v58 = v26;
  v60 = 0;
  v27 = sub_8AD170((__int64)a1, (__int64)&v57);
  if ( !v27 )
  {
    if ( !under_debugger )
      interr(3194);
    goto LABEL_90;
  }
  sub_8B0600((__int64)a1, v27, 0, 0, 0);
  v28 = *(_DWORD **)a2;
  v29 = a1[55];
  LODWORD(v61) = **(_DWORD **)a2;
  v30 = a1[56];
  WORD2(v61) = *((_WORD *)v28 + 2);
  if ( a1[57] < (unsigned __int64)(v30 + 1) )
  {
    v37 = qvector_reserve(a1 + 55, v29, v30 + 1, 6);
    a1[55] = v37;
    v30 = a1[56];
    v29 = v37;
  }
  v31 = v29 + 6 * v30;
  *(_DWORD *)v31 = v61;
  *(_WORD *)(v31 + 4) = WORD2(v61);
  v32 = (char *)v53;
  ++a1[56];
  if ( v32 )
  {
    v33 = v54;
    if ( (_QWORD)v54 )
    {
      v34 = 0;
      do
      {
        v35 = &v32[32 * v34];
        v36 = *((void **)v35 + 1);
        if ( v36 )
        {
          *((_QWORD *)v35 + 2) = 0;
          qfree(v36);
          v32 = (char *)v53;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v32);
  }
  return 1;
}
