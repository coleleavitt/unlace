__int64 __fastcall sub_9B7820(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-A0h]
  unsigned int v12; // [rsp+20h] [rbp-98h]
  int v13; // [rsp+30h] [rbp-88h]
  _BYTE v14[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+80h] [rbp-38h]

  v4 = a3;
  v5 = sub_A1A5A0(a1, 72);
  sub_A1C070(v14, v5);
  v15 = *(_QWORD *)(v5 + 56);
  v16 = *(_DWORD *)(v5 + 64);
  sub_A1A5E0(a1, 72);
  sub_A176A0(v10, a2, (unsigned int)v4);
  if ( v13 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v6 + 16) != v12 && v12 )
    v6 = *(_QWORD *)(v11 + v12 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = v11 + v10[0] + 72, v12 != v10[0]) )
LABEL_6:
    v7 = v11 + v10[0] + 40;
  sub_A1C0C0(v10);
  sub_A1C120(v7, v14, v8);
  *(_QWORD *)(v7 + 56) = v15;
  *(_DWORD *)(v7 + 64) = v16;
  *(_BYTE *)(*(_QWORD *)(a2 + 176) + v4 + 4) |= 2u;
  return sub_A1C0C0(v14);
}

