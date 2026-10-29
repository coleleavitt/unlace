__int64 __fastcall sub_51C450(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v8; // rbp

  if ( *(_DWORD *)(a2 + 12) > 1u )
    return 0;
  v2 = *(_QWORD **)a2;
  v3 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 == v3 )
  {
    v8 = *v2;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v2;
      v4 = v2;
      if ( *v2 > 1u )
        break;
      if ( (_QWORD *)v3 == ++v2 )
      {
        v8 = v4[1];
        break;
      }
    }
  }
  v5 = *(_QWORD **)sub_63BA90(*(_QWORD *)(a1 + 8), v8);
  if ( !v5 )
    return 1;
  v6 = &v5[*((unsigned int *)v5 - 1)];
  if ( v6 == v5 )
    return 1;
  while ( !(unsigned __int8)sub_62A480(*v5, v8, 0) )
  {
    if ( ++v5 == v6 )
      return 1;
  }
  return 0;
}

