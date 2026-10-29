__int64 __fastcall sub_9BA5C0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]

  sub_A25550(v11, *(_QWORD *)(a1 + 176), a2);
  v2 = sub_A1C2E0(v11);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 184);
    if ( v14 )
      goto LABEL_8;
    v5 = *(_QWORD *)(v12 + 32);
    if ( *(_DWORD *)(v5 + 16) != v13 && v13 )
      v5 = *(_QWORD *)(v12 + v13 + 32);
    if ( !*(_BYTE *)(v5 + 51) || (v6 = (__int64 *)(v12 + v11[0] + 72), v13 != v11[0]) )
LABEL_8:
      v6 = (__int64 *)(v12 + v11[0] + 40);
    v7 = sub_A1A4E0(v4, 24);
    v8 = *v6;
    v9 = v7;
    if ( v8 == sub_2575D20(v4, 24, v10) )
      sub_257CF50(v9, v6);
    else
      sub_25768A0(v9, v6);
  }
  sub_A1C0C0(v11);
  return v2;
}

