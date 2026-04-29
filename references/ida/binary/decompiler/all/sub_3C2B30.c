__int64 __fastcall sub_3C2B30(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4, __int64 a5, int *a6, unsigned int a7)
{
  unsigned int v9; // ecx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r13
  const __m128i *outctx; // rbx
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  int v19; // r14d
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // r14
  _QWORD *v27; // rdx
  __m128i v28; // [rsp+10h] [rbp-498h] BYREF
  __int64 v29; // [rsp+20h] [rbp-488h]
  __m256i v30; // [rsp+30h] [rbp-478h] BYREF
  int v31; // [rsp+50h] [rbp-458h]
  const __m128i *v32; // [rsp+58h] [rbp-450h]
  char v33[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v34; // [rsp+468h] [rbp-40h]

  v9 = *(_DWORD *)(a1 + 12);
  v34 = __readfsqword(0x28u);
  if ( v9 >= a6[16] )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v11 = *((_QWORD *)a6 + 66);
    v12 = *(_QWORD *)(v11 + 8LL * v9);
    if ( v12 )
      v13 = sub_32D9C0(*(_QWORD *)(v11 + 8LL * v9), *(unsigned int *)(a1 + 16));
    else
      v13 = 0;
  }
  qsnprintf();
  outctx = (const __m128i *)create_outctx();
  (*(void (__fastcall **)(const __m128i *, __int64, _QWORD))(outctx->m128i_i64[0] + 224))(outctx, a2, a7);
  (*(void (__fastcall **)(const __m128i *, char *, _QWORD))(outctx->m128i_i64[0] + 192))(outctx, v33, 0);
  *a4 = 6;
  *a3 = 0;
  if ( !v12 )
  {
    (*(void (__fastcall **)(const __m128i *, char *, _QWORD))(outctx->m128i_i64[0] + 136))(outctx, "empty block", 0);
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v12 + 48) == v13 && (*((_BYTE *)a6 + 2) & 0x40) == 0 )
  {
    memset(&v30, 0, 24);
    sub_1B4200(v12, &v30);
    if ( v30.m256i_i64[1] )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = _mm_loadu_si128(outctx + 2);
        v22 = (__int64 *)(v30.m256i_i64[0] + 24 * v20);
        v23 = outctx[1].m128i_i64[1];
        outctx[1].m128i_i64[1] = *v22;
        outctx[2].m128i_i64[0] = v22[1];
        outctx[2].m128i_i64[1] = v22[2];
        *v22 = v23;
        *(__m128i *)(v22 + 1) = v21;
        (*(void (__fastcall **)(const __m128i *, _QWORD))(outctx->m128i_i64[0] + 128))(outctx, 0);
        ++v19;
        v24 = v30.m256i_i64[1];
        v20 = v19;
      }
      while ( (unsigned __int64)v19 < v30.m256i_i64[1] );
      v25 = v30.m256i_i64[0];
      if ( !v30.m256i_i64[0] )
        goto LABEL_6;
      if ( v30.m256i_i64[1] )
      {
        v26 = 0;
        do
        {
          v27 = (_QWORD *)(v25 + 24 * v26);
          if ( *v27 )
          {
            v27[1] = 0;
            qfree();
            v25 = v30.m256i_i64[0];
          }
          ++v26;
        }
        while ( v24 != v26 );
      }
    }
    else if ( !v30.m256i_i64[0] )
    {
      goto LABEL_6;
    }
    v30.m256i_i64[1] = 0;
    qfree();
  }
LABEL_6:
  v29 = 0;
  v28 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a6 + 374)), (__m128i)(unsigned __int64)a6);
  if ( v13 )
  {
    v30.m256i_i64[0] = (__int64)&off_4E81A0;
    v15 = *a6;
    memset(&v30.m256i_u64[1], 0, 24);
    v31 = 0;
    v32 = outctx;
    v16 = (v15 >> 20) & 4;
    if ( (v15 & 0x40000000) != 0 )
      v16 = (v15 >> 20) & 4 | 2;
    if ( (v15 & 0x20000000) != 0 )
      v16 = (unsigned int)v16 | 1;
    sub_1B31B0(v13, &v30, &v28, v16);
    v30.m256i_i64[0] = (__int64)&off_4E2D38;
    if ( v30.m256i_i64[1] )
    {
      v30.m256i_i64[2] = 0;
      qfree();
    }
  }
  if ( *(_QWORD *)(v12 + 56) == v13 && (*a6 & 0x400000) == 0 )
    (*(void (__fastcall **)(const __m128i *))(outctx->m128i_i64[0] + 160))(outctx);
LABEL_14:
  v17 = (*(__int64 (__fastcall **)(const __m128i *, _QWORD))(outctx->m128i_i64[0] + 144))(outctx, 0);
  if ( outctx )
    (*(void (__fastcall **)(const __m128i *))(outctx->m128i_i64[0] + 8))(outctx);
  return v17;
}
