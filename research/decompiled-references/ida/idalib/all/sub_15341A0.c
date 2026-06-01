void __fastcall sub_15341A0(__int64 a1)
{
  _BYTE *v1; // rax
  int v2; // ecx
  __int64 v3; // rcx
  _BYTE v4[88]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( (v1[1] & 8) != 0 )
  {
    v2 = -((v1[2] & 1) == 0);
    LOBYTE(v2) = v2 & 0x73;
    v3 = (unsigned int)(v2 + 2102);
  }
  else
  {
    v3 = (*v1 & 8) == 0 ? 1952 : 2072;
  }
  sub_1564840(v4, a1, a1 + 16, v3);
  sub_AEA040((__int64)v4);
}
