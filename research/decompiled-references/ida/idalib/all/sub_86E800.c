__m128 *__fastcall sub_86E800(__int64 a1, double *a2)
{
  unsigned int *v3; // r12
  _QWORD *v4; // rbp
  __int64 v5; // r13
  _QWORD *v6; // rax
  __m128 *result; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // r8d
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128 *v15; // rax
  __m128 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128 *v20; // rax
  __m128 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128 *v28; // rax
  __m128 *v29; // rax

  v3 = *(unsigned int **)a1;
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = (__m128 *)sub_86E080(*(unsigned int **)a1, 3, 2, 0, 13, 0);
    if ( *v3 )
      return result;
    v22 = *((_QWORD *)v3 + 10);
    v23 = *(_QWORD *)(v22 + 8);
    v24 = v23 + 16;
    if ( (unsigned __int64)(v23 + 16) <= 0xFF0 )
    {
      result = (__m128 *)(v22 + v23 + 16);
      *(_QWORD *)(v22 + 8) = v24;
      if ( !result )
        return result;
    }
    else
    {
      result = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( !result )
      {
        *v3 = 2;
        return result;
      }
      result->m128_u64[0] = *((_QWORD *)v3 + 10);
      *((_QWORD *)v3 + 10) = result++;
      result[-1].m128_u64[1] = 16;
    }
    *result = _mm_loadh_ps(a2);
    *(_QWORD *)a2 = result;
    return result;
  }
  v4 = sub_86E080(*(unsigned int **)a1, 2, 2, 0, 13, 0);
  if ( *(_DWORD *)(a1 + 172) )
  {
    if ( *(_DWORD *)(a1 + 168) != 2 )
      goto LABEL_4;
    v8 = *(int *)(a1 + 92);
    v9 = -1;
    v10 = 127;
    v11 = 0;
  }
  else
  {
    v8 = *(int *)(a1 + 92);
    v9 = 0;
    v10 = 2;
    v11 = 3;
  }
  sub_86E080(v3, v11, 142, v8, v10, v9);
  if ( !*v3 )
  {
    v12 = *((_QWORD *)v3 + 10);
    v13 = *(_QWORD *)(v12 + 8);
    v14 = v13 + 16;
    if ( (unsigned __int64)(v13 + 16) <= 0xFF0 )
    {
      v16 = (__m128 *)(v12 + v13 + 16);
      *(_QWORD *)(v12 + 8) = v14;
      if ( v16 )
        goto LABEL_16;
    }
    else
    {
      v15 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( v15 )
      {
        v15->m128_u64[0] = *((_QWORD *)v3 + 10);
        *((_QWORD *)v3 + 10) = v15;
        v16 = v15 + 1;
        v16[-1].m128_u64[1] = 16;
LABEL_16:
        *v16 = _mm_loadh_ps(a2);
        *(_QWORD *)a2 = v16;
        goto LABEL_17;
      }
      *v3 = 2;
    }
  }
LABEL_17:
  if ( *(_DWORD *)(a1 + 168) == 2 )
  {
    sub_86B8E0(v3, 32, 142, *(int *)(a1 + 96), 127, 0);
    sub_868C70((__int64)v3, 36);
    if ( *v3 )
      goto LABEL_7;
    v17 = *((_QWORD *)v3 + 10);
    v18 = *(_QWORD *)(v17 + 8);
    v19 = v18 + 16;
    if ( (unsigned __int64)(v18 + 16) <= 0xFF0 )
    {
      v21 = (__m128 *)(v17 + v18 + 16);
      *(_QWORD *)(v17 + 8) = v19;
      if ( !v21 )
        goto LABEL_7;
    }
    else
    {
      v20 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( !v20 )
      {
LABEL_43:
        *v3 = 2;
        goto LABEL_7;
      }
      v20->m128_u64[0] = *((_QWORD *)v3 + 10);
      *((_QWORD *)v3 + 10) = v20;
      v21 = v20 + 1;
      v21[-1].m128_u64[1] = 16;
    }
    *v21 = _mm_loadh_ps(a2);
    *(_QWORD *)a2 = v21;
    goto LABEL_7;
  }
LABEL_4:
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    v6 = sub_868C70((__int64)v3, 36);
    if ( v6 )
    {
      v6[2] &= ~1uLL;
      v6[3] = v5;
    }
    goto LABEL_7;
  }
  sub_868C70((__int64)v3, 36);
  if ( !*v3 )
  {
    v25 = *((_QWORD *)v3 + 10);
    v26 = *(_QWORD *)(v25 + 8);
    v27 = v26 + 16;
    if ( (unsigned __int64)(v26 + 16) > 0xFF0 )
    {
      v28 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( v28 )
      {
        v28->m128_u64[0] = *((_QWORD *)v3 + 10);
        *((_QWORD *)v3 + 10) = v28;
        v29 = v28 + 1;
        v29[-1].m128_u64[1] = 16;
LABEL_32:
        *v29 = _mm_loadh_ps((const double *)(a1 + 336));
        *(_QWORD *)(a1 + 336) = v29;
        goto LABEL_7;
      }
      goto LABEL_43;
    }
    v29 = (__m128 *)(v25 + v26 + 16);
    *(_QWORD *)(v25 + 8) = v27;
    if ( v29 )
      goto LABEL_32;
  }
LABEL_7:
  result = (__m128 *)sub_868BC0((__int64)v3);
  if ( result )
  {
    if ( v4 )
    {
      v4[2] &= ~1uLL;
      v4[3] = result;
    }
  }
  return result;
}
