void __fastcall sub_1A2F720(unsigned __int64 a1, __m128 a2, __m128 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbp
  __m128i *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+10h] [rbp-78h]
  _BYTE v21[24]; // [rsp+18h] [rbp-70h] BYREF
  void *v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  _BYTE v24[72]; // [rsp+40h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  sub_18C3E40(a1);
  sub_190D5E0(a1, a2);
  if ( !a6 )
    sub_17A2E10(a1);
  v8 = *(__m128i **)(v7 + 1584);
  sub_B88650((__int64)v8, 1);
  v13 = sub_B7E900((__int64)v8, 1, v9, v10, v11, v12);
  v22 = v24;
  v23 = 0x400000000LL;
  sub_1A2F650((__int64)&v22, v13, 0);
  ptr = v21;
  v18 = 0;
  v20 = 0x200000000LL;
  sub_17CC930(
    a1,
    nullptr,
    v8[1].m128i_u32[2],
    v8,
    (void **)v22,
    (unsigned int)v23,
    (__m128i)a2,
    *(double *)a3.m128_u64,
    0,
    0,
    (__int64)&v18);
  if ( ptr != v21 )
    free(ptr);
  sub_1891290((__int64 *)a1, 0, v8->m128i_i64, v14, v15, v16, (__m128i)a2, a3);
  sub_15F7280(&v18, a1, nullptr, 0, 0, v17);
  if ( ptr )
    sub_15F2350(&v18, ptr);
  if ( v22 != v24 )
    free(v22);
}
