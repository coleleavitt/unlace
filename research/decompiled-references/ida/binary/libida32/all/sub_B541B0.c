__int64 __fastcall sub_B541B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 152);
  if ( !v1 )
    return 0;
  v2 = (v1 >> 1) & 3;
  if ( v2 == 2 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 )
      return *(unsigned int *)(v3 + 40);
    return 0;
  }
  if ( v2 != 1 )
    return 0;
  v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
    return 0;
  return *(unsigned int *)(v5 + 8);
}

