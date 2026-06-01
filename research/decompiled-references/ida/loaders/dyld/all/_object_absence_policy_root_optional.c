__int64 __fastcall object_absence_policy_root_optional(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // w8

  if ( a3 == 2 )
    v3 = 0;
  else
    v3 = a3;
  if ( a2 )
    return v3;
  else
    return a3;
}
