unsigned __int64 __fastcall sub_15C580(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r13
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  _QWORD *v10; // rbp
  int v11; // edx
  __int64 v12; // rax
  __m128i v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+10h] [rbp-C8h]
  __int64 v21; // [rsp+20h] [rbp-B8h]
  __int128 v22; // [rsp+28h] [rbp-B0h]
  __m128i v23; // [rsp+38h] [rbp-A0h] BYREF
  int v24; // [rsp+48h] [rbp-90h]
  int v25; // [rsp+50h] [rbp-88h]
  __int64 v26; // [rsp+58h] [rbp-80h]
  __int128 v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int128 v29; // [rsp+78h] [rbp-60h]
  __m128i v30; // [rsp+88h] [rbp-50h] BYREF
  int v31; // [rsp+98h] [rbp-40h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-30h]

  v1 = *(int *)(a1 + 24);
  v32 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v1 != v2 )
  {
    v19[0] = 0;
    v19[1] = 0;
    v21 = 0;
    v24 = 0;
    v20 = 0;
    v22 = 0;
    v23 = 0;
    if ( v1 >= v2 )
    {
      v3 = *(_QWORD *)a1;
      v4 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)v19 < *(_QWORD *)a1 || (unsigned __int64)v19 >= v3 + 80 * v4 )
      {
        if ( v4 >= v1 || (v17 = qvector_reserve(), v2 = *(_QWORD *)(a1 + 8), *(_QWORD *)a1 = v17, v3 = v17, v2 < v1) )
        {
          v14 = _mm_loadu_si128(&v23);
          v15 = 80 * v2;
          while ( 1 )
          {
            v16 = v15 + v3;
            ++v2;
            v15 += 80;
            *(_DWORD *)v16 = 0;
            *(_QWORD *)(v16 + 8) = 0;
            *(_QWORD *)(v16 + 32) = 0;
            *(_DWORD *)(v16 + 72) = 0;
            *(_OWORD *)(v16 + 16) = 0;
            *(_OWORD *)(v16 + 40) = 0;
            *(__m128i *)(v16 + 56) = v14;
            if ( v1 == v2 )
              break;
            v3 = *(_QWORD *)a1;
          }
        }
      }
      else
      {
        v27 = 0;
        v29 = 0;
        v5 = _mm_loadu_si128(&v23);
        v25 = 0;
        v26 = 0;
        v28 = 0;
        v31 = 0;
        v30 = v5;
        if ( v4 >= v1 || (v18 = qvector_reserve(), v2 = *(_QWORD *)(a1 + 8), *(_QWORD *)a1 = v18, v3 = v18, v2 < v1) )
        {
          v6 = _mm_loadu_si128(&v30);
          v7 = 80 * v2;
          while ( 1 )
          {
            v8 = v7 + v3;
            ++v2;
            v7 += 80;
            *(_DWORD *)v8 = 0;
            *(_QWORD *)(v8 + 8) = 0;
            *(_QWORD *)(v8 + 32) = 0;
            *(_DWORD *)(v8 + 72) = 0;
            *(_OWORD *)(v8 + 16) = 0;
            *(_OWORD *)(v8 + 40) = 0;
            *(__m128i *)(v8 + 56) = v6;
            if ( v1 == v2 )
              break;
            v3 = *(_QWORD *)a1;
          }
        }
      }
      *(_QWORD *)(a1 + 8) = v1;
LABEL_17:
      v11 = 0;
      v12 = 0;
      do
      {
        *(_DWORD *)(*(_QWORD *)a1 + 80 * v12) = v11++;
        v12 = v11;
      }
      while ( (unsigned __int64)v11 < *(_QWORD *)(a1 + 8) );
      return v32 - __readfsqword(0x28u);
    }
    v9 = v1;
    do
    {
      v10 = (_QWORD *)(*(_QWORD *)a1 + 80 * v9);
      if ( v10[4] )
      {
        v10[5] = 0;
        qfree();
      }
      if ( v10[1] )
      {
        v10[2] = 0;
        qfree();
      }
      ++v9;
    }
    while ( v9 < v2 );
    *(_QWORD *)(a1 + 8) = v1;
    if ( v1 )
      goto LABEL_17;
  }
  return v32 - __readfsqword(0x28u);
}

