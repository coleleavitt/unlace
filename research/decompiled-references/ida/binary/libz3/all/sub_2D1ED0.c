__int64 __fastcall sub_2D1ED0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  char *v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbx
  char *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi

  v2 = *(_QWORD *)(a1 + 4368);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 4360);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(char **)(a1 + 4336);
  if ( v4 )
  {
    v5 = *(unsigned int *)(a1 + 4344);
    if ( (_DWORD)v5 )
    {
      v6 = *(_QWORD *)(a1 + 4336);
      v7 = &v4[32 * v5];
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 16);
          if ( v8 )
            sub_186B220((void *)(v8 - 8));
          v9 = *(_QWORD *)(v6 + 8);
          if ( !v9 )
            break;
          v6 += 32;
          sub_186B220((void *)(v9 - 8));
          if ( v7 == (char *)v6 )
            goto LABEL_12;
        }
        v6 += 32;
      }
      while ( (char *)v6 != v7 );
    }
LABEL_12:
    sub_186B220(v4);
  }
  v10 = *(_QWORD *)(a1 + 4328);
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    if ( (_DWORD)v11 )
    {
      v12 = v10 + 16 * v11;
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v10 + 8);
          if ( !v13 )
            break;
          v10 += 16;
          sub_186B220((void *)(v13 - 8));
          if ( v10 == v12 )
          {
            v10 = *(_QWORD *)(a1 + 4328);
            goto LABEL_19;
          }
        }
        v10 += 16;
      }
      while ( v10 != v12 );
      v10 = *(_QWORD *)(a1 + 4328);
    }
LABEL_19:
    sub_186B220((void *)(v10 - 8));
  }
  v14 = *(_QWORD *)(a1 + 4320);
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v15 )
    {
      v16 = v14 + 32 * v15;
      do
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v14 + 16);
          if ( !v17 )
            break;
          v14 += 32;
          sub_186B220((void *)(v17 - 8));
          if ( v16 == v14 )
          {
            v14 = *(_QWORD *)(a1 + 4320);
            goto LABEL_26;
          }
        }
        v14 += 32;
      }
      while ( v14 != v16 );
      v14 = *(_QWORD *)(a1 + 4320);
    }
LABEL_26:
    sub_186B220((void *)(v14 - 8));
  }
  v18 = *(_QWORD *)(a1 + 4304);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 4296);
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 4288);
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = *(_QWORD *)(a1 + 4280);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 4272);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(_QWORD *)(a1 + 4264);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  return sub_11C05E0(a1);
}

