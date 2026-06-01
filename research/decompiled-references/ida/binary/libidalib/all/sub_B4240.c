__int64 __fastcall sub_B4240(
        __m128i *a1,
        _QWORD *a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  const __m128i *v13; // r13
  __m128i v14; // xmm0
  __int64 v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v21; // rax
  __int128 v22; // xmm0
  unsigned int v23; // r8d
  __int64 v24; // rbx
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // r12
  _QWORD *v28; // rcx
  size_t v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // [rsp+10h] [rbp-A8h]
  _QWORD *v46; // [rsp+18h] [rbp-A0h]
  bool v47; // [rsp+23h] [rbp-95h]
  unsigned int v48; // [rsp+24h] [rbp-94h]
  __int64 v49; // [rsp+30h] [rbp-88h] BYREF
  __int128 v50; // [rsp+38h] [rbp-80h]
  __m128i v51; // [rsp+50h] [rbp-68h]
  __int64 v52; // [rsp+68h] [rbp-50h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v10 = a2;
  if ( dword_25274C > 0 && *(_DWORD *)(dbg + 16LL) == 12 )
    return 0;
  if ( a1[22].m128i_i32[0] == -1 )
  {
    v44 = dbg;
    if ( dbg )
    {
      a1[22].m128i_i32[0] = *(_DWORD *)(dbg + 16LL);
      a1[22].m128i_i32[1] = *(_QWORD *)(v44 + 32);
      a1[14].m128i_i64[1] = getinf();
      a1[22].m128i_i8[8] = *(_BYTE *)(dbg + 34LL) >> 7;
    }
  }
  sub_B3F40((__int64)a1, a2[1], a3, a4, a5, a6, a7, a8, a9, a10);
  v47 = *(char *)(dbg + 34LL) < 0
     && (dword_251B1C & 1) != 0
     && sub_C6150((unsigned int)dword_252588)
     && (unsigned int)sub_9E1E0() != 1
     && (unsigned int)sub_9E1E0() != 1
     && (unsigned int)sub_9E1E0() == 1;
  v11 = a2[1];
  v12 = *a2;
  v13 = (const __m128i *)*a2;
  if ( 40 * v11 )
  {
    while ( 1 )
    {
      v14 = _mm_loadu_si128(v13);
      v15 = v13[1].m128i_i64[1];
      v52 = 0;
      v16 = _mm_cvtsi128_si32(v14);
      v51 = v14;
      if ( v15 )
        break;
      v17 = 0;
      if ( v16 )
        goto LABEL_9;
LABEL_20:
      v13 = (const __m128i *)((char *)v13 + 40);
      if ( v13 == (const __m128i *)(v12 + 40 * v11) )
        return 1;
    }
    v21 = qalloc_or_throw();
    v22 = 0;
    v23 = v16;
    v24 = v21;
    v25 = v21;
    v26 = v10;
    v27 = 0;
    v28 = v26;
    do
    {
      v30 = v13[1].m128i_i64[0];
      *(_DWORD *)v24 = -2;
      *(_QWORD *)(v24 + 24) = 0;
      v31 = v30 + 40 * v27;
      *(_OWORD *)(v24 + 8) = v22;
      if ( v24 != v31 )
      {
        if ( *(int *)v31 >= -1 )
        {
          *(_QWORD *)(v24 + 8) = 0;
          *(_OWORD *)(v24 + 16) = 0;
          v29 = *(_QWORD *)(v31 + 16);
          if ( v29 )
          {
            v48 = v23;
            v46 = v28;
            v45 = v25;
            v40 = (void *)qalloc_or_throw();
            *(_QWORD *)(v24 + 24) = v29;
            *(_QWORD *)(v24 + 8) = v40;
            memcpy(v40, *(const void **)(v31 + 8), v29);
            *(_QWORD *)(v24 + 16) = v29;
            v25 = v45;
            v22 = 0;
            v28 = v46;
            v23 = v48;
          }
        }
        else
        {
          *(_QWORD *)(v24 + 8) = *(_QWORD *)(v31 + 8);
        }
        *(_DWORD *)v24 = *(_DWORD *)v31;
      }
      ++v27;
      v24 += 40;
      *(_DWORD *)(v24 - 8) = *(_DWORD *)(v31 + 32);
    }
    while ( v15 != v27 );
    v52 = v15;
    v17 = v25;
    v10 = v28;
    v16 = v23;
    if ( v23 )
    {
LABEL_9:
      if ( v47 )
      {
        sub_A0E90((__int64)xmmword_251F20);
        sub_B1640();
        if ( !v17 )
          goto LABEL_32;
        v41 = v52;
        v42 = v17;
        v43 = 0;
        if ( v52 )
        {
          do
          {
            if ( *(int *)v42 >= -1 && *(_QWORD *)(v42 + 8) )
            {
              *(_QWORD *)(v42 + 16) = 0;
              qfree();
            }
            ++v43;
            v42 += 40;
          }
          while ( v41 != v43 );
        }
        goto LABEL_19;
      }
      if ( v16 == 1 )
      {
        v49 = 0;
        v50 = 0;
        sub_A8480(&v49, *(int *)(dbg + 64LL));
        v32 = v49;
        v33 = v13[1].m128i_i64[0];
        if ( 40 * v13[1].m128i_i64[1] )
        {
          do
          {
            v34 = *(int *)(v33 + 32);
            v35 = *(_QWORD *)(v33 + 8);
            v33 += 40;
            *(_QWORD *)(v32 + 32 * v34 + 8) = v35;
          }
          while ( v33 != v13[1].m128i_i64[0] + 40 * v13[1].m128i_i64[1] );
        }
        sub_B0B20(a1, v32, v51.m128i_i32[1], v51.m128i_u64[1], 0);
        if ( v49 )
        {
          v36 = v50;
          if ( (_QWORD)v50 )
          {
            v37 = 0;
            v38 = v49;
            do
            {
              v39 = v38 + 32 * v37;
              if ( *(int *)v39 >= -1 && *(_QWORD *)(v39 + 8) )
              {
                *(_QWORD *)(v39 + 16) = 0;
                qfree();
                v38 = v49;
              }
              ++v37;
            }
            while ( v36 != v37 );
          }
          *(_QWORD *)&v50 = 0;
          qfree();
        }
      }
      else
      {
        sub_AEEC0(a1, v16, v51.m128i_u32[1], v51.m128i_u64[1]);
      }
      if ( !v17 )
      {
LABEL_32:
        v11 = v10[1];
        v12 = *v10;
        goto LABEL_20;
      }
      v15 = v52;
      if ( !v52 )
        goto LABEL_19;
    }
    else if ( !v25 )
    {
      goto LABEL_32;
    }
    v18 = v17;
    v19 = 0;
    do
    {
      if ( *(int *)v18 >= -1 )
      {
        if ( *(_QWORD *)(v18 + 8) )
        {
          *(_QWORD *)(v18 + 16) = 0;
          qfree();
        }
      }
      ++v19;
      v18 += 40;
    }
    while ( v15 != v19 );
LABEL_19:
    qfree();
    v11 = v10[1];
    v12 = *v10;
    goto LABEL_20;
  }
  return 1;
}

