__int64 __fastcall sub_7B48A0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rbx
  __int64 func_qty; // r14
  unsigned int *v17; // rax
  unsigned int *v18; // r15
  unsigned int v19; // ebp
  __int64 v20; // rax
  int v21; // ebp
  __int64 v22; // rsi
  void *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v15 = a2[1];
  if ( v15 )
    goto LABEL_12;
  func_qty = get_func_qty(a1);
  if ( func_qty )
  {
    do
    {
      v17 = (unsigned int *)getn_func(v15);
      v18 = v17;
      if ( v17 )
      {
        v19 = v17[1] - *v17;
        if ( v19 >= (unsigned int)sub_5E44B0() && !(unsigned __int8)is_spec_ea(*v18) && (v18[2] & 4) == 0 )
        {
          v20 = a2[1];
          v21 = *v18;
          v22 = *a2;
          if ( a2[2] < (unsigned __int64)(v20 + 1) )
          {
            v25 = qvector_reserve(a2, v22, v20 + 1, 4);
            *a2 = v25;
            v22 = v25;
            v20 = a2[1];
          }
          *(_DWORD *)(v22 + 4 * v20) = v21;
          ++a2[1];
        }
      }
      ++v15;
    }
    while ( func_qty != v15 );
  }
  if ( a2[1] )
  {
LABEL_12:
    v29 = 0;
    ptr = nullptr;
    sub_7B25C0(a1, (__m128)0LL, a8, a9, a10, a11, a12, a13, a14, (__int64)&ptr, (__int64)a2, a4, a5, a6);
  }
  if ( a3 )
  {
    v24 = (void *)*a3;
    if ( (unsigned __int64)a3[2] <= 0xC )
    {
      v26 = qvector_reserve(a3, v24, 13, 1);
      *a3 = v26;
      v24 = (void *)v26;
    }
    a3[1] = 13;
    qmemcpy(v24, "No functions", 12);
    *(_BYTE *)(*a3 + 12) = 0;
  }
  return 0;
}

