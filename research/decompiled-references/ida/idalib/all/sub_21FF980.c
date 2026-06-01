__int64 __fastcall sub_21FF980(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  char v3; // al
  char v4; // dl
  bool v5; // r14
  char v7; // r8
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r12d
  char v11; // al
  _QWORD v12[2]; // [rsp+10h] [rbp-98h] BYREF
  int v13; // [rsp+20h] [rbp-88h]
  char v14; // [rsp+24h] [rbp-84h]
  _QWORD v15[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+60h] [rbp-48h]
  char v18; // [rsp+64h] [rbp-44h]

  v2 = sub_21FD270(a1, a2);
  v3 = *(_BYTE *)(a1 + 20);
  v4 = v3 & 7;
  v5 = (v3 & 8) != 0;
  if ( (v3 & 6) != 0 && v4 != 3 )
  {
    if ( (*(_BYTE *)(a2 + 20) & 7) == 3 || (*(_BYTE *)(a2 + 20) & 6) == 0 )
      return v2;
    while ( (unsigned int)sub_21F9DB0(a1, a2) )
    {
      v9 = sub_21FF7E0((__int64 *)a1);
      v10 = v9 - sub_21FF7E0((__int64 *)a2);
      sub_21F9140(v16, *(_QWORD *)a2);
      sub_21F9190((__int64)v16, a2);
      sub_21FF8D0((__int64)v12, (__int64)v16, v10, 1);
      sub_21F9170(v16);
      if ( (v14 & 7) == 1 || !(unsigned int)sub_21F9DB0(a1, (__int64)v12) )
      {
        sub_21F9140(v15, *(_QWORD *)a2);
        sub_21F9190((__int64)v15, a2);
        sub_21FF8D0((__int64)v16, (__int64)v15, v10 - 1, 1);
        sub_21F9170(v12);
        v12[0] = v16[0];
        v12[1] = v16[1];
        v13 = v17;
        v14 = v18 & 0xF | v14 & 0xF0;
        v16[0] = &unk_26F7B40;
        sub_21F9170(v16);
        sub_21F9170(v15);
      }
      v14 = *(_BYTE *)(a1 + 20) & 8 | v14 & 0xF7;
      v2 = sub_21FD790((_BYTE *)a1, (__int64)v12, 1, 1);
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 24LL) && sub_21F9CC0(a1) )
      {
        sub_21F9170(v12);
        break;
      }
      sub_21F9170(v12);
      v4 = *(_BYTE *)(a1 + 20) & 7;
      if ( (*(_BYTE *)(a1 + 20) & 6) == 0 || v4 == 3 )
        goto LABEL_3;
      v11 = *(_BYTE *)(a2 + 20);
      if ( (v11 & 6) == 0 || (v11 & 7) == 3 )
        return v2;
    }
    v4 = *(_BYTE *)(a1 + 20) & 7;
  }
LABEL_3:
  if ( v4 == 3 )
  {
    v7 = *(_BYTE *)(a1 + 20) & 0xF7 | (8 * v5);
    v8 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 20) = v7;
    if ( *(_DWORD *)(v8 + 20) == 2 )
      *(_BYTE *)(a1 + 20) = v7 & 0xF7;
  }
  return v2;
}
