char __fastcall sub_A3B720(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD *v3; // rdx
  __int64 v4; // rcx

  result = *(_BYTE *)(a1 + 20);
  if ( !result )
    return sub_2212830(a1, a2) != 0;
  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 12);
  if ( *(_QWORD *)a1 == v4 )
    return 0;
  if ( a2 != *v3 )
  {
    while ( (_QWORD *)v4 != ++v3 )
    {
      if ( a2 == *v3 )
        return result;
    }
    return 0;
  }
  return result;
}

