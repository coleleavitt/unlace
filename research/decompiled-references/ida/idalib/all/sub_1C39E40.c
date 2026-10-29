__int64 __fastcall sub_1C39E40(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 *v7; // r8
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rbp
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  int v17; // [rsp+0h] [rbp-C0h] BYREF
  int v18; // [rsp+4h] [rbp-BCh] BYREF
  _BYTE v19[184]; // [rsp+8h] [rbp-B8h] BYREF

  v4 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v4 )
    BUG();
  if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4 - 8) + 64LL) )
  {
    sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a2, 0xE30u, 0);
    sub_15F7200(v19);
    return a4;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 4) != 0 )
  {
    v7 = *(__int64 **)(a1 + 608);
    if ( v7 )
    {
      v8 = *((_DWORD *)v7 + 2);
      if ( (v8 & 0x10000000) != 0 )
      {
LABEL_15:
        sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a2, 0xB39u, 0);
        v17 = 0;
        v16 = sub_1587D10((__int64)v19, &v17);
        v18 = 1;
        sub_1587D10(v16, &v18);
        sub_15F7200(v19);
        return 1;
      }
      if ( (v8 & 0x1DE1) == 0 )
      {
        do
        {
          v7 = (__int64 *)*v7;
          if ( !v7 )
            break;
          v9 = *((_DWORD *)v7 + 2);
          if ( (v9 & 0x10000000) != 0 )
            goto LABEL_15;
        }
        while ( (v9 & 0x1DE1) == 0 );
      }
    }
  }
  v10 = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
  v11 = *(_WORD *)v10 & 0xFE00;
  LOBYTE(v11) = -124;
  *(_WORD *)v10 = v11;
  if ( unk_2CD7484 )
    sub_EE9B50(132);
  *(_DWORD *)(v10 + 8) = a3;
  *(_DWORD *)(v10 + 4) = a2;
  v12 = *(unsigned int *)(a1 + 40);
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = a4;
  if ( !(_DWORD)v12 )
    BUG();
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v12 - 8);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 56) + 8LL * *(unsigned int *)(v13 + 64) - 8) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(v10 + 16) = *(_QWORD *)(v14 + 8);
  *(_QWORD *)(v14 + 8) = v10;
  return v10;
}
