__int64 __fastcall sub_90B590(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdi
  _BYTE v10[64]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h]
  unsigned int v13; // [rsp+60h] [rbp-48h]
  int v14; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v10, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v11, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9D5470(a1, a2, v11);
  if ( (_BYTE)v6 )
  {
    sub_A1C490(v11);
    sub_A1DB00(v11);
    if ( v14 )
      goto LABEL_8;
    v8 = *(_QWORD *)(v12 + 32);
    if ( *(_DWORD *)(v8 + 16) != v13 && v13 )
      v8 = *(_QWORD *)(v12 + v13 + 32);
    if ( !*(_BYTE *)(v8 + 51) || (v9 = v12 + v11[0] + 72, v13 != v11[0]) )
LABEL_8:
      v9 = v12 + v11[0] + 40;
    sub_A1BFE0(v9, v10);
  }
  sub_A1C0C0(v11);
  sub_A1C0C0(v10);
  return v6;
}

