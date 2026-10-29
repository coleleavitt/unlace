__int64 __fastcall sub_CDA220(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 == 1 )
    return *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    result = 0;
    if ( v1 != 2 && v1 != 3 )
      return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      result = *(_QWORD *)(v2 + 32);
      v4 = *(unsigned int *)(a1 + 40);
      if ( *(_DWORD *)(result + 24) != (_DWORD)v4 )
      {
        if ( (_DWORD)v4 )
          return *(_QWORD *)(v2 + v4 + 32);
      }
    }
    else
    {
      return 64;
    }
  }
  return result;
}

