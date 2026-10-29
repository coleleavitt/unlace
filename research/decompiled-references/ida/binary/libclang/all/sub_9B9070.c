void __fastcall sub_9B9070(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-70h]
  char v10; // [rsp+Ch] [rbp-6Ch]
  int v11; // [rsp+10h] [rbp-68h]
  _QWORD v12[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned int v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v9 = v4;
  v8 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v10 = v4;
  v11 = v3;
  sub_A1A5E0(v2, 24);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_A1C030(v12, *(_QWORD *)(v5 + 24), (unsigned int)(*(_DWORD *)v5 + a2), (unsigned int)(*(_DWORD *)v5 + a2));
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
  sub_A1C490(v12);
  sub_A1DB00(v12);
  sub_A1C0C0(v12);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

