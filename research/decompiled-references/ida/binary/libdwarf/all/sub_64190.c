__int64 __fastcall sub_64190(__int64 a1, int a2)
{
  unsigned __int64 Bounds; // rax
  int v3; // edx
  int v4; // rdx^4
  unsigned int v5; // ecx

  Bounds = ZSTD_dParam_getBounds(a1);
  v5 = 0;
  if ( Bounds <= 0xFFFFFFFFFFFFFF88LL && a2 >= v3 )
    return a2 <= v4;
  return v5;
}

