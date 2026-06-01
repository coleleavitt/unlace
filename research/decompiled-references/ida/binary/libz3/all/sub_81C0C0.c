void __fastcall sub_81C0C0(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *v2; // rcx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 *v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rdx

  v1 = *(__int64 **)(a1 + 392);
  if ( v1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v2 != v1 )
    {
      v3 = *(__int64 **)(a1 + 392);
      do
      {
        v4 = *v3++;
        *(_BYTE *)(v4 + 8) = 0;
      }
      while ( v2 != v3 );
    }
    v5 = *(__int64 **)(a1 + 400);
    if ( v5 )
    {
      v6 = &v5[*((unsigned int *)v5 - 1)];
      if ( v5 == v6 )
      {
LABEL_10:
        *((_DWORD *)v1 - 1) = 0;
LABEL_11:
        *((_DWORD *)v5 - 1) = 0;
        return;
      }
LABEL_7:
      v7 = v5;
      do
      {
        v8 = *v7++;
        *(_BYTE *)(v8 + 9) = 0;
      }
      while ( v6 != v7 );
      if ( !v1 )
        goto LABEL_11;
      goto LABEL_10;
    }
    *((_DWORD *)v1 - 1) = 0;
  }
  else
  {
    v5 = *(__int64 **)(a1 + 400);
    if ( v5 )
    {
      v6 = &v5[*((unsigned int *)v5 - 1)];
      if ( v6 == v5 )
        goto LABEL_11;
      goto LABEL_7;
    }
  }
}

