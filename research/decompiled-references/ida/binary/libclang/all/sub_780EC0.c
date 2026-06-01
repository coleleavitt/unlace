__int64 __fastcall sub_780EC0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax

  v1 = *(_QWORD *)(a1 + 152);
  v2 = 0;
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 152) & 6LL;
  if ( v3 != 4 )
  {
    if ( v3 == 2 )
    {
      v7 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v7 )
      {
        v6 = *v7;
        goto LABEL_7;
      }
    }
    return 0;
  }
  v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 16);
LABEL_7:
  LOBYTE(v2) = ((((v6 >> 1) & 3) + 1) & 5) != 0;
  return v2;
}

