unsigned __int64 __fastcall sub_EF35F0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  void *v11; // rcx

  v6 = a2;
  v7 = 8LL * a2 + 40;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v10 = *(_WORD *)v9 & 0xFE00;
  LOBYTE(v10) = -112;
  *(_WORD *)v9 = v10;
  if ( unk_2CD7484 )
    sub_EE9B50(144);
  *(_BYTE *)(v9 + 8) = 14;
  v11 = (void *)(v9 + 40);
  *(_DWORD *)(v9 + 12) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  if ( (_DWORD)v6 )
    v11 = memset((void *)(v9 + 40), 0, 8LL * (unsigned int)(v6 - 1) + 8);
  *(_QWORD *)(v9 + 24) = v11;
  *(_QWORD *)(v9 + 32) = v6;
  return v9;
}
