unsigned __int64 __fastcall sub_2F4720(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // r15
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v17; // [rsp+18h] [rbp-120h]
  __m128i v18; // [rsp+20h] [rbp-118h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+30h] [rbp-108h]
  __int64 v20; // [rsp+38h] [rbp-100h]
  __int64 v21; // [rsp+40h] [rbp-F8h]
  __m128i v22; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-D8h]
  int v25; // [rsp+68h] [rbp-D0h]
  __int64 v26; // [rsp+70h] [rbp-C8h]
  _QWORD v27[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+90h] [rbp-A8h]
  __m128i v29; // [rsp+98h] [rbp-A0h]
  _QWORD v30[2]; // [rsp+A8h] [rbp-90h] BYREF
  int v31; // [rsp+B8h] [rbp-80h]
  __int64 v32; // [rsp+C0h] [rbp-78h]
  _BYTE v33[40]; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+F8h] [rbp-40h]

  v5 = a3 + 40;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v34 = __readfsqword(0x28u);
  v20 = v7;
  v9 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0;
  v22 = v8;
  *(_OWORD *)(a3 + 24) = 0;
  v21 = v9;
  v23 = 0;
  v19 = off_4CE5D0;
  copy_tinfo_t(&v23, v5);
  v10 = *(_QWORD *)(a3 + 48);
  v19 = off_4CFDF8;
  v24 = v10;
  v25 = *(_DWORD *)(a3 + 56);
  v26 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v13 = *(_QWORD *)(a3 + 16);
  if ( v13 )
  {
    *(_QWORD *)(a3 + 24) = 0;
    v17 = v11;
    v18 = v12;
    qfree(v13);
    v12 = _mm_load_si128(&v18);
    v11 = v17;
  }
  *(_QWORD *)(a3 + 16) = v11;
  *(__m128i *)(a3 + 24) = v12;
  copy_tinfo_t(v5, a1 + 40);
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(a1 + 64);
  sub_2CA600((__int64)v33, a4);
  v14 = _mm_loadu_si128(&v22);
  v27[0] = off_4CE5D0;
  v27[1] = v20;
  v29 = v14;
  v28 = v21;
  v21 = 0;
  v30[0] = 0;
  v22 = 0;
  copy_tinfo_t(v30, &v23);
  v27[0] = off_4CFDF8;
  v30[1] = v24;
  v31 = v25;
  v32 = v26;
  sub_2F3ED0(a1, 0, (__int64 *)(0x8E38E38E38E38E39LL * ((a2 - a1) >> 3)), (__int64)v27, (__int64)v33);
  v27[0] = off_4CE5D0;
  clear_tinfo_t(v30);
  if ( v28 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v28);
  }
  sub_63210((__int64)v33);
  v19 = off_4CE5D0;
  clear_tinfo_t(&v23);
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v21);
  }
  return v34 - __readfsqword(0x28u);
}
