__int64 __fastcall sub_BAC6C0(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *i; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 *v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // r12
  void *v23; // rdi
  __int64 *v24; // rbx
  __int64 *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = off_1C737A0;
  v2 = *(__int64 **)(a1 + 352);
  v3 = &v2[*(unsigned int *)(a1 + 360)];
  for ( i = v2; v3 != i; *(_BYTE *)(v5 + 6) &= ~1u )
    v5 = *i++;
  *(_DWORD *)(a1 + 360) = 0;
  if ( v2 != (__int64 *)(a1 + 368) && v2 )
    sub_186B220(v2);
  v6 = *(_QWORD *)(a1 + 344);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 336);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 328);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 320);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 216);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 208);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(__int64 **)(a1 + 200);
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 )
    {
      v14 = &v12[2 * v13];
      do
      {
        v15 = (__int64 *)v12[1];
        if ( v15 )
        {
          v16 = &v15[*((unsigned int *)v15 - 1)];
          if ( v15 >= v16 )
            goto LABEL_29;
          do
          {
            while ( 1 )
            {
              v17 = *v15;
              if ( *v15 )
              {
                v18 = *v12;
                v19 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v19 )
                  break;
              }
              if ( ++v15 >= v16 )
                goto LABEL_28;
            }
            sub_15D7BC0(v18, v17);
            ++v15;
          }
          while ( v15 < v16 );
LABEL_28:
          v15 = (__int64 *)v12[1];
          if ( v15 )
LABEL_29:
            sub_186B220(v15 - 1);
        }
        v12 += 2;
      }
      while ( v12 != v14 );
      v12 = *(__int64 **)(a1 + 200);
    }
    sub_186B220(v12 - 1);
  }
  v20 = *(_QWORD **)(a1 + 192);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 )
    {
      v22 = &v20[v21];
      do
      {
        while ( *v20 )
        {
          v23 = (void *)(*v20++ - 8LL);
          sub_186B220(v23);
          if ( v22 == v20 )
          {
            v20 = *(_QWORD **)(a1 + 192);
            goto LABEL_39;
          }
        }
        ++v20;
      }
      while ( v20 != v22 );
      v20 = *(_QWORD **)(a1 + 192);
    }
LABEL_39:
    sub_186B220(v20 - 1);
  }
  v24 = *(__int64 **)(a1 + 152);
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 144);
          v19 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_47;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_47:
    v24 = *(__int64 **)(a1 + 152);
    if ( v24 )
LABEL_48:
      sub_186B220(v24 - 1);
  }
  v28 = *(_QWORD *)(a1 + 136);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  *(_QWORD *)a1 = off_1C70148;
  v29 = *(_QWORD *)(a1 + 40);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

