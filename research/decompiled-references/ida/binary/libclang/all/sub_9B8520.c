void __fastcall sub_9B8520(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-80h]
  char v10; // [rsp+Ch] [rbp-7Ch]
  int v11; // [rsp+10h] [rbp-78h]
  _QWORD v12[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  unsigned int v14; // [rsp+40h] [rbp-48h]
  int v15; // [rsp+50h] [rbp-38h]

  v4 = sub_A1A5A0(a1, 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v9 = v5;
  v8 = *(void **)v4;
  LOBYTE(v5) = *(_BYTE *)(v4 + 12);
  LODWORD(v4) = *(_DWORD *)(v4 + 16);
  v10 = v5;
  v11 = v4;
  sub_A1A5E0(a1, 24);
  sub_A176C0(v12, a2, a3);
  if ( v15 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v13 + 32);
  if ( *(_DWORD *)(v6 + 16) != v14 && v14 )
    v6 = *(_QWORD *)(v13 + v14 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = v13 + v12[0] + 72, v14 != v12[0]) )
LABEL_6:
    v7 = v13 + v12[0] + 40;
  if ( *(_DWORD *)(v7 + 8) <= 0x40u && v9 <= 0x40 )
  {
    *(_QWORD *)v7 = v8;
    *(_DWORD *)(v7 + 8) = v9;
  }
  else
  {
    sub_2585EA0(v7, &v8);
  }
  *(_BYTE *)(v7 + 12) = v10;
  *(_DWORD *)(v7 + 16) = v11;
  sub_A1C0C0(v12);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

