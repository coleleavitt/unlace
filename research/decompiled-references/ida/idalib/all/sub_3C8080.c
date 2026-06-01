__int64 __fastcall sub_3C8080(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbp
  __int64 result; // rax

  v1 = a1;
  if ( (unsigned __int8)getinf(9) )
  {
    if ( (unsigned __int8)is_spec_ea(a1) )
      v1 = -(__int64)(unsigned __int8)getinf(9) & a1;
  }
  v2 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( *(_DWORD *)(v2[3] + 24LL) == 8 )
  {
    if ( v1 != -1 )
    {
      if ( sub_3C7B70(v1) )
        return v1;
      goto LABEL_12;
    }
LABEL_7:
    if ( sub_3C7B70(0xFFFFFFFFFFFFFFFFLL) )
      return -1;
    goto LABEL_8;
  }
  if ( v1 == 0x100000000LL )
    goto LABEL_7;
  if ( sub_3C7B70(v1) )
    return v1;
  if ( v1 != -1 )
  {
LABEL_12:
    result = sub_3C7DE0(v2, v1 + 1);
    if ( result == -1 )
      return sub_3C7F00(v2, v1);
    return result;
  }
LABEL_8:
  v1 = -1;
  result = sub_3C7DE0(v2, -1);
  if ( result == -1 )
    return sub_3C7F00(v2, v1);
  return result;
}
