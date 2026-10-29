__int64 __fastcall sub_90B6A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // r12
  _QWORD v10[3]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-A0h]
  unsigned int v12; // [rsp+20h] [rbp-98h]
  int v13; // [rsp+30h] [rbp-88h]
  _BYTE v14[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+80h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v14, v3);
  v15 = *(_QWORD *)(v3 + 56);
  v16 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v10, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9D5470(a1, a2, v10);
  if ( (_BYTE)v6 )
  {
    sub_A1C490(v10);
    sub_A1DB00(v10);
    if ( v13 )
      goto LABEL_8;
    v8 = *(_QWORD *)(v11 + 32);
    if ( *(_DWORD *)(v8 + 16) != v12 && v12 )
      v8 = *(_QWORD *)(v11 + v12 + 32);
    if ( !*(_BYTE *)(v8 + 51) || (v9 = v11 + v10[0] + 72, v12 != v10[0]) )
LABEL_8:
      v9 = v11 + v10[0] + 40;
    sub_A1BFE0(v9, v14);
    *(_QWORD *)(v9 + 56) = v15;
    *(_DWORD *)(v9 + 64) = v16;
  }
  sub_A1C0C0(v10);
  sub_A1C0C0(v14);
  return v6;
}

