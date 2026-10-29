char __fastcall sub_1D2940(__int64 *a1, const char *a2, const char *a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  char v12; // dl
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  const char *v16; // rdi
  int v17; // edx
  __int64 v18; // rcx
  const char *v19; // rdi
  __int64 v21; // [rsp+0h] [rbp-48h]
  const char *v22; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  if ( !strncmp(a3, "reg:", 4u) )
  {
    if ( under_debugger )
      BUG();
    interr(40604, "reg:", v6, v7, a4);
    LOBYTE(v11) = sub_1D2AD0();
  }
  else
  {
    v8 = a1[1];
    if ( !v8 )
      goto LABEL_20;
    v9 = *a1;
    v10 = 0;
    do
    {
      LOBYTE(v11) = 0;
      v12 = 1;
      if ( *(_DWORD *)v9 == 4 )
      {
        v13 = *(__int64 **)(v9 + 8);
        if ( v13[1] == 2 )
        {
          v14 = *v13;
          if ( *(_DWORD *)v14 == 2 && *(_DWORD *)(v14 + 16) == 2 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            v16 = &s1;
            v23 = v15;
            if ( *(_QWORD *)(v15 + 8) )
              v16 = *(const char **)v15;
            v21 = v14;
            v17 = strcmp(v16, a2);
            v11 = *(_QWORD *)(v21 + 24);
            v18 = *(_QWORD *)(v11 + 8);
            if ( v17 )
            {
              v19 = &s1;
              if ( v18 )
                v19 = *(const char **)v11;
            }
            else if ( v18 )
            {
              v22 = *(const char **)v11;
              LODWORD(v11) = strcmp(*(const char **)v11, a3);
              if ( !(_DWORD)v11 )
                return v11;
              v19 = v22;
            }
            else
            {
              if ( !*a3 )
                return v11;
              v19 = &s1;
            }
            if ( !strcmp(v19, a2) )
            {
              LOBYTE(v11) = sub_1D0460(v23, a3);
              v12 = v11 ^ 1;
            }
            else
            {
              v12 = 1;
              LOBYTE(v11) = 0;
            }
          }
        }
      }
      ++v10;
      v9 += 16;
    }
    while ( v10 < v8 && v12 );
    if ( !(_BYTE)v11 )
LABEL_20:
      LOBYTE(v11) = sub_1D23A0((__int64)a1, a2, a3, 0);
  }
  return v11;
}
