unsigned __int64 __fastcall sub_665700(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        double a6,
        double a7,
        double a8)
{
  unsigned int v11; // r15d
  unsigned int *i; // rax
  __int64 v13; // rsi
  unsigned int v14; // r13d

  if ( a2 < a3 )
  {
    v11 = a2;
    do
    {
      sub_665530((int)a1, v11);
      v11 = sub_3BC980(a1, v11, a3, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_665470, nullptr);
    }
    while ( v11 < a3 );
  }
  sub_3D2160(a1, a2, a3);
  sub_3A15E0(a1, a2, a3);
  sub_4DBD20((int *)a1, a2, a3);
  sub_3C27A0((__int64)a1, a2);
  if ( a5 == 1 || !a4 )
    goto LABEL_9;
  sub_586AE0(a1, a2, a3 - a2, nullptr);
  sub_59A900(a1, a2, a3);
  for ( i = (unsigned int *)sub_3C2650((__int64)a1, a2); i; i = (unsigned int *)sub_3C2650((__int64)a1, a2) )
  {
    v13 = *i;
    if ( (unsigned int)v13 >= a3 )
      break;
    sub_3C27A0((__int64)a1, v13);
LABEL_9:
    ;
  }
  if ( a4 )
  {
    if ( a2 )
      v14 = sub_4087C0((__int64)a1, a2 - 1);
    else
      v14 = sub_408790((__int64)a1);
    while ( v14 < a3 )
    {
      sub_408F80(a1, v14);
      v14 = sub_4087C0((__int64)a1, v14);
    }
    sub_625720(*a1, a2, a3, a6, a7, a8);
  }
  return sub_396090(0x33u, a2, a3, a4);
}

