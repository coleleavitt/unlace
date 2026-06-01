void __fastcall sub_12A5990(__int64 a1, __int64 *a2, __int64 a3, const char *a4, _BYTE *a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  void **v10; // rbp
  void **v11; // rbx
  void **v12; // rbp
  void **v13; // rbx
  void **v14; // rbp
  void **v15; // rbx
  void **v16; // rbp
  void **v17; // rbx
  void **v18; // rbp
  void **v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+8h] [rbp-190h]
  __int64 v23; // [rsp+8h] [rbp-190h]
  _BYTE v24[64]; // [rsp+10h] [rbp-188h] BYREF
  void *v25; // [rsp+50h] [rbp-148h]
  void *v26; // [rsp+78h] [rbp-120h]
  void **v27; // [rsp+80h] [rbp-118h]
  void *v28; // [rsp+90h] [rbp-108h]
  void **v29; // [rsp+98h] [rbp-100h]
  void *v30; // [rsp+A8h] [rbp-F0h]
  void **v31; // [rsp+B0h] [rbp-E8h]
  void *v32; // [rsp+C0h] [rbp-D8h]
  void **v33; // [rsp+C8h] [rbp-D0h]
  void *v34; // [rsp+D8h] [rbp-C0h]
  void **v35; // [rsp+E0h] [rbp-B8h]
  void *v36; // [rsp+120h] [rbp-78h]
  __int64 v37; // [rsp+130h] [rbp-68h] BYREF
  void *v38; // [rsp+150h] [rbp-48h]
  __int64 v39; // [rsp+160h] [rbp-38h] BYREF

  sub_112C5F0((__int64)v24, a1, (__int64)a2);
  if ( sub_1120F50((__int64)v24) )
  {
    v20 = sub_12A5750(a2, a4, (__int64)"SceDbgUBSanitizer_stub_weak", a5);
    v21 = *(unsigned int *)(a3 + 8);
    if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v23 = v20;
      sub_2237220(a3, a3 + 16, v21 + 1, 8);
      v21 = *(unsigned int *)(a3 + 8);
      v20 = v23;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v21) = v20;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (v24[0] & 1) != 0 )
  {
    v8 = sub_12A5750(a2, a4, (__int64)"SceDbgAddressSanitizer_stub_weak", a5);
    v9 = *(unsigned int *)(a3 + 8);
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v22 = v8;
      sub_2237220(a3, a3 + 16, v9 + 1, 8);
      v9 = *(unsigned int *)(a3 + 8);
      v8 = v22;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = v8;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v38 != &v39 )
    operator delete(v38);
  if ( v36 != &v37 )
    operator delete(v36);
  v10 = v35;
  v11 = (void **)v34;
  if ( v35 != v34 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v11 == v10 )
          goto LABEL_13;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_13:
    v11 = (void **)v34;
  }
  if ( v11 )
    operator delete(v11);
  v12 = v33;
  v13 = (void **)v32;
  if ( v33 != v32 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v13 == v12 )
          goto LABEL_19;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_19:
    v13 = (void **)v32;
  }
  if ( v13 )
    operator delete(v13);
  v14 = v31;
  v15 = (void **)v30;
  if ( v31 != v30 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v15 == v14 )
          goto LABEL_25;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_25:
    v15 = (void **)v30;
  }
  if ( v15 )
    operator delete(v15);
  v16 = v29;
  v17 = (void **)v28;
  if ( v29 != v28 )
  {
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 += 4;
        if ( v17 == v16 )
          goto LABEL_31;
      }
      v17 += 4;
    }
    while ( v16 != v17 );
LABEL_31:
    v17 = (void **)v28;
  }
  if ( v17 )
    operator delete(v17);
  v18 = v27;
  v19 = (void **)v26;
  if ( v27 != v26 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_37;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_37:
    v19 = (void **)v26;
  }
  if ( v19 )
    operator delete(v19);
  if ( v25 )
    operator delete(v25);
}
