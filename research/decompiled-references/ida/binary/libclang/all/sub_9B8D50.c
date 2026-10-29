__int64 __fastcall sub_9B8D50(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  char v7; // cl
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rsi
  _BYTE *v12; // rcx
  _QWORD v14[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  unsigned int v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(unsigned __int8 *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_A1C030(v14, *(_QWORD *)(v4 + 24), v5, (unsigned int)v5);
  v6 = sub_781830(*(_QWORD *)a2);
  if ( v6 <= 7 )
  {
    v7 = v6;
    v8 = 1 << v6;
    v9 = v3 & (v8 - 1);
    v10 = v9 | -v8;
    if ( ((unsigned __int8)(1 << (v7 - 1)) & (unsigned __int8)v3) != 0 )
      LOBYTE(v9) = v10;
    LOBYTE(v3) = v9;
  }
  if ( v17 )
    goto LABEL_10;
  v11 = *(_QWORD *)(v15 + 32);
  if ( *(_DWORD *)(v11 + 16) != v16 && v16 )
    v11 = *(_QWORD *)(v15 + v16 + 32);
  if ( !*(_BYTE *)(v11 + 51) || (v12 = (_BYTE *)(v15 + v14[0] + 72), v14[0] != v16) )
LABEL_10:
    v12 = (_BYTE *)(v15 + v14[0] + 40);
  *v12 = v3;
  sub_A1C490(v14);
  sub_A1DB00(v14);
  return sub_A1C0C0(v14);
}

