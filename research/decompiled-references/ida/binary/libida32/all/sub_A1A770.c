void __fastcall sub_A1A770(__int64 a1, __int64 a2)
{
  _BYTE v2[152]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v3; // [rsp+98h] [rbp-20h]

  sub_9E62C0((__int64)v2, a1);
  v3 = *(_QWORD *)(a1 + 152);
  sub_A04CD0(a1, a2);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  sub_A04CD0(a2, (__int64)v2);
  *(_QWORD *)(a2 + 152) = v3;
  sub_9E5F30((__int64)v2);
}

