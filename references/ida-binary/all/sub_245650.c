__int64 __fastcall reload_exceptions_ah_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __m128 v8; // xmm0
  int v9; // eax
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  char *v12; // rcx
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  char *vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v8 = 0;
  vars18 = __readfsqword(0x28u);
  vars0 = nullptr;
  vars8 = 0;
  sub_230BD0(dbg, &vars0);
  if ( (unsigned __int64)vars8 > 1 )
  {
    if ( qword_8CC310 )
    {
      xmmword_8CC318 = 0;
      *(double *)v8.m128_u64 = qfree(qword_8CC310, (const char *)&vars0);
      qword_8CC310 = nullptr;
      *(&xmmword_8CC318 + 1) = 0;
    }
    sub_2451C0(dbg, (__int64 *)&vars0, 0);
  }
  v9 = xmmword_8CC2F8;
  v10 = qword_8CC600;
  v11 = qword_8CC2F0;
  v12 = (char *)(unsigned int)xmmword_8CC2F8;
  if ( qword_8CC600 )
  {
    *(_QWORD *)qword_8CC600 = qword_8CC2F0;
    v13 = (const char *)&off_18;
    v10[2] = v9;
    sub_23D480((__int64)v10, 24, v11, v12, *(double *)v8.m128_u64);
  }
  else
  {
    v13 = byte_9 + 4;
    sub_20CEA0(dbg, 13, qword_8CC2F0, (unsigned int)xmmword_8CC2F8);
  }
  sub_16B9E0(
    (int)"Exception table has been reloaded",
    (__int64)v13,
    v14,
    v15,
    v16,
    v17,
    v8,
    a2,
    a3,
    a4,
    v18,
    v19,
    a7,
    a8,
    (char)vars0);
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree(vars0, v13);
  }
  return 0;
}
