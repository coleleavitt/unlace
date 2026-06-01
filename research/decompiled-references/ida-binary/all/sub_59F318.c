__int64 __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_11(__int64 a1)
{
  __int64 v2; // rbx
  int v5; // [rsp+14h] [rbp-12Ch] BYREF
  __int64 v6; // [rsp+18h] [rbp-128h] BYREF
  char v7[256]; // [rsp+20h] [rbp-120h] BYREF
  __int64 v8; // [rsp+120h] [rbp-20h]
  signed int v9; // [rsp+128h] [rbp-18h]
  int v10; // [rsp+12Ch] [rbp-14h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, _QWORD, const char *))(*(_QWORD *)a1 + 72LL))(
         a1,
         v7,
         *(unsigned int *)(a1 + 8),
         "task") != 1 )
    return 0;
  v9 = sub_59E6FF(v7, (int)&stru_10000, 0);
  if ( v9 < 0 )
    return 0;
  v2 = sub_59BA78(0x224u, (_QWORD *)(a1 + 72));
  sub_59F4C2(v2, (unsigned int)v9);
  v8 = v2;
  v10 = -1;
  while ( (unsigned __int8)sub_59F4E4(v8, &v6) )
  {
    if ( (unsigned int)sub_5ADAC7(v6, ".") && (unsigned int)sub_5ADAC7(v6, "..") )
    {
      v5 = 0;
      if ( (unsigned __int8)sub_5ADBA3(&v5, v6) && v10 != v5 )
      {
        v10 = v5;
        sub_59F6E0(a1 + 112, &v5);
      }
    }
    sub_59F5B6(v8);
  }
  sub_59E64E(v9);
  return 1;
}
