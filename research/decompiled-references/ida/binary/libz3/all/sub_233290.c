__int64 __fastcall sub_233290(__int64 a1)
{
  char *v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbx
  char *v5; // r12
  __int64 v6; // rdi
  __int64 result; // rax
  void *v8; // rdi
  char *v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi

  v2 = *(char **)(a1 + 104);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 112);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 104);
      v5 = &v2[16 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
          v4 += 16;
          sub_186B220((void *)(v6 - 8));
          if ( (char *)v4 == v5 )
            goto LABEL_6;
        }
        v4 += 16;
      }
      while ( (char *)v4 != v5 );
    }
LABEL_6:
    result = sub_186B220(v2);
  }
  v8 = *(void **)(a1 + 80);
  if ( v8 )
    result = sub_186B220(v8);
  v9 = *(char **)(a1 + 56);
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)(a1 + 56);
      v12 = &v9[16 * v10];
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( !v13 )
            break;
          v11 += 16;
          sub_186B220((void *)(v13 - 8));
          if ( v12 == (char *)v11 )
            goto LABEL_14;
        }
        v11 += 16;
      }
      while ( v12 != (char *)v11 );
    }
LABEL_14:
    result = sub_186B220(v9);
  }
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
    result = sub_186B220((void *)(v14 - 8));
  v15 = *(void **)(a1 + 24);
  if ( v15 )
    result = sub_186B220(v15);
  v16 = *(_QWORD *)(a1 + 8);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v16 + 8))-- == 1 )
      return sub_15D7BC0(v17, v16);
  }
  return result;
}

