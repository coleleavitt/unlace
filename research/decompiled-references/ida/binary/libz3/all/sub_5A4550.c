__int64 __fastcall sub_5A4550(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  unsigned int *v20; // rcx
  size_t v21; // rdx
  __int64 result; // rax
  __int64 v23; // r13
  __int64 v24; // r13
  unsigned __int64 v25; // rbx
  __int64 v26; // rdi
  unsigned int v27; // [rsp+Ch] [rbp-2Ch]
  unsigned int v28; // [rsp+Ch] [rbp-2Ch]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16) == 0;
  *(_QWORD *)a1 = qword_1C665B0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v4;
  if ( !v5 )
    sub_52CD90((_QWORD *)(a1 + 16), (_QWORD *)(a2 + 16));
  v6 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = v6;
  *(_QWORD *)a1 = &off_1C52390;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4);
    v9 = *(unsigned int *)(v7 - 8);
    v27 = v9;
    v10 = (_QWORD *)sub_186B270(8 * v9 + 8);
    v11 = *(_QWORD **)(a2 + 32);
    *(_QWORD *)(a1 + 32) = v10 + 1;
    *v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v8)).m128i_u64[0];
    if ( v11 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memmove(v10 + 1, v11, v12);
      }
    }
  }
  v13 = *(_DWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 48) == 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 40) = v13;
  if ( !v5 )
    sub_5ACAB0(a1 + 48, a2 + 48);
  v5 = *(_QWORD *)(a2 + 56) == 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( !v5 )
    sub_5ACAB0(a1 + 56, a2 + 56);
  v5 = *(_QWORD *)(a2 + 64) == 0;
  *(_QWORD *)(a1 + 64) = 0;
  if ( !v5 )
    sub_52CD90((_QWORD *)(a1 + 64), (_QWORD *)(a2 + 64));
  v5 = *(_QWORD *)(a2 + 72) == 0;
  *(_QWORD *)(a1 + 72) = 0;
  if ( !v5 )
    sub_5ACAB0(a1 + 72, a2 + 72);
  v5 = *(_QWORD *)(a2 + 80) == 0;
  *(_QWORD *)(a1 + 80) = 0;
  if ( !v5 )
    sub_5ACAB0(a1 + 80, a2 + 80);
  v14 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
  v15 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 112) = 0;
  if ( !v15 )
  {
    v5 = *(_QWORD *)(a2 + 120) == 0;
    *(_QWORD *)(a1 + 120) = 0;
    if ( v5 )
    {
      result = *(unsigned int *)(a2 + 128);
      *(_QWORD *)(a1 + 152) = 0;
      *(_OWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 128) = result;
      return result;
    }
LABEL_22:
    sub_5ACAB0(a1 + 120, a2 + 120);
    result = *(unsigned int *)(a2 + 128);
    v20 = *(unsigned int **)(a1 + 112);
    *(_QWORD *)(a1 + 152) = 0;
    *(_OWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 128) = result;
    if ( !v20 )
      return result;
    goto LABEL_23;
  }
  v16 = *(_DWORD *)(v15 - 4);
  v17 = *(unsigned int *)(v15 - 8);
  v28 = v17;
  v18 = (_QWORD *)sub_186B270(8 * v17 + 8);
  v19 = *(_QWORD **)(a2 + 112);
  v20 = (unsigned int *)(v18 + 1);
  *(_QWORD *)(a1 + 112) = v18 + 1;
  *v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v16)).m128i_u64[0];
  if ( v19 )
  {
    v21 = 8LL * *((unsigned int *)v19 - 1);
    if ( v21 <= 8 )
    {
      if ( v21 == 8 )
        v18[1] = *v19;
    }
    else
    {
      v20 = (unsigned int *)memmove(v18 + 1, v19, v21);
    }
  }
  v5 = *(_QWORD *)(a2 + 120) == 0;
  *(_QWORD *)(a1 + 120) = 0;
  if ( !v5 )
    goto LABEL_22;
  result = *(unsigned int *)(a2 + 128);
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 128) = result;
LABEL_23:
  v23 = *(v20 - 1);
  if ( (_DWORD)v23 )
  {
    v24 = 8 * v23;
    v25 = 0;
    do
    {
      v26 = *(_QWORD *)&v20[v25 / 4];
      if ( v26 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 72LL))(v26);
        v20 = *(unsigned int **)(a1 + 112);
        *(_QWORD *)&v20[v25 / 4] = result;
      }
      v25 += 8LL;
    }
    while ( v25 != v24 );
  }
  return result;
}

