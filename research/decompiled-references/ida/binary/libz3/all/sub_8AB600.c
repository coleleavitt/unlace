__int64 __fastcall sub_8AB600(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // r13
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  void *v14; // r13
  __int64 v15; // rsi
  __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r15
  void *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rbx
  __int64 *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  __int64 result; // rax
  __int64 *v41; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_1C6EA58;
  *(_QWORD *)(a1 + 56) = off_1C6EC20;
  sub_8A9080(a1);
  sub_8AB150((_QWORD *)(a1 + 800));
  v2 = *(_QWORD *)(a1 + 792);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(__int64 **)(a1 + 784);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = &v3[2 * v4];
      do
      {
        v6 = (__int64 *)v3[1];
        if ( v6 )
        {
          v7 = &v6[*((unsigned int *)v6 - 1)];
          if ( v6 >= v7 )
            goto LABEL_14;
          do
          {
            while ( 1 )
            {
              v8 = *v6;
              if ( *v6 )
              {
                v9 = *v3;
                v10 = (*(_DWORD *)(v8 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v6 >= v7 )
                goto LABEL_13;
            }
            sub_15D7BC0(v9, v8);
            ++v6;
          }
          while ( v6 < v7 );
LABEL_13:
          v6 = (__int64 *)v3[1];
          if ( v6 )
LABEL_14:
            sub_186B220(v6 - 1);
        }
        v3 += 2;
      }
      while ( v3 != v5 );
      v3 = *(__int64 **)(a1 + 784);
    }
    sub_186B220(v3 - 1);
  }
  v11 = *(_QWORD *)(a1 + 776);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v13 = v11 + 32 * v12;
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11);
        v15 = v11 + 16;
        v11 += 32;
        sub_182CBA0(v14, v15);
      }
      while ( v11 != v13 );
      v11 = *(_QWORD *)(a1 + 776);
    }
    sub_186B220((void *)(v11 - 8));
  }
  v16 = *(__int64 **)(a1 + 768);
  if ( v16 )
  {
    v17 = *((unsigned int *)v16 - 1);
    if ( (_DWORD)v17 )
    {
      v41 = &v16[v17];
      do
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(unsigned int *)(v18 - 4);
          if ( (_DWORD)v19 )
          {
            v20 = v18 + 40 * v19;
            do
            {
              v21 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v18 + 8);
              v22 = v18 + 24;
              v18 += 40;
              sub_182CBA0(v21, v22);
            }
            while ( v18 != v20 );
            v18 = *v16;
          }
          sub_186B220((void *)(v18 - 8));
        }
        ++v16;
      }
      while ( v16 != v41 );
      v16 = *(__int64 **)(a1 + 768);
    }
    sub_186B220(v16 - 1);
  }
  v23 = *(_QWORD *)(a1 + 752);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  sub_25A130((char *)(a1 + 720));
  v24 = *(_QWORD *)(a1 + 680);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(void **)(a1 + 656);
  if ( v25 )
    sub_186B220(v25);
  v26 = *(_QWORD *)(a1 + 640);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = *(_QWORD *)(a1 + 632);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(_QWORD *)(a1 + 624);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(__int64 **)(a1 + 616);
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v30 )
      goto LABEL_56;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = *(_QWORD *)(a1 + 608);
          v10 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_55;
      }
      sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_55:
    v29 = *(__int64 **)(a1 + 616);
    if ( v29 )
LABEL_56:
      sub_186B220(v29 - 1);
  }
  v33 = *(_QWORD *)(a1 + 600);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(void **)(a1 + 576);
  if ( v34 )
    sub_186B220(v34);
  v35 = *(_QWORD *)(a1 + 568);
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  sub_8A7DC0((_QWORD *)(a1 + 184));
  v36 = *(_QWORD *)(a1 + 152);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = *(_QWORD *)(a1 + 144);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(void **)(a1 + 120);
  if ( v38 )
    sub_186B220(v38);
  *(_QWORD *)a1 = off_1C70148;
  v39 = *(_QWORD *)(a1 + 40);
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

