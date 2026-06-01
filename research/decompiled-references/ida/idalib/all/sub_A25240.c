char **__fastcall sub_A25240(char **a1, char **a2)
{
  char *v3; // r15
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  __int64 v8; // r13
  char *v9; // r15
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rdi
  __int64 v13; // r12
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rdx
  char *v20; // r13
  char *v21; // rbx
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rdx
  char *v24; // rax
  char *v25; // rsi
  char *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  volatile signed __int32 *v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = *a1;
    v6 = v3 - *a2;
    v7 = v6 >> 4;
    v8 = v6 >> 4;
    if ( (a1[2] - *a1) >> 4 < (unsigned __int64)(v6 >> 4) )
    {
      v17 = nullptr;
      if ( v7 )
      {
        if ( v7 > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v17 = (_QWORD *)operator new(a2[1] - *a2);
      }
      if ( v4 != v3 )
      {
        v18 = v17;
        if ( &_pthread_key_create )
        {
          do
          {
            *v18 = *(_QWORD *)v4;
            v19 = *((_QWORD *)v4 + 1);
            v18[1] = v19;
            if ( v19 )
              _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
            v4 += 16;
            v18 += 2;
          }
          while ( v3 != v4 );
        }
        else
        {
          do
          {
            *v18 = *(_QWORD *)v4;
            v23 = *((_QWORD *)v4 + 1);
            v18[1] = v23;
            if ( v23 )
              ++*(_DWORD *)(v23 + 8);
            v4 += 16;
            v18 += 2;
          }
          while ( v3 != v4 );
        }
      }
      v20 = a1[1];
      v21 = *a1;
      if ( v20 != *a1 )
      {
        do
        {
          while ( 1 )
          {
            v22 = *((volatile signed __int32 **)v21 + 1);
            if ( !v22 )
              break;
            sub_4343A0(v22);
            v21 += 16;
            if ( v20 == v21 )
              goto LABEL_38;
          }
          v21 += 16;
        }
        while ( v20 != v21 );
LABEL_38:
        v21 = *a1;
      }
      if ( v21 )
        operator delete(v21);
      v13 = (__int64)v17 + v6;
      *a1 = (char *)v17;
      a1[2] = (char *)v13;
      goto LABEL_17;
    }
    v9 = a1[1];
    if ( v7 > (v9 - v5) >> 4 )
    {
      sub_A25170(v4, (__int64)&v4[a1[1] - v5], *a1);
      v24 = a1[1];
      v25 = a2[1];
      v26 = &(*a2)[v24 - *a1];
      if ( v25 == v26 )
      {
        v13 = (__int64)&(*a1)[v6];
        goto LABEL_17;
      }
      if ( &_pthread_key_create )
      {
        do
        {
          *(_QWORD *)v24 = *(_QWORD *)v26;
          v27 = *((_QWORD *)v26 + 1);
          *((_QWORD *)v24 + 1) = v27;
          if ( v27 )
            _InterlockedAdd((volatile signed __int32 *)(v27 + 8), 1u);
          v26 += 16;
          v24 += 16;
        }
        while ( v25 != v26 );
      }
      else
      {
        do
        {
          *(_QWORD *)v24 = *(_QWORD *)v26;
          v28 = *((_QWORD *)v26 + 1);
          *((_QWORD *)v24 + 1) = v28;
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v26 += 16;
          v24 += 16;
        }
        while ( v25 != v26 );
      }
    }
    else
    {
      if ( v6 > 0 )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            v10 = *((volatile signed __int32 **)v5 + 1);
            *(_QWORD *)v5 = *(_QWORD *)v4;
            v11 = *((volatile signed __int32 **)v4 + 1);
            if ( v11 != v10 )
            {
              if ( v11 )
              {
                _InterlockedAdd(v11 + 2, 1u);
                v10 = *((volatile signed __int32 **)v5 + 1);
              }
              if ( v10 )
              {
                v29 = v11;
                sub_4343A0(v10);
                v11 = v29;
              }
              *((_QWORD *)v5 + 1) = v11;
            }
            v4 += 16;
            v5 += 16;
            --v8;
          }
          while ( v8 );
        }
        else
        {
          do
          {
            v15 = *((volatile signed __int32 **)v5 + 1);
            *(_QWORD *)v5 = *(_QWORD *)v4;
            v16 = *((_QWORD *)v4 + 1);
            if ( (volatile signed __int32 *)v16 != v15 )
            {
              if ( v16 )
                ++*(_DWORD *)(v16 + 8);
              if ( v15 )
              {
                v30 = v16;
                sub_4343A0(v15);
                v16 = v30;
              }
              *((_QWORD *)v5 + 1) = v16;
            }
            v4 += 16;
            v5 += 16;
            --v8;
          }
          while ( v8 );
        }
      }
      while ( v9 != v5 )
      {
        while ( 1 )
        {
          v12 = *((volatile signed __int32 **)v5 + 1);
          if ( !v12 )
            break;
          sub_4343A0(v12);
          v5 += 16;
          if ( v9 == v5 )
            goto LABEL_16;
        }
        v5 += 16;
      }
    }
LABEL_16:
    v13 = (__int64)&(*a1)[v6];
LABEL_17:
    a1[1] = (char *)v13;
  }
  return a1;
}
