__int64 __fastcall sub_13A43D0(__int64 a1, void *a2, int a3)
{
  int v3; // eax
  int v4; // eax

  LOBYTE(v3) = a2 == &unk_2CD8AB8;
  LOBYTE(a3) = a2 == &unk_2CD90E1;
  v4 = a3 | v3;
  LOBYTE(a3) = a2 == &unk_2D0AB48;
  return a3 | (unsigned int)v4;
}
