__int64 __fastcall sub_2289D50(__int128 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx

  sub_2289830(a1, a2);
  if ( *((_QWORD *)&a1 + 1) < v2 )
    return *((_QWORD *)&a1 + 1) + a1;
  else
    return v2 + a1;
}
