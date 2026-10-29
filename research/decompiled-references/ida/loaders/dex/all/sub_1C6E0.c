__int64 __fastcall sub_1C6E0(_QWORD *a1, unsigned __int16 a2)
{
  int v2; // eax
  _WORD *i; // rdx
  char *v4; // rax
  int v5; // ebp
  __int64 v6; // r12
  char v7; // r13
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rax

  v2 = 0;
  for ( i = &unk_27B20; *i != a2; i += 12 )
  {
    if ( ++v2 == 21 )
      return 0;
  }
  v4 = (char *)&unk_27B20 + 24 * v2;
  v5 = *((unsigned __int16 *)v4 + 1);
  v6 = *((_QWORD *)v4 + 1);
  v7 = v4[16];
  v8 = a1[17];
  v9 = a2 | (v5 << 16);
  v10 = a1[16];
  if ( a1[18] < (unsigned __int64)(v8 + 1) )
  {
    v15 = qvector_reserve(a1 + 16, v10, v8 + 1, 32);
    a1[16] = v15;
    v10 = v15;
    v8 = a1[17];
  }
  v11 = 32 * v8 + v10;
  *(_DWORD *)v11 = v9;
  *(_QWORD *)(v11 + 8) = v6;
  *(_BYTE *)(v11 + 16) = v7;
  *(_QWORD *)(v11 + 20) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v11 + 28) = 0;
  v12 = a1[16];
  v13 = a1[17] + 1LL;
  a1[17] = v13;
  return v12 + 32 * v13 - 32;
}

