__int64 __fastcall sub_9D69E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  char v5; // r15
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-80h]
  _QWORD v14[3]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h]
  unsigned int v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+40h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)v3;
  v5 = *(_BYTE *)(v3 + 16);
  v13 = *(_QWORD *)(v3 + 8);
  sub_A1A5E0(v2, 24);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v14, v7);
  sub_A1A5E0(v6, 56);
  if ( (unsigned __int8)sub_9D4CF0(a1, a2, (__int64)v14, 2)
    && (LOBYTE(v10) = sub_9D52F0(a1, a2, (__int64)v14, 2), v8 = v10, (_BYTE)v10) )
  {
    sub_A1C490(v14);
    sub_A1DB00(v14);
    if ( v17 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v15 + 32);
    if ( *(_DWORD *)(v11 + 16) != v16 && v16 )
      v11 = *(_QWORD *)(v15 + v16 + 32);
    if ( !*(_BYTE *)(v11 + 51) || (v12 = v15 + v14[0] + 72, v16 != v14[0]) )
LABEL_10:
      v12 = v15 + v14[0] + 40;
    *(_QWORD *)v12 = v4;
    *(_BYTE *)(v12 + 16) = v5;
    *(_QWORD *)(v12 + 8) = v13;
  }
  else
  {
    v8 = 0;
  }
  sub_A1C0C0(v14);
  return v8;
}

