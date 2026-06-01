__int64 __fastcall sub_21CB060(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r12
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // r13
  __int64 *v8; // rbx
  __int64 v9; // rax
  _QWORD v10[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v11; // [rsp+20h] [rbp-38h]

  v3 = *a2;
  v4 = *(_QWORD **)(*a2 + 8);
  if ( *(_QWORD *)(*a2 + 16) - (_QWORD)v4 <= 7u || *v4 != 0x8169666F72706CFFLL )
  {
    v11 = 257;
    v5 = operator new(0x30u);
    *(_DWORD *)(v5 + 8) = 3;
    *(_QWORD *)v5 = &off_2C74C70;
    sub_2253560(v5 + 16, v10);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v5;
    return a1;
  }
  v7 = *a3;
  *a2 = 0;
  *a3 = 0;
  v8 = (__int64 *)operator new(0x200u);
  *((_DWORD *)v8 + 2) = 0;
  v8[2] = (__int64)(v8 + 4);
  v8[7] = (__int64)(v8 + 9);
  v8[8] = 0x100000000LL;
  v8[3] = 0;
  *((_BYTE *)v8 + 32) = 0;
  *v8 = (__int64)&off_2BE9B38;
  v8[22] = (__int64)(v8 + 24);
  v8[23] = 0x1C00000000LL;
  v8[6] = 0;
  v8[13] = 0;
  v8[14] = v3;
  v8[15] = v7;
  v8[16] = 0;
  v8[17] = 0;
  v8[18] = 0;
  v8[19] = 0;
  v8[20] = 2;
  v8[21] = 0;
  v8[52] = 0;
  v8[53] = 0;
  v8[54] = 0;
  v8[55] = 0;
  v8[56] = 0;
  *((_DWORD *)v8 + 114) = 0;
  v8[60] = 0;
  v8[61] = 0;
  v8[62] = 0;
  *((_DWORD *)v8 + 126) = 0;
  *((_OWORD *)v8 + 29) = 0;
  sub_21CD550(v10, v8);
  if ( !v10[0] )
  {
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 8) &= ~1u;
    return a1;
  }
  *(_QWORD *)a1 = v10[0];
  v9 = *v8;
  *(_BYTE *)(a1 + 8) |= 1u;
  (*(void (__fastcall **)(__int64 *))(v9 + 8))(v8);
  return a1;
}
