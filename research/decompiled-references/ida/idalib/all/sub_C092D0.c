unsigned __int64 __fastcall sub_C092D0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx

  v8 = 16LL * a2 + 8LL * a3 + 40;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x1B;
  if ( unk_2CD7484 )
    sub_EE9B50(27);
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 32) = a2;
  *(_DWORD *)(v10 + 36) = a3;
  return v10;
}
