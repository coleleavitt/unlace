__int64 __fastcall sub_5456C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v3 = *(_QWORD *)(a2 + 16);
  result = 0;
  if ( v3 == *(_QWORD *)(a3 + 16) )
  {
    v5 = *(_QWORD **)(a3 + 8);
    v6 = *(_QWORD **)(a2 + 8);
    if ( v5 == v6 )
      return 1;
    v7 = &v6[v3];
    if ( v6 == v7 )
    {
      return 1;
    }
    else
    {
      while ( *v6 == *v5 )
      {
        ++v6;
        ++v5;
        if ( v7 == v6 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}
