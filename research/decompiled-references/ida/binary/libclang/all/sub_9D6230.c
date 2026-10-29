__int64 __fastcall sub_9D6230(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  __int64 v9; // rsi
  _DWORD *v10; // rcx
  _QWORD v11[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v11, v5);
  sub_A1A5E0(v4, 56);
  if ( (unsigned __int8)sub_9D4CF0(a1, a2, (__int64)v11, 2)
    && (LOBYTE(v8) = sub_9D52F0(a1, a2, (__int64)v11, 2), v6 = v8, (_BYTE)v8) )
  {
    sub_A1C490(v11);
    sub_A1DB00(v11);
    if ( v14 )
      goto LABEL_10;
    v9 = *(_QWORD *)(v12 + 32);
    if ( *(_DWORD *)(v9 + 16) != v13 && v13 )
      v9 = *(_QWORD *)(v12 + v13 + 32);
    if ( !*(_BYTE *)(v9 + 51) || (v10 = (_DWORD *)(v12 + v11[0] + 72), v11[0] != v13) )
LABEL_10:
      v10 = (_DWORD *)(v12 + v11[0] + 40);
    *v10 = v3;
  }
  else
  {
    v6 = 0;
  }
  sub_A1C0C0(v11);
  return v6;
}

