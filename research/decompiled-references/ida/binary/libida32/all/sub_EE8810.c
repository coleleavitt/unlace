__int64 __fastcall sub_EE8810(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r15d
  int v8; // r13d
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r14d
  int v13; // r13d
  __int64 v14; // r12
  char **i; // rbp
  char *v16; // rsi
  int v17; // r14d
  int j; // ebp
  __int64 v19; // r13
  size_t v20; // rax
  int v22; // r13d
  int v23; // r14d
  __int64 v24; // rax
  unsigned int v25; // [rsp+4h] [rbp-44h]
  int v26; // [rsp+8h] [rbp-40h]
  int v27; // [rsp+Ch] [rbp-3Ch]

  v3 = sub_971800(*a1, "{");
  sub_22581D0(v3, a1[5], a1[6]);
  if ( (*(_WORD *)a2 & 0x200) == 0 )
    goto LABEL_14;
  v7 = *(_DWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 4) + 20);
  v4 = *(unsigned int *)(a2 + 8LL * *(unsigned int *)(a2 + 4) + 16);
  v25 = *(_DWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 4) + 16);
  if ( (v7 & 0x100) == 0 )
  {
    if ( (v7 & 0xC0) == 0 )
      goto LABEL_8;
    v26 = (unsigned __int8)v4 >> 6;
    goto LABEL_22;
  }
  v8 = *((_DWORD *)a1 + 2);
  v9 = 0;
  v27 = *(_DWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 4) + 16) & 0x100;
  if ( v8 > 0 )
  {
    do
    {
      ++v9;
      sub_971800(*a1, "  ");
    }
    while ( v8 != v9 );
  }
  v10 = sub_971800(*a1, "#pragma STDC FENV_ACCESS ");
  if ( !v27 )
  {
    v24 = sub_971800(v10, "OFF");
    sub_22581D0(v24, a1[5], a1[6]);
    if ( (v7 & 0xC0) == 0 )
      goto LABEL_8;
    v26 = (unsigned __int8)v25 >> 6;
LABEL_22:
    v22 = *((_DWORD *)a1 + 2);
    v23 = 0;
    if ( v22 > 0 )
    {
      do
      {
        ++v23;
        sub_971800(*a1, "  ");
      }
      while ( v22 != v23 );
    }
    sub_971800(*a1, "#pragma clang fp exceptions(");
    if ( v26 == 1 )
    {
      sub_971800(*a1, "maytrap");
    }
    else if ( v26 )
    {
      if ( v26 == 2 )
        sub_971800(*a1, "strict");
    }
    else
    {
      sub_971800(*a1, "ignore");
    }
    sub_971800(*a1, ")\n");
    goto LABEL_8;
  }
  v11 = sub_971800(v10, "ON");
  sub_22581D0(v11, a1[5], a1[6]);
  v4 = (unsigned __int8)v7 & 0xC0;
  if ( (v7 & 0xC0) != 0 )
  {
    v26 = (unsigned __int8)v25 >> 6;
    if ( v26 != 2 )
      goto LABEL_22;
  }
LABEL_8:
  if ( (v7 & 0x38) != 0 )
  {
    v12 = *((_DWORD *)a1 + 2);
    v13 = 0;
    if ( v12 > 0 )
    {
      do
      {
        ++v13;
        sub_971800(*a1, "  ");
      }
      while ( v12 != v13 );
    }
    sub_971800(*a1, "#pragma STDC FENV_ROUND ");
    switch ( (v25 >> 3) & 7 )
    {
      case 0u:
        sub_971800(*a1, "FE_TOWARDZERO");
        break;
      case 1u:
        sub_971800(*a1, "FE_TONEAREST");
        break;
      case 2u:
        sub_971800(*a1, "FE_UPWARD");
        break;
      case 3u:
        sub_971800(*a1, "FE_DOWNWARD");
        break;
      case 4u:
        sub_971800(*a1, "FE_TONEARESTFROMZERO");
        break;
      case 5u:
      case 6u:
      case 7u:
        sub_971800(*a1, "FE_DYNAMIC");
        break;
    }
    sub_22581D0(*a1, a1[5], a1[6]);
  }
LABEL_14:
  v14 = a2 + 8LL * *(unsigned int *)(a2 + 4) + 16;
  for ( i = (char **)(a2 + 16); (char **)v14 != i; ++i )
  {
    v16 = *i;
    sub_EE8730((__int64)a1, v16, *((unsigned __int8 *)a1 + 24), v4, v5, v6, a3);
  }
  v17 = *((_DWORD *)a1 + 2);
  if ( v17 > 0 )
  {
    for ( j = 0; j != v17; ++j )
    {
      v19 = *a1;
      v20 = j__strlen("  ");
      sub_9717A0(v19, "  ", v20);
    }
  }
  return sub_971800(*a1, "}");
}

