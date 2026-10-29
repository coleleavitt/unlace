__int64 __fastcall sub_BD5490(__int64 a1, __int64 *a2, double a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // r13
  _QWORD *v15; // r15
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax
  int *v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebp
  bool v40; // zf
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // [rsp+0h] [rbp-F8h]
  __int64 v47; // [rsp+0h] [rbp-F8h]
  void *v48; // [rsp+0h] [rbp-F8h]
  int v49; // [rsp+8h] [rbp-F0h]
  int v50[2]; // [rsp+8h] [rbp-F0h]
  int v51; // [rsp+8h] [rbp-F0h]
  int v52[2]; // [rsp+10h] [rbp-E8h]
  int v53; // [rsp+10h] [rbp-E8h]
  int v54; // [rsp+10h] [rbp-E8h]
  int v55[2]; // [rsp+18h] [rbp-E0h] BYREF
  __m128i v56; // [rsp+20h] [rbp-D8h] BYREF
  void *v57; // [rsp+30h] [rbp-C8h]
  int v58[2]; // [rsp+38h] [rbp-C0h]
  int v59; // [rsp+40h] [rbp-B8h] BYREF
  void *v60; // [rsp+48h] [rbp-B0h]

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *a2;
  *(_QWORD *)v55 = a2;
  v49 = v7;
  if ( sub_B70A50((__int64 *)(v6 + 8440), a1, -113, 1u, (_QWORD **)v55, 0) )
  {
    v9 = *(_QWORD *)(v7 + 16);
    ++*(_DWORD *)(a1 + 296);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL);
    if ( *(_BYTE *)(v10 + 8) != 1 )
      sub_DBF6E(0);
    *(_QWORD *)v52 = *(_QWORD *)v10;
    v57 = &v59;
    *(_QWORD *)v58 = 0x1000000000LL;
    v11 = v7 + 32;
    v12 = 8LL * *(unsigned int *)(v7 + 24);
    v13 = (_QWORD *)(v7 + 32 + v12);
    if ( v12 )
    {
      v14 = (_QWORD *)(v7 + 32);
      do
      {
        v18 = sub_BDD510(a1, *v14);
        v19 = v58[0];
        v20 = v18;
        if ( v58[0] < (unsigned int)v58[1] )
        {
          v15 = v57;
        }
        else
        {
          v21 = (unsigned int)(2 * v58[1]);
          v22 = (char *)sub_186B270(8 * v21);
          v19 = v58[0];
          v23 = (int *)v57;
          v15 = v22;
          if ( v58[0] )
          {
            if ( (unsigned int)(v58[0] - 1) <= 2 || v22 == (char *)v57 + 8 )
            {
              v44 = 0;
              v45 = 8LL * (unsigned int)v58[0];
              do
              {
                v8 = *(_QWORD *)&v23[v44 / 4];
                v15[v44 / 8] = v8;
                v44 += 8LL;
              }
              while ( v44 != v45 );
            }
            else
            {
              v24 = 0;
              v8 = 16LL * ((unsigned int)v58[0] >> 1);
              do
              {
                *(__m128i *)&v15[v24 / 8] = _mm_loadu_si128((const __m128i *)&v23[v24 / 4]);
                v24 += 16LL;
              }
              while ( v8 != v24 );
              if ( (v19 & 1) != 0 )
              {
                v25 = v19 & 0xFFFFFFFE;
                v8 = *(_QWORD *)&v23[2 * v25];
                v15[v25] = v8;
              }
            }
          }
          if ( v23 != &v59 && v23 )
          {
            sub_186B220(v23);
            v19 = v58[0];
          }
          v57 = v15;
          v58[1] = v21;
        }
        v16 = v19;
        ++v14;
        v17 = v19 + 1;
        v15[v16] = v20;
        v58[0] = v17;
      }
      while ( v13 != v14 );
    }
    else
    {
      v15 = &v59;
      v17 = 0;
    }
    v26 = *(_QWORD *)(a1 + 24);
    v27 = sub_15DC610(
            v26,
            v52[0],
            v17,
            (int)v15,
            v11,
            v8,
            (int)&v59,
            v49,
            v52[0],
            v55[0],
            v56.m128i_i32[0],
            v56.m128i_i8[8],
            (int)v57,
            v58[0],
            v59,
            v60);
    v28 = (__m128)v26;
    v29 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)v26);
    v56 = (__m128i)v29;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    sub_14B9B80(*(_QWORD *)(a1 + 16) + 7456LL, &v56);
    v30 = *(_QWORD *)(a1 + 24);
    v31 = sub_BDD510(a1, *(_QWORD *)v50);
    v35 = (_DWORD *)v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      v31,
      0,
      v29,
      v28,
      a5,
      v32,
      v33,
      v34,
      v46,
      v50[0],
      v53,
      *(__int64 *)v55,
      v56.m128i_i64[0],
      v56.m128i_i64[1],
      (__int64)v57);
    sub_B6F780(
      *(_QWORD **)(a1 + 16),
      v56.m128i_i64[0],
      0,
      v29,
      v28,
      a5,
      v36,
      v37,
      v38,
      v47,
      v51,
      v54,
      *(__int64 *)v55,
      v56.m128i_i64[0],
      v56.m128i_i64[1],
      (__int64)v57);
    v39 = sub_BD4E90(a1, v35, v56.m128i_i64[0]);
    if ( v35 )
    {
      v40 = v35[2]-- == 1;
      if ( v40 )
        sub_15D7BC0(v30, v35);
    }
    v41 = v56.m128i_i64[0];
    if ( v56.m128i_i64[0] )
    {
      v42 = v56.m128i_i64[1];
      v40 = (*(_DWORD *)(v56.m128i_i64[0] + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v42, v41);
    }
    if ( v57 != v48 && v57 )
      sub_186B220(v57);
  }
  else
  {
    return 0;
  }
  return v39;
}

