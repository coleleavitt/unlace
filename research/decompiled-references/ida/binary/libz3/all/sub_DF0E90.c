__int64 __fastcall sub_DF0E90(_QWORD *a1)
{
  __int64 v3; // rdi

  if ( !a1[7] )
    return 18;
  if ( !a1[3] )
    JUMPOUT(0xDF5558);
  v3 = a1[6];
  if ( !v3 )
    JUMPOUT(0xDF5560);
  return sub_18582D0(v3, a1 + 3);
}

