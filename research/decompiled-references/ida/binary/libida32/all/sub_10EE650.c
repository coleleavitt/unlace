__int64 __fastcall sub_10EE650(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r14
  unsigned __int64 i; // rbx
  __int64 v11; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rax
  void **v16; // rsi
  void **v17; // r14
  __int64 v18; // rax
  void **v19; // r15
  void **v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  void **v23; // r15
  void **v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rax
  void **v29; // r14
  void **v30; // r15
  __int64 v31; // rax
  int v32; // edx
  __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned int v35; // [rsp+14h] [rbp-44h]

  if ( a1 == a2 )
    return a1;
  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v35 = *(_DWORD *)(a2 + 8);
  v3 = v35;
  if ( v35 <= v4 )
  {
    v21 = *(_QWORD *)a1;
    if ( v35 )
    {
      v25 = *(_QWORD *)a2;
      v26 = *(_QWORD *)a1;
      v34 = *(_QWORD *)a2 + 96LL * v35;
      do
      {
        sub_9CAB60(v26, v25);
        v27 = v26 + 32;
        if ( *(_BYTE *)(v26 + 80) )
        {
          if ( *(_BYTE *)(v25 + 80) )
          {
            sub_CCBE40(v27, v25 + 32);
          }
          else
          {
            v28 = *(unsigned int *)(v26 + 40);
            v29 = *(void ***)(v26 + 32);
            *(_BYTE *)(v26 + 80) = 0;
            v28 *= 32;
            v30 = (void **)((char *)v29 + v28);
            if ( v29 != (void **)((char *)v29 + v28) )
            {
              do
              {
                while ( 1 )
                {
                  v30 -= 4;
                  if ( *v30 == v30 + 2 )
                    break;
                  operator delete(*v30);
                  if ( v29 == v30 )
                    goto LABEL_55;
                }
              }
              while ( v29 != v30 );
LABEL_55:
              v30 = *(void ***)(v26 + 32);
            }
            if ( v30 != (void **)(v26 + 48) )
              free(v30);
          }
        }
        else if ( *(_BYTE *)(v25 + 80) )
        {
          *(_DWORD *)(v26 + 40) = 0;
          *(_DWORD *)(v26 + 44) = 1;
          v32 = *(_DWORD *)(v25 + 40);
          *(_QWORD *)(v26 + 32) = v26 + 48;
          if ( v32 )
            sub_CCBE40(v27, v25 + 32);
          *(_BYTE *)(v26 + 80) = 1;
        }
        v31 = *(_QWORD *)(v25 + 88);
        v26 += 96;
        v25 += 96;
        *(_QWORD *)(v26 - 8) = v31;
      }
      while ( v25 != v34 );
      v5 += 96LL * v35;
      v21 = *(_QWORD *)a1;
      v4 = *(unsigned int *)(a1 + 8);
    }
    v22 = v21 + 96 * v4;
    while ( 1 )
    {
      if ( v5 == v22 )
        goto LABEL_12;
      v22 -= 96LL;
      if ( *(_BYTE *)(v22 + 80) )
        goto LABEL_41;
      while ( *(_QWORD *)v22 != v22 + 16 )
      {
        operator delete(*(void **)v22);
        if ( v5 == v22 )
          goto LABEL_12;
        v22 -= 96LL;
        if ( *(_BYTE *)(v22 + 80) )
        {
LABEL_41:
          v23 = *(void ***)(v22 + 32);
          v24 = &v23[4 * *(unsigned int *)(v22 + 40)];
          if ( v23 != v24 )
          {
            do
            {
              while ( 1 )
              {
                v24 -= 4;
                if ( *v24 == v24 + 2 )
                  break;
                operator delete(*v24);
                if ( v23 == v24 )
                  goto LABEL_44;
              }
            }
            while ( v23 != v24 );
LABEL_44:
            v23 = *(void ***)(v22 + 32);
          }
          if ( v23 != (void **)(v22 + 48) )
            free(v23);
        }
      }
    }
  }
  if ( v35 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v7 = *(_QWORD *)a2;
    if ( *(_DWORD *)(a1 + 8) )
    {
      v4 *= 96LL;
      v13 = v7 + v4;
      do
      {
        sub_9CAB60(v5, v7);
        v14 = v5 + 32;
        if ( *(_BYTE *)(v5 + 80) )
        {
          if ( *(_BYTE *)(v7 + 80) )
          {
            sub_CCBE40(v14, v7 + 32);
          }
          else
          {
            v15 = *(unsigned int *)(v5 + 40);
            v16 = *(void ***)(v5 + 32);
            *(_BYTE *)(v5 + 80) = 0;
            v15 *= 32;
            v17 = (void **)((char *)v16 + v15);
            if ( v16 != (void **)((char *)v16 + v15) )
            {
              do
              {
                while ( 1 )
                {
                  v17 -= 4;
                  if ( *v17 == v17 + 2 )
                    break;
                  operator delete(*v17);
                  if ( v16 == v17 )
                    goto LABEL_21;
                }
              }
              while ( v16 != v17 );
LABEL_21:
              v17 = *(void ***)(v5 + 32);
            }
            if ( v17 != (void **)(v5 + 48) )
              free(v17);
          }
        }
        else if ( *(_BYTE *)(v7 + 80) )
        {
          *(_DWORD *)(v5 + 40) = 0;
          *(_QWORD *)(v5 + 32) = v5 + 48;
          *(_DWORD *)(v5 + 44) = 1;
          if ( *(_DWORD *)(v7 + 40) )
            sub_CCBE40(v14, v7 + 32);
          *(_BYTE *)(v5 + 80) = 1;
        }
        v18 = *(_QWORD *)(v7 + 88);
        v7 += 96;
        v5 += 96;
        *(_QWORD *)(v5 - 8) = v18;
      }
      while ( v13 != v7 );
      v5 = *(_QWORD *)a1;
      v3 = *(unsigned int *)(a2 + 8);
      v7 = *(_QWORD *)a2;
    }
  }
  else
  {
    v6 = v5 + 96 * v4;
    while ( v6 != v5 )
    {
      while ( 1 )
      {
        v6 -= 96LL;
        if ( *(_BYTE *)(v6 + 80) )
        {
          v19 = *(void ***)(v6 + 32);
          v20 = &v19[4 * *(unsigned int *)(v6 + 40)];
          if ( v19 != v20 )
          {
            do
            {
              while ( 1 )
              {
                v20 -= 4;
                if ( *v20 == v20 + 2 )
                  break;
                operator delete(*v20);
                if ( v19 == v20 )
                  goto LABEL_29;
              }
            }
            while ( v19 != v20 );
LABEL_29:
            v19 = *(void ***)(v6 + 32);
          }
          if ( v19 != (void **)(v6 + 48) )
            free(v19);
        }
        if ( *(_QWORD *)v6 == v6 + 16 )
          break;
        operator delete(*(void **)v6);
        if ( v6 == v5 )
          goto LABEL_9;
      }
    }
LABEL_9:
    *(_DWORD *)(a1 + 8) = 0;
    v4 = 0;
    sub_10EE490(a1, v35);
    v5 = *(_QWORD *)a1;
    v3 = *(unsigned int *)(a2 + 8);
    v7 = *(_QWORD *)a2;
  }
  v8 = (_QWORD *)(v4 + v5);
  v9 = v7 + 96 * v3;
  for ( i = v4 + v7; i != v9; *(v8 - 1) = *(_QWORD *)(i - 8) )
  {
    *v8 = v8 + 2;
    sub_10E6B70(v8, *(_BYTE **)i, *(_QWORD *)i + *(_QWORD *)(i + 8));
    v11 = i + 32;
    i += 96LL;
    sub_10EC450((__int64)(v8 + 4), v11);
    v8 += 12;
  }
LABEL_12:
  *(_DWORD *)(a1 + 8) = v35;
  return a1;
}

