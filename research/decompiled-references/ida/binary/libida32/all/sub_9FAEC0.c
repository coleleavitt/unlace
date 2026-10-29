__int64 __fastcall sub_9FAEC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi

  v2 = *(unsigned int *)(a1 + 16);
  result = 0;
  if ( v2 == *(_DWORD *)(a2 + 16) )
  {
    v4 = *(_QWORD **)(a1 + 8);
    v5 = *(_QWORD **)(a2 + 8);
    v6 = &v4[v2];
    if ( v4 != v6 )
    {
      if ( *v5 >> 33 != *v4 >> 33 )
        return result;
      while ( 1 )
      {
        ++v4;
        ++v5;
        if ( v6 == v4 )
          break;
        if ( *v4 >> 33 != *v5 >> 33 )
          return 0;
      }
    }
    return 1;
  }
  return result;
}

