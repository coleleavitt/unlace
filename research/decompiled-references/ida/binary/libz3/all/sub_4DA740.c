__int64 __fastcall sub_4DA740(__int64 a1, __int64 a2)
{
  _DWORD v3[8]; // [rsp+8h] [rbp-20h] BYREF

  sub_6299B0(v3);
  sub_629B60(a1 + 8, v3);
  sub_18183E0(a2, "instruction", v3[1]);
  return sub_18183E0(a2, "instruction-time", v3[0]);
}

