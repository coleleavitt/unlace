__int64 __fastcall sub_5338D0(__int64 a1, const char *a2)
{
  char *v4; // r12
  bool v5; // zf
  const char *v6; // rsi
  const char *v7; // rdi
  int v8; // edx
  __int64 result; // rax
  unsigned int v10; // eax
  const char *v11; // r13
  char v12; // dl
  const char *v13; // rsi
  signed __int64 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r14
  size_t v17; // rax
  __int64 v18; // r13
  size_t v19; // r14
  size_t v20; // r15
  size_t v21; // rdx
  __int64 v22; // rax
  const char *v23; // r15
  __int64 v24; // rax

  v4 = *(char **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_12;
  if ( *v4 == 5 )
  {
    v10 = v4[1];
    v11 = v4 + 1;
    v12 = v4[1];
    if ( v10 > 0x7F )
      goto LABEL_15;
    while ( v10 - 48 <= 9 )
    {
      v10 = *++v11;
      v12 = v10;
      if ( v10 > 0x7F )
        goto LABEL_11;
    }
    if ( v12 == 46 )
      ++v11;
LABEL_11:
    if ( *v11 )
    {
LABEL_15:
      v13 = &byte_22F0C30;
      if ( a2 )
        v13 = a2;
      if ( !strcmp(v11, v13) )
        return 0;
      v14 = v11 - v4;
      if ( v11 != v4 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = v14 + 1;
        if ( v15 < v14 + 1 )
        {
          if ( *(_QWORD *)(a1 + 16) < v16 )
          {
            v24 = qvector_reserve(a1, v4, v14 + 1, 1);
            v15 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v24;
            v4 = (char *)v24;
          }
          memset(&v4[v15], 0, v16 - v15);
          v23 = (const char *)(*(_QWORD *)a1 + v14);
          *(_QWORD *)(a1 + 8) = v16;
          v11 = v23;
        }
        else if ( v16 != v15 )
        {
          *(_QWORD *)(a1 + 8) = v16;
        }
        *v11 = 0;
        goto LABEL_23;
      }
LABEL_31:
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v4);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
LABEL_23:
      if ( !a2 )
        return 1;
      v4 = *(char **)a1;
LABEL_25:
      v17 = strlen(a2);
      v18 = *(_QWORD *)(a1 + 8);
      v19 = v17;
      v20 = v17;
      if ( v18 )
      {
        --v18;
        v20 = v17 + v18;
      }
      v21 = v20 + 1;
      if ( *(_QWORD *)(a1 + 16) < v20 + 1 )
      {
        v22 = qvector_reserve(a1, v4, v21, 1);
        v21 = v20 + 1;
        *(_QWORD *)a1 = v22;
        v4 = (char *)v22;
      }
      *(_QWORD *)(a1 + 8) = v21;
      v4[v20] = 0;
      memmove((void *)(v18 + *(_QWORD *)a1), a2, v19);
      return 1;
    }
LABEL_12:
    result = 0;
    if ( !a2 || !*a2 )
      return result;
    goto LABEL_25;
  }
  v5 = a2 == nullptr;
  v6 = &byte_22F0C30;
  v7 = *(const char **)a1;
  if ( !v5 )
    v6 = a2;
  v8 = strcmp(v7, v6);
  result = 0;
  if ( v8 )
    goto LABEL_31;
  return result;
}
