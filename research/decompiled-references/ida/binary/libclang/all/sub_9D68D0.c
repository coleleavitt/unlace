__int64 __fastcall sub_9D68D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  _BYTE v13[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v13, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4CF0(a1, a2, v4, 2) && (LOBYTE(v7) = sub_9D52F0(a1, a2, v4, 2), v5 = v7, (_BYTE)v7) )
  {
    sub_A1C490(v4);
    sub_A1DB00(v4);
    v8 = *(_QWORD *)v4;
    v9 = *(_QWORD *)(v4 + 24);
    if ( *(_DWORD *)(v4 + 48) )
      goto LABEL_10;
    v10 = *(_QWORD *)(v9 + 32);
    v11 = *(unsigned int *)(v4 + 32);
    if ( *(_DWORD *)(v10 + 16) != (_DWORD)v11 && (_DWORD)v11 )
      v10 = *(_QWORD *)(v9 + (unsigned int)v11 + 32);
    if ( !*(_BYTE *)(v10 + 51) || (v12 = v9 + v8 + 72, v11 != v8) )
LABEL_10:
      v12 = v9 + v8 + 40;
    sub_A1BFE0(v12, v13);
  }
  else
  {
    v5 = 0;
  }
  sub_A1C0C0(v13);
  return v5;
}

