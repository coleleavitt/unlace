unsigned __int64 __fastcall sub_684520(
        __int64 *a1,
        char *a2,
        char *a3,
        unsigned __int8 a4,
        char a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 v10; // r15
  __int64 *i; // rax
  unsigned __int64 v12; // r13

  if ( a2 < a3 )
  {
    v10 = (unsigned __int64)a2;
    do
    {
      sub_684340((int)a1, v10);
      v10 = sub_3C1900(
              a1,
              v10,
              (unsigned __int64)a3,
              (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_684280,
              nullptr);
    }
    while ( v10 < (unsigned __int64)a3 );
  }
  sub_3D7E40(a1, (unsigned __int64)a2, (unsigned __int64)a3);
  sub_3A5CC0(a1, a2, a3);
  sub_4F3340(a1, (__int64)a2, (unsigned __int64)a3);
  sub_3C78D0((__int64)a1, (__int64)a2);
  if ( a5 == 1 || !a4 )
    goto LABEL_9;
  sub_5A0BA0(a1, (__int64)a2, a3 - a2, nullptr);
  sub_5B4B10(a1, (unsigned __int64)a2, (unsigned __int64)a3);
  for ( i = (__int64 *)sub_3C7760((__int64)a1, (__int64)a2); i; i = (__int64 *)sub_3C7760((__int64)a1, (__int64)a2) )
  {
    if ( *i >= (unsigned __int64)a3 )
      break;
    sub_3C78D0((__int64)a1, *i);
LABEL_9:
    ;
  }
  if ( a4 )
  {
    if ( a2 )
      v12 = sub_41BA40((__int64)a1, (unsigned __int64)(a2 - 1));
    else
      v12 = sub_41BA20((__int64)a1);
    while ( v12 < (unsigned __int64)a3 )
    {
      sub_41C320(a1, v12);
      v12 = sub_41BA40((__int64)a1, v12);
    }
    sub_6429C0(*a1, (unsigned __int64)a2, (unsigned __int64)a3, a6, a7, a8);
  }
  return sub_39ADA0(0x33u, a2, a3, a4);
}
