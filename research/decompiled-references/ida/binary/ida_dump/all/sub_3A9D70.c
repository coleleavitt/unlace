unsigned __int64 __fastcall sub_3A9D70(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  _BYTE *v6; // r13
  _BYTE *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // r12
  __int64 v15; // r8
  __int64 v16; // rbx
  _BYTE *v17; // r12
  __int64 v18; // rcx
  size_t v19; // r14
  __int64 v20; // r13
  _BYTE *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __m128i v26; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a2 + 136) )
    return v27 - __readfsqword(0x28u);
  tag_remove();
  v5 = a1[1];
  if ( !v5 )
    return v27 - __readfsqword(0x28u);
  v6 = (_BYTE *)*a1;
  if ( *(_BYTE *)*a1 != 32 )
    return v27 - __readfsqword(0x28u);
  v7 = (_BYTE *)*a1;
  do
    ++v7;
  while ( *v7 == 32 );
  v8 = (v7 - v6) / 32;
  v9 = v8;
  if ( !v8 )
    return v27 - __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v26 = 0;
  v25 = 0;
  v12 = v5 - 1 - 29 * v8;
  if ( v12 )
  {
    v25 = qvector_reserve();
    v12 = v26.m128i_i64[0];
    v11 = v25;
    v10 = v26.m128i_u64[1];
  }
  v13 = 0;
  if ( !v12 )
    goto LABEL_14;
LABEL_11:
  v14 = v12 + 3;
  v15 = v12 + 2;
  --v12;
  if ( v10 < v14 )
    goto LABEL_15;
  while ( 1 )
  {
    v26.m128i_i64[0] = v14;
    ++v13;
    *(_BYTE *)(v11 + v15) = 0;
    v16 = v25 + v12;
    *(_WORD *)v16 = -32542;
    *(_BYTE *)(v16 + 2) = -90;
    v10 = v26.m128i_u64[1];
    v12 = v26.m128i_i64[0];
    v11 = v25;
    if ( v9 == v13 )
      break;
    if ( v26.m128i_i64[0] )
      goto LABEL_11;
LABEL_14:
    v14 = 4;
    v15 = 3;
    if ( v10 < 4 )
    {
LABEL_15:
      v24 = v15;
      v25 = qvector_reserve();
      v15 = v24;
      v11 = v25;
    }
  }
  v17 = &v6[32 * v9];
  v18 = (a1[1] == 0) + a1[1] - 1 - 32 * v9;
  v19 = v18;
  v20 = v18;
  if ( v26.m128i_i64[0] )
  {
    v12 = v26.m128i_i64[0] - 1;
    v20 = v18 + v26.m128i_i64[0] - 1;
  }
  if ( v26.m128i_i64[1] < (unsigned __int64)(v20 + 1) )
  {
    v25 = qvector_reserve();
    v11 = v25;
  }
  v26.m128i_i64[0] = v20 + 1;
  *(_BYTE *)(v11 + v20) = 0;
  memmove((void *)(v12 + v25), v17, v19);
  v22 = a1[2];
  v23 = _mm_loadu_si128(&v26);
  v21 = (_BYTE *)*a1;
  *a1 = v25;
  v26.m128i_i64[1] = v22;
  *(__m128i *)(a1 + 1) = v23;
  if ( v21 )
  {
    v26.m128i_i64[0] = 0;
    qfree();
  }
  return v27 - __readfsqword(0x28u);
}
