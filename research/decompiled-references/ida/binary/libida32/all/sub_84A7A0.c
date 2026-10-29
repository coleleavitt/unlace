__int64 __fastcall sub_84A7A0(const double *a1, int a2, double *a3, int a4)
{
  unsigned int *v6; // rbx
  unsigned int *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 *v11; // rax
  __m128 *v12; // rax
  __int64 v13; // r9
  int v14; // esi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __m128 *v23; // rax
  __m128 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128 *v28; // rax
  __m128 *v29; // rax

  v6 = *(unsigned int **)a1;
  if ( a2 == 1 )
  {
    sub_8452F0(*(_QWORD *)a1, 37);
    if ( *v6 )
      goto LABEL_32;
    v25 = *((_QWORD *)v6 + 10);
    v26 = *(_QWORD *)(v25 + 8);
    v27 = v26 + 16;
    if ( (unsigned __int64)(v26 + 16) <= 0xFF0 )
    {
      v29 = (__m128 *)(v25 + v26 + 16);
      *(_QWORD *)(v25 + 8) = v27;
      if ( v29 )
        goto LABEL_31;
    }
    else
    {
      v28 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
      if ( v28 )
      {
        v28->m128_u64[0] = *((_QWORD *)v6 + 10);
        *((_QWORD *)v6 + 10) = v28;
        v29 = v28 + 1;
        v29[-1].m128_u64[1] = 16;
LABEL_31:
        *v29 = _mm_loadh_ps(a1 + 53);
        *((_QWORD *)a1 + 53) = v29;
        goto LABEL_32;
      }
      *v6 = 2;
    }
LABEL_32:
    result = (__int64)sub_8452F0((__int64)v6, a4);
    if ( *v6 )
      return result;
    goto LABEL_12;
  }
  if ( a2 == 2 )
  {
    v7 = *(unsigned int **)a1;
    if ( a4 )
    {
      sub_84A700(v7, 0, 1, 0, 127, 13);
      if ( !*v6 )
      {
        v8 = *((_QWORD *)v6 + 10);
        v9 = *(_QWORD *)(v8 + 8);
        v10 = v9 + 16;
        if ( (unsigned __int64)(v9 + 16) <= 0xFF0 )
        {
          v12 = (__m128 *)(v8 + v9 + 16);
          *(_QWORD *)(v8 + 8) = v10;
          if ( !v12 )
            goto LABEL_9;
        }
        else
        {
          v11 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
          if ( !v11 )
          {
            *v6 = 2;
            goto LABEL_9;
          }
          v11->m128_u64[0] = *((_QWORD *)v6 + 10);
          *((_QWORD *)v6 + 10) = v11;
          v12 = v11 + 1;
          v12[-1].m128_u64[1] = 16;
        }
        *v12 = _mm_loadh_ps(a3);
        *(_QWORD *)a3 = v12;
      }
LABEL_9:
      v13 = 10;
      v14 = 0;
      goto LABEL_11;
    }
    v19 = sub_84A700(v7, 0, 1, 0, 127, 13);
    sub_84A700(v6, 1, 1, 0, 127, 10);
    if ( !*v6 )
    {
      v20 = *((_QWORD *)v6 + 10);
      v21 = *(_QWORD *)(v20 + 8);
      v22 = v21 + 16;
      if ( (unsigned __int64)(v21 + 16) <= 0xFF0 )
      {
        v24 = (__m128 *)(v20 + v21 + 16);
        *(_QWORD *)(v20 + 8) = v22;
        if ( v24 )
          goto LABEL_23;
      }
      else
      {
        v23 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(
                          4096,
                          *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
        if ( v23 )
        {
          v23->m128_u64[0] = *((_QWORD *)v6 + 10);
          *((_QWORD *)v6 + 10) = v23;
          v24 = v23 + 1;
          v24[-1].m128_u64[1] = 16;
LABEL_23:
          *v24 = _mm_loadh_ps(a3);
          *(_QWORD *)a3 = v24;
          goto LABEL_24;
        }
        *v6 = 2;
      }
    }
LABEL_24:
    result = (__int64)sub_845240((__int64)v6);
    if ( result )
    {
      if ( v19 )
      {
        v19[2] &= ~1uLL;
        v19[3] = result;
      }
    }
    return result;
  }
  v13 = *((int *)a1 + 54);
  v14 = a4 ^ 1;
LABEL_11:
  sub_84A700(v6, v14, 1, 0, 127, v13);
  result = *v6;
  if ( (_DWORD)result )
    return result;
LABEL_12:
  v16 = *((_QWORD *)v6 + 10);
  v17 = *(_QWORD *)(v16 + 8);
  v18 = v17 + 16;
  if ( (unsigned __int64)(v17 + 16) > 0xFF0 )
  {
    result = (**((__int64 (__fastcall ***)(__int64, _QWORD))v6 + 7))(4096, *(_QWORD *)(*((_QWORD *)v6 + 7) + 16LL));
    if ( !result )
    {
      *v6 = 2;
      return result;
    }
    *(_QWORD *)result = *((_QWORD *)v6 + 10);
    *((_QWORD *)v6 + 10) = result;
    result += 16;
    *(_QWORD *)(result - 8) = 16;
    goto LABEL_15;
  }
  result = v16 + v17 + 16;
  *(_QWORD *)(v16 + 8) = v18;
  if ( result )
  {
LABEL_15:
    *(__m128 *)result = _mm_loadh_ps(a3);
    *(_QWORD *)a3 = result;
  }
  return result;
}

