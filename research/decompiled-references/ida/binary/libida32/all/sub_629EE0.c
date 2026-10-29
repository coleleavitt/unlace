__int64 __fastcall sub_629EE0(
        __int64 a1,
        const char **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  size_t v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  const char *v13; // rbx
  const char *v14; // rbx
  const char *v15; // rbx
  const char *v16; // rbx
  const char *v17; // rax
  size_t v18; // rdx
  const char *v19; // rax
  const char *v20; // rbx
  const char *v21; // rax

  v10 = strlen((const char *)(a1 + 4)) + a1 + 4;
  if ( *(int *)a1 < 0 )
  {
    v11 = *(_QWORD *)(v10 + 1);
    v12 = 9;
  }
  else
  {
    v11 = *(int *)(v10 + 1);
    v12 = 5;
  }
  v13 = (const char *)(v12 + v10);
  if ( a2 )
    *a2 = v13;
  if ( a4 | a3 )
  {
    v16 = &v13[strlen(v13)];
    if ( a4 )
    {
      v17 = nullptr;
      if ( v16[1] )
        v17 = v16 + 1;
      *(_QWORD *)a4 = v17;
      v18 = (size_t)&v16[strlen(v16 + 1) + 1];
      v15 = (const char *)(v18 + 1);
      if ( !a3 )
        goto LABEL_15;
    }
    else
    {
      v18 = (size_t)&v16[strlen(v16 + 1) + 1];
      v15 = (const char *)(v18 + 1);
    }
    v19 = nullptr;
    if ( *(_BYTE *)(v18 + 1) )
      v19 = v15;
    *(_QWORD *)a3 = v19;
  }
  else
  {
    if ( !(a6 | a5) )
      return v11;
    v14 = &v13[strlen(v13) + 1];
    v15 = &v14[strlen(v14) + 1];
  }
LABEL_15:
  v20 = &v15[strlen(v15)];
  if ( a5 )
  {
    v21 = nullptr;
    if ( v20[1] )
      v21 = v20 + 1;
    *(_QWORD *)a5 = v21;
  }
  if ( a6 )
    *(_DWORD *)a6 = (unsigned __int8)v20[strlen(v20 + 1) + 2];
  return v11;
}

