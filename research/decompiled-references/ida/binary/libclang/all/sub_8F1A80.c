__int64 __fastcall sub_8F1A80(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  _BYTE v9[64]; // [rsp-40h] [rbp-A8h] BYREF
  _QWORD v10[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v4 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a3;
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v9, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  sub_A1C030(v10, *(_QWORD *)(v6 + 24), (unsigned int)(a2 + *(_DWORD *)v6), (unsigned int)(a2 + *(_DWORD *)v6));
  if ( v13 )
    goto LABEL_4;
  v8 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v8 + 16) != v12 && v12 )
    v8 = *(_QWORD *)(v11 + v12 + 32);
  if ( !*(_BYTE *)(v8 + 51) || (v7 = v11 + v10[0] + 72, v12 != v10[0]) )
LABEL_4:
    v7 = v11 + v10[0] + 40;
  sub_A1C120(v7, v9, v10[0]);
  sub_A1C490(v10);
  sub_A1DB00(v10);
  sub_A1C0C0(v10);
  sub_A1C0C0(v9);
  return 1;
}

