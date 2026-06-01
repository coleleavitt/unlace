unsigned __int64 __fastcall sub_C72BB0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx

  v6 = a1[294];
  v7 = 8LL * a2 + 40;
  a1[304] += v7;
  v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v8 && v6 )
    a1[294] = v7 + v8;
  else
    v8 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x15;
  if ( unk_2CAD564 )
    sub_EC5E10(21);
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  return v8;
}

