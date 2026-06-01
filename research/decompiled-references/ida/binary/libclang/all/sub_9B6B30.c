__int64 __fastcall sub_9B6B30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rsi
  _QWORD *v7; // r14
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  unsigned int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]

  v4 = a3;
  v5 = *(_QWORD *)sub_A1A5A0(a1, 8);
  sub_A1A5E0(a1, 8);
  sub_A176A0(v9, a2, (unsigned int)v4);
  if ( v12 )
    goto LABEL_6;
  v6 = *(_QWORD *)(v10 + 32);
  if ( *(_DWORD *)(v6 + 16) != v11 && v11 )
    v6 = *(_QWORD *)(v10 + v11 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v7 = (_QWORD *)(v10 + v9[0] + 72), v9[0] != v11) )
LABEL_6:
    v7 = (_QWORD *)(v10 + v9[0] + 40);
  sub_A1C0C0(v9);
  *v7 = v5;
  result = *(_QWORD *)(a2 + 176);
  *(_BYTE *)(result + v4 + 4) |= 2u;
  return result;
}

