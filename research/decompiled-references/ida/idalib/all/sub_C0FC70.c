__int64 __fastcall sub_C0FC70(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rdi

  v1 = *a1;
  if ( v1 && (v1 & 3) == 0 && (v2 = v1 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    return sub_B79700(v2);
  else
    return 0;
}
