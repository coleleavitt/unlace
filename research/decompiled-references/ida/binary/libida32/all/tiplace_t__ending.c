bool __fastcall tiplace_t__ending(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r12
  bool result; // al
  __int64 v4; // r13
  int v5; // eax
  unsigned __int64 v6; // r12

  v2 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v2 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 16) != -1 )
    return result;
  v4 = a2[2];
  if ( v4 )
    goto LABEL_10;
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
  v4 = v5;
  if ( !v5 )
    return 1;
  v2 = *(unsigned int *)(a1 + 12);
  if ( a2[2] )
  {
LABEL_10:
    if ( v2 < a2[5] )
    {
      v6 = *(int *)(a2[4] + 4 * v2);
      return v6 >= v4 - 1;
    }
  }
  else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2) >= (unsigned int)v2 )
  {
    v6 = v2 - 1;
    return v6 >= v4 - 1;
  }
  return 1;
}

