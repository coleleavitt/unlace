__int64 __fastcall sub_CB4680(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2 | 4;
  v3 = *(_QWORD *)a2 >> 19;
  v5 = v2;
  return sub_D00850(a1, v3 & 1, &v5);
}
