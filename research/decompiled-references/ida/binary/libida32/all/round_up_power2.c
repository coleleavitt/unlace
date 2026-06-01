__int64 __fastcall round_up_power2(int a1)
{
  unsigned int v1; // edi

  v1 = (a1 - 1) | ((unsigned int)(a1 - 1) >> 1) | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2);
  return (v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 8) | ((v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 8)) >> 16)) + 1;
}

