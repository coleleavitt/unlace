__int64 __fastcall sub_1D1B260(
        __int64 **a1,
        __m128i *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        char a9)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r12
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  _BYTE *v32; // r12
  unsigned __int8 v33; // al
  unsigned int v34; // ebp
  unsigned __int8 v35; // r14
  unsigned __int64 v36; // r15
  __int64 v38; // [rsp+18h] [rbp-60h] BYREF
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v38 = a3;
  v11 = sub_F22F50(&v38);
  v12 = v11;
  if ( v11 )
  {
    v39[0] = *(_QWORD *)(v11 + 16);
    v13 = sub_F22BD0(v39, 0);
    v18 = sub_1D1B120((__int64)a1, v13, a7, a8, v14, v15, v16, v17);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v12 + 8);
      if ( *((_DWORD *)*a1 + 3158) || a2->m128i_i64[1] != (v19 & 0xFFFFFFFFFFFFFFF8LL) || v18 != v13 )
      {
        v20 = (*a1)[31];
        sub_F22AA0((unsigned __int64 *)v39, v18);
        return sub_A80CA0(v20, a2->m128i_i64[1], (v19 >> 2) & 1, v39[0]);
      }
      return v38;
    }
    return 0;
  }
  v22 = (_QWORD *)sub_F22F70(&v38);
  if ( v22 )
  {
    v23 = a2->m128i_i64[1];
    v24 = a5;
    if ( v23 )
      v24 = 0;
    else
      LODWORD(v12) = a6;
    if ( *((_DWORD *)*a1 + 3158) || v23 != (*v22 & 0xFFFFFFFFFFFFFFF8LL) || (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      return sub_1CE6900(a1, a2, a4, v22[1], a4, v24, *(double *)a7.m128_u64, *(double *)a8.m128_u64, v12, a9);
    return v38;
  }
  v25 = sub_F22BD0(&v38, 0);
  if ( v25 )
  {
    v30 = sub_1D1B120((__int64)a1, v25, a7, a8, v26, v27, v28, v29);
    if ( !v30 )
      return 0;
    v31 = (*a1)[31];
    sub_F22AA0((unsigned __int64 *)v39, v30);
    return sub_A80CA0(v31, a2->m128i_i64[1], 0, v39[0]);
  }
  else
  {
    v32 = sub_F22F10(&v38);
    v33 = sub_F227A0((__int64)v32);
    v34 = *(_DWORD *)v32;
    v35 = v33;
    v36 = sub_F22790((__int64)v32);
    sub_F22160((__int64)v39, (__int64)v32);
    return sub_A80A10((*a1)[31], (__int64)v39, v36, (v34 >> 3) & 0x3FFF, v35);
  }
}
