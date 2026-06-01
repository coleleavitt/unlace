__int64 __fastcall sub_3A63A0(
        int a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  const char *v17; // rsi
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  const char *v25; // [rsp+0h] [rbp-38h] BYREF
  __int128 v26; // [rsp+8h] [rbp-30h]
  unsigned __int64 v27; // [rsp+18h] [rbp-20h]

  v11 = *a2;
  v27 = __readfsqword(0x28u);
  v13 = *(__int64 (__fastcall **)(__int64))(v11 + 72);
  if ( v13 == form_actions_impl_t__::vfunc_9 )
    v14 = a2[4];
  else
    v14 = v13((__int64)a2);
  if ( a1 > 19 )
  {
    if ( a1 == 100 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, a2);
    return 1;
  }
  if ( a1 > 16 )
  {
    sub_3A61C0(a2, 0);
    return 1;
  }
  if ( a1 != -2 )
  {
    if ( a1 == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, a2);
      sub_3A61C0(a2, 1);
    }
    return 1;
  }
  v25 = nullptr;
  v17 = (const char *)&v25;
  v26 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, const char **, __int64 *))(*(_QWORD *)v14 + 16LL))(v14, &v25, a2);
  v15 = v18;
  if ( !v18 && (unsigned __int64)v26 > 1 )
  {
    v17 = v25;
    sub_169630(
      (int)"AUTOHIDE NONE\n%s",
      (__int64)v25,
      v19,
      v20,
      v21,
      v22,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v23,
      v24,
      a9,
      a10,
      (char)v25);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v17);
  }
  return v15;
}
