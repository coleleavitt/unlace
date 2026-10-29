__int64 __fastcall sub_EE9730(_WORD *a1)
{
  unsigned __int16 v1; // di

  v1 = *a1 & 0x1FF;
  if ( byte_2CD7485 )
    return qword_2CD74A0[2 * v1];
  else
    return *(_QWORD *)sub_EE7CB0(v1);
}
