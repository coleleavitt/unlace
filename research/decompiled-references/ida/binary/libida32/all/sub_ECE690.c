unsigned __int64 __fastcall sub_ECE690(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax

  v7 = 8LL * (a2 + 12) + 16;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v10 = *(_WORD *)v9 & 0xFE00;
  LOBYTE(v10) = -10;
  *(_WORD *)v9 = v10;
  if ( unk_2CAD564 )
    sub_EC5E10(246);
  *(_DWORD *)(v9 + 8) = a2;
  *(_OWORD *)(v9 + 16) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 80) = 0;
  *(_OWORD *)(v9 + 96) = 0;
  if ( v9 + 112 + 8LL * a2 != v9 + 112 )
    memset((void *)(v9 + 112), 0, 8 * ((8 * (unsigned __int64)a2 - 8) >> 3) + 8);
  return v9;
}

