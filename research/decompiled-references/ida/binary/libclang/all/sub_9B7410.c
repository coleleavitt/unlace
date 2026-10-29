__int64 __fastcall sub_9B7410(__int64 a1, int a2)
{
  __int64 v2; // r12
  char v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  _BYTE *v6; // rcx
  _QWORD v8[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+18h] [rbp-50h]
  unsigned int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_A1C030(v8, *(_QWORD *)(v4 + 24), (unsigned int)(a2 + *(_DWORD *)v4), (unsigned int)(a2 + *(_DWORD *)v4));
  if ( v11 )
    goto LABEL_6;
  v5 = *(_QWORD *)(v9 + 32);
  if ( *(_DWORD *)(v5 + 16) != v10 && v10 )
    v5 = *(_QWORD *)(v9 + v10 + 32);
  if ( !*(_BYTE *)(v5 + 51) || (v6 = (_BYTE *)(v9 + v8[0] + 72), v8[0] != v10) )
LABEL_6:
    v6 = (_BYTE *)(v9 + v8[0] + 40);
  *v6 = v3;
  sub_A1C490(v8);
  sub_A1DB00(v8);
  return sub_A1C0C0(v8);
}

