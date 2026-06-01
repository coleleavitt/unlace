__int64 __fastcall sub_2209790(_QWORD *a1, int a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax

  if ( !a2 )
    return 1;
  if ( !*a1 )
  {
    v2 = a1 + 1;
    v3 = &v2[a2 - 1];
    while ( v2 != v3 )
    {
      if ( *v2++ )
        return 0;
    }
    return 1;
  }
  return 0;
}
