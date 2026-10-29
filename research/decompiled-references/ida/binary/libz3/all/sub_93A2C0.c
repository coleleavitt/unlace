bool __fastcall sub_93A2C0(__int64 a1, unsigned int *a2, double a3)
{
  int v3; // r12d

  if ( (unsigned __int8)sub_186AF30(a1, a2) )
  {
    sub_92D600(a1, (__int64)a2, a3);
    return 0;
  }
  else
  {
    v3 = sub_939EE0(a1, a2);
    if ( v3 == -1 )
      sub_92D600(a1, (__int64)a2, a3);
    return v3 != -1;
  }
}

