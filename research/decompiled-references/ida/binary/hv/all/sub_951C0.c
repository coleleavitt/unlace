__int64 __fastcall sub_951C0(int a1, void *a2, signed __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  if ( a3 < 0 )
  {
    if ( !byte_1671A1 )
      sub_96F80(1225);
    BUG();
  }
  v4 = read(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
    sub_8F860(2 * (v4 != -1) + 1);
  return v5;
}

