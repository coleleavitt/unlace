_QWORD *__fastcall sub_3C9300(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rax
  _QWORD **v3; // rcx
  _QWORD *v4; // rdx

  v2 = *(_QWORD ***)(a1 + 872);
  v3 = &v2[*(_QWORD *)(a1 + 880)];
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( *v4 == a2 )
        break;
    }
    if ( v3 == ++v2 )
      return 0;
  }
  return v4;
}
