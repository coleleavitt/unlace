unsigned __int64 __fastcall sub_2AFF70(__int64 a1, __int64 a2, unsigned __int64 a3)
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
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rbx
  __int64 v18; // rdi
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h]
  __m128i v22; // [rsp+18h] [rbp-70h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __m128i v25; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_15;
  v5 = a3 << 6;
  v6 = (a3 << 6) + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2A7E00 )
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
  if ( v9 == sub_2A7E00 )
  {
    if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v8 + 48) )
      goto LABEL_7;
LABEL_15:
    sub_2A8A80();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_15;
LABEL_7:
  switch_dbctx(*(int *)(a1 + 8));
  v10 = *(_QWORD *)(a1 + 40);
  v24 = 0;
  v11 = (_QWORD *)(v5 + v10);
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v11[1] = *(_QWORD *)(v12 + 8);
  v13 = *(int *)(a2 + 8);
  v26[0] = 0;
  v25 = 0;
  switch_dbctx(v13);
  sub_2AB770((__int64)&v24, v12 + 16);
  copy_tinfo_t(v26, v12 + 40);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
    *(_QWORD *)(a1 + 32),
    v26,
    *(unsigned int *)(a2 + 12),
    *(unsigned int *)(a1 + 12),
    1);
  switch_dbctx(*(int *)(a1 + 8));
  v14 = _mm_loadu_si128(&v25);
  v15 = v24;
  v24 = 0;
  v22 = v14;
  v21 = v15;
  v23 = 0;
  v25 = 0;
  copy_tinfo_t(&v23, v26);
  clear_tinfo_t(v26);
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v24);
  }
  v16 = _mm_loadu_si128(&v22);
  v17 = v21;
  v21 = 0;
  v22 = 0;
  v18 = v11[2];
  if ( v18 )
  {
    v11[3] = 0;
    v20 = v16;
    qfree(v18);
    v16 = _mm_load_si128(&v20);
  }
  v11[2] = v17;
  *(__m128i *)(v11 + 3) = v16;
  copy_tinfo_t(v11 + 5, &v23);
  clear_tinfo_t(&v23);
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v21);
  }
  return v27 - __readfsqword(0x28u);
}
