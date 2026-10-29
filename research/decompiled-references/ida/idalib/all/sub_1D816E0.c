unsigned __int64 __fastcall sub_1D816E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        char a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13)
{
  __m128i *v16; // r12
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r10
  unsigned __int64 v20; // r15
  __int64 *v21; // rbp
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 *v30; // rbp
  __int64 *i; // r14
  __int64 v32; // rdi
  __int64 v34; // rax
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 *v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h] BYREF
  int v41; // [rsp+48h] [rbp-50h]
  __int64 v42[9]; // [rsp+50h] [rbp-48h] BYREF

  v16 = (__m128i *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v16 = (__m128i *)v16->m128i_i64[0];
  v39 = sub_B87960(*(_QWORD *)(a1 + 248) + 17536LL, a2);
  v40 = v39;
  v41 = a8;
  sub_B85890(v42, v39);
  v17 = a6;
  v18 = *(_QWORD *)a6;
  v19 = a6 + 24;
  if ( *(_BYTE *)(*(_QWORD *)a6 + 16LL) == 25 )
  {
    v22 = sub_B97710(*(_QWORD **)(a1 + 248), (__int64)v16, a7, a5, &v40, v18, a6, a9, a4, 0, a13, 0, 0);
    *(_BYTE *)(v22 + 29) = (2 * (a10 & 1)) | *(_BYTE *)(v22 + 29) & 0xFD;
    v36 = v22;
    v34 = sub_B8C330(v22);
    sub_B7C440(v22, v34, (const void *)(a6 + 24), 0);
  }
  else
  {
    v38 = (__int64 *)(a6 + 24);
    v20 = *(unsigned __int16 *)(v18 + 22);
    v21 = (__int64 *)(v19 + 8 * v20);
    v22 = sub_B97710(*(_QWORD **)(a1 + 248), (__int64)v16, a7, a5, &v40, v18, v17, a9, a4, 0, a13, 0, 0);
    *(_BYTE *)(v22 + 29) = (2 * (a10 & 1)) | *(_BYTE *)(v22 + 29) & 0xFD;
    v36 = v22;
    v23 = sub_B8C330(v22);
    sub_B7C440(v22, v23, v38, v20);
    if ( v38 != v21 )
    {
      v27 = v38;
      do
      {
        v28 = *v27++;
        sub_B8C080(v28, v22 + 72);
      }
      while ( v21 != v27 );
    }
  }
  v29 = a12;
  v30 = &a11[a12];
  for ( i = a11; v30 != i; ++i )
  {
    v32 = *i;
    sub_B8C080(v32, v22 + 72);
  }
  if ( (v16->m128i_i8[8] & 0x7Fu) - 59 <= 2 )
    *(_BYTE *)(v22 + 29) &= 0x9Fu;
  if ( a3 )
  {
    v22 = sub_BBDCA0(*(_QWORD *)(a1 + 248), (__int64)v16, a8, v39, a3, v22);
    *(_BYTE *)(v22 + 29) = (2 * (a10 & 1)) | *(_BYTE *)(v22 + 29) & 0xFD;
    sub_B77A70(v36, v22);
    if ( (v16->m128i_i8[8] & 0x7Fu) - 59 <= 2 )
      *(_BYTE *)(v22 + 29) &= 0x9Fu;
  }
  sub_B94AD0(v16, v22, v24, v29, v25, v26);
  return v22;
}
