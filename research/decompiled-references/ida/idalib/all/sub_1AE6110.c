__int64 __fastcall sub_1AE6110(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx

  v2 = *(unsigned int *)(a1 + 344);
  result = 0;
  if ( (_DWORD)v2 )
  {
    v4 = *(_QWORD *)(a1 + 336) + 6776 * v2 - 6776;
    v5 = *(_QWORD *)v4;
    v6 = *(unsigned int *)(v4 + 8) - (unsigned __int64)*(unsigned int *)(a1 + 27504);
    v7 = *(_QWORD *)v4 + 1688 * v6;
    if ( *(_QWORD *)(a1 + 328) == *(_QWORD *)(v4 + 6768) )
    {
      if ( *(_DWORD *)(a1 + 27504) >= *(_DWORD *)(v4 + 8) )
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    if ( v5 == v7 )
      return 0;
    while ( ((*(_DWORD *)(v7 - 760) - 4) & 0xFFFFFFFB) != 0 )
    {
      v7 -= 1688;
      --v6;
      if ( v5 == v7 )
        return 0;
    }
    v8 = *(_QWORD **)(v7 - 360);
    v9 = &v8[3 * *(unsigned int *)(v7 - 352)];
    if ( v8 == v9 )
    {
      return 0;
    }
    else
    {
      while ( *v8 != a2 || v8[1] != v6 )
      {
        v8 += 3;
        if ( v9 == v8 )
          return 0;
      }
      return v8[2];
    }
  }
  return result;
}
