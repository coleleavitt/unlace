__int64 __fastcall sub_CB0DE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v3 = *(_QWORD *)a2 >> 63;
  v5 = a2 | 4;
  return sub_CA5E60(a1, v3, (__int64 *)&v5);
}
