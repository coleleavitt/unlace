__int64 __fastcall sub_80E8C0(unsigned __int64 a1)
{
  __int64 i; // rax
  unsigned __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi

  for ( i = *(_QWORD *)(a1 + 48); (i & 4) != 0; i = *(_QWORD *)(v2 + 48) )
  {
    v2 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v2 )
      break;
    a1 = v2;
  }
  result = *(unsigned int *)(a1 + 44);
  if ( !(_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 24);
    if ( v4 != v5 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 - 8);
        if ( v6 )
          break;
        v5 -= 8;
        if ( v4 == v5 )
          return result;
      }
      return sub_AC7460(v6);
    }
  }
  return result;
}

