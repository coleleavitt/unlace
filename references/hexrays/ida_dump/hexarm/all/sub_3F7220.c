__int64 __fastcall sub_3F7220(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        unsigned int a6,
        double a7)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx

  v8 = a3;
  if ( a5 )
  {
    v9 = *(_QWORD *)(a1 + 832);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) != 8
      || (v10 = *(_DWORD *)(v9 + 480), v10 != (_DWORD)v8) && v10 != a6 )
    {
      sub_3F56D0(a1, 3u, a4, a5, 0x3BEA45E214ADDC55LL, *(int *)(v9 + 632), 0);
      sub_3F56D0(a1, a2, a4, (int)v8, *(int *)(*(_QWORD *)(a1 + 832) + 632LL), (int)a6, 0);
      return a6;
    }
  }
  if ( (_DWORD)v8 == a6 )
    return a6;
  sub_3F6E70(a1, 4u, a4, v8, 0x3BEA45E214ADDC55LL, (int)a6, a7, 0, 1);
  return a6;
}
