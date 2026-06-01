__int64 __fastcall sub_92CCA0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // r12
  __int64 *v10; // rbx
  __int64 *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  void *v18; // r13
  __int64 v19; // rsi
  __int64 *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r15
  void *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // r12
  __int64 v31; // rax
  __int64 *v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  __int64 result; // rax
  __int64 *v45; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = off_1C6FEB0;
  *(_QWORD *)(a1 + 56) = off_1C70070;
  sub_92CA20(a1);
  sub_25A130((char *)(a1 + 336));
  v2 = *(void **)(a1 + 304);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(_QWORD *)(a1 + 280);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 272);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 264);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 256);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(__int64 **)(a1 + 248);
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[2 * v8];
      do
      {
        v10 = (__int64 *)v7[1];
        if ( v10 )
        {
          v11 = &v10[*((unsigned int *)v10 - 1)];
          if ( v10 >= v11 )
            goto LABEL_22;
          do
          {
            while ( 1 )
            {
              v12 = *v10;
              if ( *v10 )
              {
                v13 = *v7;
                if ( (*(_DWORD *)(v12 + 8))-- == 1 )
                  break;
              }
              if ( ++v10 >= v11 )
                goto LABEL_21;
            }
            sub_15D7BC0(v13, v12);
            ++v10;
          }
          while ( v10 < v11 );
LABEL_21:
          v10 = (__int64 *)v7[1];
          if ( v10 )
LABEL_22:
            sub_186B220(v10 - 1);
        }
        v7 += 2;
      }
      while ( v7 != v9 );
      v7 = *(__int64 **)(a1 + 248);
    }
    sub_186B220(v7 - 1);
  }
  v15 = *(_QWORD *)(a1 + 240);
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = v15 + 32 * v16;
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v19 = v15 + 16;
        v15 += 32;
        sub_182CBA0(v18, v19);
      }
      while ( v15 != v17 );
      v15 = *(_QWORD *)(a1 + 240);
    }
    sub_186B220((void *)(v15 - 8));
  }
  v20 = *(__int64 **)(a1 + 232);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 )
    {
      v45 = &v20[v21];
      do
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = *(unsigned int *)(v22 - 4);
          if ( (_DWORD)v23 )
          {
            v24 = v22 + 40 * v23;
            do
            {
              v25 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v22 + 8);
              v26 = v22 + 24;
              v22 += 40;
              sub_182CBA0(v25, v26);
            }
            while ( v22 != v24 );
            v22 = *v20;
          }
          sub_186B220((void *)(v22 - 8));
        }
        ++v20;
      }
      while ( v20 != v45 );
      v20 = *(__int64 **)(a1 + 232);
    }
    sub_186B220(v20 - 1);
  }
  v27 = *(_QWORD *)(a1 + 216);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(_QWORD *)(a1 + 208);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(_QWORD *)(a1 + 200);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(__int64 **)(a1 + 192);
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v32 = &v30[v31];
      do
      {
        v33 = *v30;
        if ( *v30 )
        {
          v34 = *(unsigned int *)(v33 - 4);
          if ( (_DWORD)v34 )
          {
            v35 = v33 + 16 * v34;
            do
            {
              while ( 1 )
              {
                v36 = *(_QWORD *)(v33 + 8);
                if ( !v36 )
                  break;
                v33 += 16;
                sub_186B220((void *)(v36 - 8));
                if ( v35 == v33 )
                  goto LABEL_58;
              }
              v33 += 16;
            }
            while ( v33 != v35 );
LABEL_58:
            v33 = *v30;
          }
          sub_186B220((void *)(v33 - 8));
        }
        ++v30;
      }
      while ( v30 != v32 );
      v30 = *(__int64 **)(a1 + 192);
    }
    sub_186B220(v30 - 1);
  }
  v37 = *(_QWORD *)(a1 + 184);
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = *(_QWORD *)(a1 + 176);
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  v39 = *(_QWORD *)(a1 + 168);
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v40 = *(_QWORD *)(a1 + 160);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  v41 = *(_QWORD *)(a1 + 152);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = *(void **)(a1 + 128);
  if ( v42 )
    sub_186B220(v42);
  *(_QWORD *)a1 = off_1C70148;
  v43 = *(_QWORD *)(a1 + 40);
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

