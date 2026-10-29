__int64 __fastcall sub_B56530(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  bool v4; // cc
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]
  char v8; // [rsp+Ch] [rbp-1Ch]

  v8 = 0;
  v7 = 1;
  v6 = nullptr;
  v2 = sub_B6C230(88, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2BD8B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x602100000000LL;
  v3 = sub_B68380(33);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(33);
  *(_QWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)v2 = &off_2B20F90;
  *(_OWORD *)(v2 + 40) = 0;
  sub_BE8DF0(v2 + 56, a1, &v6);
  v4 = v7 <= 0x40;
  *(_BYTE *)(v2 + 80) = v8;
  if ( !v4 && v6 )
    operator delete[](v6);
  return v2;
}

