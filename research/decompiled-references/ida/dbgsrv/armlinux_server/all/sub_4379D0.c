/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4379D0
// Address: 0x00000000004379D0

//----- (00000000004379D0) ----------------------------------------------------
__int64 __fastcall sub_4379D0(_QWORD *a1)
{
  __int64 v2; // x26
  __int64 v3; // x22
  void **v4; // x24
  void **v5; // x21
  __int64 v6; // x19
  const char *v7; // x0
  const char *v8; // x1
  const char *v10; // x19
  unsigned __int64 v11; // x1
  __int64 v12; // x0
  void **v13; // x19
  size_t v14; // x0
  size_t v15; // x23
  size_t v16; // x20
  void *v17; // x1
  void *v18; // x3
  void *v19; // x0
  __int64 v20; // x0
  char *v21; // x24
  char *v22; // x0
  void **v23; // x19
  void **v24; // x0
  void *ptr; // [xsp+58h] [xbp-78h] BYREF
  void *v26; // [xsp+60h] [xbp-70h]
  void *v27; // [xsp+68h] [xbp-68h]
  __int64 v28[4]; // [xsp+70h] [xbp-60h] BYREF
  void *v29; // [xsp+90h] [xbp-40h]
  void *v30; // [xsp+98h] [xbp-38h]
  void *v31; // [xsp+A0h] [xbp-30h]
  __int64 v32[4]; // [xsp+A8h] [xbp-28h] BYREF

  v2 = a1[13];
  v3 = a1[6];
  v4 = *(void ***)(v2 + 88);
  v5 = &v4[7 * *(_QWORD *)(v2 + 96)];
  if ( v5 == v4 )
  {
LABEL_10:
    if ( v3 )
    {
      v10 = (const char *)a1[5];
      ptr = nullptr;
      v26 = nullptr;
      v27 = nullptr;
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      ptr = nullptr;
      v26 = nullptr;
      v27 = nullptr;
      v10 = (const char *)&qword_4B2D48;
      if ( !&qword_4B2D48 )
        goto LABEL_12;
    }
    v14 = strlen(v10);
    v15 = v14 + 1;
    v16 = v14;
    ptr = sub_491288((__int64)&ptr, nullptr, v14 + 1, 1u);
    v26 = (void *)v15;
    memmove(ptr, v10, v16);
    *((_BYTE *)ptr + v16) = 0;
    v4 = *(void ***)(v2 + 88);
LABEL_12:
    memset(&v28[1], 0, 24);
    LOBYTE(v28[0]) = 2;
    v11 = *(_QWORD *)(v2 + 104);
    if ( v4 <= &ptr && &ptr < &v4[7 * v11] )
    {
      memset(&v32[1], 0, 24);
      v18 = ptr;
      v17 = v26;
      ptr = nullptr;
      v26 = nullptr;
      v19 = v27;
      v27 = nullptr;
      v29 = v18;
      v30 = v17;
      v31 = v19;
      LOBYTE(v32[0]) = 2;
      sub_4488B8(v32, v28);
      v20 = *(_QWORD *)(v2 + 96);
      v21 = *(char **)(v2 + 88);
      if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(v2 + 104) )
      {
        v22 = (char *)sub_491288(v2 + 88, *(void **)(v2 + 88), v20 + 1, 0x38u);
        *(_QWORD *)(v2 + 88) = v22;
        v21 = v22;
        v20 = *(_QWORD *)(v2 + 96);
      }
      v23 = (void **)&v21[56 * v20];
      *v23 = v29;
      *((_BYTE *)v23 + 24) = 2;
      v23[1] = v30;
      v23[4] = nullptr;
      v23[5] = nullptr;
      v23[2] = v31;
      v23[6] = nullptr;
      v29 = nullptr;
      v30 = nullptr;
      v31 = nullptr;
      sub_4488B8((__int64 *)v23 + 3, v32);
      sub_448310(v32);
      if ( v29 )
      {
        v30 = nullptr;
        j__free(v29);
      }
    }
    else
    {
      v12 = *(_QWORD *)(v2 + 96);
      if ( v12 + 1 > v11 )
      {
        v24 = (void **)sub_491288(v2 + 88, v4, v12 + 1, 0x38u);
        *(_QWORD *)(v2 + 88) = v24;
        v4 = v24;
        v12 = *(_QWORD *)(v2 + 96);
      }
      v13 = &v4[7 * v12];
      *v13 = ptr;
      *((_BYTE *)v13 + 24) = 2;
      v13[1] = v26;
      v13[4] = nullptr;
      v13[5] = nullptr;
      v13[2] = v27;
      v13[6] = nullptr;
      ptr = nullptr;
      v26 = nullptr;
      v27 = nullptr;
      sub_4488B8((__int64 *)v13 + 3, v28);
    }
    ++*(_QWORD *)(v2 + 96);
    sub_448310(v28);
    if ( ptr )
    {
      v26 = nullptr;
      j__free(ptr);
    }
    return 0;
  }
  v6 = *(_QWORD *)(v2 + 88);
  while ( 1 )
  {
    v7 = (const char *)&qword_4B2D48;
    if ( *(_QWORD *)(v6 + 8) )
      v7 = *(const char **)v6;
    v8 = (const char *)&qword_4B2D48;
    if ( v3 )
      v8 = (const char *)a1[5];
    if ( !strcmp(v7, v8) )
      return 0;
    v6 += 56;
    if ( v5 == (void **)v6 )
      goto LABEL_10;
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
