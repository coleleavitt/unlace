__int64 __fastcall sub_E073E0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __m128i *v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r13
  int v17; // edx
  int v18; // eax
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  _OWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r9d
  size_t v26; // r10
  __int64 v27; // rax
  size_t v28; // rdx
  const __m128i *v29; // r13
  __m128i *v30; // r11
  __int64 v31; // rdx
  __m128i *v32; // rsi
  __m128i *v33; // rdx
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  unsigned int v36; // edx
  __int64 v37; // rcx
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  __int64 v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  unsigned __int64 v41; // [rsp+28h] [rbp-60h]
  int v42; // [rsp+34h] [rbp-54h]
  size_t v43; // [rsp+38h] [rbp-50h]
  __int64 *v44[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = *(unsigned int *)(a1 + 632);
  v7 = a2->m128i_i64[0];
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(a1 + 636) + *(_DWORD *)(a1 + 640))) )
  {
    v41 = a2->m128i_i64[0];
    LODWORD(v40) = 2 * v6;
    v39 = 24LL * (unsigned int)(2 * v6);
    v38.m128i_i64[0] = v39;
    v24 = sub_186B270(v39);
    v25 = v40;
    v26 = v39;
    v8 = v24;
    v10 = v39;
    v7 = v41;
    v27 = v24 + 8;
    v28 = v8 + v39 + 8;
    if ( (_DWORD)v40 )
    {
      do
      {
        *(_QWORD *)(v27 - 8) = 0;
        v27 += 24;
        *(_QWORD *)(v27 - 24) = 0;
        *(_QWORD *)(v27 - 16) = 0;
      }
      while ( v27 != v28 );
    }
    v29 = *(const __m128i **)(a1 + 624);
    v9 = v25 - 1;
    v11 = (__m128i *)(v8 + v26);
    v30 = (__m128i *)((char *)v29 + 24 * *(unsigned int *)(a1 + 632));
    if ( v29 != v30 )
    {
      do
      {
        while ( v29->m128i_i32[1] != 2 )
        {
          v29 = (const __m128i *)((char *)v29 + 24);
          if ( v30 == v29 )
            goto LABEL_45;
        }
        v31 = 24LL * (v29->m128i_i32[0] & v9);
        v32 = (__m128i *)(v8 + v31);
        if ( v31 == v26 )
        {
LABEL_55:
          if ( v32 == (__m128i *)v8 )
          {
LABEL_64:
            v43 = v26;
            v42 = v25;
            v41 = v10;
            LODWORD(v40) = v25 - 1;
            v39 = (__int64)v30;
            v38.m128i_i64[0] = v7;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v33 = (__m128i *)v8;
          while ( v33->m128i_i32[1] )
          {
            v33 = (__m128i *)((char *)v33 + 24);
            if ( v32 == v33 )
              goto LABEL_64;
          }
        }
        else
        {
          v33 = (__m128i *)(v8 + v31);
          while ( v33->m128i_i32[1] )
          {
            v33 = (__m128i *)((char *)v33 + 24);
            if ( v11 == v33 )
              goto LABEL_55;
          }
        }
        v34 = _mm_loadu_si128(v29);
        v29 = (const __m128i *)((char *)v29 + 24);
        *v33 = v34;
        v33[1].m128i_i64[0] = v29[-1].m128i_i64[1];
      }
      while ( v30 != v29 );
LABEL_45:
      v30 = *(__m128i **)(a1 + 624);
    }
    if ( v30 )
    {
      LODWORD(v41) = v25;
      v40 = v10;
      LODWORD(v39) = v25 - 1;
      v38.m128i_i64[0] = v7;
      sub_186B220(v30);
      v25 = v41;
      v10 = v40;
      v9 = v39;
      v7 = v38.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 624) = v8;
    *(_DWORD *)(a1 + 632) = v25;
    *(_DWORD *)(a1 + 640) = 0;
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 624);
    v9 = v6 - 1;
    v10 = 24 * v6;
    v11 = (__m128i *)(v8 + 24 * v6);
    if ( v7 )
    {
LABEL_3:
      if ( (v7 & 7) == 1 )
        v12 = v7 >> 3;
      else
        LODWORD(v12) = *(_DWORD *)(v7 - 8);
      goto LABEL_5;
    }
  }
  LODWORD(v12) = -1640531495;
LABEL_5:
  v13 = 24LL * ((unsigned int)v12 & v9);
  v14 = v8 + v13;
  if ( v13 != v10 )
  {
    v15 = v8 + v13;
    v16 = 0;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v15 + 4);
      if ( v17 == 2 )
      {
        if ( (_DWORD)v12 == *(_DWORD *)v15 && v7 == *(_QWORD *)(v15 + 8) )
        {
          v16 = v15;
          goto LABEL_26;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_24;
          v16 = v15;
          goto LABEL_25;
        }
        v16 = v15;
      }
      v15 += 24;
      if ( (__m128i *)v15 == v11 )
        goto LABEL_17;
    }
  }
  v16 = 0;
  while ( 1 )
  {
LABEL_17:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v18 = *(_DWORD *)(v8 + 4);
    if ( v18 != 2 )
      break;
    if ( (_DWORD)v12 == *(_DWORD *)v8 && v7 == *(_QWORD *)(v8 + 8) )
    {
      v16 = v8;
      goto LABEL_26;
    }
LABEL_16:
    v8 += 24;
  }
  if ( v18 )
  {
    v16 = v8;
    goto LABEL_16;
  }
  if ( v16 )
LABEL_24:
    --*(_DWORD *)(a1 + 640);
  else
    v16 = v8;
LABEL_25:
  *(_QWORD *)(v16 + 8) = v7;
  *(_QWORD *)(v16 + 16) = 0;
  *(_DWORD *)(v16 + 4) = 2;
  *(_DWORD *)v16 = v12;
  ++*(_DWORD *)(a1 + 636);
LABEL_26:
  sub_DFBCB0(a1);
  result = sub_DF6930((unsigned __int64 *)(v16 + 16), a3);
  if ( !(_BYTE)result )
  {
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v20 = *(_QWORD *)(v16 + 16);
    if ( v20 )
    {
      if ( (v20 & 7) != 0 )
      {
        v44[0] = (__int64 *)a3;
        result = (__int64)sub_656920(v20 & 0xFFFFFFFFFFFFFFF8LL, v44);
      }
      else
      {
        v21 = sub_186B270(0x18u);
        v22 = (_OWORD *)sub_186B270(0x40u);
        *(_QWORD *)v21 = v22;
        *v22 = 0;
        v22[1] = 0;
        v22[2] = 0;
        v22[3] = 0;
        v23 = *(_QWORD *)(v16 + 16);
        *(_QWORD *)(v21 + 8) = 8;
        *(_DWORD *)(v21 + 16) = 0;
        v44[0] = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
        sub_656920(v21, v44);
        v44[0] = (__int64 *)a3;
        result = (__int64)sub_656920(v21, v44);
        *(_QWORD *)(v16 + 16) = v21 | 1;
      }
    }
    else
    {
      *(_QWORD *)(v16 + 16) = a3;
    }
  }
  if ( !*(_BYTE *)(a1 + 257) )
  {
    result = *(_QWORD *)(a1 + 720);
    v35 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)(unsigned __int64)a3);
    if ( !result || (v36 = *(_DWORD *)(result - 4), v36 == *(_DWORD *)(result - 8)) )
    {
      v38 = v35;
      sub_E0FAA0(a1 + 720);
      result = *(_QWORD *)(a1 + 720);
      v37 = *(unsigned int *)(result - 4);
      *(__m128i *)(result + 16 * v37) = _mm_load_si128(&v38);
      *(_DWORD *)(result - 4) = v37 + 1;
    }
    else
    {
      *(__m128i *)(result + 16LL * v36) = v35;
      *(_DWORD *)(result - 4) = v36 + 1;
    }
  }
  return result;
}

