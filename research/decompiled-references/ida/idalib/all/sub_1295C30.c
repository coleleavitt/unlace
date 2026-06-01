void __fastcall sub_1295C30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void **v5; // rbp
  void **v6; // rbx
  void **v7; // rbp
  void **v8; // rbx
  void **v9; // rbp
  void **v10; // rbx
  void **v11; // rbp
  void **v12; // rbx
  void **v13; // rbp
  void **v14; // rbx
  __int128 v15[4]; // [rsp+0h] [rbp-178h] BYREF
  void *v16; // [rsp+40h] [rbp-138h]
  void *v17; // [rsp+68h] [rbp-110h]
  void **v18; // [rsp+70h] [rbp-108h]
  void *v19; // [rsp+80h] [rbp-F8h]
  void **v20; // [rsp+88h] [rbp-F0h]
  void *v21; // [rsp+98h] [rbp-E0h]
  void **v22; // [rsp+A0h] [rbp-D8h]
  void *v23; // [rsp+B0h] [rbp-C8h]
  void **v24; // [rsp+B8h] [rbp-C0h]
  void *v25; // [rsp+C8h] [rbp-B0h]
  void **v26; // [rsp+D0h] [rbp-A8h]
  void *v27; // [rsp+110h] [rbp-68h]
  __int64 v28; // [rsp+120h] [rbp-58h] BYREF
  void *v29; // [rsp+140h] [rbp-38h]
  __int64 v30; // [rsp+150h] [rbp-28h] BYREF

  sub_112C5F0((__int64)v15, a1, a2);
  if ( v15[0] != 0 )
  {
    v4 = *(unsigned int *)(a3 + 8);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v4 + 1, 8);
      v4 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-D_REENTRANT";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v29 != &v30 )
    operator delete(v29);
  if ( v27 != &v28 )
    operator delete(v27);
  v5 = v26;
  v6 = (void **)v25;
  if ( v26 != v25 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_12;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_12:
    v6 = (void **)v25;
  }
  if ( v6 )
    operator delete(v6);
  v7 = v24;
  v8 = (void **)v23;
  if ( v24 != v23 )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_18;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_18:
    v8 = (void **)v23;
  }
  if ( v8 )
    operator delete(v8);
  v9 = v22;
  v10 = (void **)v21;
  if ( v22 != v21 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v10 == v9 )
          goto LABEL_24;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_24:
    v10 = (void **)v21;
  }
  if ( v10 )
    operator delete(v10);
  v11 = v20;
  v12 = (void **)v19;
  if ( v20 != v19 )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        operator delete(*v12);
        v12 += 4;
        if ( v11 == v12 )
          goto LABEL_30;
      }
      v12 += 4;
    }
    while ( v11 != v12 );
LABEL_30:
    v12 = (void **)v19;
  }
  if ( v12 )
    operator delete(v12);
  v13 = v18;
  v14 = (void **)v17;
  if ( v18 != v17 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v13 == v14 )
          goto LABEL_36;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_36:
    v14 = (void **)v17;
  }
  if ( v14 )
    operator delete(v14);
  if ( v16 )
    operator delete(v16);
}
