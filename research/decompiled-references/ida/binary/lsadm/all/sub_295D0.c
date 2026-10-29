__int64 __fastcall sub_295D0(int a1, void *a2, signed __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp

  if ( a3 < 0 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(1225, a2);
    BUG();
  }
  v4 = read(a1, a2, a3);
  v5 = v4;
  if ( v4 != a3 )
    sub_26E40(2 * (v4 != -1) + 1);
  return v5;
}

