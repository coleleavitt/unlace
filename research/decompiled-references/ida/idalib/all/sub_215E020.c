__int64 __fastcall sub_215E020(__int64 a1, void *a2, int a3)
{
  int v3; // eax
  int v4; // eax

  LOBYTE(v3) = a2 == &unk_2CFF001;
  LOBYTE(a3) = a2 == &unk_2D0AA9A;
  v4 = a3 | v3;
  LOBYTE(a3) = a2 == &unk_2D0AA9C;
  return a3 | (unsigned int)v4;
}
