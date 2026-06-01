__int64 __fastcall sub_8FA30(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( !byte_1671A1 )
      sub_96F80(483);
    BUG();
  }
  return *(_QWORD *)(24LL * (int)a1 + __readfsqword(0) - 224);
}

