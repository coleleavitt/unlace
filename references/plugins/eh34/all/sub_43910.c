__int64 __fastcall sub_43910(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rax
  _BYTE *v3; // r13
  __int64 v4; // r14
  __int64 v5; // rdi
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int16 v8; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v2 = *(__int64 **)(a2 + 32);
  v3 = (_BYTE *)a1[20];
  v9 = __readfsqword(0x28u);
  v4 = *v2;
  v8 = 17990;
  if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, __int16 *))(*(_QWORD *)v3 + 8LL))(v3, v4, &v8) )
    HIBYTE(v8) = v3[10];
  (*(void (__fastcall **)(_QWORD *, __int16 *))(*a1 + 80LL))(a1, &v8);
  v5 = a1[20];
  (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)v5 + 16LL))(v5, v4, &v8);
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v5, v4);
  hexdsp(577, a2, 1);
  return 1;
}
