unsigned __int64 __fastcall sub_2B5330(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // r13
  _QWORD *v11; // r13
  __int64 v12; // rbx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rbx
  __m128i v18; // [rsp+0h] [rbp-88h] BYREF
  __int64 v19; // [rsp+10h] [rbp-78h]
  __m128i v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __m128i v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_15;
  v5 = a3 << 6;
  v6 = (a3 << 6) + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 48) )
      goto LABEL_15;
  }
  else if ( !v7() )
  {
    goto LABEL_15;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v8 + 48) )
      goto LABEL_7;
LABEL_15:
    sub_2ADE40();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_15;
LABEL_7:
  switch_dbctx();
  v10 = *(_QWORD *)(a1 + 40);
  v22 = 0;
  v11 = (_QWORD *)(v5 + v10);
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v11[1] = *(_QWORD *)(v12 + 8);
  v24 = 0;
  v23 = 0;
  switch_dbctx();
  sub_2B0B30((__int64)&v22, v12 + 16);
  copy_tinfo_t();
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
    *(_QWORD *)(a1 + 32),
    &v24,
    *(unsigned int *)(a2 + 12),
    *(unsigned int *)(a1 + 12),
    1);
  switch_dbctx();
  v13 = _mm_loadu_si128(&v23);
  v14 = v22;
  v22 = 0;
  v20 = v13;
  v19 = v14;
  v21 = 0;
  v23 = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree();
  }
  v15 = _mm_loadu_si128(&v20);
  v16 = v19;
  v19 = 0;
  v20 = 0;
  if ( v11[2] )
  {
    v11[3] = 0;
    v18 = v15;
    qfree();
    v15 = _mm_load_si128(&v18);
  }
  v11[2] = v16;
  *(__m128i *)(v11 + 3) = v15;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v19 )
  {
    v20.m128i_i64[0] = 0;
    qfree();
  }
  return v25 - __readfsqword(0x28u);
}
