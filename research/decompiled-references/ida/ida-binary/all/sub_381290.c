__int64 sub_381290()
{
  __int64 v0; // rax
  __m128i si128; // xmm0
  int v2; // r9d
  __int64 v3; // rbp
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  _QWORD vars20[32]; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars120; // [rsp+120h] [rbp+120h]
  __int64 vars128; // [rsp+128h] [rbp+128h]
  __int64 vars130; // [rsp+130h] [rbp+130h]
  __int64 vars140; // [rsp+140h] [rbp+140h]
  unsigned __int64 vars148; // [rsp+148h] [rbp+148h]
  __int64 vars158; // [rsp+158h] [rbp+158h]
  __int64 vars160; // [rsp+160h] [rbp+160h]
  __int64 vars170; // [rsp+170h] [rbp+170h]
  __int64 vars178; // [rsp+178h] [rbp+178h]
  unsigned __int64 vars188; // [rsp+188h] [rbp+188h]

  vars188 = __readfsqword(0x28u);
  vars0 = 0;
  vars8 = 0;
  v0 = qvector_reserve(&vars0, 0, 34, 1);
  vars0 = v0;
  *(_QWORD *)&vars8 = 34;
  *(__m128i *)v0 = _mm_load_si128((const __m128i *)&xmmword_5DD390);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD3A0);
  *(_BYTE *)(v0 + 32) = 115;
  *(__m128i *)(v0 + 16) = si128;
  *(_BYTE *)(vars0 + 33) = 0;
  sub_380E10(vars20, (const char *)&vars0);
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, (const char *)&vars0);
  }
  if ( (unsigned int)callui(203, 0, (unsigned int)vars20, (unsigned int)&vars0, (unsigned int)&callui, v2, 0, 0, 0) == 1
    && vars148 > 1 )
  {
    v3 = qstrdup(vars140);
  }
  else
  {
    v3 = 0;
  }
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, nullptr);
  }
  vars20[0] = &tos_dialog_t___vtable;
  if ( vars120 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)vars120 + 8LL))(vars120);
  if ( vars170 )
  {
    vars178 = 0;
    qfree(vars170, nullptr);
  }
  if ( vars158 )
  {
    vars160 = 0;
    qfree(vars158, nullptr);
  }
  if ( vars140 )
  {
    vars148 = 0;
    qfree(vars140, nullptr);
  }
  if ( vars128 )
  {
    vars130 = 0;
    qfree(vars128, nullptr);
  }
  forms::dialog_desc_t__::vfunc_0(vars20, nullptr);
  return v3;
}
