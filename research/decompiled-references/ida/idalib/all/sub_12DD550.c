__int64 *__fastcall sub_12DD550(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  _QWORD *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  void *v12; // rdi
  __int64 v13; // r13
  _QWORD *v15; // r13
  __int64 v16; // r15
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rbp
  void *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbp
  _QWORD *v25; // rdx
  _QWORD *v26; // rdi
  unsigned __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = *a1;
    v28 = v3 - *a2;
    v6 = v28 >> 6;
    v7 = v28 >> 6;
    if ( (a1[2] - *a1) >> 6 < (unsigned __int64)(v28 >> 6) )
    {
      v15 = nullptr;
      if ( v6 )
      {
        if ( v6 > 0x3FFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v15 = (_QWORD *)operator new(v28);
      }
      v16 = v4;
      v17 = v15;
      while ( v3 != v16 )
      {
        v16 += 64;
        *v17 = v17 + 2;
        sub_12DB130(v17, *(_BYTE **)(v16 - 64), *(_QWORD *)(v16 - 64) + *(_QWORD *)(v16 - 56));
        v18 = v17 + 6;
        v19 = v17 + 4;
        v17 += 8;
        *(v17 - 4) = v18;
        sub_12DB130(v19, *(_BYTE **)(v16 - 32), *(_QWORD *)(v16 - 32) + *(_QWORD *)(v16 - 24));
      }
      v20 = a1[1];
      v21 = *a1;
      if ( v20 != *a1 )
      {
        do
        {
          while ( 1 )
          {
            v22 = *(void **)(v21 + 32);
            if ( v22 != (void *)(v21 + 48) )
              operator delete(v22);
            if ( *(_QWORD *)v21 == v21 + 16 )
              break;
            operator delete(*(void **)v21);
            v21 += 64;
            if ( v20 == v21 )
              goto LABEL_24;
          }
          v21 += 64;
        }
        while ( v20 != v21 );
LABEL_24:
        v21 = *a1;
      }
      if ( v21 )
        operator delete((void *)v21);
      *a1 = (__int64)v15;
      v13 = (__int64)v15 + v28;
      a1[2] = v13;
      goto LABEL_12;
    }
    v8 = (_QWORD *)a1[1];
    v9 = (__int64)v8 - v5;
    v10 = ((__int64)v8 - v5) >> 6;
    if ( v7 > v10 )
    {
      if ( v9 > 0 )
      {
        do
        {
          v27 = v10;
          sub_9EE8A0(v5, v4);
          v23 = v4 + 32;
          v4 += 64;
          sub_9EE8A0(v5 + 32, v23);
          v5 += 64;
          v10 = v27 - 1;
        }
        while ( v27 != 1 );
        v8 = (_QWORD *)a1[1];
        v5 = *a1;
        v3 = a2[1];
        v4 = *a2;
        v9 = (__int64)v8 - *a1;
      }
      v24 = v9 + v4;
      if ( v24 == v3 )
      {
        v13 = v5 + v28;
        goto LABEL_12;
      }
      do
      {
        v24 += 64;
        *v8 = v8 + 2;
        sub_12DB130(v8, *(_BYTE **)(v24 - 64), *(_QWORD *)(v24 - 64) + *(_QWORD *)(v24 - 56));
        v25 = v8 + 6;
        v26 = v8 + 4;
        v8 += 8;
        *(v8 - 4) = v25;
        sub_12DB130(v26, *(_BYTE **)(v24 - 32), *(_QWORD *)(v24 - 32) + *(_QWORD *)(v24 - 24));
      }
      while ( v24 != v3 );
    }
    else
    {
      if ( v28 > 0 )
      {
        do
        {
          sub_9EE8A0(v5, v4);
          v11 = v4 + 32;
          v4 += 64;
          sub_9EE8A0(v5 + 32, v11);
          v5 += 64;
          --v7;
        }
        while ( v7 );
      }
      while ( v8 != (_QWORD *)v5 )
      {
        while ( 1 )
        {
          v12 = *(void **)(v5 + 32);
          if ( v12 != (void *)(v5 + 48) )
            operator delete(v12);
          if ( *(_QWORD *)v5 == v5 + 16 )
            break;
          operator delete(*(void **)v5);
          v5 += 64;
          if ( v8 == (_QWORD *)v5 )
            goto LABEL_11;
        }
        v5 += 64;
      }
    }
LABEL_11:
    v13 = *a1 + v28;
LABEL_12:
    a1[1] = v13;
  }
  return a1;
}
