__int64 __fastcall sub_6A9940(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rsi
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *a1;
  v10[1] = __readfsqword(0x28u);
  v6 = *(__int64 **)(v5 + 1480);
  v10[0] = 0;
  sub_6141A0(*v6, 26, v10, 8u, a5);
  result = 0;
  if ( a2 >= LODWORD(v10[0]) && a2 < HIDWORD(v10[0]) )
  {
    v8 = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a2);
    v9 = *a1;
    LODWORD(v10[0]) = v8;
    return ((unsigned int)sub_79B3A0(v10, v9, 4294967291LL, 65) >> 3) & 7;
  }
  return result;
}

