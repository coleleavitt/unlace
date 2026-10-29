__m128 *__fastcall sub_84B510(__int64 a1, double *a2)
{
  unsigned int *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128 *v9; // rax
  __m128 *v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rax
  __m128 *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128 *v17; // rax
  __m128 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128 *v22; // rax
  __m128 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128 *v30; // rax
  __m128 *v31; // rax

  v2 = *(unsigned int **)a1;
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = (__m128 *)sub_84A700(*(unsigned int **)a1, 3, 2, 0, 13, 0);
    if ( *v2 )
      return result;
    v24 = *((_QWORD *)v2 + 10);
    v25 = *(_QWORD *)(v24 + 8);
    v26 = v25 + 16;
    if ( (unsigned __int64)(v25 + 16) <= 0xFF0 )
    {
      result = (__m128 *)(v24 + v25 + 16);
      *(_QWORD *)(v24 + 8) = v26;
      if ( !result )
        return result;
    }
    else
    {
      result = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
      if ( !result )
      {
        *v2 = 2;
        return result;
      }
      result->m128_u64[0] = *((_QWORD *)v2 + 10);
      *((_QWORD *)v2 + 10) = result++;
      result[-1].m128_u64[1] = 16;
    }
    *result = _mm_loadh_ps(a2);
    *(_QWORD *)a2 = result;
    return result;
  }
  v3 = sub_84A700(*(unsigned int **)a1, 2, 2, 0, 13, 0);
  v4 = *(int *)(a1 + 92);
  v5 = v3;
  if ( *(_DWORD *)(a1 + 168) == 2 )
  {
    sub_84A700(v2, 3, 142, v4, 2, 0);
    if ( *v2 )
      goto LABEL_20;
    v14 = *((_QWORD *)v2 + 10);
    v15 = *(_QWORD *)(v14 + 8);
    v16 = v15 + 16;
    if ( (unsigned __int64)(v15 + 16) <= 0xFF0 )
    {
      v18 = (__m128 *)(v14 + v15 + 16);
      *(_QWORD *)(v14 + 8) = v16;
      if ( v18 )
        goto LABEL_19;
    }
    else
    {
      v17 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
      if ( v17 )
      {
        v17->m128_u64[0] = *((_QWORD *)v2 + 10);
        *((_QWORD *)v2 + 10) = v17;
        v18 = v17 + 1;
        v18[-1].m128_u64[1] = 16;
LABEL_19:
        *v18 = _mm_loadh_ps(a2);
        *(_QWORD *)a2 = v18;
        goto LABEL_20;
      }
      *v2 = 2;
    }
LABEL_20:
    sub_847F60(v2, 32, 142, *(int *)(a1 + 96), 127, 0);
    sub_8452F0((__int64)v2, 36);
    if ( *v2 )
      goto LABEL_11;
    v19 = *((_QWORD *)v2 + 10);
    v20 = *(_QWORD *)(v19 + 8);
    v21 = v20 + 16;
    if ( (unsigned __int64)(v20 + 16) <= 0xFF0 )
    {
      v23 = (__m128 *)(v19 + v20 + 16);
      *(_QWORD *)(v19 + 8) = v21;
      if ( !v23 )
        goto LABEL_11;
    }
    else
    {
      v22 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
      if ( !v22 )
      {
LABEL_46:
        *v2 = 2;
        goto LABEL_11;
      }
      v22->m128_u64[0] = *((_QWORD *)v2 + 10);
      *((_QWORD *)v2 + 10) = v22;
      v23 = v22 + 1;
      v23[-1].m128_u64[1] = 16;
    }
    *v23 = _mm_loadh_ps(a2);
    *(_QWORD *)a2 = v23;
    goto LABEL_11;
  }
  sub_84A700(v2, 3, 142, v4, 2, 0);
  if ( *v2 )
    goto LABEL_8;
  v6 = *((_QWORD *)v2 + 10);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v7 + 16;
  if ( (unsigned __int64)(v7 + 16) <= 0xFF0 )
  {
    v10 = (__m128 *)(v6 + v7 + 16);
    *(_QWORD *)(v6 + 8) = v8;
    if ( v10 )
      goto LABEL_7;
  }
  else
  {
    v9 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                     4096,
                     *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
    if ( v9 )
    {
      v9->m128_u64[0] = *((_QWORD *)v2 + 10);
      *((_QWORD *)v2 + 10) = v9;
      v10 = v9 + 1;
      v10[-1].m128_u64[1] = 16;
LABEL_7:
      *v10 = _mm_loadh_ps(a2);
      *(_QWORD *)a2 = v10;
      goto LABEL_8;
    }
    *v2 = 2;
  }
LABEL_8:
  v11 = *(_QWORD *)(a1 + 272);
  if ( v11 )
  {
    v12 = sub_8452F0((__int64)v2, 36);
    if ( v12 )
    {
      v12[2] &= ~1uLL;
      v12[3] = v11;
    }
    goto LABEL_11;
  }
  sub_8452F0((__int64)v2, 36);
  if ( !*v2 )
  {
    v27 = *((_QWORD *)v2 + 10);
    v28 = *(_QWORD *)(v27 + 8);
    v29 = v28 + 16;
    if ( (unsigned __int64)(v28 + 16) > 0xFF0 )
    {
      v30 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
      if ( v30 )
      {
        v30->m128_u64[0] = *((_QWORD *)v2 + 10);
        *((_QWORD *)v2 + 10) = v30;
        v31 = v30 + 1;
        v31[-1].m128_u64[1] = 16;
LABEL_34:
        *v31 = _mm_loadh_ps((const double *)(a1 + 336));
        *(_QWORD *)(a1 + 336) = v31;
        goto LABEL_11;
      }
      goto LABEL_46;
    }
    v31 = (__m128 *)(v27 + v28 + 16);
    *(_QWORD *)(v27 + 8) = v29;
    if ( v31 )
      goto LABEL_34;
  }
LABEL_11:
  result = (__m128 *)sub_845240((__int64)v2);
  if ( result )
  {
    if ( v5 )
    {
      v5[2] &= ~1uLL;
      v5[3] = result;
    }
  }
  return result;
}

