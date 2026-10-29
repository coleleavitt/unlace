void __fastcall sub_13F0A50(void ***a1, unsigned __int64 a2)
{
  void **v2; // r8
  void **v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  void **v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  _OWORD *v15; // r13
  char *v16; // r8
  _OWORD *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  void **v21; // r14
  void **v22; // r15
  void **v23; // rax
  _OWORD *v24; // rdx
  __int64 v25; // rdi
  void *v26; // rsi
  __int64 v27; // rdi
  void *v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-40h]

  if ( !a2 )
    return;
  v2 = a1[1];
  if ( a2 <= 0xAAAAAAAAAAAAAAABLL * (a1[2] - v2) )
  {
    if ( a2 - 1 <= 2 )
    {
      v8 = a2;
      v7 = a1[1];
    }
    else
    {
      v3 = a1[1];
      v4 = 0;
      v5 = ((a2 - 2) >> 1) + 1;
      do
      {
        ++v4;
        *(_OWORD *)v3 = 0;
        v3 += 6;
        *((_OWORD *)v3 - 2) = 0;
        *((_OWORD *)v3 - 1) = 0;
      }
      while ( v5 > v4 );
      v6 = 2 * v5;
      v7 = &v2[6 * v5];
      v8 = a2 - 2 * v5;
      if ( a2 == v6 )
      {
LABEL_10:
        a1[1] = &v2[3 * a2];
        return;
      }
    }
    v7[2] = nullptr;
    *(_OWORD *)v7 = 0;
    if ( v8 != 1 )
    {
      *(_OWORD *)(v7 + 3) = 0;
      v7[5] = nullptr;
      if ( v8 != 2 )
      {
        v7[8] = nullptr;
        *((_OWORD *)v7 + 3) = 0;
      }
    }
    goto LABEL_10;
  }
  v11 = (char *)v2 - (char *)*a1;
  v12 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
  if ( 0xAAAAAAAAAAAAAAALL - v12 < a2 )
    std::__throw_length_error("vector::_M_default_append");
  v13 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 3);
  if ( a2 >= v12 )
    v13 = a2;
  v14 = v12 + v13;
  if ( v14 > 0xAAAAAAAAAAAAAAALL )
    v14 = 0xAAAAAAAAAAAAAAALL;
  v29 = 24 * v14;
  v15 = (_OWORD *)operator new(24 * v14);
  v16 = (char *)v15 + v11;
  if ( a2 - 1 <= 2 )
  {
    v20 = a2;
    goto LABEL_21;
  }
  v17 = (_OWORD *)((char *)v15 + v11);
  v18 = 0;
  v19 = ((a2 - 2) >> 1) + 1;
  do
  {
    ++v18;
    *v17 = 0;
    v17 += 3;
    *(v17 - 2) = 0;
    *(v17 - 1) = 0;
  }
  while ( v19 > v18 );
  v20 = a2 - 2 * v19;
  v16 += 48 * v19;
  if ( a2 != 2 * v19 )
  {
LABEL_21:
    *((_QWORD *)v16 + 2) = 0;
    *(_OWORD *)v16 = 0;
    if ( v20 != 1 )
    {
      *(_OWORD *)(v16 + 24) = 0;
      *((_QWORD *)v16 + 5) = 0;
      if ( v20 != 2 )
      {
        *((_QWORD *)v16 + 8) = 0;
        *((_OWORD *)v16 + 3) = 0;
      }
    }
  }
  v21 = a1[1];
  v22 = *a1;
  if ( v21 != *a1 )
  {
    v23 = *a1;
    v24 = v15;
    do
    {
      *v24 = 0;
      v23 += 3;
      v24 = (_OWORD *)((char *)v24 + 24);
      *((_QWORD *)v24 - 1) = 0;
      *((_QWORD *)v24 - 3) = *(v23 - 3);
      v25 = (__int64)*(v23 - 2);
      *(v23 - 3) = nullptr;
      v26 = *((void **)v24 - 2);
      *((_QWORD *)v24 - 2) = v25;
      v27 = (__int64)*(v23 - 1);
      *(v23 - 2) = v26;
      v28 = *((void **)v24 - 1);
      *((_QWORD *)v24 - 1) = v27;
      *(v23 - 1) = v28;
    }
    while ( v21 != v23 );
    do
    {
      while ( *v22 )
      {
        operator delete(*v22);
        v22 += 3;
        if ( v21 == v22 )
          goto LABEL_29;
      }
      v22 += 3;
    }
    while ( v21 != v22 );
LABEL_29:
    v22 = *a1;
  }
  if ( v22 )
    operator delete(v22);
  *a1 = (void **)v15;
  a1[1] = (void **)v15 + 3 * v12 + 3 * a2;
  a1[2] = (void **)((char *)v15 + v29);
}
