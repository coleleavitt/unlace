void __fastcall sub_F09BE0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rax

  sub_F09830(a1, (__int64)a2);
  if ( (*a2 & 0x8000000LL) != 0 )
  {
    v2 = (unsigned __int64 *)sub_BD6990((__int64)a2);
    sub_F074F0(a1, *v2);
  }
}

