void __fastcall sub_9B8830(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rbp
  void *v9; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-80h]
  char v11; // [rsp+Ch] [rbp-7Ch]
  int v12; // [rsp+10h] [rbp-78h]
  _QWORD v13[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  unsigned int v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+50h] [rbp-38h]

  v4 = a3;
  v5 = sub_A1A5A0(a1, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v10 = v6;
  v9 = *(void **)v5;
  LOBYTE(v6) = *(_BYTE *)(v5 + 12);
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v11 = v6;
  v12 = v5;
  sub_A1A5E0(a1, 24);
  sub_A176A0(v13, a2, (unsigned int)v4);
  if ( v16 )
    goto LABEL_6;
  v7 = *(_QWORD *)(v14 + 32);
  if ( *(_DWORD *)(v7 + 16) != v15 && v15 )
    v7 = *(_QWORD *)(v14 + v15 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v8 = v14 + v13[0] + 72, v15 != v13[0]) )
LABEL_6:
    v8 = v14 + v13[0] + 40;
  sub_A1C0C0(v13);
  if ( *(_DWORD *)(v8 + 8) <= 0x40u && v10 <= 0x40 )
  {
    *(_QWORD *)v8 = v9;
    *(_DWORD *)(v8 + 8) = v10;
  }
  else
  {
    sub_2585EA0(v8, &v9);
  }
  *(_BYTE *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  *(_BYTE *)(*(_QWORD *)(a2 + 176) + v4 + 4) |= 2u;
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

