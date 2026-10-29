void __fastcall sub_AFACA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  _QWORD *v30; // rbp
  __int64 v31; // rax
  _QWORD *v32; // r12
  void *v33; // rdi
  _QWORD *v34; // rbp
  __int64 v35; // rax
  _QWORD *v36; // r12
  void *v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // r12
  __int64 v40; // r12
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi

  v2 = a1[44];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[43];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[40];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[39];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[38];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[36];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[35];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[32];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[31];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[30];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = a1[29];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[28];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[27];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[26];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[24];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[23];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = a1[21];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = a1[20];
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = a1[19];
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = a1[18];
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = a1[17];
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = a1[15];
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = a1[14];
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = a1[12];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = a1[11];
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = a1[10];
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = a1[9];
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = a1[8];
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = (_QWORD *)a1[7];
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v32 = &v30[v31];
      do
      {
        while ( *v30 )
        {
          v33 = (void *)(*v30++ - 8LL);
          sub_186B220(v33);
          if ( v30 == v32 )
          {
            v30 = (_QWORD *)a1[7];
            goto LABEL_63;
          }
        }
        ++v30;
      }
      while ( v30 != v32 );
      v30 = (_QWORD *)a1[7];
    }
LABEL_63:
    sub_186B220(v30 - 1);
  }
  v34 = (_QWORD *)a1[6];
  if ( v34 )
  {
    v35 = *((unsigned int *)v34 - 1);
    if ( (_DWORD)v35 )
    {
      v36 = &v34[v35];
      do
      {
        while ( *v34 )
        {
          v37 = (void *)(*v34++ - 8LL);
          sub_186B220(v37);
          if ( v34 == v36 )
          {
            v34 = (_QWORD *)a1[6];
            goto LABEL_70;
          }
        }
        ++v34;
      }
      while ( v34 != v36 );
      v34 = (_QWORD *)a1[6];
    }
LABEL_70:
    sub_186B220(v34 - 1);
  }
  v38 = a1[5];
  if ( v38 )
  {
    v39 = *(unsigned int *)(v38 - 4);
    if ( (_DWORD)v39 )
    {
      v40 = v38 + 32 * v39;
      do
      {
        while ( 1 )
        {
          v41 = *(_QWORD *)(v38 + 16);
          if ( !v41 )
            break;
          v38 += 32;
          sub_186B220((void *)(v41 - 8));
          if ( v40 == v38 )
          {
            v38 = a1[5];
            goto LABEL_77;
          }
        }
        v38 += 32;
      }
      while ( v38 != v40 );
      v38 = a1[5];
    }
LABEL_77:
    sub_186B220((void *)(v38 - 8));
  }
  v42 = a1[4];
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = a1[3];
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
}

