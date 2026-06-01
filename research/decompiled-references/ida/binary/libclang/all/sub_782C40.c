__int64 __fastcall sub_782C40(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  v2 = *(_QWORD **)(a1 + 104);
  v3 = &v2[2 * *(unsigned int *)(a1 + 112)];
  if ( v3 == v2 )
    return 0;
  while ( a2 != (*v2 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    v2 += 2;
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}

