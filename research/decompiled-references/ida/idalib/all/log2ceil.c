__int64 __fastcall log2ceil(__int64 a1)
{
  return (unsigned int)log2floor(a1) - (((a1 & (a1 - 1)) == 0) - 1);
}
