__int64 __fastcall proxim_data_t::recreate_edges(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v19; // rbp
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // rcx
  __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // [rsp+0h] [rbp-28h]

  v14 = *(__int64 **)(a1 + 8);
  v15 = *v14;
  v16 = *v14 + 40 * v14[1];
  if ( v15 == v16 )
    goto LABEL_30;
  v19 = (_QWORD *)v15;
  while ( *v19 != a3 )
  {
    v19 += 5;
    if ( (_QWORD *)v16 == v19 )
    {
      v19 = nullptr;
      break;
    }
  }
  while ( *(_QWORD *)v15 != a2 )
  {
    v15 += 40;
    if ( v15 == v16 )
      goto LABEL_30;
  }
  if ( !v15 )
  {
LABEL_30:
    sub_169700(
      (int)"Coherency check failed: item != nullptr\n",
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v35);
    return 0;
  }
  else
  {
    if ( v19 )
    {
      if ( (_BYTE)a4 )
      {
        v20 = *(__int64 **)(v15 + 16);
        v21 = *(_QWORD *)(v15 + 24);
        v22 = &v20[v21];
        if ( v20 == v22 )
          goto LABEL_16;
        v23 = *(__int64 **)(v15 + 16);
        while ( *v23 != a3 )
        {
          if ( v22 == ++v23 )
            goto LABEL_16;
        }
        if ( v22 == v23 )
        {
LABEL_16:
          v24 = v21 + 1;
          if ( *(_QWORD *)(v15 + 32) < v24 )
          {
            v31 = qvector_reserve(v15 + 16, v20, v24, 8);
            v32 = *(_QWORD *)(v15 + 24);
            *(_QWORD *)(v15 + 16) = v31;
            v22 = (__int64 *)(v31 + 8 * v32);
          }
          *v22 = a3;
          ++*(_QWORD *)(v15 + 24);
        }
      }
      else
      {
        v25 = (__int64 *)v19[2];
        v26 = v19[3];
        v27 = &v25[v26];
        if ( v25 == v27 )
          goto LABEL_24;
        v28 = (__int64 *)v19[2];
        while ( *v28 != a2 )
        {
          if ( v27 == ++v28 )
            goto LABEL_24;
        }
        if ( v28 == v27 )
        {
LABEL_24:
          v29 = v26 + 1;
          if ( v19[4] < v29 )
          {
            v33 = qvector_reserve(v19 + 2, v25, v29, 8);
            v34 = v19[3];
            v19[2] = v33;
            v27 = (__int64 *)(v33 + 8 * v34);
          }
          *v27 = a2;
          ++v19[3];
        }
      }
    }
    else
    {
      *(_DWORD *)(v15 + 8) |= (_BYTE)a4 == 0 ? 4 : 2;
    }
    return 1;
  }
}
