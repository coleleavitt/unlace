void __fastcall sub_F2D920(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rax

  sub_F2D570(a1, (__int64)a2);
  if ( (*a2 & 0x8000000LL) != 0 )
  {
    v2 = (unsigned __int64 *)sub_BFA6D0((__int64)a2);
    sub_F2B230(a1, *v2);
  }
}
