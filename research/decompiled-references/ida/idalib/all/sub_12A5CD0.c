void __fastcall sub_12A5CD0(__int64 a1, __int64 *a2, __int64 a3, const char *a4, _BYTE *a5)
{
  char v8; // ah
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  void **v13; // rbp
  void **v14; // rbx
  void **v15; // rbp
  void **v16; // rbx
  void **v17; // rbp
  void **v18; // rbx
  void **v19; // rbp
  void **v20; // rbx
  void **v21; // rbp
  void **v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // [rsp+8h] [rbp-190h]
  __int64 v26; // [rsp+8h] [rbp-190h]
  __int64 v27; // [rsp+8h] [rbp-190h]
  char v28; // [rsp+10h] [rbp-188h] BYREF
  char v29; // [rsp+11h] [rbp-187h]
  void *v30; // [rsp+50h] [rbp-148h]
  void *v31; // [rsp+78h] [rbp-120h]
  void **v32; // [rsp+80h] [rbp-118h]
  void *v33; // [rsp+90h] [rbp-108h]
  void **v34; // [rsp+98h] [rbp-100h]
  void *v35; // [rsp+A8h] [rbp-F0h]
  void **v36; // [rsp+B0h] [rbp-E8h]
  void *v37; // [rsp+C0h] [rbp-D8h]
  void **v38; // [rsp+C8h] [rbp-D0h]
  void *v39; // [rsp+D8h] [rbp-C0h]
  void **v40; // [rsp+E0h] [rbp-B8h]
  void *v41; // [rsp+120h] [rbp-78h]
  __int64 v42; // [rsp+130h] [rbp-68h] BYREF
  void *v43; // [rsp+150h] [rbp-48h]
  __int64 v44; // [rsp+160h] [rbp-38h] BYREF

  sub_112C5F0((__int64)&v28, a1, (__int64)a2);
  if ( sub_1120F50((__int64)&v28) )
  {
    v23 = sub_12A5750(a2, a4, (__int64)"SceUBSanitizer_nosubmission_stub_weak", a5);
    v24 = *(unsigned int *)(a3 + 8);
    if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v27 = v23;
      sub_2237220(a3, a3 + 16, v24 + 1, 8);
      v24 = *(unsigned int *)(a3 + 8);
      v23 = v27;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v24) = v23;
    ++*(_DWORD *)(a3 + 8);
  }
  v8 = v29;
  if ( (v28 & 1) != 0 )
  {
    v9 = sub_12A5750(a2, a4, (__int64)"SceAddressSanitizer_nosubmission_stub_weak", a5);
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v25 = v9;
      sub_2237220(a3, a3 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(a3 + 8);
      v9 = v25;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = v9;
    v8 = v29;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v8 < 0 )
  {
    v11 = sub_12A5750(a2, a4, (__int64)"SceThreadSanitizer_nosubmission_stub_weak", a5);
    v12 = *(unsigned int *)(a3 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v26 = v11;
      sub_2237220(a3, a3 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(a3 + 8);
      v11 = v26;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v11;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v43 != &v44 )
    operator delete(v43);
  if ( v41 != &v42 )
    operator delete(v41);
  v13 = v40;
  v14 = (void **)v39;
  if ( v40 != v39 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v14 == v13 )
          goto LABEL_17;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_17:
    v14 = (void **)v39;
  }
  if ( v14 )
    operator delete(v14);
  v15 = v38;
  v16 = (void **)v37;
  if ( v38 != v37 )
  {
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v16 == v15 )
          goto LABEL_23;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_23:
    v16 = (void **)v37;
  }
  if ( v16 )
    operator delete(v16);
  v17 = v36;
  v18 = (void **)v35;
  if ( v36 != v35 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v18 == v17 )
          goto LABEL_29;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_29:
    v18 = (void **)v35;
  }
  if ( v18 )
    operator delete(v18);
  v19 = v34;
  v20 = (void **)v33;
  if ( v34 != v33 )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v20 == v19 )
          goto LABEL_35;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_35:
    v20 = (void **)v33;
  }
  if ( v20 )
    operator delete(v20);
  v21 = v32;
  v22 = (void **)v31;
  if ( v32 != v31 )
  {
    do
    {
      while ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        v22 += 4;
        if ( v21 == v22 )
          goto LABEL_41;
      }
      v22 += 4;
    }
    while ( v21 != v22 );
LABEL_41:
    v22 = (void **)v31;
  }
  if ( v22 )
    operator delete(v22);
  if ( v30 )
    operator delete(v30);
}
