__int64 __fastcall add_idc_func_shortcut(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  const char *v18; // [rsp+0h] [rbp-28h] BYREF
  __int128 v19; // [rsp+8h] [rbp-20h]
  unsigned __int64 v20; // [rsp+18h] [rbp-10h]

  v9 = &s1;
  v20 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 24) == 0;
  v18 = nullptr;
  v19 = 0;
  if ( !v10 )
    v9 = *(const char **)(a1 + 16);
  if ( !(unsigned __int8)call_idc_func(0, v9, 0, 0, &v18, 0) )
  {
    v9 = &s1;
    if ( (_QWORD)v19 )
      v9 = v18;
    sub_169630((int)"%s", (__int64)v9, v11, v12, v13, v14, (__m128)0LL, a3, a4, a5, v15, v16, a8, a9, (char)v18);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v9, v11, v12, v13);
  }
  return 1;
}
