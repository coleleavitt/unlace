__int64 __fastcall sub_9D67D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r13
  char v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_BYTE *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v7 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4CF0(a1, a2, v7, 2) && (LOBYTE(v10) = sub_9D52F0(a1, a2, v7, 2), v8 = v10, (_BYTE)v10) )
  {
    sub_A1C490(v7);
    sub_A1DB00(v7);
    v11 = *(_QWORD *)v7;
    v12 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v7 + 48) )
      goto LABEL_10;
    v13 = *(_QWORD *)(v12 + 32);
    v14 = *(_DWORD *)(v7 + 32);
    if ( *(_DWORD *)(v13 + 16) != v14 && v14 )
      v13 = *(_QWORD *)(v12 + v14 + 32);
    if ( !*(_BYTE *)(v13 + 51) || (v16 = v14, v15 = v12 + v11 + 72, v16 != v11) )
LABEL_10:
      v15 = v12 + v11 + 40;
    *(_QWORD *)v15 = v4;
    *(_QWORD *)(v15 + 8) = v5;
    *(_BYTE *)(v15 + 16) = v6;
  }
  else
  {
    return 0;
  }
  return v8;
}

