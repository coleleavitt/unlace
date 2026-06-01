__int64 __fastcall sub_2258650(__int64 **this, const char **a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 *v6; // rdi
  __int64 v7; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-168h] BYREF
  __int16 v9; // [rsp+20h] [rbp-148h]
  void *ptr; // [rsp+30h] [rbp-138h] BYREF
  __m128i si128; // [rsp+38h] [rbp-130h]
  _BYTE v12[288]; // [rsp+48h] [rbp-120h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v12;
  sub_22538C0(a2, (__int64)&ptr);
  if ( ((unsigned int (__fastcall *)(__int64 **, void **))(*this)[14])(this, &ptr) )
  {
    v4 = 0;
    std::_V2::system_category((std::_V2 *)this);
  }
  else
  {
    v6 = *(this + 9);
    v7 = *v6;
    v9 = 261;
    v8[0] = ptr;
    v8[1] = si128.m128i_i64[0];
    v4 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v7 + 104))(v6, v8, a3);
  }
  if ( ptr != v12 )
    free(ptr);
  return v4;
}
