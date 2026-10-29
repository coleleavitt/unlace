unsigned __int64 __fastcall sub_6C3B90(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( a3 > 7 )
    return sub_6C3980(a1, a2, a3);
  else
    return a3 | a2 & 0xFFFFFFFFFFFFFFF0LL;
}

