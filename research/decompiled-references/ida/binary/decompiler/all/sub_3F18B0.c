__int64 __fastcall sub_3F18B0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // ecx
  __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+8h] [rbp-40h]
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[3] = __readfsqword(0x28u);
  v10 = a2;
  v11[0] = -4294967290LL;
  v9 = 0x100000001LL;
  v6 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  if ( (unsigned __int64)v6 <= 0x3F )
    a3 &= ~(-1LL << v6);
  v11[1] = a3;
  v7 = sub_1D38D0(a1, 42, (unsigned int)&v9, 0, (unsigned int)v11, a6);
  sub_11A960((__int64)v11);
  sub_11A960((__int64)&v9);
  return v7;
}
