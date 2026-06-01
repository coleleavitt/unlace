__int64 __fastcall op_enum(unsigned int a1, unsigned int a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // ebp
  _QWORD *v8; // r14

  if ( a3 == -1 )
    return 0;
  v8 = *(_QWORD **)(qword_2CA1698 + 1480);
  v4 = sub_3CFA90(v8, a1, 0x88888808800000LL, a2);
  if ( !(_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    sub_400960(v8, a1, a2, a3, a4, 1);
    sub_396090(0x11u, a1, a2);
  }
  return v4;
}

