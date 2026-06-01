__int64 __fastcall sub_225C570(std::_V2 *a1, const char **a2)
{
  unsigned int v3; // ebp
  std::_V2 *v4; // rdi
  std::_V2 *v5[2]; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v6[16]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h]
  _BYTE v9[176]; // [rsp+38h] [rbp-B0h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(std::_V2 *))(*(_QWORD *)a1 + 96LL))(a1) )
  {
    ptr = v9;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_22538C0(a2, (__int64)&ptr);
    v3 = (*(__int64 (__fastcall **)(std::_V2 *, void **))(*(_QWORD *)a1 + 112LL))(a1, &ptr);
    if ( !v3 )
    {
      v5[0] = (std::_V2 *)v6;
      sub_2259A00(v5, ptr, (__int64)ptr + si128.m128i_i64[0]);
      sub_A0AAD0((__int64)a1 + 40, v5);
      v4 = v5[0];
      if ( (_BYTE *)v5[0] != v6 )
        operator delete(v5[0]);
      std::_V2::system_category(v4);
    }
    if ( ptr != v9 )
      free(ptr);
    return v3;
  }
  else
  {
    std::_V2::generic_category(a1);
    return 2;
  }
}
