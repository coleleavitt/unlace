__int64 __fastcall sub_81FA10(__int64 *a1)
{
  __int64 v1; // rdi

  v1 = *a1;
  if ( v1 && (v1 & 3) == 0 )
    return sub_783680(v1 & 0xFFFFFFFFFFFFFFFCLL);
  else
    return 0;
}

