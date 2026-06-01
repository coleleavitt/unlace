__int64 __fastcall sub_15AEFC0(unsigned int *a1)
{
  unsigned int v1; // eax

  a1[48] = 0;
  v1 = *a1;
  a1[52] = 0;
  *a1 = v1 & 0xFFB80FFF | 0x45000;
  return 0;
}
