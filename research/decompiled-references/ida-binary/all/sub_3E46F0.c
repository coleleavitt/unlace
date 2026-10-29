unsigned __int64 __fastcall sub_3E46F0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rsi
  unsigned __int64 result; // rax
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _Unwind_Exception *v20; // rdi

  ++dword_8D1258;
  if ( (debug & 0x40000) != 0 )
  {
    v15 = sub_3DED80((__int64)a1, 1);
    sub_3E25E0((__int64)"<%s>: update()\n", (__int64)v15, v16, v17, v18, v19);
  }
  v13 = *(_QWORD *)(a2 + 40);
  if ( !v13 )
  {
    if ( !under_debugger )
    {
      v20 = (struct _Unwind_Exception *)interr(40268, 0, a3, a4, a5);
      --dword_8D1258;
      _Unwind_Resume(v20);
    }
    BUG();
  }
  result = sub_3E45F0(a1, v13, (const void **)a2, v13 + 40, a5, a6, a7, a8, a9, a10, a11, a12);
  --dword_8D1258;
  return result;
}
