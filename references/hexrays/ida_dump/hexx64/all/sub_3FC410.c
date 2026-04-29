__int64 __fastcall sub_3FC410(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int v7; // [rsp+8h] [rbp-40h]
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[3] = __readfsqword(0x28u);
  v7 = a2;
  v8[0] = -4294967290LL;
  v6 = 0x100000001LL;
  v3 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  if ( (unsigned __int64)v3 <= 0x3F )
    a3 &= ~(-1LL << v3);
  v8[1] = a3;
  v4 = sub_1D6450(a1, 42, (unsigned __int8 *)&v6, nullptr, (unsigned __int8 *)v8);
  sub_11CDA0((__int64)v8);
  sub_11CDA0((__int64)&v6);
  return v4;
}
