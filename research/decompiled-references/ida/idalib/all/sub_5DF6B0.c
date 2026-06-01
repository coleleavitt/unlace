void __fastcall __noreturn sub_5DF6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  int v9; // r9d
  void *v11; // [rsp+20h] [rbp-480h] BYREF
  void *ptr; // [rsp+40h] [rbp-460h] BYREF
  _BYTE v13[1024]; // [rsp+60h] [rbp-440h] BYREF
  _BYTE v14[8]; // [rsp+460h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+468h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( a4 )
  {
    sub_5D8400((__int64)&v11, a5);
    sub_5D8400((__int64)&ptr, a6);
    if ( a5 == a6 )
      sub_5C9340(a1, (__int64)&v11, a5);
    v8 = qstpncpy(v13, a4, 1024);
    if ( a5 != a6 )
      qsnprintf(v8, (unsigned int)&v14[-v8], (unsigned int)"[%s - %s]", (_DWORD)v11, (_DWORD)ptr, v9);
    sub_387AC0();
  }
  sub_378D50();
}
