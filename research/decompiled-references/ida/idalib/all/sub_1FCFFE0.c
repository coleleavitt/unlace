void __fastcall sub_1FCFFE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // r15
  _QWORD *v9; // r12
  volatile signed __int32 *v10; // r13
  _QWORD *v11; // r14
  _QWORD *v12; // rbp
  _QWORD *v13; // r15
  _QWORD *v14; // r12
  volatile signed __int32 *v15; // r13
  _QWORD *v16; // r13
  _QWORD *v17; // rbp
  volatile signed __int32 *v18; // r12
  void *v19; // rdi
  volatile signed __int32 *v20; // rbp
  void *v21; // rdi
  void *v22; // rdi
  int v23; // eax
  _DWORD *v24; // r13
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // r13
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // r12
  int v31; // eax
  int v32; // eax
  signed __int32 v33; // eax
  _QWORD *v34; // rbp
  int v35; // r12d
  __int64 v36; // rax

  v2 = a1 + 264;
  *(_QWORD *)(v2 - 264) = &off_2C71120;
  sub_1F6C190(v2);
  if ( *(_DWORD *)(a1 + 160) )
  {
    v34 = *(_QWORD **)(a1 + 136);
    v35 = *(_DWORD *)(a1 + 164);
    v36 = v34[1];
    if ( (unsigned __int64)(v36 + 4) > v34[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 136), v34 + 3, v36 + 4, 1);
      v36 = v34[1];
    }
    *(_DWORD *)(*v34 + v36) = v35;
    v34[1] += 4LL;
    *(_QWORD *)(a1 + 160) = 0;
  }
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 136);
    v5 = v4[1];
    if ( v5 )
    {
      sub_227BF10(v3, *v4, v5);
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) = 0;
    }
  }
  v6 = *(_QWORD **)(a1 + 248);
  v7 = *(_QWORD **)(a1 + 240);
  if ( v6 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = (_QWORD *)v7[2];
        v9 = (_QWORD *)v7[1];
        if ( v8 != v9 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v10 = (volatile signed __int32 *)v9[1];
                if ( v10 )
                {
                  if ( !_InterlockedSub(v10 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
                    if ( !_InterlockedSub(v10 + 3, 1u) )
                      break;
                  }
                }
                v9 += 2;
                if ( v8 == v9 )
                  goto LABEL_14;
              }
              v9 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
            }
            while ( v8 != v9 );
          }
          else
          {
            do
            {
              v24 = (_DWORD *)v9[1];
              if ( v24 )
              {
                v25 = v24[2];
                v24[2] = v25 - 1;
                if ( v25 == 1 )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 16LL))(v24);
                  v23 = v24[3];
                  v24[3] = v23 - 1;
                  if ( v23 == 1 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 24LL))(v24);
                }
              }
              v9 += 2;
            }
            while ( v8 != v9 );
          }
LABEL_14:
          v9 = (_QWORD *)v7[1];
        }
        if ( !v9 )
          break;
        v7 += 4;
        operator delete(v9);
        if ( v6 == v7 )
        {
          v7 = *(_QWORD **)(a1 + 240);
          goto LABEL_18;
        }
      }
      v7 += 4;
    }
    while ( v6 != v7 );
    v7 = *(_QWORD **)(a1 + 240);
  }
LABEL_18:
  if ( v7 )
    operator delete(v7);
  v11 = *(_QWORD **)(a1 + 224);
  v12 = *(_QWORD **)(a1 + 216);
  if ( v11 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v13 = (_QWORD *)v12[3];
        v14 = (_QWORD *)v12[2];
        if ( v13 != v14 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v15 = (volatile signed __int32 *)v14[1];
                if ( v15 )
                {
                  if ( !_InterlockedSub(v15 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
                    if ( !_InterlockedSub(v15 + 3, 1u) )
                      break;
                  }
                }
                v14 += 2;
                if ( v13 == v14 )
                  goto LABEL_29;
              }
              v14 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
            }
            while ( v13 != v14 );
          }
          else
          {
            do
            {
              v27 = (_DWORD *)v14[1];
              if ( v27 )
              {
                v28 = v27[2];
                v27[2] = v28 - 1;
                if ( v28 == 1 )
                {
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 16LL))(v27);
                  v26 = v27[3];
                  v27[3] = v26 - 1;
                  if ( v26 == 1 )
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 24LL))(v27);
                }
              }
              v14 += 2;
            }
            while ( v13 != v14 );
          }
LABEL_29:
          v14 = (_QWORD *)v12[2];
        }
        if ( !v14 )
          break;
        v12 += 5;
        operator delete(v14);
        if ( v11 == v12 )
          goto LABEL_32;
      }
      v12 += 5;
    }
    while ( v11 != v12 );
LABEL_32:
    v12 = *(_QWORD **)(a1 + 216);
  }
  if ( v12 )
    operator delete(v12);
  v16 = *(_QWORD **)(a1 + 184);
  v17 = *(_QWORD **)(a1 + 176);
  if ( v16 != v17 )
  {
    if ( &_pthread_key_create )
    {
      v18 = (volatile signed __int32 *)v17[1];
      if ( v18 )
        goto LABEL_40;
LABEL_38:
      while ( 1 )
      {
        v17 += 2;
        if ( v16 == v17 )
          break;
        while ( 1 )
        {
          v18 = (volatile signed __int32 *)v17[1];
          if ( !v18 )
            break;
LABEL_40:
          if ( _InterlockedSub(v18 + 2, 1u) )
            goto LABEL_38;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          if ( _InterlockedSub(v18 + 3, 1u) )
            goto LABEL_38;
          v17 += 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
          if ( v16 == v17 )
            goto LABEL_43;
        }
      }
    }
    else
    {
      do
      {
        v30 = (_DWORD *)v17[1];
        if ( v30 )
        {
          v31 = v30[2];
          v30[2] = v31 - 1;
          if ( v31 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 16LL))(v30);
            v29 = v30[3];
            v30[3] = v29 - 1;
            if ( v29 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 24LL))(v30);
          }
        }
        v17 += 2;
      }
      while ( v17 != v16 );
    }
LABEL_43:
    v17 = *(_QWORD **)(a1 + 176);
  }
  if ( v17 )
    operator delete(v17);
  v19 = *(void **)(a1 + 112);
  if ( v19 != (void *)(a1 + 136) )
    free(v19);
  v20 = *(volatile signed __int32 **)(a1 + 104);
  if ( v20 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_51;
    }
    else
    {
      v32 = *((_DWORD *)v20 + 2);
      *((_DWORD *)v20 + 2) = v32 - 1;
      if ( v32 != 1 )
        goto LABEL_51;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( &_pthread_key_create )
    {
      v33 = _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
    }
    else
    {
      v33 = *((_DWORD *)v20 + 3);
      *((_DWORD *)v20 + 3) = v33 - 1;
    }
    if ( v33 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
  }
LABEL_51:
  v21 = *(void **)(a1 + 64);
  if ( v21 != (void *)(a1 + 80) )
    operator delete(v21);
  v22 = *(void **)(a1 + 32);
  if ( v22 != (void *)(a1 + 48) )
    operator delete(v22);
}
