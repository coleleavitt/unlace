unsigned __int64 __fastcall sub_1447F0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD **v4; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __m128i v16; // xmm1
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _BYTE *v30; // rcx
  __m128i v31; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD ***)(a1 + 792);
  v32 = __readfsqword(0x28u);
  v6 = sub_13D570(v4, a2);
  if ( !v6 )
    return v32 - __readfsqword(0x28u);
  v7 = *v6;
  if ( !v7 )
    return v32 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(v7 + 8);
  if ( a3 == v8 + 1312 )
    return v32 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a3 + 8);
  v31 = 0u;
  v10 = 0;
  if ( v9 )
  {
    v14 = qalloc(64);
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v17 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    *(_OWORD *)(v14 + 16) = 0;
    *(__m128i *)(v14 + 8) = v16;
    *(_OWORD *)(v14 + 32) = 0;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v31 = (__m128i)(unsigned __int64)v14;
    v18 = *(_QWORD *)v14;
    *(_OWORD *)(v14 + 48) = 0;
    v19 = v14 & 0xFFFFFFFFFFFFFFFCLL | v18 & 3;
    *(_QWORD *)v14 = v19;
    v20 = v31.m128i_i64[0];
    v21 = (__m128i)v31.m128i_u64[0];
    *(_QWORD *)v31.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v21, v21);
    *(_QWORD *)v31.m128i_i64[0] |= 2uLL;
    if ( !*(_QWORD *)(a3 + 8) )
      sub_1342D0(64, a2, v19, v17, v15);
    if ( *(_QWORD *)a3 )
      v22 = **(_QWORD **)a3 & 0xFFFFFFFFFFFFFFFCLL;
    else
      v22 = 0;
    v23 = sub_144630(&v31, v22, v31.m128i_i64[0]);
    v25 = v31.m128i_i64[0];
    v26 = v23 & 0xFFFFFFFFFFFFFFFCLL;
    v27 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31.m128i_i64[0] & 3LL;
    *(_QWORD *)v31.m128i_i64[0] = v27;
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      if ( under_debugger )
        goto LABEL_27;
      v23 = interr(3437, v26, v27, v25, v24);
    }
    v28 = v23;
    do
    {
      v29 = v28;
      v28 = *(_QWORD *)(v28 + 8);
    }
    while ( (*(_BYTE *)v28 & 2) == 0 );
    v10 = v31.m128i_i64[0];
    *(_QWORD *)(v31.m128i_i64[0] + 8) = v29;
    if ( (*(_BYTE *)v23 & 2) == 0 )
      goto LABEL_22;
    if ( !under_debugger )
    {
      interr(3438, v26, v10, v29, v24);
      do
      {
        v23 = (__int64)v30;
LABEL_22:
        v30 = *(_BYTE **)(v23 + 16);
      }
      while ( (*v30 & 2) == 0 );
      *(_QWORD *)(v10 + 16) = v23;
      v9 = *(_QWORD *)(a3 + 8);
      goto LABEL_5;
    }
LABEL_27:
    BUG();
  }
LABEL_5:
  v11 = *(_QWORD *)(v8 + 1312);
  *(_QWORD *)(v8 + 1312) = v10;
  v12 = *(_QWORD *)(v8 + 1320);
  *(_QWORD *)(v8 + 1320) = v9;
  v31.m128i_i64[0] = v11;
  v31.m128i_i64[1] = v12;
  if ( v11 )
  {
    sub_839B0((unsigned __int64 **)&v31);
    if ( v31.m128i_i64[0] )
      qfree(v31.m128i_i64[0]);
  }
  return v32 - __readfsqword(0x28u);
}
