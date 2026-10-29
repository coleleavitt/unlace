__int64 __fastcall sub_225C480(void **this, const char **a2)
{
  void **v2; // rbp
  __int64 v3; // rdx
  _BYTE *v4; // r12
  void *v6[2]; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v7[16]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-C0h]
  _BYTE v10[176]; // [rsp+38h] [rbp-B0h] BYREF

  v2 = this;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v10;
  sub_22538C0(a2, (__int64)&ptr);
  (*((void (__fastcall **)(void **, void **))*this + 14))(this, &ptr);
  if ( *((_BYTE *)this + 56) )
  {
    this = &ptr;
    sub_228F0B0(&ptr, 1, 0);
    v3 = si128.m128i_i64[0];
    v4 = ptr;
    if ( !si128.m128i_i64[0] )
      goto LABEL_3;
  }
  else
  {
    v3 = si128.m128i_i64[0];
    v4 = ptr;
    if ( !si128.m128i_i64[0] )
      goto LABEL_3;
  }
  v6[0] = v7;
  sub_2259A00(v6, v4, (__int64)&v4[v3]);
  sub_A0AAD0((__int64)(v2 + 3), v6);
  this = (void **)v6[0];
  if ( v6[0] != v7 )
    operator delete(v6[0]);
  v4 = ptr;
LABEL_3:
  std::_V2::system_category((std::_V2 *)this);
  if ( v4 != v10 )
    free(v4);
  return 0;
}
