/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_login_name
// Address: 0x0007F44C

//----- (0007F44C) --------------------------------------------------------
bool __fastcall get_login_name(int a1)
{
  char *v2; // r0
  char *v3; // r5
  size_t v4; // r0
  size_t v5; // r6
  unsigned int v6; // r7
  void *v7; // r0
  unsigned int *v8; // r7
  __uid_t v9; // r0
  struct passwd *v10; // r0
  const char *pw_name; // r5
  size_t v12; // r0
  size_t v13; // r6
  unsigned int v14; // r2
  void *v15; // r0
  unsigned int v17; // [sp+4h] [bp-4h]

  v2 = getlogin();
  if ( !v2 )
    goto LABEL_8;
  v3 = v2;
  v4 = strlen(v2);
  if ( v4 )
  {
    v5 = v4;
    v6 = v4 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v4 + 1 )
    {
      v7 = *(void **)a1;
    }
    else
    {
      v7 = qvector_reserve(a1, *(void **)a1, v6, 1u);
      *(_DWORD *)a1 = v7;
    }
    *(_DWORD *)(a1 + 4) = v6;
    memmove(v7, v3, v5);
    *(_BYTE *)(*(_DWORD *)a1 + v5) = 0;
LABEL_8:
    v8 = (unsigned int *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 4) > 1u )
      return *v8 > 1;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 4) = 0;
  v8 = (unsigned int *)(a1 + 4);
LABEL_9:
  v9 = getuid();
  v10 = getpwuid(v9);
  if ( v10 )
  {
    pw_name = v10->pw_name;
    if ( v10->pw_name )
    {
      v12 = strlen(v10->pw_name);
      if ( v12 )
      {
        v13 = v12;
        v14 = v12 + 1;
        if ( *(_DWORD *)(a1 + 8) >= v12 + 1 )
        {
          v15 = *(void **)a1;
        }
        else
        {
          v17 = v12 + 1;
          v15 = qvector_reserve(a1, *(void **)a1, v14, 1u);
          v14 = v17;
          *(_DWORD *)a1 = v15;
        }
        *v8 = v14;
        memmove(v15, pw_name, v13);
        *(_BYTE *)(*(_DWORD *)a1 + v13) = 0;
      }
      else
      {
        *v8 = 0;
      }
    }
  }
  return *v8 > 1;
}
