__int64 __fastcall sub_2232840(__int64 a1, signed int a2, unsigned __int64 a3, int a4)
{
  if ( a2 >= 0 )
    return sub_2232660(a1, a2, a3, a4, 0);
  else
    return sub_2232660(a1, -a2, a3, a4, 1);
}
