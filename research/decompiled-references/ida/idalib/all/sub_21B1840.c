__int64 __fastcall sub_21B1840(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  sub_22B0340(v3, &byte_22F0C30, 0);
  v1 = v3[0];
  *(_BYTE *)(a1 + 24) &= ~1u;
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 8) = v3[1];
  *(_QWORD *)(a1 + 16) = v3[2];
  return a1;
}
