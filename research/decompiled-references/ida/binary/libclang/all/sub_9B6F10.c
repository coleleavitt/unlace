__int64 __fastcall sub_9B6F10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdx
  _BYTE v10[64]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h]
  unsigned int v13; // [rsp+60h] [rbp-48h]
  int v14; // [rsp+70h] [rbp-38h]

  v4 = a3;
  v5 = sub_A1A5A0(a1, 56);
  sub_A1C070(v10, v5);
  sub_A1A5E0(a1, 56);
  sub_A176A0(v11, a2, (unsigned int)v4);
  if ( v14 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v12 + 32);
  if ( *(_DWORD *)(v6 + 16) != v13 && v13 )
    v6 = *(_QWORD *)(v12 + v13 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = v12 + v11[0] + 72, v13 != v11[0]) )
LABEL_6:
    v7 = v12 + v11[0] + 40;
  sub_A1C0C0(v11);
  sub_A1C120(v7, v10, v8);
  *(_BYTE *)(*(_QWORD *)(a2 + 176) + v4 + 4) |= 2u;
  return sub_A1C0C0(v10);
}

