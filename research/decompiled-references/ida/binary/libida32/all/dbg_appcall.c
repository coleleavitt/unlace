void __fastcall __noreturn dbg_appcall(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // [rsp+58h] [rbp-2B8h]
  int v7; // [rsp+5Ch] [rbp-2B4h]
  unsigned __int64 v8; // [rsp+2D8h] [rbp-38h]

  v7 = a2;
  v6 = a3;
  v8 = __readfsqword(0x28u);
  callui(1004, a2, a3, (int)&callui, a5, a6);
}

