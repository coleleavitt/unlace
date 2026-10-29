__int64 __fastcall sub_400A70(_QWORD *a1, unsigned int a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  unsigned int v5; // ebp

  if ( a4 == -1 )
    return 0;
  v5 = sub_3CFA90(a1, a2, 0x88888808800000LL, a3);
  if ( !(_BYTE)v5 )
  {
    return 0;
  }
  else
  {
    sub_400960(a1, a2, a3, a4, a5, 1);
    sub_396090(0x11u, a2, a3);
  }
  return v5;
}

