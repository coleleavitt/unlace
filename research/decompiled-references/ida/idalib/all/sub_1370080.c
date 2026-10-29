_QWORD *__fastcall sub_1370080(_QWORD *a1, __int64 a2, __int64 *a3, _BYTE *a4, size_t a5)
{
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  size_t v11; // r9
  _BYTE *v12; // r8
  __m128 *v13; // r15
  unsigned __int16 *v14; // rdi
  unsigned __int64 v15; // rdx
  size_t v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v9 = (_QWORD *)a3[2];
  v10 = (_QWORD *)v9[20];
  if ( v10[10] )
    goto LABEL_10;
  v11 = v10[6];
  v12 = (_BYTE *)v10[5];
  if ( !v11 )
  {
    v12 = a4;
    v11 = a5;
  }
  sub_13C1310(&src, *(_QWORD *)(a3[12] + 104), *(_QWORD *)(*v9 + 488LL), *(_QWORD *)(*v9 + 496LL), v12, v11);
  v13 = *(__m128 **)(a3[2] + 160);
  v14 = (unsigned __int16 *)v13[4].m128_u64[1];
  if ( src == v21 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)v14 = v21[0];
      else
        memcpy(v14, src, n);
      v17 = n;
      v14 = (unsigned __int16 *)v13[4].m128_u64[1];
    }
    v13[5].m128_u64[0] = v17;
    *((_BYTE *)v14 + v17) = 0;
    v14 = (unsigned __int16 *)src;
    goto LABEL_8;
  }
  if ( v14 == &v13[5].m128_u16[4] )
  {
    v18 = v21[0];
    v13[4].m128_u64[1] = (unsigned __int64)src;
    v13[5] = _mm_loadh_ps((const double *)&v18);
  }
  else
  {
    v18 = v21[0];
    v15 = v13[5].m128_u64[1];
    v13[4].m128_u64[1] = (unsigned __int64)src;
    v13[5] = _mm_loadh_ps((const double *)&v18);
    if ( v14 )
    {
      src = v14;
      v21[0] = v15;
      goto LABEL_8;
    }
  }
  v14 = (unsigned __int16 *)v21;
  src = v21;
LABEL_8:
  n = 0;
  *(_BYTE *)v14 = 0;
  if ( src != v21 )
    operator delete(src);
LABEL_10:
  sub_12EE6B0(a1, a3, 1u, a4, a5, 0, (__int64)&byte_22F0C30, 0, 1, 1);
  return a1;
}
