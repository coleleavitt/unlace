__int64 __fastcall sub_71D30(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rdi

  *a1 = 0;
  v3 = (unsigned __int64)(a1 + 1);
  *(_QWORD *)(v3 + 72) = 0;
  memset((void *)(v3 & 0xFFFFFFFFFFFFFFF8LL), 0, 8 * (((unsigned int)a1 - (v3 & 0xFFFFFFF8) + 88) >> 3));
  a1[3] = a2;
  a1[1] = a2 + 0x60EA27EEADC0B5D6LL;
  a1[2] = a2 - 0x3D4D51C2D82B14B1LL;
  a1[4] = a2 + 0x61C8864E7A143579LL;
  return 0;
}

