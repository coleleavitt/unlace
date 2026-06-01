__int64 __fastcall sub_183DF50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        unsigned __int8 a11,
        char a12,
        __int64 a13)
{
  unsigned __int64 v15; // rax

  sub_1910D40(a1, a2, a4, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0
    && !(unsigned __int8)sub_1799D00(*(__int64 **)(a1 + 664), a2, a4) )
  {
    return 1;
  }
  v15 = sub_C982A0(*(_QWORD **)(a1 + 248), a3, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  return sub_18C3A50(a1, v15, a4);
}
