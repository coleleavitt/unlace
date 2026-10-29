__int64 __fastcall qisabspath(_BYTE *a1)
{
  unsigned int v1; // eax

  LOBYTE(v1) = *a1 == 92;
  return (*a1 == 47) | v1;
}
