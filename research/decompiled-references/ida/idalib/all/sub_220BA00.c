__int64 __fastcall sub_220BA00(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 i; // rax
  int v7; // edx

  if ( a3 )
  {
    v3 = (unsigned int)(a3 - 1);
    v4 = *(_QWORD *)(a1 + 8 * v3);
    v5 = *(_QWORD *)(a2 + 8 * v3);
    if ( v4 != v5 )
      return v5 < v4 ? 1 : -1;
    if ( a3 != 1 )
    {
      for ( i = (unsigned int)(a3 - 2); ; i = (unsigned int)(v7 - 1) )
      {
        v7 = i;
        v4 = *(_QWORD *)(a1 + 8 * i);
        v5 = *(_QWORD *)(a2 + 8 * i);
        if ( v4 != v5 )
          break;
        if ( !v7 )
          return 0;
      }
      return v5 < v4 ? 1 : -1;
    }
  }
  return 0;
}
