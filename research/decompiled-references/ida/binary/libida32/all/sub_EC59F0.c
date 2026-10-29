__int64 __fastcall sub_EC59F0(_WORD *a1)
{
  unsigned __int16 v1; // di

  v1 = *a1 & 0x1FF;
  if ( byte_2CAD565 )
    return qword_2CAD580[2 * v1];
  else
    return *(_QWORD *)sub_EC3F70(v1);
}

