bool __fastcall sub_ECA160(_QWORD *a1)
{
  return (*(_WORD *)a1[((*a1 & 0x4000) != 0) + 2 + ((*a1 & 0x2000) != 0)] & 0x1FF) == 41;
}

