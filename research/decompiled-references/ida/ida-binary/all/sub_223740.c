__int64 __fastcall sub_223740(
        __m128i *a1,
        const __m128i **a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rdx
  const __m128i **v14; // r12
  __int64 v15; // rsi
  const __m128i *v16; // rax
  const __m128i *v17; // rdx
  const __m128i *v18; // r13
  __m128i v19; // xmm0
  __int64 v20; // r14
  unsigned int v21; // r15d
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v27; // rax
  __int128 v28; // xmm0
  unsigned int v29; // r8d
  __int64 v30; // rbx
  __int64 v31; // r9
  const __m128i **v32; // rax
  __int64 v33; // r12
  const __m128i **v34; // rcx
  size_t v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int *v41; // rdi
  __int64 v42; // r14
  __int64 v43; // rbx
  int *v44; // rdx
  int *v45; // rax
  __int64 v46; // rdi
  void *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rbx
  __int64 v50; // r15
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v54; // [rsp+10h] [rbp-A8h]
  const __m128i **v55; // [rsp+18h] [rbp-A0h]
  bool v56; // [rsp+23h] [rbp-95h]
  unsigned int v57; // [rsp+24h] [rbp-94h]
  signed int *v58; // [rsp+28h] [rbp-90h]
  int *v59; // [rsp+30h] [rbp-88h] BYREF
  __int128 v60; // [rsp+38h] [rbp-80h]
  __m128i v61; // [rsp+50h] [rbp-68h]
  __int64 v62; // [rsp+68h] [rbp-50h]
  unsigned __int64 v63; // [rsp+78h] [rbp-40h]

  v13 = (unsigned int)dword_8CC5F0;
  v63 = __readfsqword(0x28u);
  v14 = a2;
  if ( dword_8CC5F0 > 0 && *(_DWORD *)(dbg + 16) == 12 )
    return 0;
  if ( a1[22].m128i_i32[0] == -1 )
  {
    v52 = dbg;
    if ( dbg )
    {
      a1[22].m128i_i32[0] = *(_DWORD *)(dbg + 16);
      a1[22].m128i_i32[1] = *(_QWORD *)(v52 + 32);
      a1[14].m128i_i64[1] = getinf(93);
      a1[22].m128i_i8[8] = *(_BYTE *)(dbg + 34) >> 7;
    }
  }
  v15 = (__int64)a2[1];
  sub_223580(a1, v15, a3, a4, a5, a6, a7, a8, a9, v13, a11, a12, a13);
  if ( *(char *)(dbg + 34) < 0
    && (dword_8CB69C & 1) != 0
    && (v58 = (signed int *)sub_234FE0((unsigned int)dword_8CC428)) != nullptr )
  {
    v15 = 39;
    if ( (unsigned int)sub_20CEA0(dbg, 39, (unsigned int)dword_8CC428, 2) == 1
      || (v15 = 39, (unsigned int)sub_20CEA0(dbg, 39, (unsigned int)dword_8CC428, 4) == 1) )
    {
      v56 = 0;
    }
    else
    {
      v15 = 39;
      v56 = (unsigned int)sub_20CEA0(dbg, 39, (unsigned int)dword_8CC428, 8) == 1;
    }
  }
  else
  {
    v58 = nullptr;
    v56 = 0;
  }
  sub_46B930(qword_8CD748);
  v16 = v14[1];
  v17 = *v14;
  v18 = *v14;
  if ( 40LL * (_QWORD)v16 )
  {
    while ( 1 )
    {
      v19 = _mm_loadu_si128(v18);
      v20 = v18[1].m128i_i64[1];
      v62 = 0;
      v21 = _mm_cvtsi128_si32(v19);
      v61 = v19;
      if ( v20 )
        break;
      v22 = 0;
      if ( v21 )
        goto LABEL_9;
LABEL_20:
      v18 = (const __m128i *)((char *)v18 + 40);
      if ( v18 == (const __m128i *)((char *)v17 + 40 * (_QWORD)v16) )
        goto LABEL_21;
    }
    v27 = qalloc_or_throw(40 * v20);
    v28 = 0;
    v29 = v21;
    v30 = v27;
    v31 = v27;
    v32 = v14;
    v33 = 0;
    v34 = v32;
    do
    {
      v36 = v18[1].m128i_i64[0];
      *(_DWORD *)v30 = -2;
      *(_QWORD *)(v30 + 24) = 0;
      v37 = v36 + 40 * v33;
      *(_OWORD *)(v30 + 8) = v28;
      if ( v30 != v37 )
      {
        if ( *(int *)v37 >= -1 )
        {
          *(_QWORD *)(v30 + 8) = 0;
          *(_OWORD *)(v30 + 16) = 0;
          v35 = *(_QWORD *)(v37 + 16);
          if ( v35 )
          {
            v57 = v29;
            v55 = v34;
            v54 = v31;
            v47 = (void *)qalloc_or_throw(*(_QWORD *)(v37 + 16));
            *(_QWORD *)(v30 + 24) = v35;
            *(_QWORD *)(v30 + 8) = v47;
            v15 = *(_QWORD *)(v37 + 8);
            memcpy(v47, (const void *)v15, v35);
            *(_QWORD *)(v30 + 16) = v35;
            v31 = v54;
            v28 = 0;
            v34 = v55;
            v29 = v57;
          }
        }
        else
        {
          *(_QWORD *)(v30 + 8) = *(_QWORD *)(v37 + 8);
        }
        *(_DWORD *)v30 = *(_DWORD *)v37;
      }
      ++v33;
      v30 += 40;
      *(_DWORD *)(v30 - 8) = *(_DWORD *)(v37 + 32);
    }
    while ( v20 != v33 );
    v62 = v20;
    v22 = v31;
    v14 = v34;
    v21 = v29;
    if ( v29 )
    {
LABEL_9:
      if ( v56 )
      {
        sub_20F8D0((__int64)qword_8CBAA0, (const char *)v15);
        v15 = v61.m128i_i64[1];
        sub_220C40(v58, v61.m128i_u64[1]);
        if ( !v22 )
          goto LABEL_32;
        v48 = v62;
        v49 = v22;
        v50 = 0;
        if ( v62 )
        {
          do
          {
            if ( *(int *)v49 >= -1 )
            {
              v51 = *(_QWORD *)(v49 + 8);
              if ( v51 )
              {
                *(_QWORD *)(v49 + 16) = 0;
                qfree(v51, (const char *)v15);
              }
            }
            ++v50;
            v49 += 40;
          }
          while ( v48 != v50 );
        }
        goto LABEL_19;
      }
      if ( v21 == 1 )
      {
        v59 = nullptr;
        v60 = 0;
        sub_216180(&v59, (int *)*(int *)(dbg + 64));
        v15 = (__int64)v59;
        v38 = v18[1].m128i_i64[0];
        if ( 40 * v18[1].m128i_i64[1] )
        {
          do
          {
            v39 = *(int *)(v38 + 32);
            v40 = *(_QWORD *)(v38 + 8);
            v38 += 40;
            *(_QWORD *)(v15 + 32 * v39 + 8) = v40;
          }
          while ( v38 != v18[1].m128i_i64[0] + 40 * v18[1].m128i_i64[1] );
        }
        sub_220140(a1, v15, v61.m128i_i32[1], v61.m128i_u64[1], 0);
        v41 = v59;
        if ( v59 )
        {
          v42 = v60;
          if ( (_QWORD)v60 )
          {
            v43 = 0;
            v44 = v59;
            do
            {
              v45 = &v44[8 * v43];
              if ( *v45 >= -1 )
              {
                v46 = *((_QWORD *)v45 + 1);
                if ( v46 )
                {
                  *((_QWORD *)v45 + 2) = 0;
                  qfree(v46, (const char *)v15);
                  v44 = v59;
                }
              }
              ++v43;
            }
            while ( v42 != v43 );
            v41 = v44;
          }
          *(_QWORD *)&v60 = 0;
          qfree(v41, (const char *)v15);
        }
      }
      else
      {
        v15 = v21;
        sub_21E480(a1, v21, v61.m128i_u32[1], v61.m128i_u64[1]);
      }
      if ( !v22 )
      {
LABEL_32:
        v16 = v14[1];
        v17 = *v14;
        goto LABEL_20;
      }
      v20 = v62;
      if ( !v62 )
        goto LABEL_19;
    }
    else if ( !v31 )
    {
      goto LABEL_32;
    }
    v23 = v22;
    v24 = 0;
    do
    {
      if ( *(int *)v23 >= -1 )
      {
        v25 = *(_QWORD *)(v23 + 8);
        if ( v25 )
        {
          *(_QWORD *)(v23 + 16) = 0;
          qfree(v25, (const char *)v15);
        }
      }
      ++v24;
      v23 += 40;
    }
    while ( v20 != v24 );
LABEL_19:
    qfree(v22, (const char *)v15);
    v16 = v14[1];
    v17 = *v14;
    goto LABEL_20;
  }
LABEL_21:
  sub_46B950(qword_8CD748);
  return 1;
}
