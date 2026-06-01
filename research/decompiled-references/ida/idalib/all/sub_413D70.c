__int64 __fastcall sub_413D70(__int64 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v5; // ebp

  if ( a4 == -1 )
    return 0;
  v5 = sub_3D55E0(a1, a2, 0x88888808800000LL, a3);
  if ( !(_BYTE)v5 )
  {
    return 0;
  }
  else
  {
    sub_413C60(a1, a2, a3, a4, a5, 1);
    sub_39ADA0(0x11u, a2, a3);
  }
  return v5;
}
