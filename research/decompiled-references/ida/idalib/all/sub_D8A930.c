char __fastcall sub_D8A930(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  char result; // al

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
  }
  else if ( v1 )
  {
    if ( v1 == 2 || v1 == 3 )
      BUG();
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 32);
      v4 = *(unsigned int *)(a1 + 40);
      if ( *(_DWORD *)(v3 + 24) != (_DWORD)v4 && (_DWORD)v4 )
      {
        result = *(_BYTE *)(*(_QWORD *)(v2 + v4 + 32) + 60LL);
        if ( result )
          return *(_QWORD *)a1 == *(unsigned int *)(a1 + 40);
        return result;
      }
    }
    else
    {
      v3 = 64;
    }
  }
  result = *(_BYTE *)(v3 + 60);
  if ( result )
    return *(_QWORD *)a1 == *(unsigned int *)(a1 + 40);
  return result;
}
