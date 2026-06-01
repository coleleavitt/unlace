__int64 __fastcall sub_52CF10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a1 + 1584);
  v6 = (__int64 *)(v5 + 8);
  v7 = (__int64 *)(v5 + 64);
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( *(_QWORD *)(*(_QWORD *)v8 + 152LL) == a2 )
        break;
    }
    if ( ++v6 == v7 )
      return 0;
  }
  sub_77EAD0(v8, a3, a4, a5);
  return 1;
}
