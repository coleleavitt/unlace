__int64 __fastcall tiplace_t__compare2(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx

  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(_DWORD *)(a2 + 12);
  if ( (_DWORD)v3 != v4 )
  {
    if ( a3[2] )
    {
      v13 = a3[5];
      if ( v3 >= v13 )
        return 1;
      v11 = *(int *)(a3[4] + 4 * v3);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 32LL))(a3);
      v10 = a3[2];
      v4 = *(_DWORD *)(a2 + 12);
      if ( v9 < (unsigned int)v3 )
      {
        if ( !v10 )
          (*(void (__fastcall **)(_QWORD *))(*a3 + 32LL))(a3);
        return 1;
      }
      v11 = v3 - 1;
      if ( !v10 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 32LL))(a3) >= v4 )
        {
          v12 = v4 - 1LL;
          goto LABEL_17;
        }
        goto LABEL_26;
      }
      v13 = a3[5];
    }
    if ( v4 < v13 )
    {
      v12 = *(int *)(a3[4] + 4LL * v4);
      goto LABEL_17;
    }
LABEL_26:
    v12 = -1;
LABEL_17:
    if ( v11 < v12 )
      return 0xFFFFFFFFLL;
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v5 == -2 )
  {
    result = 0;
    if ( v6 != -2 )
      return (unsigned int)(v6 < 0xFFFFFFFFFFFFFFFELL) - 2;
  }
  else
  {
    if ( v5 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      result = 1;
      if ( v6 == -2 )
        return result;
      if ( v6 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        result = 0;
        if ( v5 == v6 )
          return result;
        if ( v5 >= v6 )
          return 1;
      }
      return 0xFFFFFFFFLL;
    }
    result = v6 < 0xFFFFFFFFFFFFFFFELL;
    if ( v6 == -2 )
      return 2;
  }
  return result;
}
