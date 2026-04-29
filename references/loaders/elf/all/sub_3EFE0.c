__int64 __fastcall sub_3EFE0(__int64 a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    sub_30AA0(a1);
    return sub_3F010();
  }
  else if ( a2 == 1 )
  {
    return *(_QWORD *)(a1 + 24);
  }
  else
  {
    return *(_QWORD *)(a1 + 8);
  }
}
