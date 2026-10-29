__int64 __fastcall sub_1C3A820(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int16 v10; // ax
  int v11; // [rsp+8h] [rbp-B0h] BYREF
  int v12; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v13[32]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int8 *v14; // [rsp+30h] [rbp-88h] BYREF
  char v15; // [rsp+88h] [rbp-30h]
  char v16; // [rsp+94h] [rbp-24h]

  v3 = *(__int64 **)(a3 + 40);
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 && (*(_BYTE *)(v4 + 10) & 1) != 0 )
    {
      sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a2, 0x11BCu, 0);
      if ( v15 )
      {
        sub_AE9DF0(&v14, (__int64)"break", 1u);
      }
      else if ( v16 )
      {
        sub_1C39890((__int64)v13, (__int64)"break");
      }
      goto LABEL_10;
    }
    v5 = *((_DWORD *)v3 + 2);
    if ( (v5 & 0x10000000) != 0 || (v5 & 2) != 0 && (v5 & 0x1000) == 0 && v4 && (*(_BYTE *)(v4 + 11) & 0x10) != 0 )
    {
      sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a2, 0xB39u, 0);
      v11 = 0;
      v6 = sub_1587D10((__int64)v13, &v11);
      v12 = 0;
      sub_1587D10(v6, &v12);
LABEL_10:
      sub_15F7200(v13);
      return 1;
    }
    v8 = *(unsigned int *)(a1 + 11176);
    if ( (_DWORD)v8 && *((_WORD *)v3 + 6) < *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 11168) + 8 * v8 - 8) + 12LL) )
    {
      sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a2, 0x1B9Cu, 0);
      sub_15F7200(v13);
    }
    v9 = sub_EEE9A0(8, *(_QWORD **)(a1 + 248), 8u);
    v10 = *(_WORD *)v9 & 0xFE00;
    LOBYTE(v10) = -2;
    *(_WORD *)v9 = v10;
    if ( unk_2CD7484 )
      sub_EE9B50(254);
    *(_DWORD *)(v9 + 4) = a2;
    return v9;
  }
  else
  {
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a2, 0xD0Au, 0);
    sub_15F7200(v13);
    return 1;
  }
}
