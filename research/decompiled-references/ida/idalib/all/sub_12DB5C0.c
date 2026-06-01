void __fastcall sub_12DB5C0(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r14
  _QWORD *v6; // rbp
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  volatile signed __int32 *v9; // r13
  _QWORD *v10; // r14
  _QWORD *v11; // rbp
  _QWORD *v12; // r15
  _QWORD *v13; // r12
  volatile signed __int32 *v14; // r13
  _QWORD *v15; // r13
  _QWORD *v16; // rbp
  volatile signed __int32 *v17; // r12
  int v18; // eax
  _DWORD *v19; // r13
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // r13
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // r12
  int v26; // eax
  _QWORD *v27; // rbp
  int v28; // r12d
  __int64 v29; // rax

  if ( *(_DWORD *)(a1 + 48) )
  {
    v27 = *(_QWORD **)(a1 + 24);
    v28 = *(_DWORD *)(a1 + 52);
    v29 = v27[1];
    if ( (unsigned __int64)(v29 + 4) > v27[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v27 + 3, v29 + 4, 1);
      v29 = v27[1];
    }
    *(_DWORD *)(*v27 + v29) = v28;
    v27[1] += 4LL;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 24);
    v4 = v3[1];
    if ( v4 )
    {
      sub_227BF10(v2, *v3, v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
    }
  }
  v5 = *(_QWORD **)(a1 + 136);
  v6 = *(_QWORD **)(a1 + 128);
  if ( v5 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = (_QWORD *)v6[2];
        v8 = (_QWORD *)v6[1];
        if ( v7 != v8 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v9 = (volatile signed __int32 *)v8[1];
                if ( v9 )
                {
                  if ( !_InterlockedSub(v9 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
                    if ( !_InterlockedSub(v9 + 3, 1u) )
                      break;
                  }
                }
                v8 += 2;
                if ( v7 == v8 )
                  goto LABEL_14;
              }
              v8 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
            }
            while ( v7 != v8 );
          }
          else
          {
            do
            {
              v19 = (_DWORD *)v8[1];
              if ( v19 )
              {
                v20 = v19[2];
                v19[2] = v20 - 1;
                if ( v20 == 1 )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                  v18 = v19[3];
                  v19[3] = v18 - 1;
                  if ( v18 == 1 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 24LL))(v19);
                }
              }
              v8 += 2;
            }
            while ( v7 != v8 );
          }
LABEL_14:
          v8 = (_QWORD *)v6[1];
        }
        if ( !v8 )
          break;
        v6 += 4;
        operator delete(v8);
        if ( v5 == v6 )
        {
          v6 = *(_QWORD **)(a1 + 128);
          goto LABEL_18;
        }
      }
      v6 += 4;
    }
    while ( v5 != v6 );
    v6 = *(_QWORD **)(a1 + 128);
  }
LABEL_18:
  if ( v6 )
    operator delete(v6);
  v10 = *(_QWORD **)(a1 + 112);
  v11 = *(_QWORD **)(a1 + 104);
  if ( v10 != v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = (_QWORD *)v11[3];
        v13 = (_QWORD *)v11[2];
        if ( v12 != v13 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v14 = (volatile signed __int32 *)v13[1];
                if ( v14 )
                {
                  if ( !_InterlockedSub(v14 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
                    if ( !_InterlockedSub(v14 + 3, 1u) )
                      break;
                  }
                }
                v13 += 2;
                if ( v12 == v13 )
                  goto LABEL_29;
              }
              v13 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
            }
            while ( v12 != v13 );
          }
          else
          {
            do
            {
              v22 = (_DWORD *)v13[1];
              if ( v22 )
              {
                v23 = v22[2];
                v22[2] = v23 - 1;
                if ( v23 == 1 )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 16LL))(v22);
                  v21 = v22[3];
                  v22[3] = v21 - 1;
                  if ( v21 == 1 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 24LL))(v22);
                }
              }
              v13 += 2;
            }
            while ( v12 != v13 );
          }
LABEL_29:
          v13 = (_QWORD *)v11[2];
        }
        if ( !v13 )
          break;
        v11 += 5;
        operator delete(v13);
        if ( v10 == v11 )
          goto LABEL_32;
      }
      v11 += 5;
    }
    while ( v10 != v11 );
LABEL_32:
    v11 = *(_QWORD **)(a1 + 104);
  }
  if ( v11 )
    operator delete(v11);
  v15 = *(_QWORD **)(a1 + 72);
  v16 = *(_QWORD **)(a1 + 64);
  if ( v15 != v16 )
  {
    if ( &_pthread_key_create )
    {
      v17 = (volatile signed __int32 *)v16[1];
      if ( v17 )
        goto LABEL_40;
LABEL_38:
      while ( 1 )
      {
        v16 += 2;
        if ( v15 == v16 )
          break;
        while ( 1 )
        {
          v17 = (volatile signed __int32 *)v16[1];
          if ( !v17 )
            break;
LABEL_40:
          if ( _InterlockedSub(v17 + 2, 1u) )
            goto LABEL_38;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          if ( _InterlockedSub(v17 + 3, 1u) )
            goto LABEL_38;
          v16 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
          if ( v15 == v16 )
            goto LABEL_43;
        }
      }
    }
    else
    {
      do
      {
        v25 = (_DWORD *)v16[1];
        if ( v25 )
        {
          v26 = v25[2];
          v25[2] = v26 - 1;
          if ( v26 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 16LL))(v25);
            v24 = v25[3];
            v25[3] = v24 - 1;
            if ( v24 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 24LL))(v25);
          }
        }
        v16 += 2;
      }
      while ( v15 != v16 );
    }
LABEL_43:
    v16 = *(_QWORD **)(a1 + 64);
  }
  if ( v16 )
    operator delete(v16);
  if ( *(_QWORD *)a1 != a1 + 24 )
    free(*(void **)a1);
}
