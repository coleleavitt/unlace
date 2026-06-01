__int64 __fastcall sub_578C00(__int64 a1, const void **a2)
{
  _DWORD *v2; // r13
  __m128i v3; // xmm0
  unsigned int v4; // r15d
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // r12
  size_t v8; // rdx
  _QWORD *v9; // rax
  void *v10; // rbp
  void *v11; // rcx
  size_t v12; // rdx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 i; // rbx
  int v21; // eax
  unsigned int *v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // ebx
  int v26; // eax
  unsigned int *v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // [rsp+4h] [rbp-54h]
  _QWORD v30[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(v2 - 2));
    v4 = *(v2 - 1);
    v29 = _mm_cvtsi128_si32(v3);
    v5 = (_QWORD *)sub_186B270(8LL * v29 + 8);
    v6 = *a2;
    v7 = v5;
    v2 = v5 + 1;
    *v5 = v3.m128i_i64[0];
    if ( v6 )
    {
      v8 = 8LL * *((unsigned int *)v6 - 1);
      if ( v8 <= 8 )
      {
        if ( v8 == 8 )
          v5[1] = *v6;
      }
      else
      {
        memmove(v5 + 1, v6, v8);
      }
    }
    v9 = (_QWORD *)sub_186B270(8LL * v29 + 8);
    v10 = v9;
    v11 = v9 + 1;
    v12 = 8LL * *((unsigned int *)v7 + 1);
    *v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v4)).m128i_u64[0];
    if ( v12 <= 8 )
    {
      if ( v12 == 8 )
        v9[1] = v7[1];
    }
    else
    {
      v11 = memcpy(v9 + 1, v2, v12);
    }
    v30[0] = v11;
    v13 = sub_5783B0((__int64)v30, v4);
    sub_186B220(v10);
  }
  else
  {
    v30[0] = 0;
    v13 = sub_5783B0((__int64)v30, 0);
  }
  v14 = *(unsigned int *)(a1 + 64);
  v15 = *(_QWORD *)(a1 + 56);
  v16 = v14 - 1;
  v14 *= 24;
  v17 = v15 + v14;
  v18 = 24LL * (v13 & v16);
  v19 = v15 + v18;
  if ( v18 != v14 )
  {
    for ( i = v15 + v18; v17 != i; i += 24 )
    {
      v21 = *(_DWORD *)(i + 4);
      if ( v21 != 2 )
      {
        if ( !v21 )
          goto LABEL_19;
        continue;
      }
      if ( *(_DWORD *)i == v13 )
      {
        v22 = *(unsigned int **)(i + 8);
        if ( v22 )
        {
          v23 = *(v22 - 1);
          if ( !v2 )
          {
            if ( !(_DWORD)v23 )
              goto LABEL_18;
            continue;
          }
        }
        else
        {
          if ( !v2 )
            return 1;
          v23 = 0;
        }
        if ( (_DWORD)v23 == *(v2 - 1) && !memcmp(v22, v2, 8 * v23) )
        {
LABEL_18:
          v24 = 1;
          goto LABEL_20;
        }
      }
    }
  }
  for ( ; v19 != v15; v15 += 24 )
  {
    v26 = *(_DWORD *)(v15 + 4);
    if ( v26 != 2 )
    {
      if ( !v26 )
        break;
      continue;
    }
    if ( *(_DWORD *)v15 == v13 )
    {
      v27 = *(unsigned int **)(v15 + 8);
      if ( v27 )
      {
        v28 = *(v27 - 1);
        if ( !v2 )
        {
          if ( !(_DWORD)v28 )
            goto LABEL_18;
          continue;
        }
      }
      else
      {
        if ( !v2 )
          return 1;
        v28 = 0;
      }
      if ( (_DWORD)v28 == *(v2 - 1) && !memcmp(v27, v2, 8 * v28) )
        goto LABEL_18;
    }
  }
LABEL_19:
  v24 = 0;
  if ( v2 )
LABEL_20:
    sub_186B220(v2 - 2);
  return v24;
}

