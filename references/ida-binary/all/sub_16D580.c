__int64 __fastcall sub_16D580(__int64 a1, const char *a2, int *a3)
{
  signed __int64 v6; // rax
  signed __int64 v7; // rbp
  int v8; // r15d
  const char *v9; // rbp
  unsigned int v10; // ebx
  char v11; // r14
  _BYTE *v12; // rax
  int v14; // esi
  const char *v15; // rcx
  int v16; // eax
  int v17; // r15d
  char **v18; // r12
  size_t v19; // rax
  int v20; // ecx
  size_t v21; // rbx
  void *v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // [rsp+10h] [rbp-48h]

  v6 = strlen(a2);
  v7 = *a3;
  v8 = *a3;
  if ( v7 >= v6 || (v9 = &a2[v7], v10 = *v9, v11 = *v9, v10 <= 0x7F) && isspace(v10) )
  {
LABEL_4:
    *a3 = v8;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v12 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = 1;
    *v12 = 0;
    return a1;
  }
  if ( v8 <= 0 )
  {
    v25 = v8;
  }
  else
  {
    v14 = v8 - 1;
    v15 = &a2[v8 - 1];
    while ( 1 )
    {
      v10 = *v15;
      v25 = v8;
      v9 = v15;
      v8 = v14;
      v11 = *v15;
      if ( v10 <= 0x7F )
      {
        v16 = isspace(v10);
        v15 = v9;
        if ( v16 )
        {
          v9 = &a2[v25];
          v10 = *v9;
          v11 = *v9;
          goto LABEL_11;
        }
      }
      --v15;
      if ( !v14 )
        break;
      --v14;
    }
    v25 = 0;
  }
LABEL_11:
  v17 = v25;
  while ( v10 > 0x7F || !isspace(v10) && v11 )
  {
    v10 = a2[++v17];
    v11 = a2[v17];
  }
  if ( strncasecmp(v9, "www.", 4u) )
  {
    if ( strncasecmp(v9, "ftp.", 4u) )
    {
      v18 = off_85BE00;
      if ( strncasecmp(v9, "http://", 7u) )
      {
        while ( &off_85BE20 != (_UNKNOWN **)++v18 )
        {
          v19 = strlen(*v18);
          if ( !strncasecmp(v9, *v18, v19) )
            goto LABEL_21;
        }
        v8 = v25;
        goto LABEL_4;
      }
    }
  }
LABEL_21:
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v20 = v17 - v25;
  v21 = v17 - v25;
  if ( v17 != v25 )
  {
    v22 = nullptr;
    v23 = v20 + 1LL;
    if ( v20 != -1 )
    {
      v24 = qvector_reserve(a1, 0, v21 + 1, 1);
      *(_QWORD *)a1 = v24;
      v22 = (void *)v24;
    }
    *(_QWORD *)(a1 + 8) = v23;
    memmove(v22, v9, v21);
    *(_BYTE *)(*(_QWORD *)a1 + v21) = 0;
  }
  return a1;
}
