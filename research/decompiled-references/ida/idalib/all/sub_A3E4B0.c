void __fastcall sub_A3E4B0(__int64 a1, __int64 a2)
{
  _BYTE v2[152]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v3; // [rsp+98h] [rbp-20h]

  sub_A0A000((__int64)v2, a1);
  v3 = *(_QWORD *)(a1 + 152);
  sub_A28A10(a1, a2);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  sub_A28A10(a2, (__int64)v2);
  *(_QWORD *)(a2 + 152) = v3;
  sub_A09C70((__int64)v2);
}
