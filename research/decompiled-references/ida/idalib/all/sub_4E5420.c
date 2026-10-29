void __fastcall sub_4E5420(__int64 a1, __int64 a2, __int64 a3)
{
  sub_4BC380(a2);
  sub_4B45E0(a3, a1);
  if ( a3 )
  {
    sub_381E70(a3, a1);
    if ( *(char *)(a2 + 4) >= 0 )
      sub_4B45E0(0, a1);
  }
  else if ( (unsigned __int8)sub_3FB5F0() )
  {
    sub_4B45E0(qword_2CCB598, a1);
  }
}
