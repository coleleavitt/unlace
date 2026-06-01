__int64 __fastcall sub_3C2EA0(unsigned int a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rbp
  unsigned int v3; // esi
  unsigned int v4; // eax

  v1 = a1;
  if ( (unsigned __int8)getinf(9) && (unsigned __int8)is_spec_ea(a1) )
    v1 = -(unsigned __int8)getinf(9) & a1;
  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( sub_3C2A10(v1) )
    return v1;
  v3 = v1 + 1;
  if ( v1 == -1 )
    v3 = -1;
  v4 = sub_3C2C60(v2, v3);
  if ( v4 != -1 )
    return v4;
  return sub_3C2D40(v2, v1);
}

