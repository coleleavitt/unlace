__int64 __fastcall sub_9E7DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // rdi
  __int64 v7; // rsi
  _WORD *v8; // rbx
  __int64 v9; // rdi
  _WORD *v10; // rsi
  _QWORD v11[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v11, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E4580(a1, a2, (__int64)v11, 4);
  if ( (_BYTE)v4 )
  {
    v6 = *(_QWORD *)(a1 + 184);
    if ( v14 )
      goto LABEL_8;
    v7 = *(_QWORD *)(v12 + 32);
    if ( *(_DWORD *)(v7 + 16) != v13 && v13 )
      v7 = *(_QWORD *)(v12 + v13 + 32);
    if ( !*(_BYTE *)(v7 + 51) || (v8 = (_WORD *)(v12 + v11[0] + 72), v13 != v11[0]) )
LABEL_8:
      v8 = (_WORD *)(v12 + v11[0] + 40);
    *(_WORD *)sub_A1A4E0(v6, 8) = *v8;
    if ( v14 )
      goto LABEL_14;
    v9 = *(_QWORD *)(v12 + 32);
    if ( *(_DWORD *)(v9 + 16) != v13 && v13 )
      v9 = *(_QWORD *)(v12 + v13 + 32);
    if ( !*(_BYTE *)(v9 + 51) || (v10 = (_WORD *)(v12 + v11[0] + 72), v11[0] != v13) )
LABEL_14:
      v10 = (_WORD *)(v12 + v11[0] + 40);
    *v10 = *v8 - 1;
  }
  sub_A1C0C0(v11);
  return v4;
}

