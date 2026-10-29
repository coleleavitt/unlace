unsigned __int64 __fastcall sub_16B58E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi

  v2 = a2 - (BYTE4(a2) == 0);
  LODWORD(a1) = a1 - (BYTE4(a1) == 0);
  if ( (unsigned int)a1 > v2 )
    LODWORD(a1) = v2;
  return ((unsigned int)a1 + (BYTE4(a1) ^ 1)) | ((unsigned __int64)BYTE4(a1) << 32);
}
