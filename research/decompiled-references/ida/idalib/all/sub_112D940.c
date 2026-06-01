void __fastcall sub_112D940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 i; // r13
  __int64 v9; // rax
  __int64 v10; // [rsp+18h] [rbp-D0h]
  __m128i v11; // [rsp+20h] [rbp-C8h] BYREF
  __int16 v12; // [rsp+40h] [rbp-A8h]
  __m128i v13[2]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v14; // [rsp+70h] [rbp-78h]
  __m128i v15[6]; // [rsp+80h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(a1 + 624);
  v6 = 32LL * *(unsigned int *)(a1 + 632);
  for ( i = v5 + v6; v5 != i; ++*(_DWORD *)(a3 + 8) )
  {
    while ( !*(_QWORD *)(v5 + 8) )
    {
      v5 += 32;
      if ( v5 == i )
        return;
    }
    v12 = 261;
    v14 = 260;
    v13[0].m128i_i64[0] = v5;
    v11.m128i_i64[0] = (__int64)"-L";
    v11.m128i_i64[1] = 2;
    sub_A41580(v15, &v11, v13, a4, a5, v6);
    v9 = sub_10DA6C0(a2, (__int64)v15);
    a4 = *(unsigned int *)(a3 + 8);
    if ( a4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v10 = v9;
      sub_2237220(a3, a3 + 16, a4 + 1, 8);
      a4 = *(unsigned int *)(a3 + 8);
      v9 = v10;
    }
    v5 += 32;
    *(_QWORD *)(*(_QWORD *)a3 + 8 * a4) = v9;
  }
}
