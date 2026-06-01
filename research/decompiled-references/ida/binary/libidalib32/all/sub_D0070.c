__int64 __fastcall sub_D0070(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  int v7; // ebp
  int v9; // eax
  _DWORD *v10; // rdi

  v6 = 56LL * a1;
  v7 = *(_DWORD *)(v6 + qword_2512E0 + 4);
  if ( !(unsigned __int8)sub_BFD20((int *)(v6 + qword_2512E0), a2, a3, a4, a5, a6)
    || *(_DWORD *)(qword_2512E0 + v6 + 4) == (unsigned __int16)v7 )
  {
    return 0;
  }
  v9 = xmmword_2512E8;
  v10 = qword_2515B0;
  if ( !qword_2515B0 )
  {
    sub_9E0A0();
    return 0;
  }
  *(_QWORD *)qword_2515B0 = qword_2512E0;
  v10[2] = v9;
  sub_CC780((__int64)v10, 24);
  return 0;
}

