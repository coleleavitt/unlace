__int64 __fastcall sub_9B6BE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  _BYTE v8[64]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v9[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+58h] [rbp-50h]
  unsigned int v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+70h] [rbp-38h]

  v4 = sub_A1A5A0(a1, 56);
  sub_A1C070(v8, v4);
  sub_A1A5E0(a1, 56);
  sub_A176C0(v9, a2, a3);
  if ( v12 )
    goto LABEL_6;
  v5 = *(_QWORD *)(v10 + 32);
  if ( *(_DWORD *)(v5 + 16) != v11 && v11 )
    v5 = *(_QWORD *)(v10 + v11 + 32);
  if ( !*(_BYTE *)(v5 + 51) || (v6 = v10 + v9[0] + 72, v11 != v9[0]) )
LABEL_6:
    v6 = v10 + v9[0] + 40;
  sub_A1C120(v6, v8, v9[0]);
  sub_A1C0C0(v9);
  return sub_A1C0C0(v8);
}

