bool __fastcall tiplace_t__beginning(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r12
  bool result; // al
  __int64 v4; // r12

  v2 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v2 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 16) != -2 )
    return result;
  if ( a2[2] )
    goto LABEL_10;
  if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2) )
    return 1;
  v2 = *(unsigned int *)(a1 + 12);
  if ( a2[2] )
  {
LABEL_10:
    if ( v2 < a2[5] )
    {
      v4 = *(int *)(a2[4] + 4 * v2);
      return v4 <= 0;
    }
  }
  else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2) >= (unsigned int)v2 )
  {
    v4 = v2 - 1;
    return v4 <= 0;
  }
  return 1;
}
