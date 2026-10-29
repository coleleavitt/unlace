unsigned __int64 __fastcall sub_EF24C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rdx

  v7 = 8LL * *(_QWORD *)(a2 + 104) + 112;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v10 = *(_WORD *)v9 & 0xFE00;
  LOBYTE(v10) = -10;
  *(_WORD *)v9 = v10;
  if ( unk_2CD7484 )
    sub_EE9B50(246);
  v11 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(v9 + 16) = *(_QWORD *)a2;
  v12 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v9 + 8) = v11;
  v13 = 8 * v11;
  *(_QWORD *)(v9 + 24) = v12;
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v9 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v9 + 56) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(v9 + 72) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(v9 + 80) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v9 + 88) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(v9 + 96) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(v9 + 104) = *(_QWORD *)(a2 + 88);
  if ( v13 )
    memmove((void *)(v9 + 112), *(const void **)(a2 + 96), v13);
  return v9;
}
