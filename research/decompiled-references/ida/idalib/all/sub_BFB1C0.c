__int64 __fastcall sub_BFB1C0(unsigned __int64 a1)
{
  __int64 i; // rax
  unsigned __int64 v2; // rax
  __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  for ( i = *(_QWORD *)(a1 + 48); (i & 4) != 0; i = *(_QWORD *)(v2 + 48) )
  {
    v2 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v2 )
      break;
    a1 = v2;
  }
  result = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)result )
  {
    v4 = *(_QWORD **)(a1 + 16);
    v5 = *(_QWORD **)(a1 + 24);
    if ( v4 != v5 )
    {
      while ( !*v4 )
      {
        if ( ++v4 == v5 )
          return result;
      }
      return sub_EEB7E0(*v4);
    }
  }
  return result;
}
