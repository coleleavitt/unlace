__m128 *__fastcall sub_1FF5720(__m128 *a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  __int64 *v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+20h] [rbp-38h]

  (*(void (__fastcall **)(__int64 **))(**(_QWORD **)(a2 + 8) + 32LL))(&v12);
  v4 = v12;
  v5 = v13;
  if ( v12 == v13 )
  {
    v9 = v13;
  }
  else
  {
    do
    {
      v6 = *v4;
      v7 = v4[1];
      v8 = v4 + 8;
      v4 += 19;
      sub_2008D50(v8, v6, v7, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
    }
    while ( v5 != v4 );
    v9 = v13;
  }
  v11 = v9;
  a1[1].m128_u64[0] = v14;
  *a1 = _mm_loadh_ps((const double *)&v11);
  return a1;
}
