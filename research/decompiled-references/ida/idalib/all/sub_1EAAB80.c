unsigned __int64 __fastcall sub_1EAAB80(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // eax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx

  result = a2 & 7;
  if ( (_DWORD)result == 7 )
  {
    v3 = 3;
    v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v3 = *(_DWORD *)v4;
    *(_QWORD *)(a1 + 8) = 0;
    result = (unsigned int)(v3 + 8);
    *(_DWORD *)a1 = result;
    if ( (_DWORD)result == 9 )
    {
      if ( *(_DWORD *)v4 == 1 )
        result = *(_QWORD *)(v4 + 16);
      else
        result = 0;
      goto LABEL_15;
    }
    if ( (_DWORD)result != 11 )
    {
      if ( (_DWORD)result != 8 )
        return result;
      if ( *(_DWORD *)v4 )
        BUG();
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 40LL);
      result = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 7) != 0 )
        result = 0;
LABEL_15:
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
LABEL_20:
    *(_QWORD *)(a1 + 8) = a2;
    return result;
  }
  *(_DWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = 0;
  if ( (unsigned int)result <= 2 )
  {
    if ( (a2 & 7) == 0 )
    {
      *(_QWORD *)(a1 + 8) = a2 & 0xFFFFFFFFFFFFFFF8LL;
      return result;
    }
    goto LABEL_20;
  }
  if ( (_DWORD)result == 6 )
  {
    result = *(int *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}
