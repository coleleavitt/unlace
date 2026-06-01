__int64 __fastcall sub_6917E0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        char a18,
        int a19,
        int a20,
        int a21,
        __int64 a22)
{
  __int64 v23; // rsi
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rdi
  int v27; // r8d
  int v28; // r9d
  char **exception; // rbx
  __int64 v31[7]; // [rsp+8h] [rbp-38h] BYREF

  v23 = *(_QWORD *)(a1 + 8);
  sub_786C50(a1 + 4376, v23, a1 + 4392, a1 + 96, a1 + 4480, a1 + 4840, *(unsigned __int8 *)(a1 + 385));
  v26 = *(_QWORD *)(sub_787220(a1 + 4376, v23) + 2264);
  if ( !v26 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_68CF80(v31, "user propagator must be initialized");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v31);
    sub_233E40((__int64)v31);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return sub_7A87E0(
           v26,
           a2,
           v24,
           v25,
           v27,
           v28,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22);
}

