unsigned __int64 __fastcall sub_899CF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12

  v2 = *a1;
  if ( *a1 )
  {
    v3 = v2 + 40LL * *(unsigned int *)(v2 - 4);
    if ( v3 == v2 )
      goto LABEL_5;
    do
    {
      sub_182F200(a2, v2);
      sub_182EF00(a2, v2 + 16);
      *(_BYTE *)(v2 + 20) &= ~1u;
      v2 += 40;
      *(_DWORD *)(v2 - 24) = 1;
    }
    while ( v3 != v2 );
    v2 = *a1;
    if ( *a1 )
LABEL_5:
      *(_DWORD *)(v2 - 4) = 0;
  }
  a1[1] = 0xFFFFFFFF00000000LL;
  return 0xFFFFFFFF00000000LL;
}

