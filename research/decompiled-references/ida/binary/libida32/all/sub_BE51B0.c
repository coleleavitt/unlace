unsigned __int64 __fastcall sub_BE51B0(_QWORD *a1, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int16 v12; // ax

  v8 = a4;
  v9 = (unsigned int)(a4 * a3) + 4LL * a2 + 20;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v11 && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_962430((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 9;
  if ( unk_2CAD564 )
    sub_EC5E10(9);
  v12 = *(_WORD *)(v11 + 2);
  *(_QWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 4) = a2;
  *(_DWORD *)(v11 + 16) = a3;
  *(_WORD *)(v11 + 2) = v12 & 0xFE3F | ((v8 & 7) << 6);
  return v11;
}

