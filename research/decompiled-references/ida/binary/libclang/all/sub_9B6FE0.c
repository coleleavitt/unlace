__int64 __fastcall sub_9B6FE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD v8[3]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-A0h]
  unsigned int v10; // [rsp+20h] [rbp-98h]
  int v11; // [rsp+30h] [rbp-88h]
  _BYTE v12[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+78h] [rbp-40h]
  int v14; // [rsp+80h] [rbp-38h]

  v4 = sub_A1A5A0(a1, 72);
  sub_A1C070(v12, v4);
  v13 = *(_QWORD *)(v4 + 56);
  v14 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(a1, 72);
  sub_A176C0(v8, a2, a3);
  if ( v11 )
    goto LABEL_6;
  v5 = *(_QWORD *)(v9 + 32);
  if ( *(_DWORD *)(v5 + 16) != v10 && v10 )
    v5 = *(_QWORD *)(v9 + v10 + 32);
  if ( !*(_BYTE *)(v5 + 51) || (v6 = v9 + v8[0] + 72, v10 != v8[0]) )
LABEL_6:
    v6 = v9 + v8[0] + 40;
  sub_A1C120(v6, v12, v8[0]);
  *(_QWORD *)(v6 + 56) = v13;
  *(_DWORD *)(v6 + 64) = v14;
  sub_A1C0C0(v8);
  return sub_A1C0C0(v12);
}

