__int64 __fastcall sub_ABF40(_QWORD *a1, _QWORD *a2)
{
  return 16 * ((a1[3] == 0) + ((__int64)(a1[3] - a2[3]) >> 3) - 1)
       + ((__int64)(a2[2] - *a2) >> 5)
       + ((__int64)(*a1 - a1[1]) >> 5);
}

