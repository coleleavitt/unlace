__int64 __fastcall sub_1C3A690(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 *v11; // rsi
  unsigned int v12; // ecx
  int v13; // [rsp+8h] [rbp-B0h] BYREF
  int v14; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v15[168]; // [rsp+10h] [rbp-A8h] BYREF

  v4 = *(_QWORD *)(a3 + 48);
  if ( !v4 )
  {
    v11 = (__int64 *)(a1 + 8);
    v12 = 3506;
    goto LABEL_12;
  }
  v5 = *(_DWORD *)(v4 + 8);
  if ( (v5 & 0x2000000) != 0 )
  {
    v11 = (__int64 *)(a1 + 8);
    v12 = 3505;
LABEL_12:
    sub_168B9F0((__int64)v15, v11, a2, v12, 0);
    sub_15F7200(v15);
    return 1;
  }
  if ( (v5 & 0x10000000) != 0 )
  {
    sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), a2, 0xB39u, 0);
    v13 = 0;
    v6 = sub_1587D10((__int64)v15, &v13);
    v14 = 0;
    sub_1587D10(v6, &v14);
    sub_15F7200(v15);
    return 1;
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 11176);
    if ( (_DWORD)v8 && *(_WORD *)(v4 + 12) < *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 11168) + 8 * v8 - 8) + 12LL) )
    {
      sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), a2, 0x1B9Cu, 0);
      sub_15F7200(v15);
    }
    v9 = sub_EEE9A0(8, *(_QWORD **)(a1 + 248), 8u);
    v10 = *(_WORD *)v9 & 0xFE00;
    LOBYTE(v10) = -8;
    *(_WORD *)v9 = v10;
    if ( unk_2CD7484 )
      sub_EE9B50(248);
    *(_DWORD *)(v9 + 4) = a2;
    return v9;
  }
}
