/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_login_name
// Address: 0x00000000000C4090

//----- (00000000000C4090) ----------------------------------------------------
bool __fastcall get_login_name(__int64 a1)
{
  char *v2; // rax
  char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  char *v7; // rdi
  size_t *v8; // r13
  __uid_t v9; // eax
  struct passwd *v10; // rax
  const char *pw_name; // r14
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // rbx
  void *v15; // rdi

  v2 = getlogin();
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    if ( v4 )
    {
      v5 = v4;
      v6 = v4 + 1;
      if ( *(_QWORD *)(a1 + 16) >= v4 + 1 )
      {
        v7 = *(char **)a1;
      }
      else
      {
        v7 = (char *)qvector_reserve(a1, *(char **)a1, v4 + 1, 1u);
        *(_QWORD *)a1 = v7;
      }
      v8 = (size_t *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v6;
      memmove(v7, v3, v5);
      *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
      if ( *(_QWORD *)(a1 + 8) > 1u )
        return *v8 > 1;
    }
    else
    {
      v8 = (size_t *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v8 = (size_t *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 8) > 1u )
      return *v8 > 1;
  }
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
        if ( *(_QWORD *)(a1 + 16) >= v12 + 1 )
        {
          v15 = *(void **)a1;
        }
        else
        {
          v15 = qvector_reserve(a1, *(char **)a1, v12 + 1, 1u);
          *(_QWORD *)a1 = v15;
        }
        *v8 = v14;
        memmove(v15, pw_name, v13);
        *(_BYTE *)(*(_QWORD *)a1 + v13) = 0;
      }
      else
      {
        *v8 = 0;
      }
    }
  }
  return *v8 > 1;
}
