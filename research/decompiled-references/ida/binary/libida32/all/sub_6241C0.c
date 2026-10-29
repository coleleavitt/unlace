void __fastcall __noreturn sub_6241C0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbp
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  _QWORD v8[10]; // [rsp+D8h] [rbp-10C8h] BYREF
  __int128 v9; // [rsp+128h] [rbp-1078h]
  void *v10; // [rsp+138h] [rbp-1068h]
  __int128 v11; // [rsp+140h] [rbp-1060h]
  char v12; // [rsp+150h] [rbp-1050h]
  char v13; // [rsp+1150h] [rbp-50h]
  unsigned __int64 v14; // [rsp+1160h] [rbp-40h]
  __int64 v15; // [rsp+1178h] [rbp-28h]

  v15 = v3;
  v14 = __readfsqword(0x28u);
  v13 = 1;
  v8[0] = 0;
  v10 = nullptr;
  v12 = 0;
  v9 = 0;
  v11 = 0;
  if ( (unsigned __int8)sub_6237A0(v8, (__int64)a3) )
  {
    sub_590E10((__int64)v8, a3);
    *(_WORD *)(a1 + 10) = 1;
    callui(45, 1, v5, (int)&callui, v6, v7);
  }
  if ( !under_debugger )
    interr(75);
  BUG();
}

