__int64 __fastcall op_enum(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // ebp
  __int64 *v8; // r14

  if ( a3 == -1 )
    return 0;
  v8 = *(__int64 **)(qword_2CCB598 + 1672);
  v4 = sub_3D55E0(v8, a1, 0x88888808800000LL, a2);
  if ( !(_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    sub_413C60(v8, a1, a2, a3, a4, 1);
    sub_39ADA0(0x11u, a1, a2);
  }
  return v4;
}
