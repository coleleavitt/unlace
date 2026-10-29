__int64 __fastcall sub_1B2FA40(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int16 v5; // ax
  int v6; // r12d
  __int64 *v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = sub_BFBAE0(a2);
  v5 = *(_WORD *)v4 & 0x1FF;
  if ( v5 <= 0x75u )
  {
    if ( v5 == 91 )
    {
      v11 = (*(_BYTE *)(v4 + 3) >> 1) & 0x3F;
      if ( (unsigned int)(v11 - 5) <= 1 && *(_DWORD *)(v4 + 16) == 2 )
      {
        if ( sub_1AEE510(*(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32)) == a1[8] )
          return sub_1B2F5E0(a1, *(_DWORD **)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 40), v11 != 5, a3, a4);
        if ( v11 == 5 && sub_1AEE510(*(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 40)) == a1[8] )
          return sub_1B2F5E0(a1, *(_DWORD **)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32), 0, a3, a4);
      }
    }
  }
  else if ( v5 <= 0x77u )
  {
    v6 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
    if ( (unsigned int)(v6 - 5) <= 1 )
    {
      if ( sub_1AEE510(*(_QWORD *)(v4 + 16)) == a1[8] )
        return sub_1B2F5E0(a1, *(_DWORD **)(v4 + 24), v6 != 5, a3, a4);
      if ( v6 == 5 && sub_1AEE510(*(_QWORD *)(v4 + 24)) == a1[8] )
        return sub_1B2F5E0(a1, *(_DWORD **)(v4 + 16), 0, a3, a4);
    }
  }
  if ( (unsigned __int8)sub_1AE7CC0(a1) || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
    return 0;
  v8 = (__int64 *)(*a1 + 8);
  v9 = sub_EEB7E0(v4, a2, *(double *)a3.m128_u64);
  sub_168B9F0((__int64)v13, v8, v9, 0x11C0u, 0);
  v12 = sub_EEC8C0(v4, (__int64)v8, *(double *)a3.m128_u64);
  v10 = sub_1587DB0((__int64)v13, &v12);
  sub_15993D0(v10, a1 + 8);
  sub_15F7200(v13);
  return 1;
}
