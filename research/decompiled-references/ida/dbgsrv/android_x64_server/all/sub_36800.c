/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36800
// Address: 0x0000000000036800

//----- (0000000000036800) ----------------------------------------------------
__int64 __fastcall sub_36800(__int64 a1)
{
  __int64 result; // rax
  __m128 v2; // [rsp+0h] [rbp-18h] BYREF
  __int64 *v3; // [rsp+10h] [rbp-8h]

  v2 = _mm_movelh_ps((__m128)(unsigned __int64)_PREINIT_ARRAY__, (__m128)(unsigned __int64)_INIT_ARRAY__);
  v3 = _FINI_ARRAY__;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(int, const char **, double, __m128), __m128 *))__libc_init)(
             a1,
             0,
             sub_A43A0,
             &v2);
  if ( a1 )
    __asm { jmp     rdi }
  return result;
}
// 33AA0: using guessed type __int64 __fastcall __libc_init(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 146720: using guessed type __int64 _PREINIT_ARRAY__[2];
// 146730: using guessed type __int64 _INIT_ARRAY__[2];
// 146798: using guessed type __int64 _FINI_ARRAY__[2];
