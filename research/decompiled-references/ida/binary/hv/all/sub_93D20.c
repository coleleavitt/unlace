__int64 __fastcall sub_93D20(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  char *v6; // rax
  const char *v7; // rdx
  char v8; // cl

  if ( a3 <= 0x270F )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%llu", a3, a5, a6);
  if ( a3 <= 0x18FCB )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.01fk", a3, a5, a6, (double)(int)a3 * 0.0009765625);
  if ( a3 <= (unsigned __int64)&loc_F9FFF )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%lluk", a3 >> 10, a5, a6);
  if ( a3 <= 0x9FEB84 )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.02fM", a3, a5, a6, (double)(int)a3 * 0.00000095367431640625);
  if ( a3 <= 0x63F3332 )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.01fM", a3, a5, a6, (double)(int)a3 * 0.00000095367431640625);
  if ( a3 <= 0x3E7FFFFF )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%lluM", a3 >> 20, a5, a6);
  if ( a3 <= 0x27FAE1479LL )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.02fG", a3, a5, a6, (double)(int)a3 * 9.313225746154785e-10);
  if ( a3 <= 0x18FCCCCCCBLL )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.01fG", a3, a5, a6, (double)(int)a3 * 9.313225746154785e-10);
  if ( a3 <= 0xF9FFFFFFFFLL )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%lluG", a3 >> 30, a5, a6);
  if ( a3 <= 0x9FEB851EB84LL )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.02fT", a3, a5, a6, (double)(int)a3 * 9.094947017729282e-13);
  if ( a3 <= 0x63F333333332LL )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%0.01fT", a3, a5, a6, (double)(int)a3 * 9.094947017729282e-13);
  if ( a3 <= 0x3E7FFFFFFFFFFLL )
    return (int)sub_9A810((_DWORD)a1, a2, (unsigned int)"%lluT", a3 >> 40, a5, a6);
  if ( a2 <= 0 )
  {
    if ( !byte_1671A1 )
      sub_96F80(520);
    BUG();
  }
  if ( a2 == 1 )
  {
    *a1 = 0;
    return 0;
  }
  else
  {
    *a1 = 105;
    v6 = a1;
    v7 = "nfty";
    do
    {
      v8 = *v7;
      ++v6;
      ++v7;
      *v6 = v8;
    }
    while ( v8 );
    return v6 - a1;
  }
}

