unsigned __int64 __fastcall sub_320D00(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm0_8
  int v10; // ebx
  int v11; // edx
  const char *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  const char *v18; // rsi
  const char *v20; // rdx
  const char *v21; // [rsp+0h] [rbp-98h] BYREF
  __int128 v22; // [rsp+8h] [rbp-90h]
  _QWORD v23[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v9 = 0.0;
  v10 = 1;
  v27 = __readfsqword(0x28u);
  v21 = nullptr;
  v22 = 0;
  do
  {
    v11 = v10++;
    sub_169A50((__int64 *)&v21, (__int64)"Snippet_%d", v11);
    v12 = &s1;
    if ( (_QWORD)v22 )
      v12 = v21;
  }
  while ( (*(__int64 (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 16LL))(*a1, v12) );
  v18 = (const char *)&v21;
  if ( (unsigned __int8)sub_31DCF0(a1, (__int64)&v21, 1, v13, v14, v15, (__m128)0LL, a3, a4, a5, v16, v17, a8, a9) )
  {
    sub_31D450(a1, 1);
    v20 = &s1;
    if ( (_QWORD)v22 )
      v20 = v21;
    (*(void (__fastcall **)(_QWORD *, _QWORD, const char *))(*(_QWORD *)*a1 + 32LL))(v23, *a1, v20);
    v18 = **(const char ***)(*a1 + 16LL);
    (*(void (__fastcall **)(_QWORD, const char *, _QWORD *))(*(_QWORD *)*a1 + 40LL))(*a1, v18, v23);
    sub_31D200(a1);
    if ( v25 )
    {
      v26 = 0;
      v9 = qfree(v25, v18);
    }
    if ( v24 )
      --*(_DWORD *)(v24 + 12);
    if ( v23[0] )
    {
      v23[1] = 0;
      qfree(v23[0], v18, v9);
    }
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v18);
  }
  return v27 - __readfsqword(0x28u);
}
