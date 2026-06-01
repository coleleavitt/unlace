__int64 __fastcall sub_9D58B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // ecx
  _DWORD *v12; // rcx
  __int64 v13; // rsi

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !(unsigned __int8)sub_9D4CF0(a1, a2, v4, 2) )
    return 0;
  LOBYTE(v6) = sub_9D52F0(a1, a2, v4, 2);
  v7 = v6;
  if ( !(_BYTE)v6 )
    return 0;
  sub_A1C490(v4);
  sub_A1DB00(v4);
  v8 = *(_QWORD *)v4;
  v9 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v4 + 48) )
    goto LABEL_9;
  v10 = *(_QWORD *)(v9 + 32);
  v11 = *(_DWORD *)(v4 + 32);
  if ( *(_DWORD *)(v10 + 16) != v11 && v11 )
    v10 = *(_QWORD *)(v9 + v11 + 32);
  if ( !*(_BYTE *)(v10 + 51) || (v13 = v11, v12 = (_DWORD *)(v9 + v8 + 72), v8 != v13) )
LABEL_9:
    v12 = (_DWORD *)(v9 + v8 + 40);
  *v12 = v3;
  return v7;
}

