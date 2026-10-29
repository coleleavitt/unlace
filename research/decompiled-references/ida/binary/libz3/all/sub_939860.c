bool __fastcall sub_939860(__int64 a1, unsigned int *a2, double a3)
{
  int v3; // r12d

  if ( (unsigned __int8)sub_186AF30(a1, a2) )
  {
    sub_927D50(a1, (__int64)a2, a3);
    return 0;
  }
  else
  {
    v3 = sub_9394F0(a1, a2);
    if ( v3 == -1 )
      sub_927D50(a1, (__int64)a2, a3);
    return v3 != -1;
  }
}

