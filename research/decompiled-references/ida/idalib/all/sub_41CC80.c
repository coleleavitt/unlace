__int64 __fastcall sub_41CC80(int a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 fixup_handler; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _QWORD, _QWORD, __int64 *); // rax
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v13 = 0;
  v15 = 0;
  v16 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( !(unsigned __int8)get_fixup(&v13, a3) )
    return 0;
  if ( (v13 & 0x400000000LL) != 0 )
    return 0;
  fixup_handler = get_fixup_handler(v13);
  v11 = fixup_handler;
  if ( !fixup_handler )
    return 0;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, __int64 *))(fixup_handler + 32);
  if ( v12 )
    return v12(v11, a2, a3, a4, a5, &v13);
  else
    return sub_41BBA0(a1, (__int64)&v13);
}
