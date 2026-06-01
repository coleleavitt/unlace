int *__fastcall sub_1198850(__int64 a1, int a2)
{
  int *result; // rax
  __int64 v3; // rax
  __m128i v4; // [rsp+0h] [rbp-68h] BYREF
  __int64 v5; // [rsp+10h] [rbp-58h] BYREF
  __m128i v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  result = *(int **)a1;
  if ( **(_DWORD **)a1 == a2 )
  {
    *result = a2;
  }
  else
  {
    sub_11BBBE0(&v6);
    sub_E7ED70(&v4, "-fcomplex-arithmetic=", &v6);
    if ( (_BYTE *)v6.m128i_i64[0] != v7 )
      operator delete((void *)v6.m128i_i64[0]);
    v3 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v3 + 8) )
    {
      v6.m128i_i64[0] = (__int64)v7;
      sub_1189220(&v6, *(_BYTE **)v3, *(_QWORD *)v3 + *(_QWORD *)(v3 + 8));
    }
    else
    {
      sub_11979A0(&v6, **(_DWORD **)a1);
    }
    sub_1189F50(*(__int64 **)(a1 + 8), (const void **)&v6, (const void **)&v4);
    if ( (_BYTE *)v6.m128i_i64[0] != v7 )
      operator delete((void *)v6.m128i_i64[0]);
    if ( (__int64 *)v4.m128i_i64[0] != &v5 )
      operator delete((void *)v4.m128i_i64[0]);
    result = *(int **)a1;
    **(_DWORD **)a1 = a2;
  }
  return result;
}
