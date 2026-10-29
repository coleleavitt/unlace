__int64 __fastcall sub_4782F0(__int64 a1, const char *a2)
{
  if ( qword_8D17B0 )
  {
    *(_QWORD *)&xmmword_8D17B8 = 0;
    qfree(qword_8D17B0, a2);
    qword_8D17B0 = 0;
    *((_QWORD *)&xmmword_8D17B8 + 1) = 0;
  }
  return reg_delete_subkey("Hidden Messages");
}
