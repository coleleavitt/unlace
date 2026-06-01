unsigned __int64 __fastcall sub_1CF2A10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
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
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // cl
  __m128 *v23; // r12
  __int64 *v24; // rbp
  int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  unsigned __int64 v30; // [rsp+8h] [rbp-E0h]
  __m128 *v31; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D0h]
  __m128 *v33; // [rsp+20h] [rbp-C8h]
  char v34; // [rsp+2Fh] [rbp-B9h]
  _QWORD *v35; // [rsp+30h] [rbp-B8h]
  __int64 v36; // [rsp+38h] [rbp-B0h]
  __m128 v37; // [rsp+40h] [rbp-A8h] BYREF
  int v38; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int16 *v39; // [rsp+58h] [rbp-90h]
  unsigned __int16 *v40; // [rsp+60h] [rbp-88h]
  __int64 v41; // [rsp+68h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v43[16]; // [rsp+80h] [rbp-68h] BYREF
  __m128 v44; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp-40h]

  sub_C93B20((__int64)&v38, a2);
  v4 = v39;
  v5 = v40;
  v9 = sub_1CE88F0(a1, v39, a3, a4, v6, v7, v8);
  if ( v9 == 1 )
    return 1;
  v14 = v9;
  v32 = sub_1CE88F0(a1, v5, a3, a4, v10, v11, v12);
  if ( v32 == 1 )
    return 1;
  v15 = &v37;
  v34 = 0;
  ptr[0] = v43;
  v16 = _mm_loadh_ps((const double *)&v41);
  ptr[1] = (void *)0x200000000LL;
  v31 = (__m128 *)&v38;
  v33 = &v44;
  v37 = v16;
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
          v35 = v18;
          v36 = v19;
          sub_C93B20((__int64)v33, a2);
          v20 = sub_1CB9120((__int64)a1, v36);
          if ( !v20 )
          {
            result = 1;
            goto LABEL_22;
          }
          if ( (*v35 & 0x200000LL) != 0 )
            v21 = v35[2 * ((*v35 & 0x80000LL) != 0) + 4];
          else
            v21 = v35[2];
          v22 = v34;
          if ( v20 != v21 )
            v22 = 1;
          v44.m128_u64[0] = v20 | 3;
          v34 = v22;
          sub_1743080((__int64)ptr, v20 | 3);
        }
      }
    }
    v15 = (__m128 *)((char *)v15 + 8);
  }
  while ( v15 != v31 );
  v23 = (__m128 *)*a1;
  v24 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632)
    || v34
    || v4 != (unsigned __int16 *)v24
    || v5 != (unsigned __int16 *)(v32 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v31 = (__m128 *)(v32 & 0xFFFFFFFFFFFFFFFELL);
    v25 = v38;
    sub_C93B20((__int64)v33, a2);
    v29 = sub_C00A40(v45, a2, v26, v27, v28);
    result = sub_1C07820(
               v23,
               v29,
               v25,
               (__int64)ptr,
               v24,
               v32 & 0xFFFFFFFFFFFFFFFELL,
               *(double *)v16.m128_u64,
               a4,
               0,
               1,
               0);
  }
  else
  {
    v31 = (__m128 *)v5;
    v44 = _mm_loadh_ps((const double *)&v31);
    sub_1912220((__int64)v23, a2, 0, v33, 2, v44, a4);
    result = a2;
  }
LABEL_22:
  if ( ptr[0] != v43 )
  {
    v30 = result;
    free(ptr[0]);
    return v30;
  }
  return result;
}
