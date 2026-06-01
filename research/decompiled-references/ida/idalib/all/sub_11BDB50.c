__int64 __fastcall sub_11BDB50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  void **v5; // r12
  void **v6; // rbx
  void **v7; // r12
  void **v8; // rbx
  void **v9; // r12
  void **v10; // rbx
  void **v11; // r12
  void **v12; // rbx
  void **v13; // r12
  void **v14; // rbx
  size_t v16; // rax
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  size_t v23; // rax
  __int64 v24; // rax
  void *v25; // [rsp+0h] [rbp-C8h] BYREF
  void **v26; // [rsp+8h] [rbp-C0h]
  void *v27; // [rsp+18h] [rbp-B0h]
  void **v28; // [rsp+20h] [rbp-A8h]
  void *v29; // [rsp+30h] [rbp-98h]
  void **v30; // [rsp+38h] [rbp-90h]
  void *v31; // [rsp+48h] [rbp-80h]
  void **v32; // [rsp+50h] [rbp-78h]
  void *v33; // [rsp+60h] [rbp-68h]
  __int64 *v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+80h] [rbp-48h]
  unsigned __int8 v36; // [rsp+88h] [rbp-40h]
  unsigned __int8 v37; // [rsp+89h] [rbp-3Fh]

  v4 = 0;
  sub_112C620((__int64)&v25);
  if ( sub_10DCD30(a2, 0xCC0u) )
  {
    if ( v35 )
    {
      v4 = v36;
      if ( v36 )
      {
        v4 = v37;
        if ( v37 )
        {
          sub_10DC5D0(a3, (__int64)"--whole-archive");
          v23 = j__strlen("xray-dso");
          v24 = sub_112D2D0(a1, a2, (__int64)"xray-dso", v23, 1u, 0);
          sub_10DC5D0(a3, v24);
          sub_10DC5D0(a3, (__int64)"--no-whole-archive");
        }
      }
    }
  }
  else if ( v35 )
  {
    v4 = v36;
    if ( v36 )
    {
      sub_10DC5D0(a3, (__int64)"--whole-archive");
      v16 = j__strlen("xray");
      v17 = sub_112D2D0(a1, a2, (__int64)"xray", v16, 1u, 0);
      sub_10DC5D0(a3, v17);
      v18 = v34;
      v19 = (__int64 *)v33;
      if ( v33 != v34 )
      {
        do
        {
          v20 = *v19;
          v21 = v19[1];
          v19 += 4;
          v22 = sub_112D2D0(a1, a2, v20, v21, 1u, 0);
          sub_10DC5D0(a3, v22);
        }
        while ( v18 != v19 );
      }
      sub_10DC5D0(a3, (__int64)"--no-whole-archive");
    }
  }
  v5 = (void **)v34;
  v6 = (void **)v33;
  if ( v34 != v33 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_9;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_9:
    v6 = (void **)v33;
  }
  if ( v6 )
    operator delete(v6);
  v7 = v32;
  v8 = (void **)v31;
  if ( v32 != v31 )
  {
    do
    {
      while ( *v8 != v8 + 2 )
      {
        operator delete(*v8);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_15;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
LABEL_15:
    v8 = (void **)v31;
  }
  if ( v8 )
    operator delete(v8);
  v9 = v30;
  v10 = (void **)v29;
  if ( v30 != v29 )
  {
    do
    {
      while ( *v10 != v10 + 2 )
      {
        operator delete(*v10);
        v10 += 4;
        if ( v9 == v10 )
          goto LABEL_21;
      }
      v10 += 4;
    }
    while ( v9 != v10 );
LABEL_21:
    v10 = (void **)v29;
  }
  if ( v10 )
    operator delete(v10);
  v11 = v28;
  v12 = (void **)v27;
  if ( v28 != v27 )
  {
    do
    {
      while ( *v12 != v12 + 2 )
      {
        operator delete(*v12);
        v12 += 4;
        if ( v11 == v12 )
          goto LABEL_27;
      }
      v12 += 4;
    }
    while ( v11 != v12 );
LABEL_27:
    v12 = (void **)v27;
  }
  if ( v12 )
    operator delete(v12);
  v13 = v26;
  v14 = (void **)v25;
  if ( v26 != v25 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v13 == v14 )
          goto LABEL_33;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_33:
    v14 = (void **)v25;
  }
  if ( v14 )
    operator delete(v14);
  return v4;
}
