__int64 __fastcall get_group_selector(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx

  result = a1;
  v2 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1448LL);
  v3 = *(unsigned int *)(v2 + 72);
  if ( (_DWORD)v3 )
  {
    v4 = 0;
    while ( a1 != *(_DWORD *)(v2 + 8 * v4 + 8) )
    {
      if ( v3 == ++v4 )
        return result;
    }
    return *(unsigned int *)(v2 + 4LL * (2 * (int)v4 + 1) + 8);
  }
  return result;
}

