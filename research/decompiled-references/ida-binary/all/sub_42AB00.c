unsigned __int64 __fastcall hvui_merge_handler_t__::vfunc_0(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  const char *v22; // rsi

  v15 = sub_426230(a1, a2);
  sub_418570((__int64)v15, (unsigned int)a2, a1 + 8);
  if ( (_DWORD)a2 )
    return sub_416980((unsigned int)a2, (__int64)"Failed to merge");
  v22 = &s1;
  if ( *(_QWORD *)(a1 + 16) )
    v22 = *(const char **)(a1 + 8);
  return sub_169700(
           (int)"Successfully resolved %s\n",
           (__int64)v22,
           v16,
           v17,
           v18,
           v19,
           a3,
           a4,
           a5,
           a6,
           v20,
           v21,
           a9,
           a10,
           a15);
}
