__int64 __fastcall google_breakpad::WriteMinidump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6[46]; // [rsp+20h] [rbp-C0h] BYREF

  sub_1B348E(v6, a1, 0xFFFFFFFF, 0, a2, a3, 0, 0, 0, a4);
  if ( (unsigned __int8)sub_1B3642((__int64)v6) != 1 )
    v4 = 0;
  else
    v4 = sub_1B396E((__int64)v6);
  sub_1B378E((__int64)v6);
  return v4;
}

