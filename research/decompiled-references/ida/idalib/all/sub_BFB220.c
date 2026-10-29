__int64 __fastcall sub_BFB220(unsigned __int64 a1)
{
  __int64 i; // rax
  unsigned __int64 v2; // rax
  __int64 result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rdi
  _QWORD *v7; // rdx

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
    v4 = *(_QWORD **)(a1 + 16);
    v5 = *(_QWORD **)(a1 + 24);
    if ( v4 != v5 )
    {
      v6 = *(v5 - 1);
      v7 = v5 - 1;
      if ( v6 )
      {
        return sub_EEC140(v6);
      }
      else
      {
        while ( v4 != v7 )
        {
          v6 = *--v7;
          if ( *v7 )
            return sub_EEC140(v6);
        }
      }
    }
  }
  return result;
}
