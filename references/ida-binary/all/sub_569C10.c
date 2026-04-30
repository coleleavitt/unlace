__int64 __fastcall sub_569C10(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5, __int64 a6)
{
  int v7; // r14d
  unsigned int v8; // ecx
  __int64 v9; // r14
  int v10; // r15d
  __int64 v11; // r15
  __int64 result; // rax
  unsigned int v13; // ebx
  __int64 v14; // rsi
  unsigned int i; // ebp
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  unsigned int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r13d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const __m128i *v31; // rdx
  const __m128i *v32; // rax
  __int64 v33; // rdi
  __m128i v35; // [rsp+30h] [rbp-78h] BYREF
  __m128i v36; // [rsp+40h] [rbp-68h] BYREF
  __m128i v37; // [rsp+50h] [rbp-58h] BYREF
  __m128i v38[4]; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a1 + 80);
  if ( (unsigned __int16)v7 >= v8 )
    v9 = a1 + 88;
  else
    v9 = *(_QWORD *)(a1 + 72) + 16LL * (unsigned __int16)v7;
  v10 = *(_DWORD *)(a3 + 4);
  if ( (unsigned __int16)v10 >= v8 )
    v11 = a1 + 88;
  else
    v11 = *(_QWORD *)(a1 + 72) + 16LL * (unsigned __int16)v10;
  result = (__int64)a4;
  v13 = *(_DWORD *)(v9 + 8);
  v14 = *(unsigned int *)(v11 + 8);
  *a4 = 1;
  *a5 = 1;
  if ( v13 )
  {
    v13 = 0;
    for ( i = 0; i < *(_DWORD *)(v9 + 8); ++i )
    {
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v14 )
        {
          *a5 = 0;
          return result;
        }
        v31 = (const __m128i *)(*(_QWORD *)v9 + 40LL * i);
        v32 = (const __m128i *)(*(_QWORD *)v11 + 40LL * v13);
        v33 = v32[1].m128i_i64[0];
        if ( v31[1].m128i_i64[0] == v33 )
          break;
        v16 = _mm_loadu_si128(v31 + 1);
        v17 = _mm_loadu_si128(v32);
        v18 = _mm_loadu_si128(v32 + 1);
        v35 = _mm_loadu_si128(v31);
        v36 = v16;
        v37 = v17;
        v38[0] = v18;
        v19 = sub_565DC0(v33, v14, (__int64)v31, 5LL * v13, (__int64)a5, a6, v35.m128i_u32[0]);
        result = sub_565DC0(v33, v14, v20, v21, v22, v23, _mm_load_si128(&v37).m128i_u32[0]);
        if ( v19 < (unsigned int)result )
          goto LABEL_22;
        if ( (unsigned int)result < v19 )
          goto LABEL_21;
        v26 = sub_566CC0(
                v33,
                v14,
                v24,
                v25,
                (__int64)a5,
                a6,
                (__int128)_mm_load_si128(&v35),
                (__int128)_mm_load_si128(&v36));
        result = sub_566CC0(v33, v14, v27, v28, v29, v30, (__int128)_mm_load_si128(&v37), (__int128)_mm_load_si128(v38));
        if ( (unsigned int)result < v26 )
        {
LABEL_22:
          *a5 = 0;
          v14 = *(unsigned int *)(v11 + 8);
          ++i;
          goto LABEL_13;
        }
        if ( v26 < (unsigned int)result )
        {
LABEL_21:
          result = (__int64)a4;
          v14 = *(unsigned int *)(v11 + 8);
          ++v13;
          *a4 = 0;
          goto LABEL_13;
        }
        v14 = *(unsigned int *)(v11 + 8);
LABEL_12:
        result = (__int64)a4;
        *a5 = 0;
        ++i;
        ++v13;
        *a4 = 0;
LABEL_13:
        if ( i >= *(_DWORD *)(v9 + 8) )
          goto LABEL_18;
      }
      result = v32[2].m128i_u32[0];
      if ( v31[2].m128i_i32[0] != (_DWORD)result )
        goto LABEL_12;
      ++v13;
    }
  }
LABEL_18:
  if ( v13 < (unsigned int)v14 )
  {
    result = (__int64)a4;
    *a4 = 0;
  }
  return result;
}
