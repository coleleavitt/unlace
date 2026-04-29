__int64 __fastcall sub_1F07C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 i; // rbx

  v2 = a1[1];
  v3 = *a1;
  if ( 104 * v2 )
  {
    for ( i = *a1; i != v3 + 104 * v2; i += 104 )
    {
      if ( *(_QWORD *)(i + 16) == *(_QWORD *)(a2 + 16) )
      {
        if ( sub_1C4C20(i, a2) )
          return i;
        v3 = *a1;
        v2 = a1[1];
      }
    }
  }
  return 0;
}
