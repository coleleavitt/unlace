__int64 __fastcall sub_7466D0(unsigned int *a1)
{
  unsigned int *v1; // rsi
  __int64 v2; // rdx
  unsigned int v4; // [rsp+0h] [rbp-18h] BYREF
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = a1;
  sub_74F3B0(&v4, a1);
  v2 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v2 == 63 )
  {
    v1 = nullptr;
    ++qword_2CAA5C0;
    v5 = 0;
    v4 = sub_7460D0(&v4, 0, (__int64)&v5, 0);
    return sub_7452D0(&v4, v1);
  }
  if ( (_BYTE)v2 != 88 )
  {
    if ( !(_BYTE)v2 )
      sub_74E200(&v4, a1, v2, &qword_2CAA5C0);
    return sub_7452D0(&v4, v1);
  }
  ++qword_2CAA5C0;
  return sub_750A30(&v4);
}

