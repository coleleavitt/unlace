unsigned __int64 __fastcall sub_A0D2E0(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rbp
  __m128i v9; // xmm0
  __int64 v10; // r9
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r8d
  _OWORD *v21; // rax
  __int64 v22; // rdx
  const double *v23; // r12
  double *v24; // r10
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  size_t v29; // [rsp+0h] [rbp-58h]
  int v30; // [rsp+8h] [rbp-50h]

  v2 = a2;
  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v30 = 2 * v4;
    v29 = 24LL * (unsigned int)(2 * v4);
    v7 = v29;
    v19 = sub_186B270(v29);
    v20 = v30;
    v5 = v19;
    v2 = a2;
    v21 = (_OWORD *)(v19 + 8);
    v22 = v5 + v29 + 8;
    if ( v30 )
    {
      if ( (((_BYTE)v22 - (_BYTE)v21) & 8) == 0 || (*v21 = 0, v21 = (_OWORD *)(v5 + 32), v22 != v5 + 32) )
      {
        do
        {
          *v21 = 0;
          v21 += 3;
          *(_OWORD *)((char *)v21 - 24) = 0;
        }
        while ( (_OWORD *)v22 != v21 );
      }
    }
    v23 = *(const double **)a1;
    v6 = v30 - 1;
    v8 = v5 + v29;
    v24 = (double *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(double **)a1 != v24 )
    {
      do
      {
        while ( *((_QWORD *)v23 + 1) <= 1u )
        {
          v23 += 3;
          if ( v24 == v23 )
            goto LABEL_35;
        }
        v25 = *(_DWORD *)v23;
        v26 = 24LL * (*(_DWORD *)v23 & v6);
        v27 = v5 + v26;
        if ( v29 == v26 )
        {
LABEL_39:
          if ( v5 == v27 )
          {
LABEL_49:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v28 = v5;
          while ( *(_QWORD *)(v28 + 8) )
          {
            v28 += 24;
            if ( v27 == v28 )
              goto LABEL_49;
          }
        }
        else
        {
          v28 = v5 + v26;
          while ( *(_QWORD *)(v28 + 8) )
          {
            v28 += 24;
            if ( v8 == v28 )
              goto LABEL_39;
          }
        }
        v23 += 3;
        *(_DWORD *)v28 = v25;
        *(__m128 *)(v28 + 8) = _mm_loadh_ps(v23 - 1);
      }
      while ( v24 != v23 );
LABEL_35:
      v24 = *(double **)a1;
    }
    if ( v24 )
    {
      sub_186B220(v24);
      v20 = v30;
      v2 = a2;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v20;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v6 = v4 - 1;
    v7 = 24 * v4;
    v8 = *(_QWORD *)a1 + 24 * v4;
  }
  v9 = _mm_loadu_si128(v2);
  v10 = v2->m128i_i64[1];
  v11 = *(_DWORD *)(*(_QWORD *)v9.m128i_i64[0] + 12LL);
  v12 = (*(_DWORD *)(*(_QWORD *)v10 + 12LL) - v11) ^ (v11 << 8);
  v13 = ((v12 ^ ((v11 - v12) << 16)) + v12 - v11) ^ ((v11 - v12) << 10);
  v14 = v13 & v6;
  v15 = v5 + 24 * v14;
  if ( 24 * v14 != v7 )
  {
    result = v5 + 24 * v14;
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_QWORD *)(result + 8);
      if ( v18 > 1 )
      {
        if ( *(_DWORD *)result == v13 && v18 == v9.m128i_i64[0] && v10 == *(_QWORD *)(result + 16) )
        {
          *(__m128i *)(result + 8) = v9;
          return result;
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_46;
          v17 = result;
          goto LABEL_47;
        }
        v17 = result;
      }
      result += 24LL;
      if ( result == v8 )
        goto LABEL_14;
    }
  }
  v17 = 0;
  while ( 1 )
  {
LABEL_14:
    if ( v15 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *(_QWORD *)(v5 + 8);
    if ( result <= 1 )
      break;
    if ( *(_DWORD *)v5 == v13 && result == v9.m128i_i64[0] && v10 == *(_QWORD *)(v5 + 16) )
    {
      *(__m128i *)(v5 + 8) = v9;
      return result;
    }
LABEL_13:
    v5 += 24;
  }
  if ( result )
  {
    v17 = v5;
    goto LABEL_13;
  }
  if ( v17 )
LABEL_46:
    --*(_DWORD *)(a1 + 16);
  else
    v17 = v5;
LABEL_47:
  *(_DWORD *)v17 = v13;
  *(__m128i *)(v17 + 8) = v9;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

