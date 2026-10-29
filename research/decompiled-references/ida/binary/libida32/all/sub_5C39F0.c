void __fastcall __noreturn sub_5C39F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v8; // rax
  int v9; // r9d
  char v10; // [rsp+0h] [rbp-4A0h]
  void *v13; // [rsp+20h] [rbp-480h] BYREF
  void *ptr; // [rsp+40h] [rbp-460h] BYREF
  _BYTE v15[1024]; // [rsp+60h] [rbp-440h] BYREF
  _BYTE v16[8]; // [rsp+460h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+468h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( a4 )
  {
    sub_5BCB40((__int64)&v13, a5);
    sub_5BCB40((__int64)&ptr, a6);
    if ( a5 == a6 )
      sub_5AE710(a1, (__int64)&v13, a5);
    v8 = qstpncpy(v15, a4, 1024);
    if ( a5 != a6 )
      qsnprintf(v8, (int)&v16[-v8], (int)"[%s - %s]", (int)v13, (int)ptr, v9, v10);
    sub_395C70((int)&unk_22B285A, a3);
  }
  sub_375400();
}

