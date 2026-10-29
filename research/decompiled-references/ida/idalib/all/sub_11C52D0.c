void __fastcall sub_11C52D0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 96LL))(*(_QWORD *)(a1 + 8)) )
  {
    sub_2253560(&v4, a2);
    sub_CEFAC0(a3, &v4);
    if ( (__int64 *)v4.m128i_i64[0] != &v5 )
      operator delete((void *)v4.m128i_i64[0]);
  }
}
