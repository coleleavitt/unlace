__int64 __fastcall sub_9B8250(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rsi
  _DWORD *v8; // rcx
  _QWORD v10[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_A1C030(v10, *(_QWORD *)(v4 + 24), v5, (unsigned int)v5);
  v6 = sub_781830(*(_QWORD *)a2);
  if ( v6 <= 0x1F )
    v3 &= ~(-1 << v6);
  if ( v13 )
    goto LABEL_8;
  v7 = *(_QWORD *)(v11 + 32);
  if ( *(_DWORD *)(v7 + 16) != v12 && v12 )
    v7 = *(_QWORD *)(v11 + v12 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v8 = (_DWORD *)(v11 + v10[0] + 72), v12 != v10[0]) )
LABEL_8:
    v8 = (_DWORD *)(v11 + v10[0] + 40);
  *v8 = v3;
  sub_A1C490(v10);
  sub_A1DB00(v10);
  return sub_A1C0C0(v10);
}

