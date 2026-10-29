__int64 __fastcall sub_FFBD10(__int64 a1, int a2, _BYTE *a3)
{
  if ( (unsigned int)(a2 + 1) <= 1 )
  {
    if ( a3 )
      *a3 = 1;
    return *(_QWORD *)(a1 + 184);
  }
  else if ( a2 < 0 )
  {
    return sub_FFBCE0(a1, (unsigned int)(-2 - a2), a3);
  }
  else
  {
    return *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)a2;
  }
}

