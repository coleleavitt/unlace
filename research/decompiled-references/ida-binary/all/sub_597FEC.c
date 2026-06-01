__int64 __fastcall sub_597FEC(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // ebx
  _BYTE v14[128]; // [rsp+30h] [rbp-1A0h] BYREF
  _BYTE v15[264]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v16; // [rsp+1B8h] [rbp-18h]

  sub_59EA9E(v15, a1);
  v16 = 0;
  if ( a2 )
  {
    if ( a3 != 1584 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v16 = a2;
    sub_59A4A6(v15, a2);
    sub_5983C4(v15, *(unsigned int *)(v16 + 128));
  }
  sub_596D94((__int64)v14, v16, a4, a5, a6, a7, a8, (__int64)v15);
  if ( !sub_596F00((__int64)v14) )
  {
    v8 = 0;
  }
  else
  {
    sub_596FAC((__int64)v14);
    v8 = 1;
  }
  sub_596ED2((__int64)v14);
LABEL_9:
  google_breakpad::LinuxPtraceDumper__::vfunc_0(v15);
  return v8;
}
