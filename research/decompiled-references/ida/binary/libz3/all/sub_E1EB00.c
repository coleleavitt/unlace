__int64 __fastcall sub_E1EB00(_QWORD *a1)
{
  __int64 v2; // rdi

  if ( !a1[7] )
    return 18;
  if ( !a1[3] )
    JUMPOUT(0xDF5558);
  v2 = a1[6];
  if ( !v2 )
    JUMPOUT(0xDF5560);
  return sub_18582D0(v2, a1 + 3);
}

