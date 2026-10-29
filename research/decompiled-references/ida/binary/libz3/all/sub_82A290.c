__int64 __fastcall sub_82A290(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v8; // eax
  __int64 v9; // r14

  if ( a2 >= 0xFFFFFFFE )
  {
    v8 = *(_DWORD *)(a4 + 56);
    if ( v8 == 1 )
    {
      v9 = a4 + 24;
      if ( !sub_3ED700((__int64)qword_1C7F2C0, a4 + 24, a3) )
        return *(unsigned int *)(a4 + 8);
      v8 = *(_DWORD *)(a4 + 56);
      if ( a2 == -2 )
      {
        if ( v8 )
          return 4294967294LL;
LABEL_14:
        if ( sub_3ED700((__int64)qword_1C7F2C0, a3, v9) )
          return *(_DWORD *)(a4 + 8) ^ 1u;
        return 4294967294LL;
      }
    }
    else if ( a2 == -2 )
    {
      if ( v8 )
        return 4294967294LL;
      v9 = a4 + 24;
      goto LABEL_14;
    }
    if ( !v8 && !sub_3ED700((__int64)qword_1C7F2C0, a4 + 24, a3) )
      return *(_DWORD *)(a4 + 8) ^ 1u;
    return 4294967294LL;
  }
  if ( a2 - 1 > 1 )
    return 4294967294LL;
  v6 = *(_DWORD *)(a4 + 56);
  if ( v6 )
    goto LABEL_4;
  if ( sub_3ED700((__int64)qword_1C7F2C0, a3, a4 + 24) )
  {
    v6 = *(_DWORD *)(a4 + 56);
LABEL_4:
    if ( a2 == 2 )
    {
      if ( v6 == 1 && sub_3ED700((__int64)qword_1C7F2C0, a4 + 24, a3) )
        return *(_DWORD *)(a4 + 8) ^ 1u;
    }
    else if ( v6 == 1 && !sub_3ED700((__int64)qword_1C7F2C0, a3, a4 + 24) )
    {
      return *(_DWORD *)(a4 + 8) ^ 1u;
    }
    return 4294967294LL;
  }
  return *(unsigned int *)(a4 + 8);
}

