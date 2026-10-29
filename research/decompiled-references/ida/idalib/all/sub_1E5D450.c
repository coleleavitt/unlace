__int64 __fastcall sub_1E5D450(__int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rcx
  __int64 v3; // rdi
  __int64 *v4; // rax

  v1 = *(__int64 **)(a1 + 8);
  v2 = &v1[*(unsigned int *)(a1 + 16)];
  if ( v2 == v1 )
    return 0;
  v3 = *v1;
  v4 = v1 + 1;
  if ( *(_WORD *)(*(_QWORD *)(v3 + 72) + 8LL) != 281 )
  {
    while ( v2 != v4 )
    {
      v3 = *v4++;
      if ( *(_WORD *)(*(_QWORD *)(v3 + 72) + 8LL) == 281 )
        return sub_15D8710(v3);
    }
    return 0;
  }
  return sub_15D8710(v3);
}
