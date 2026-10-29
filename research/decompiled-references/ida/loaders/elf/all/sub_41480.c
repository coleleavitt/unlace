int __fastcall sub_41480(__int64 a1, const char *a2)
{
  const char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rdi
  char **v15; // r13
  size_t v16; // rax
  int v17; // eax
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9

  v3 = a2;
  v8 = getinf_flag(3, 4);
  v9 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    v5 = *(unsigned int *)(v9 + 4);
    v4 = (unsigned int)(v5 - 23);
    if ( (unsigned int)v4 <= 1 )
      return v9;
  }
  if ( *(char *)(v9 + 12) < 0 )
    return v9;
  LODWORD(v9) = getinf(38, 4, v4, v5, v6, v7);
  if ( (v9 & 4) != 0 )
  {
    if ( *(_BYTE *)(a1 + 527) )
      return v9;
  }
  LODWORD(v9) = demangle_name(0, a2, 0, 0);
  if ( (_DWORD)v9 == 1610612736 )
  {
    v18 = getinf(38, a2, v10, v11, v12, v13);
    LODWORD(v9) = setinf(38, v18 | 4u, v19, v20, v21, v22);
    if ( *(_BYTE *)(a1 + 527) )
      return v9;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 527) )
    return v9;
  if ( (_DWORD)v9 == 1342177280 )
    goto LABEL_18;
  if ( v8 && *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 13 )
    goto LABEL_12;
  while ( *v3 == 95 )
    ++v3;
  v15 = off_87330;
  LODWORD(v9) = strncmp(v3, "gnu_compiled_c", 0xEu);
  if ( !(_DWORD)v9 )
  {
LABEL_18:
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
    if ( v17 != 13 )
    {
      if ( v17 == 15 )
      {
        v14 = "gnulnx_ppc";
        if ( v8 )
          v14 = "gnulnx_ppc64";
      }
      else if ( v17 )
      {
        v14 = "gnuunx";
        if ( v8 )
          v14 = "gnuunx64";
      }
      else
      {
        v14 = "gnulnx_x86";
        if ( v8 )
          v14 = "gnulnx_x64";
      }
      goto LABEL_23;
    }
    v14 = "gnulnx_arm";
    if ( !v8 )
    {
LABEL_23:
      LODWORD(v9) = add_til(v14, 1);
      *(_BYTE *)(a1 + 527) = 1;
      return v9;
    }
LABEL_12:
    v14 = "gnulnx_arm64";
    goto LABEL_23;
  }
  while ( 1 )
  {
    if ( algn_87348 == (_BYTE *)++v15 )
      return v9;
    v16 = strlen(*v15);
    LODWORD(v9) = strncmp(v3, *v15, v16);
    if ( !(_DWORD)v9 )
      goto LABEL_18;
  }
}

