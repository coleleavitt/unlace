__int64 __fastcall sub_408560(char a1)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rax
  _DWORD *i; // rdx
  __int64 result; // rax
  __int64 v5; // rdx

  v1 = a1 & 0xF;
  if ( (a1 & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL);
    result = 0;
    if ( v1 < *(_QWORD *)(v5 + 136) )
    {
      result = *(_QWORD *)(*(_QWORD *)(v5 + 128) + 16 * v1);
      if ( result )
        return *(_QWORD *)(result + 8);
    }
  }
  else
  {
    v2 = 0;
    for ( i = &unk_2AFDC60; *i != (_DWORD)v1; i += 6 )
    {
      if ( ++v2 == 10 )
        return 0;
    }
    return *((_QWORD *)&unk_2AFDC60 + 3 * v2 + 1);
  }
  return result;
}

