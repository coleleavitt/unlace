__int64 __fastcall sub_3C0300(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __int64 a9,
        int *a10,
        unsigned int a11)
{
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rax
  int *v18; // r13
  const __m128i *outctx; // rbx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ebp
  int v24; // r14d
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 *v33; // rdx
  __int64 v34; // rax
  __m128i v35; // [rsp+10h] [rbp-498h] BYREF
  __int64 v36; // [rsp+20h] [rbp-488h]
  __m256i v37; // [rsp+30h] [rbp-478h] BYREF
  int v38; // [rsp+50h] [rbp-458h]
  const __m128i *v39; // [rsp+58h] [rbp-450h]
  _BYTE v40[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v41; // [rsp+468h] [rbp-40h]

  v13 = *(unsigned int *)(a1 + 12);
  v41 = __readfsqword(0x28u);
  if ( (unsigned int)v13 >= a10[16] )
  {
    v16 = 0;
    v18 = nullptr;
  }
  else
  {
    v15 = *((_QWORD *)a10 + 66);
    v16 = *(_QWORD *)(v15 + 8LL * (unsigned int)v13);
    if ( v16 )
    {
      v17 = sub_329800(*(_QWORD *)(v15 + 8LL * (unsigned int)v13), *(_DWORD *)(a1 + 16));
      v13 = *(unsigned int *)(a1 + 12);
      v18 = (int *)v17;
    }
    else
    {
      v18 = nullptr;
    }
  }
  qsnprintf(v40, 1024, byte_3F3031, v13, *(unsigned int *)(a1 + 16));
  outctx = (const __m128i *)create_outctx(-1, 0, 0);
  (*(void (__fastcall **)(const __m128i *, __int64, _QWORD))(outctx->m128i_i64[0] + 224))(outctx, a2, a11);
  (*(void (__fastcall **)(const __m128i *, _BYTE *, _QWORD))(outctx->m128i_i64[0] + 192))(outctx, v40, 0);
  *a4 = 6;
  *a3 = 0;
  if ( !v16 )
  {
    (*(void (__fastcall **)(const __m128i *, char *, _QWORD))(outctx->m128i_i64[0] + 136))(outctx, "empty block", 0);
    goto LABEL_14;
  }
  if ( *(int **)(v16 + 48) == v18 && (*((_BYTE *)a10 + 2) & 0x40) == 0 )
  {
    memset(&v37, 0, 24);
    sub_1B0280(v16, v37.m256i_i64, 0.0, a6, a7, a8);
    if ( v37.m256i_i64[1] )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = _mm_loadu_si128(outctx + 2);
        v27 = (__int64 *)(v37.m256i_i64[0] + 24 * v25);
        v28 = outctx[1].m128i_i64[1];
        outctx[1].m128i_i64[1] = *v27;
        outctx[2].m128i_i64[0] = v27[1];
        outctx[2].m128i_i64[1] = v27[2];
        *v27 = v28;
        *(__m128i *)(v27 + 1) = v26;
        (*(void (__fastcall **)(const __m128i *, _QWORD))(outctx->m128i_i64[0] + 128))(outctx, 0);
        ++v24;
        v29 = v37.m256i_i64[1];
        v25 = v24;
      }
      while ( (unsigned __int64)v24 < v37.m256i_i64[1] );
      v30 = v37.m256i_i64[0];
      v31 = v37.m256i_i64[0];
      if ( !v37.m256i_i64[0] )
        goto LABEL_6;
      if ( v37.m256i_i64[1] )
      {
        v32 = 0;
        do
        {
          v33 = (__int64 *)(v30 + 24 * v32);
          v34 = *v33;
          if ( *v33 )
          {
            v33[1] = 0;
            qfree(v34);
            v30 = v37.m256i_i64[0];
          }
          ++v32;
          v31 = v30;
        }
        while ( v29 != v32 );
      }
    }
    else
    {
      v31 = v37.m256i_i64[0];
      if ( !v37.m256i_i64[0] )
        goto LABEL_6;
    }
    v37.m256i_i64[1] = 0;
    qfree(v31);
  }
LABEL_6:
  v36 = 0;
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a10 + 374)), (__m128i)(unsigned __int64)a10);
  if ( v18 )
  {
    v37.m256i_i64[0] = (__int64)&off_4B5440;
    v20 = *a10;
    memset(&v37.m256i_u64[1], 0, 24);
    v38 = 0;
    v39 = outctx;
    v21 = (v20 >> 20) & 4;
    if ( (v20 & 0x40000000) != 0 )
      v21 = (v20 >> 20) & 4 | 2;
    if ( (v20 & 0x20000000) != 0 )
      v21 |= 1u;
    sub_1AF2A0(v18, &v37, (__int64)&v35, v21);
    v37.m256i_i64[0] = (__int64)&off_4AFE38;
    if ( v37.m256i_i64[1] )
    {
      v37.m256i_i64[2] = 0;
      qfree(v37.m256i_i64[1]);
    }
  }
  if ( *(int **)(v16 + 56) == v18 && (*a10 & 0x400000) == 0 )
    (*(void (__fastcall **)(const __m128i *))(outctx->m128i_i64[0] + 160))(outctx);
LABEL_14:
  v22 = (*(__int64 (__fastcall **)(const __m128i *, _QWORD))(outctx->m128i_i64[0] + 144))(outctx, 0);
  if ( outctx )
    (*(void (__fastcall **)(const __m128i *))(outctx->m128i_i64[0] + 8))(outctx);
  return v22;
}
