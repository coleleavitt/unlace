bool __fastcall sub_EEDEA0(_QWORD *a1)
{
  return (*(_WORD *)a1[((*a1 & 0x4000) != 0) + 2 + ((*a1 & 0x2000) != 0)] & 0x1FF) == 41;
}
