__int64 __fastcall sub_375E00(
        __int64 a1,
        __int64 *a2,
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
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  __int64 result; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  size_t v25; // r12
  const void *v26; // r13
  void *v27; // rdi
  __int64 v28; // rax
  char v29; // [rsp+0h] [rbp-28h]

  v15 = (int)a3;
  v16 = *(_QWORD *)(a1 + 440);
  if ( (unsigned __int64)(int)a3 >= *(_QWORD *)(v16 + 24) )
  {
    result = sub_169700(
               (int)"Coherency check failed: n < nodes_text.size()\n",
               (__int64)a2,
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
               v29);
    if ( v15 >= *(_QWORD *)(v16 + 24) )
      return result;
  }
  result = *(_QWORD *)(v16 + 16) + 24 * v15;
  v18 = *(_QWORD *)(result + 8);
  if ( v18 > 1 )
  {
    result = *(_QWORD *)result;
    if ( a2 == (__int64 *)(result + 280) )
      goto LABEL_4;
    v24 = *(_QWORD *)(result + 288);
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v24 != 1 )
      {
        v26 = *(const void **)(result + 280);
        v27 = (void *)*a2;
        if ( a2[2] >= v24 )
          goto LABEL_20;
        goto LABEL_23;
      }
    }
LABEL_15:
    a2[1] = 0;
    return result;
  }
  if ( v18 )
  {
    result = *(_QWORD *)result;
    if ( a2 != (__int64 *)(result + 8) )
    {
      v24 = *(_QWORD *)(result + 16);
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v24 != 1 )
        {
          v26 = *(const void **)(result + 8);
          v27 = (void *)*a2;
          if ( a2[2] >= v24 )
          {
LABEL_20:
            a2[1] = v24;
            memmove(v27, v26, v25);
            result = *a2;
            *(_BYTE *)(*a2 + v24 - 1) = 0;
            goto LABEL_4;
          }
LABEL_23:
          v28 = qvector_reserve(a2, v27, v24, 1);
          *a2 = v28;
          v27 = (void *)v28;
          goto LABEL_20;
        }
      }
      goto LABEL_15;
    }
  }
LABEL_4:
  if ( (unsigned __int64)a2[1] > 0x10 )
  {
    result = *a2;
    a2[1] = 16;
    *(_BYTE *)(result + 15) = 0;
    v19 = a2[1];
    if ( v19 )
    {
      v21 = v19 + 4;
      v20 = v19 + 5;
      --v19;
    }
    else
    {
      v20 = 6;
      v21 = 5;
    }
    v22 = *a2;
    if ( a2[2] < v20 )
    {
      result = qvector_reserve(a2, v22, v20, 1);
      *a2 = result;
      v22 = result;
    }
    a2[1] = v20;
    *(_BYTE *)(v22 + v21) = 0;
    v23 = *a2 + v19;
    *(_DWORD *)v23 = 774778408;
    *(_BYTE *)(v23 + 4) = 41;
  }
  return result;
}
