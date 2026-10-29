bool __fastcall sub_10D8420(__int64 a1)
{
  int v1; // edx
  bool result; // al
  int v3; // edx
  __int64 *v4; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 1;
  if ( v1 != 3 )
  {
    if ( v1 == 2 )
      return *(_DWORD *)(**(_QWORD **)(a1 + 16) + 8LL) == 3;
    result = 0;
    if ( v1 == 16 )
    {
      a1 = **(_QWORD **)(a1 + 16);
      result = 1;
      v3 = *(_DWORD *)(a1 + 8);
      if ( v3 != 3 )
      {
        while ( v3 != 2 )
        {
          if ( v3 != 16 )
            return 0;
          v4 = *(__int64 **)(a1 + 16);
          a1 = *v4;
          v3 = *(_DWORD *)(*v4 + 8);
          if ( v3 == 3 )
            return 1;
        }
        return *(_DWORD *)(**(_QWORD **)(a1 + 16) + 8LL) == 3;
      }
    }
  }
  return result;
}
