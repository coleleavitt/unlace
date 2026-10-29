__int64 __fastcall sub_5AA8A0(__int64 *a1, unsigned int a2, const void *a3)
{
  size_t v5; // rax
  size_t v6; // r12
  void *v8; // rdi
  size_t v9; // r14
  unsigned __int64 v10; // r14
  char *v11; // rbp
  int v12; // edx
  char *v13; // rax
  unsigned __int64 v14; // rax
  size_t v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax

  if ( a3 && (v5 = strlen((const char *)a3), (v6 = v5) != 0) )
  {
    v8 = (void *)*a1;
    v9 = v5 + 1;
    if ( a1[2] < v5 + 1 )
    {
      v20 = qvector_reserve(a1, *a1, v5 + 1, 1);
      *a1 = v20;
      v8 = (void *)v20;
    }
    a1[1] = v9;
    memmove(v8, a3, v6);
    *(_BYTE *)(*a1 + v6) = 0;
    v10 = a1[1];
    if ( v10 > 1 )
    {
      v11 = (char *)*a1;
      v12 = 0;
      v13 = (char *)*a1;
      if ( *(_BYTE *)*a1 != 106 )
        goto LABEL_14;
      do
      {
        if ( v13[1] != 95 )
          break;
        v13 += 2;
        ++v12;
      }
      while ( *v13 == 106 );
      if ( v12 <= 16 )
      {
LABEL_14:
        if ( !strncmp((const char *)*a1, "__imp_", 6u) )
        {
          v19 = v10 - 1;
          goto LABEL_30;
        }
        v14 = a1[2];
        goto LABEL_16;
      }
      return 0;
    }
  }
  else
  {
    a1[1] = 0;
  }
  if ( (get_flags_ex(a2, 4) & 0xC000) != 0x4000 || get_ea_name(a1, a2, 0, 0) <= 0 )
    return 0;
  v11 = (char *)*a1;
  v18 = strncmp((const char *)*a1, "__imp_", 6u);
  v15 = a1[1];
  if ( v18 )
  {
    v14 = a1[2];
    if ( !v15 )
    {
      v17 = 3;
      v16 = 2;
      if ( v14 > 2 )
      {
        a1[1] = 3;
        v11[2] = 0;
LABEL_19:
        *(_WORD *)*a1 = 24426;
        return 1;
      }
LABEL_35:
      v23 = qvector_reserve(a1, v11, v17, 1);
      *a1 = v23;
      v11 = (char *)v23;
LABEL_17:
      a1[1] = v17;
      v11[v16] = 0;
      if ( v15 )
        memmove((void *)(*a1 + 2), (const void *)*a1, v15);
      goto LABEL_19;
    }
    v10 = a1[1];
LABEL_16:
    v15 = v10 - 1;
    v16 = v10 + 1;
    v17 = v10 + 2;
    if ( v14 >= v17 )
      goto LABEL_17;
    goto LABEL_35;
  }
  if ( v15 )
  {
    v19 = v15 - 1;
    if ( v15 != 1 )
    {
      v10 = a1[1];
LABEL_30:
      v21 = 1;
      v22 = 0;
      if ( v19 > 6 )
      {
        v22 = v10 - 7;
        v21 = v10 - 6;
        memmove(v11, v11 + 6, v10 - 7);
        v11 = (char *)*a1;
      }
      if ( a1[2] < v21 )
      {
        v24 = qvector_reserve(a1, v11, v21, 1);
        *a1 = v24;
        v11 = (char *)v24;
      }
      a1[1] = v21;
      v11[v22] = 0;
    }
  }
  return 1;
}

