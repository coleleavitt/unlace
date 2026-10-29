__int64 __fastcall sub_2202290(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v3; // ebp
  __int64 v4; // rax
  bool v5; // si
  __int64 *v6; // r13
  __int64 v7; // r14
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v9; // [rsp+8h] [rbp-30h]

  v1 = a1[1];
  if ( *(_UNKNOWN **)v1 == &unk_26F7B20 )
    v1 = *(_QWORD *)(v1 + 8);
  if ( (*(_BYTE *)(v1 + 20) & 7) != 2 )
    return 0;
  v3 = (unsigned int)a1;
  sub_21FFE60(&v8, a1);
  v4 = a1[1];
  if ( *(_UNKNOWN **)v4 == &unk_26F7B20 )
    v4 = *(_QWORD *)(v4 + 8);
  v5 = (*(_BYTE *)(v4 + 20) & 8) != 0;
  if ( (_UNKNOWN *)*v9 == &unk_26F7B20 )
    sub_22004A0((__int64)v9, v5);
  else
    sub_21FAB30(v9, v5);
  v6 = v9;
  if ( (_UNKNOWN *)v9[3] != &unk_26F7B20 )
    goto LABEL_10;
  v7 = v9[4];
  if ( *(_UNKNOWN **)v7 == &unk_26F7B20 )
  {
    sub_C16C60(*(_QWORD **)(v7 + 8), 0);
    sub_C16C60((_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL), 0);
  }
  else
  {
    sub_21FB9A0((__int64 *)v9[4], 0);
  }
  v6 = (__int64 *)v6[4];
  if ( (_UNKNOWN *)v6[3] == &unk_26F7B20 )
  {
    sub_C16C60((_QWORD *)v6[4], 0);
    sub_C16C60((_QWORD *)(v6[4] + 24), 0);
  }
  else
  {
LABEL_10:
    sub_21FB9A0(v6 + 3, 0);
  }
  LOBYTE(v3) = (unsigned int)sub_2201020((__int64)&v8, (__int64)a1) == 1;
  sub_A4F010((__int64)&v8);
  return v3;
}
