signed int *__fastcall sub_B6C040(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int *v5; // rsi
  unsigned int v6; // ebp
  __m128i v7; // xmm0
  unsigned int v8; // r14d
  __int64 v9; // rcx
  int v10; // esi
  void *v11; // r15
  unsigned int *v12; // rsi
  int v13; // r13d
  __int64 v14; // rax
  char *v15; // rdx
  signed int *result; // rax
  __int64 v17; // rbp
  int *v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int *v24; // rdi
  __int64 v25; // r8
  char *v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+10h] [rbp-98h] BYREF
  int v28[2]; // [rsp+18h] [rbp-90h] BYREF
  void *v29; // [rsp+20h] [rbp-88h]
  int v30[2]; // [rsp+28h] [rbp-80h]
  int v31[30]; // [rsp+30h] [rbp-78h] BYREF

  v4 = sub_B645B0(a1, (unsigned int *)a2);
  v5 = *(unsigned int **)(a2 + 32);
  v6 = v4;
  v29 = v31;
  v31[0] = v4 ^ 1;
  v7 = _mm_cvtsi32_si128(v4);
  *(_QWORD *)v30 = 0x1000000001LL;
  v8 = sub_B645B0(a1, v5);
  v27 = _mm_unpacklo_epi32(v7, _mm_cvtsi32_si128(v8)).m128i_u64[0];
  sub_B6BA00(a1, (unsigned int *)&v27);
  v9 = (unsigned int)v30[0];
  v10 = v8 ^ 1;
  if ( v30[0] >= (unsigned int)v30[1] )
  {
    v21 = (unsigned int)(2 * v30[1]);
    v22 = sub_186B270(4 * v21);
    v23 = 0;
    v24 = (int *)v29;
    v11 = (void *)v22;
    v9 = (unsigned int)v30[0];
    v25 = 4LL * (unsigned int)v30[0];
    if ( v30[0] )
    {
      do
      {
        *(_DWORD *)(v22 + v23) = v24[v23 / 4];
        v23 += 4LL;
      }
      while ( v23 != v25 );
    }
    if ( v24 && v24 != v31 )
    {
      sub_186B220(v24);
      v9 = (unsigned int)v30[0];
    }
    v29 = v11;
    v30[1] = v21;
  }
  else
  {
    v11 = v29;
  }
  *((_DWORD *)v11 + v9) = v10;
  v12 = *(unsigned int **)(a2 + 40);
  ++v30[0];
  v13 = sub_B645B0(a1, v12);
  *(_QWORD *)v28 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v13 ^ 1u)).m128i_u64[0];
  sub_B6BA00(a1, (unsigned int *)v28);
  v14 = (unsigned int)v30[0];
  if ( v30[0] >= (unsigned int)v30[1] )
  {
    v17 = (unsigned int)(2 * v30[1]);
    v15 = (char *)sub_186B270(4 * v17);
    v18 = (int *)v29;
    v19 = 0;
    v14 = (unsigned int)v30[0];
    v20 = 4LL * (unsigned int)v30[0];
    if ( v30[0] )
    {
      do
      {
        *(_DWORD *)&v15[v19] = v18[v19 / 4];
        v19 += 4LL;
      }
      while ( v19 != v20 );
    }
    if ( v18 && v18 != v31 )
    {
      v26 = v15;
      sub_186B220(v18);
      v14 = (unsigned int)v30[0];
      v15 = v26;
    }
    v29 = v15;
    v30[1] = v17;
  }
  else
  {
    v15 = (char *)v29;
  }
  *(_DWORD *)&v15[4 * v14] = v13;
  result = sub_B6A4E0(a1, ++v30[0], (unsigned int *)v15);
  if ( v29 )
  {
    if ( v29 != v31 )
      return (signed int *)sub_186B220(v29);
  }
  return result;
}

