__int64 __fastcall sub_EC9FF0(__int64 a1)
{
  unsigned __int16 v1; // dx

  v1 = *(_WORD *)a1 & 0x1FF;
  do
  {
    if ( v1 > 2u )
    {
      if ( v1 <= 0x81u )
        return a1;
      a1 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      a1 = *(_QWORD *)(a1 + 16);
    }
    v1 = *(_WORD *)a1 & 0x1FF;
  }
  while ( ((v1 + 510) & 0x1FFu) <= 0x80 );
  return 0;
}

