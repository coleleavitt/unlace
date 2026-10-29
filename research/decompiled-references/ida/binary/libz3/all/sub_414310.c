__int64 __fastcall sub_414310(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 *v5; // r12
  _QWORD *v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rax
  bool v9; // zf
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm2
  __int64 v16; // rax
  _QWORD *v17; // rax
  void *v18; // rdi
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  _QWORD *v21; // rdx
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v29[3]; // [rsp+8h] [rbp-60h]
  unsigned int v30; // [rsp+14h] [rbp-54h]
  __int64 v31; // [rsp+18h] [rbp-50h]
  __int64 v32[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(unsigned int *)(a1 + 72);
  v2 = *(_QWORD **)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 8);
  v32[1] = 0;
  v4 = &v2[2 * v1];
  v32[0] = v3;
  if ( v2 != v4 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v4 == v2 )
        return sub_2334C0(v32);
    }
    if ( v4 != v2 )
    {
      v5 = nullptr;
      do
      {
        v6 = (_QWORD *)v2[1];
        v7 = *v6;
        if ( !*(_DWORD *)(*v6 + 68LL) )
        {
          v11 = sub_186B270(0x48u);
          v12 = v6[1];
          *(_DWORD *)v11 = 0;
          v13 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
          *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64((__m128i)v12, v13);
          if ( v12 )
            ++*(_DWORD *)(v12 + 8);
          v14 = v6[3];
          *(_QWORD *)(v11 + 24) = 0;
          if ( v14 )
          {
            v15 = _mm_cvtsi32_si128(*(_DWORD *)(v14 - 4));
            v16 = *(unsigned int *)(v14 - 8);
            v31 = v13.m128i_i64[0];
            v29[0] = v16;
            v30 = _mm_cvtsi128_si32(v15);
            v17 = (_QWORD *)sub_186B270(8 * v16 + 8);
            v18 = v17 + 1;
            v19 = _mm_cvtsi32_si128(v29[0]);
            v20 = _mm_cvtsi32_si128(v30);
            v21 = v17;
            *(_QWORD *)(v11 + 24) = v17 + 1;
            v22 = (_QWORD *)v6[3];
            v13.m128i_i64[0] = v31;
            *v17 = _mm_unpacklo_epi32(v19, v20).m128i_u64[0];
            if ( v22 )
            {
              v23 = *((unsigned int *)v22 - 1);
              v24 = 8 * v23;
              if ( v23 <= 1 )
              {
                v25 = *(_DWORD *)v11 + 1;
                if ( v24 == 8 )
                  v21[1] = *v22;
              }
              else
              {
                *(_QWORD *)v29 = v13.m128i_i64[0];
                memmove(v18, v22, 8 * v23);
                v13.m128i_i64[0] = *(_QWORD *)v29;
                v25 = *(_DWORD *)v11 + 1;
              }
            }
            else
            {
              v25 = *(_DWORD *)v11 + 1;
            }
          }
          else
          {
            v25 = 1;
          }
          *(_QWORD *)(v11 + 32) = v7;
          *(_QWORD *)(v11 + 40) = 0;
          *(_QWORD *)(v11 + 48) = 0;
          *(_BYTE *)(v11 + 64) = 1;
          *(_DWORD *)v11 = v25;
          *(_QWORD *)(v11 + 56) = v13.m128i_i64[0];
          if ( v5 )
          {
            v9 = (*(_DWORD *)v5)-- == 1;
            if ( v9 )
            {
              sub_3FCDD0(v5[6], v5[7]);
              sub_41D1C0(v5 + 5);
              v26 = v5[3];
              if ( v26 )
                sub_186B220((void *)(v26 - 8));
              sub_3FCDF0(v5[1], v5[2]);
              sub_186B220(v5);
            }
          }
          sub_413A90(a1, v11, 0);
          v5 = (__int64 *)v11;
        }
        v8 = v2 + 2;
        if ( v4 == v2 + 2 )
          break;
        while ( 1 )
        {
          v2 = v8;
          if ( *v8 > 1u )
            break;
          v8 += 2;
          if ( v4 == v8 )
            goto LABEL_13;
        }
      }
      while ( v4 != v8 );
LABEL_13:
      if ( v5 )
      {
        v9 = (*(_DWORD *)v5)-- == 1;
        if ( v9 )
        {
          sub_3FCDD0(v5[6], v5[7]);
          sub_41D1C0(v5 + 5);
          v27 = v5[3];
          if ( v27 )
            sub_186B220((void *)(v27 - 8));
          sub_3FCDF0(v5[1], v5[2]);
          sub_186B220(v5);
        }
      }
    }
  }
  return sub_2334C0(v32);
}

