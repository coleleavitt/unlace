__int64 __fastcall sub_12065A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  void **v3; // r12
  void **v4; // rbx
  void **v5; // r12
  void **v6; // rbx
  void **v7; // r12
  void **v8; // rbx
  void **v9; // r12
  void **v10; // rbx
  void **v11; // r12
  void **v12; // rbx
  _BYTE v14[64]; // [rsp+0h] [rbp-178h] BYREF
  void *v15; // [rsp+40h] [rbp-138h]
  void *v16; // [rsp+68h] [rbp-110h]
  void **v17; // [rsp+70h] [rbp-108h]
  void *v18; // [rsp+80h] [rbp-F8h]
  void **v19; // [rsp+88h] [rbp-F0h]
  void *v20; // [rsp+98h] [rbp-E0h]
  void **v21; // [rsp+A0h] [rbp-D8h]
  void *v22; // [rsp+B0h] [rbp-C8h]
  void **v23; // [rsp+B8h] [rbp-C0h]
  void *v24; // [rsp+C8h] [rbp-B0h]
  void **v25; // [rsp+D0h] [rbp-A8h]
  void *v26; // [rsp+110h] [rbp-68h]
  __int64 v27; // [rsp+120h] [rbp-58h] BYREF
  void *v28; // [rsp+140h] [rbp-38h]
  __int64 v29; // [rsp+150h] [rbp-28h] BYREF

  sub_112C5F0((__int64)v14, a1, a2);
  v2 = sub_1121080((__int64)v14);
  if ( v28 != &v29 )
    operator delete(v28);
  if ( v26 != &v27 )
    operator delete(v26);
  v3 = v25;
  v4 = (void **)v24;
  if ( v25 != v24 )
  {
    do
    {
      while ( *v4 != v4 + 2 )
      {
        operator delete(*v4);
        v4 += 4;
        if ( v3 == v4 )
          goto LABEL_8;
      }
      v4 += 4;
    }
    while ( v3 != v4 );
LABEL_8:
    v4 = (void **)v24;
  }
  if ( v4 )
    operator delete(v4);
  v5 = v23;
  v6 = (void **)v22;
  if ( v23 != v22 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_14;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_14:
    v6 = (void **)v22;
  }
  if ( v6 )
    operator delete(v6);
  v7 = v21;
  v8 = (void **)v20;
  if ( v21 != v20 )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_20;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_20:
    v8 = (void **)v20;
  }
  if ( v8 )
    operator delete(v8);
  v9 = v19;
  v10 = (void **)v18;
  if ( v19 != v18 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v10 == v9 )
          goto LABEL_26;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_26:
    v10 = (void **)v18;
  }
  if ( v10 )
    operator delete(v10);
  v11 = v17;
  v12 = (void **)v16;
  if ( v17 != v16 )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        operator delete(*v12);
        v12 += 4;
        if ( v11 == v12 )
          goto LABEL_32;
      }
      v12 += 4;
    }
    while ( v11 != v12 );
LABEL_32:
    v12 = (void **)v16;
  }
  if ( v12 )
    operator delete(v12);
  if ( v15 )
    operator delete(v15);
  return v2;
}
