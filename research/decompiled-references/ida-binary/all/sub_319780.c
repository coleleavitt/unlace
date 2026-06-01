__int64 __fastcall sub_319780(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
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
  __int64 *v15; // r12
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  int v19; // ebp
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h] BYREF

  v22 = a3;
  v21 = a4;
  if ( a2 == -1 )
  {
    sub_169700(
      (int)"%a: has no file mapping (original: %02llX patched: %02llX)...skipping...\n",
      a1,
      (unsigned __int8)v22,
      (unsigned __int8)v21,
      (__int64)a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v21);
    ++a5[2];
    return 0;
  }
  else
  {
    ++a5[3];
    v15 = &v21;
    qfseek(*a5, a2, 0);
    v16 = nbits(a1);
    v17 = v16 + 14;
    v18 = v16 + 7;
    if ( v18 >= 0 )
      v17 = v18;
    v19 = v17 >> 3;
    if ( *((_BYTE *)a5 + 8) )
      v15 = &v22;
    if ( (unsigned __int8)getinf_flag(3, 64) )
      swap_value(v15, v15, (unsigned int)v19);
    qfwrite(*a5, v15, v19);
    return 0;
  }
}
