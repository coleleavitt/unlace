__int64 __fastcall sub_36A180(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebp

  v2 = a1[10];
  v3 = a1[2];
  if ( a1[18] == -1 )
  {
    *(_DWORD *)(a2 + 8) = (unsigned __int8)clr_op_type(v3, v2);
  }
  else
  {
    get_default_reftype(v3);
    *(_DWORD *)(a2 + 8) = (unsigned __int8)op_offset(v3, v2);
  }
  return 0;
}

