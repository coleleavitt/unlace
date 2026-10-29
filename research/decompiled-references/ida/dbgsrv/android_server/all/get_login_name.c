/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_login_name
// Address: 0x00000000000BF2F0

//----- (00000000000BF2F0) ----------------------------------------------------
bool __fastcall get_login_name(__int64 a1)
{
  char *v2; // x0
  char *v3; // x20
  size_t v4; // x0
  unsigned __int64 v5; // x22
  size_t v6; // x21
  void *v7; // x0
  unsigned __int64 *v8; // x23
  __uid_t v9; // w0
  struct passwd *v10; // x0
  const char *pw_name; // x20
  size_t v12; // x0
  unsigned __int64 v13; // x22
  size_t v14; // x21
  void *v15; // x0

  v2 = getlogin();
  if ( !v2 )
  {
    v8 = (unsigned __int64 *)(a1 + 8);
    goto LABEL_9;
  }
  v3 = v2;
  v4 = strlen(v2);
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = v4;
    if ( *(_QWORD *)(a1 + 16) >= v4 + 1 )
    {
      v7 = *(void **)a1;
    }
    else
    {
      v7 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v5, 1u);
      *(_QWORD *)a1 = v7;
    }
    *(_QWORD *)(a1 + 8) = v5;
    v8 = (unsigned __int64 *)(a1 + 8);
    memmove(v7, v3, v6);
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
LABEL_9:
    if ( *v8 > 1 )
      return *v8 > 1;
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 8) = 0;
  v8 = (unsigned __int64 *)(a1 + 8);
LABEL_10:
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
        v13 = v12 + 1;
        v14 = v12;
        if ( *(_QWORD *)(a1 + 16) >= v12 + 1 )
        {
          v15 = *(void **)a1;
        }
        else
        {
          v15 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v13, 1u);
          *(_QWORD *)a1 = v15;
        }
        *v8 = v13;
        memmove(v15, pw_name, v14);
        *(_BYTE *)(*(_QWORD *)a1 + v14) = 0;
      }
      else
      {
        *v8 = 0;
      }
    }
  }
  return *v8 > 1;
}
