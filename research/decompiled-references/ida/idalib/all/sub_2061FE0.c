__int64 __fastcall sub_2061FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v12; // rax

  v8 = sub_208ACE0(a2, a3, a4, a5);
  v9 = (_QWORD *)sub_208ACD0(v8 + 72);
  sub_2061AA0(a1, v9);
  v10 = (_QWORD *)sub_208ACA0(v8 + 80);
  sub_2061AA0(a1, v10);
  if ( *(_BYTE *)(v8 + 64) == 2 )
  {
    v12 = (_QWORD *)sub_208ACA0(v8 + 88);
    sub_2061AA0(a1, v12);
  }
  sub_204C5F0(*(_QWORD *)(a7 + 16), v8, a7, a8);
  return v8 | 4;
}
