__m128 *__fastcall sub_1FFA4C0(__m128 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 i; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+20h] [rbp-28h]

  (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a2 + 8) + 32LL))(&v7);
  v2 = v8;
  if ( v7 == v8 )
  {
    v4 = v8;
  }
  else
  {
    for ( i = v7 + 64; ; i += 152 )
    {
      if ( *(_QWORD *)(i + 8) != *(_QWORD *)i )
        sub_2009B60(i, **(_QWORD **)i, *(_QWORD *)(*(_QWORD *)i + 8LL));
      if ( v2 == i + 88 )
        break;
    }
    v4 = v8;
  }
  v6 = v4;
  a1[1].m128_u64[0] = v9;
  *a1 = _mm_loadh_ps((const double *)&v6);
  return a1;
}
