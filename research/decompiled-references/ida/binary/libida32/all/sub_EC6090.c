__int64 __fastcall sub_EC6090(__int64 a1)
{
  unsigned __int16 i; // dx

  while ( 1 )
  {
    while ( 1 )
    {
      for ( i = *(_WORD *)a1 & 0x1FF; i == 2; i = *(_WORD *)a1 & 0x1FF )
        a1 = *(_QWORD *)(a1 + 16);
      if ( (unsigned int)i - 132 > 1 )
        break;
      if ( i == 133 )
        a1 = *(_QWORD *)(a1 + 8LL * ((unsigned int)((*(_WORD *)a1 & 0x200) != 0) + 1) + 24);
      else
        a1 = *(_QWORD *)(a1 + 24);
    }
    if ( i != 130 )
      break;
    a1 = *(_QWORD *)(a1 + 8);
  }
  return a1;
}

