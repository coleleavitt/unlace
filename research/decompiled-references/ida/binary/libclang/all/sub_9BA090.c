__int64 __fastcall sub_9BA090(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _WORD *v6; // rbp
  _QWORD v7[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+18h] [rbp-40h]
  unsigned int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h]

  sub_A25550(v7, *(_QWORD *)(a1 + 176), a2);
  v2 = sub_A1C2E0(v7);
  if ( (_BYTE)v2 )
  {
    v4 = *(_QWORD *)(a1 + 184);
    if ( v10 )
      goto LABEL_8;
    v5 = *(_QWORD *)(v8 + 32);
    if ( *(_DWORD *)(v5 + 16) != v9 && v9 )
      v5 = *(_QWORD *)(v8 + v9 + 32);
    if ( !*(_BYTE *)(v5 + 51) || (v6 = (_WORD *)(v8 + v7[0] + 72), v9 != v7[0]) )
LABEL_8:
      v6 = (_WORD *)(v8 + v7[0] + 40);
    *(_WORD *)sub_A1A4E0(v4, 8) = *v6;
  }
  sub_A1C0C0(v7);
  return v2;
}

