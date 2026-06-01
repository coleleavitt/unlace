__int64 __fastcall sub_9CF30(__int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(a1 + 184);
  return 16 * ((v1[15] == 0) + ((__int64)(v1[15] - v1[11]) >> 3) - 1)
       + ((__int64)(v1[10] - v1[8]) >> 5)
       + ((__int64)(v1[12] - v1[13]) >> 5);
}

