__int64 __fastcall sub_2257FC0(__int64 a1, void *a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  LOBYTE(v3) = a2 == &unk_26FAE04;
  LOBYTE(a3) = a2 == &unk_26FAE07;
  v4 = a3 | v3;
  LOBYTE(a3) = a2 == &unk_26FAE09;
  v5 = a3 | v4;
  LOBYTE(a3) = a2 == &unk_2D0AB48;
  return a3 | (unsigned int)v5;
}
