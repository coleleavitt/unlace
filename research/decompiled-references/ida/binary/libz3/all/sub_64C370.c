__int64 __fastcall sub_64C370(__int64 a1, __int64 a2, double a3)
{
  char v3; // r13
  __int64 result; // rax
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  v3 = *(_BYTE *)(a1 + 2986);
  *(_BYTE *)(a1 + 2986) = 0;
  sub_6440D0((__int64)savedregs, a1);
  sub_644270((__int64)savedregs, a2);
  if ( (unsigned __int8)sub_644330((__int64)savedregs, (const __m128i *)(a1 + 2360), a3) )
    sub_6433D0(a1 + 2360);
  result = sub_6440F0((__int64)savedregs);
  *(_BYTE *)(a1 + 2986) = v3;
  return result;
}

