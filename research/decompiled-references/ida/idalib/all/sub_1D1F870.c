unsigned __int64 __fastcall sub_1D1F870(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 *v4; // r13
  unsigned __int16 *v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 result; // rax
  __int64 v14; // rbp
  __m128 *v15; // r14
  __m128 v16; // xmm0
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  __m128 *v26; // r12
  __int64 *v27; // rbp
  int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned __int64 v33; // [rsp+8h] [rbp-E0h]
  __m128 *v34; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-D0h]
  __m128 *v36; // [rsp+20h] [rbp-C8h]
  char v37; // [rsp+2Fh] [rbp-B9h]
  _QWORD *v38; // [rsp+30h] [rbp-B8h]
  __int64 v39; // [rsp+38h] [rbp-B0h]
  __m128 v40; // [rsp+40h] [rbp-A8h] BYREF
  int v41; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int16 *v42; // [rsp+58h] [rbp-90h]
  unsigned __int16 *v43; // [rsp+60h] [rbp-88h]
  __int64 v44; // [rsp+68h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v46[16]; // [rsp+80h] [rbp-68h] BYREF
  __m128 v47; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+A8h] [rbp-40h]

  sub_C93B20((__int64)&v41, a2);
  v4 = v42;
  v5 = v43;
  v9 = sub_1D11200(a1, v42, a3, a4, v6, v7, v8);
  if ( v9 == 1 )
    return 1;
  v14 = v9;
  v35 = sub_1D11200(a1, v5, a3, a4, v10, v11, v12);
  if ( v35 == 1 )
    return 1;
  v15 = &v40;
  v37 = 0;
  ptr[0] = v46;
  v16 = _mm_loadh_ps((const double *)&v44);
  ptr[1] = (void *)0x200000000LL;
  v34 = (__m128 *)&v41;
  v36 = &v47;
  v40 = v16;
  do
  {
    v17 = sub_BFB900(v15->m128_u64[0]);
    if ( (*(_WORD *)v17 & 0x1FF) == 0x5B )
    {
      v18 = (_QWORD *)sub_BFB900(*(_QWORD *)(v17 + 32));
      if ( (*(_WORD *)v18 & 0x1FF) == 0x47 )
      {
        v19 = v18[2];
        if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 35 > 3 )
        {
          if ( (*v18 & 0x200000LL) != 0 )
            v19 = v18[2 * ((*v18 & 0x80000LL) != 0) + 4];
          v38 = v18;
          v39 = v19;
          sub_C93B20((__int64)v36, a2);
          v23 = sub_1D1B120((__int64)a1, v39, v16, a4, v20, v21, v39, v22);
          if ( !v23 )
          {
            result = 1;
            goto LABEL_22;
          }
          if ( (*v38 & 0x200000LL) != 0 )
            v24 = v38[2 * ((*v38 & 0x80000LL) != 0) + 4];
          else
            v24 = v38[2];
          v25 = v37;
          if ( v23 != v24 )
            v25 = 1;
          v47.m128_u64[0] = v23 | 3;
          v37 = v25;
          sub_1743080((__int64)ptr, v23 | 3);
        }
      }
    }
    v15 = (__m128 *)((char *)v15 + 8);
  }
  while ( v15 != v34 );
  v26 = (__m128 *)*a1;
  v27 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632)
    || v37
    || v4 != (unsigned __int16 *)v27
    || v5 != (unsigned __int16 *)(v35 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v34 = (__m128 *)(v35 & 0xFFFFFFFFFFFFFFFELL);
    v28 = v41;
    sub_C93B20((__int64)v36, a2);
    v32 = sub_C00A40(v48, a2, v29, v30, v31);
    result = sub_1C07820(
               v26,
               v32,
               v28,
               (__int64)ptr,
               v27,
               v35 & 0xFFFFFFFFFFFFFFFELL,
               *(double *)v16.m128_u64,
               a4,
               0,
               1,
               0);
  }
  else
  {
    v34 = (__m128 *)v5;
    v47 = _mm_loadh_ps((const double *)&v34);
    sub_1912220((__int64)v26, a2, 0, v36, 2, v47, a4);
    result = a2;
  }
LABEL_22:
  if ( ptr[0] != v46 )
  {
    v33 = result;
    free(ptr[0]);
    return v33;
  }
  return result;
}
