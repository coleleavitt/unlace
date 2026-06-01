__int64 __fastcall sub_8FE860(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx

  v2 = *(_QWORD **)(a2 + 8);
  if ( !v2 )
    return 0;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 == v2 )
    return 0;
  while ( *v2 != *(_QWORD *)(a1 + 376) )
  {
    if ( v3 == ++v2 )
      return 0;
  }
  return 1;
}

