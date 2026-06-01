__int64 __fastcall sub_D73260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int8 v10; // [rsp+1h] [rbp-49h]
  unsigned __int8 **v11; // [rsp+Ah] [rbp-40h] BYREF
  void *v12; // [rsp+12h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+1Ah] [rbp-30h]

  if ( a5 <= 1 )
    return 1;
  if ( !(unsigned __int8)sub_D71A50(a4, a5) )
    return 1;
  v8 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  sub_D47D10((__int64)&v12, a4, 0);
  v9 = *(_QWORD *)(v8 + 8);
  v11 = (unsigned __int8 **)sub_E33C90(a1, v8, 2422, 0);
  if ( v11 )
  {
    sub_CF8A40(&v11, (__int64)&v12);
    if ( v11 )
    {
      sub_AE9DF0(v11, v9, 8u);
      if ( v11 )
        sub_AE9DF0(v11, a5, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( v13 > 0x40 )
  {
    if ( v12 )
    {
      v10 = result;
      operator delete[](v12);
      return v10;
    }
  }
  return result;
}
