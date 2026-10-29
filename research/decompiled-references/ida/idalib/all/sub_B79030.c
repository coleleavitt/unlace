__int64 __fastcall sub_B79030(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  _QWORD *i; // rax
  _QWORD *v5; // rdx

  v2 = *(_QWORD **)(a1 + 104);
  v3 = &v2[2 * *(unsigned int *)(a1 + 112)];
  if ( v2 == v3 )
    return 0;
  if ( a2 != (*v2 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    for ( i = v2 + 2; ; i += 2 )
    {
      v5 = i;
      if ( v3 == i )
        break;
      if ( a2 == (*v5 & 0xFFFFFFFFFFFFFFF8LL) )
        return 1;
    }
    return 0;
  }
  return 1;
}
