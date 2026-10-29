__int64 __fastcall sub_18CDF10(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // r8d
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  __int64 *v9; // rdi
  unsigned int v10; // ecx
  __int64 v11; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v12[168]; // [rsp+10h] [rbp-A8h] BYREF

  v4 = ~*(unsigned __int8 *)(a3 + 28);
  LOBYTE(v4) = (unsigned __int8)~*(_BYTE *)(a3 + 28) >> 7;
  v5 = v4;
  LOBYTE(v5) = a4 | v4;
  if ( !(a4 | (unsigned __int8)v4) )
    return 1;
  v6 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)v6 - 64 <= 2 )
  {
    v9 = (__int64 *)(a1 + 8);
    v10 = 5363;
  }
  else if ( v6 == 20 )
  {
    v9 = (__int64 *)(a1 + 8);
    v10 = 5361;
  }
  else
  {
    if ( v6 != 24 )
      return 0;
    v9 = (__int64 *)(a1 + 8);
    v10 = 5362;
  }
  sub_168B9F0((__int64)v12, v9, a2, v10, 0);
  v11 = *(_QWORD *)(a3 + 40);
  sub_15894B0((__int64)v12, &v11);
  sub_15F7200(v12);
  return v5;
}
