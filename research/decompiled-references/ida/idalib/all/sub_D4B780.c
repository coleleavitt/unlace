__int64 __fastcall sub_D4B780(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  int v4; // eax
  bool v5; // cc
  void *v7; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-50h]
  void *v9; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]

  v3 = a3;
  if ( !a3 )
    v3 = *(_DWORD *)(a2 + 8);
  sub_D4B720((__int64)&v7, (__int64 *)a2);
  sub_D4B720((__int64)&v9, (__int64 *)a2);
  sub_2206B70(&v11, &v9, v3);
  v4 = v12;
  v5 = v10 <= 0x40;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = v11;
  if ( !v5 && v9 )
    operator delete[](v9);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  return a1;
}
