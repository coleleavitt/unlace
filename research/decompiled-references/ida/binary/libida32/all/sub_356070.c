__int64 __fastcall sub_356070(_DWORD *a1)
{
  int v1; // ebp

  v1 = a1[7] - a1[10];
  return (unsigned int)(((int)a1[11] >> 3) + v1 * ((int)nbits((unsigned int)a1[6]) >> 3));
}

