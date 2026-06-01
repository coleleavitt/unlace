__int64 __fastcall sub_13DD440(__int64 a1, char a2)
{
  int v2; // eax
  int v3; // edx

  v2 = isalnum(a2);
  LOBYTE(v3) = a2 == 95;
  LOBYTE(v2) = v2 != 0;
  return v3 | (unsigned int)v2;
}
