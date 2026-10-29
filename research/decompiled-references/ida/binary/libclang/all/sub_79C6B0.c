unsigned __int64 __fastcall sub_79C6B0(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a1 & 4) != 0 && v1 )
    return *(_QWORD *)v1;
  else
    return *a1 & 0xFFFFFFFFFFFFFFF8LL;
}

