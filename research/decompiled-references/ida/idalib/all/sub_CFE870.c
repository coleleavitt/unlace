bool __fastcall sub_CFE870(__int64 a1)
{
  int v1; // edx
  bool result; // al
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = *(_DWORD *)(a1 + 24);
  result = 0;
  if ( v1 != 1 )
  {
    if ( !v1 || v1 == 2 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      result = 0;
      if ( !v4 )
        return result;
      v3 = *(_QWORD *)a1;
    }
    else
    {
      v3 = *(_QWORD *)a1;
      if ( v1 != 3 && !*(_QWORD *)(a1 + 40) && !v3 )
        return result;
      v4 = *(_QWORD *)(a1 + 32);
    }
    return *(unsigned int *)(*(_QWORD *)(v4 + 32) + 28LL) < v3;
  }
  return result;
}
