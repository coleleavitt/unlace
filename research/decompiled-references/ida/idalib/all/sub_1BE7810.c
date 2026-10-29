__int64 __fastcall sub_1BE7810(
        __int64 a1,
        unsigned __int64 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  char v9; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  char v27; // si
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // r12
  bool v34; // [rsp+8h] [rbp-120h]
  __int64 v35; // [rsp+8h] [rbp-120h]
  unsigned __int64 v36; // [rsp+10h] [rbp-118h] BYREF
  int *v37; // [rsp+18h] [rbp-110h]
  __int64 v38; // [rsp+20h] [rbp-108h] BYREF
  __int64 v39; // [rsp+28h] [rbp-100h] BYREF
  __int64 v40; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-F0h] BYREF
  __m128i v42; // [rsp+40h] [rbp-E8h] BYREF
  __m128 v43; // [rsp+50h] [rbp-D8h] BYREF
  int v44[50]; // [rsp+60h] [rbp-C8h] BYREF

  v9 = a4;
  v13 = *a2;
  LODWORD(v36) = a3;
  v39 = a5;
  v38 = a6;
  v34 = 0;
  v14 = sub_BFB9F0(v13 & 0xFFFFFFFFFFFFFFFELL);
  if ( (*(_WORD *)v14 & 0x1FF) == 4 )
  {
    v21 = *(_QWORD *)(v14 + 16);
    v22 = sub_BFB9F0(v21);
    v14 = v22;
    if ( v21 == v22 )
      v34 = *(_QWORD *)(v22 + 40) != 0;
  }
  v15 = sub_1BE70F0(a1, v14, 0, &v40, 0, 0, *(double *)a7.m128_u64, a8);
  if ( !v15 )
    goto LABEL_8;
  v44[0] = sub_EEB7E0(*a2 & 0xFFFFFFFFFFFFFFFELL, v14, *(double *)a7.m128_u64);
  v37 = v44;
  if ( (unsigned __int8)sub_18F5260(a1, v15, v44, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
    goto LABEL_11;
  if ( !v34 && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 35 <= 3 && !sub_B979F0((_QWORD *)v15) )
  {
    if ( (_BYTE)a4 )
    {
      v32 = sub_C00A40(v14, v15, v29, v30, v31);
      sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), v32, 0xD08u, 0);
      v42.m128i_i32[0] = 0;
      v33 = sub_1587D10((__int64)v37, v42.m128i_i32);
      v43.m128_u64[0] = sub_EEC8C0(v14, (__int64)&v42, *(double *)a7.m128_u64);
      sub_1587DB0(v33, (__int64 *)&v43);
      sub_15F7200(v37);
      *a2 = 1;
      return a4;
    }
    return 0;
  }
  v16 = sub_1BD6F50(a1, (void **)(*a2 & 0xFFFFFFFFFFFFFFFELL), v40, v15, a7, a8);
  if ( !(_BYTE)v36 )
  {
    if ( v16 == 1 )
      goto LABEL_8;
    goto LABEL_12;
  }
  v16 = sub_19179A0(a1, (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL), 1u, v17, v18, v19, a7, a8);
  if ( v16 == 1 )
  {
LABEL_11:
    *a2 = 1;
    return 1;
  }
LABEL_12:
  if ( v16 )
  {
    *a2 = v16;
    return 1;
  }
LABEL_8:
  if ( !(_BYTE)a4 )
    return 0;
  sub_168B9F0((__int64)v44, (__int64 *)(a1 + 8), v39, a9, 0);
  v41 = *(_QWORD *)(v14 + 16);
  v23 = sub_15894B0((__int64)v44, &v41);
  v24 = sub_1605D30(v23, &v38);
  v35 = sub_15884C0(v24, &v39);
  v42 = _mm_loadu_si128((const __m128i *)(v14 + 40));
  v25 = sub_E90530(v42.m128i_i64) >> 32;
  if ( v42.m128i_i64[0] )
  {
    v43 = (__m128)_mm_load_si128(&v42);
    v26 = *(_QWORD *)(v42.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v26 )
    {
      v27 = 0;
      v36 = v43.m128_u64[1];
      v43 = _mm_loadh_ps((const double *)&v36);
      while ( (*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v27 = v9;
        v26 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      if ( v27 )
        v43.m128_u64[0] = v26;
    }
    v36 = v25;
    v28 = sub_E90530((__int64 *)&v43);
    LODWORD(v25) = v36;
  }
  else
  {
    v28 = 0;
  }
  v43.m128_u64[0] = __PAIR64__(v25, v28);
  sub_1587DB0(v35, (__int64 *)&v43);
  sub_15F7200(v44);
  sub_1BE6FF0(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, 0, 0);
  *a2 = 1;
  return a4;
}
