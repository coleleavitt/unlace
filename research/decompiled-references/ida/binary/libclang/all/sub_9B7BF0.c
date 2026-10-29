__int64 __fastcall sub_9B7BF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  _BYTE *v7; // rcx
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  unsigned int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_A1C030(v9, *(_QWORD *)(v4 + 24), v5, (unsigned int)v5);
  sub_781830(*(_QWORD *)a2);
  if ( v12 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v10 + 32);
  if ( *(_DWORD *)(v6 + 16) != v11 && v11 )
    v6 = *(_QWORD *)(v10 + v11 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = (_BYTE *)(v10 + v9[0] + 72), v11 != v9[0]) )
LABEL_6:
    v7 = (_BYTE *)(v10 + v9[0] + 40);
  *v7 = v3;
  sub_A1C490(v9);
  sub_A1DB00(v9);
  return sub_A1C0C0(v9);
}

