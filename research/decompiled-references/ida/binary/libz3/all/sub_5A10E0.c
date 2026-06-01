__int64 __fastcall sub_5A10E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !(unsigned __int8)sub_4C3FC0(a1, a2, v4) )
  {
    v3 = sub_186B270(0x70u);
    sub_5A0F30(v3, a2, a1);
    v4[0] = v3;
    sub_4C8680(a1, v3);
  }
  return v4[0];
}

