__int64 __fastcall sub_9EA200(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+18h] [rbp-50h]
  unsigned int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+30h] [rbp-38h]

  sub_A176A0(v12, *(_QWORD *)(a1 + 200), a3);
  v3 = sub_9E82D0(a1, a2, (__int64)v12);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a1 + 184);
    if ( v15 )
      goto LABEL_8;
    v6 = *(_QWORD *)(v13 + 32);
    if ( *(_DWORD *)(v6 + 16) != v14 && v14 )
      v6 = *(_QWORD *)(v13 + v14 + 32);
    if ( !*(_BYTE *)(v6 + 51) || (v7 = (__int64 *)(v13 + v12[0] + 72), v14 != v12[0]) )
LABEL_8:
      v7 = (__int64 *)(v13 + v12[0] + 40);
    v8 = sub_A1A4E0(v5, 24);
    v9 = *v7;
    v10 = v8;
    if ( v9 == sub_2575D20(v5, 24, v11) )
      sub_257CF50(v10, v7);
    else
      sub_25768A0(v10, v7);
  }
  sub_A1C0C0(v12);
  return v3;
}

