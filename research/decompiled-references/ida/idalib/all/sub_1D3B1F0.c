__int64 __fastcall sub_1D3B1F0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v16; // rax
  __m128i v17; // xmm1
  unsigned __int64 v18; // rax
  bool v20; // [rsp+1Eh] [rbp-7Ah] BYREF
  bool v21; // [rsp+1Fh] [rbp-79h] BYREF
  void *v22; // [rsp+20h] [rbp-78h]
  __int64 v23; // [rsp+28h] [rbp-70h]
  __m128i v24; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  _OWORD v27[4]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a2;
  v9 = sub_B7D580(a2, 0, a3, a4);
  if ( !v9 )
    v9 = a2;
  v10 = sub_B7D580(a3, 0, v7, v8);
  ptr = v27;
  v22 = &v24;
  if ( !v10 )
    v10 = a3;
  v11 = 0;
  v23 = 0x100000000LL;
  v26 = 0x100000000LL;
  v12 = *(_QWORD *)(v9 + 56);
  if ( (v12 & 4) != 0 )
  {
    v18 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v18 + 40) )
    {
      LODWORD(v23) = 1;
      v11 = 1;
      v24 = _mm_loadu_si128((const __m128i *)(v18 + 40));
    }
  }
  v13 = *(_QWORD *)(v10 + 56);
  v14 = 0;
  if ( (v13 & 4) != 0 )
  {
    v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v16 + 40) )
    {
      v17 = _mm_loadu_si128((const __m128i *)(v16 + 40));
      LODWORD(v26) = 1;
      v14 = 1;
      v27[0] = v17;
    }
  }
  if ( (unsigned __int8)sub_175BCD0(a1, v9, (__int64)&v24, v11, v10, &v20, (__int64)v27, v14)
    || (unsigned __int8)sub_175BCD0(a1, v10, (__int64)ptr, (unsigned int)v26, v9, &v21, (__int64)v22, (unsigned int)v23)
    || v20 == v21 )
  {
    v5 = 0;
  }
  else if ( !v20 )
  {
    v5 = a3;
  }
  if ( ptr != v27 )
    free(ptr);
  if ( v22 != &v24 )
    free(v22);
  return v5;
}
