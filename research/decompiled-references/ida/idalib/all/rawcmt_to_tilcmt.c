__int64 __fastcall rawcmt_to_tilcmt(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  const char *v2; // r14
  unsigned __int64 v3; // r13
  char *v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  char *v7; // rbx
  size_t v8; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  size_t v11; // rdx
  char *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  char *v15; // rbp
  char *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rbx
  char *v19; // rax
  void *v20; // rdi
  __int64 v22; // rax
  size_t v23; // r8
  __int64 v24; // rdx
  char *v25; // rsi
  char *v26; // rax
  int v27[2]; // [rsp+8h] [rbp-70h]
  size_t v28; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  int v30[4]; // [rsp+28h] [rbp-50h]
  void *v31; // [rsp+38h] [rbp-40h]

  v31 = (void *)__readfsqword(0x28u);
  if ( a1 )
  {
    v1 = a1[1];
    ptr = nullptr;
    *(_OWORD *)v30 = 0;
    if ( v1 )
    {
      v2 = (const char *)*a1;
      v3 = *a1 + v1 - 1;
      if ( *a1 >= v3 )
        goto LABEL_26;
      v4 = nullptr;
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        v12 = strchr(v2, 10);
        v13 = v6 + 1;
        v14 = (unsigned __int64)v12;
        v15 = v12;
        if ( !v12 )
          v14 = v3;
        v23 = v14 - (_QWORD)v2;
        if ( v5 < v13 )
        {
          *(_QWORD *)v27 = v23;
          ptr = (void *)qvector_reserve(&ptr, v4, v13, 24);
          v6 = *(_QWORD *)v30;
          v4 = (char *)ptr;
          v23 = *(_QWORD *)v27;
        }
        v7 = &v4[24 * v6];
        v8 = v23;
        *(_OWORD *)(v7 + 8) = 0;
        *(_QWORD *)v7 = 0;
        ++*(_QWORD *)v30;
        v9 = *((_QWORD *)v7 + 1);
        if ( v9 )
        {
          --v9;
          v8 = v23 + v9;
        }
        v10 = *(_QWORD *)v7;
        v11 = v8 + 1;
        if ( v8 != -1 )
        {
          v28 = v23;
          v22 = qvector_reserve(v7, v10, v11, 1);
          v23 = v28;
          v11 = v8 + 1;
          *(_QWORD *)v7 = v22;
          v10 = v22;
        }
        *((_QWORD *)v7 + 1) = v11;
        *(_BYTE *)(v10 + v8) = 0;
        memmove((void *)(v9 + *(_QWORD *)v7), v2, v23);
        if ( !v15 )
          break;
        v2 = v15 + 1;
        if ( (unsigned __int64)(v15 + 1) >= v3 )
          break;
        v6 = *(_QWORD *)v30;
        v5 = *(_QWORD *)&v30[2];
        v4 = (char *)ptr;
      }
      v1 = a1[1];
      if ( v1 )
      {
LABEL_26:
        if ( v1 != 1 && *(_BYTE *)(*a1 + v1 - 2) == 10 )
        {
          v24 = *(_QWORD *)v30;
          v25 = (char *)ptr;
          if ( *(_QWORD *)&v30[2] < (unsigned __int64)(*(_QWORD *)v30 + 1LL) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, *(_QWORD *)v30 + 1LL, 24);
            v24 = *(_QWORD *)v30;
            v25 = (char *)ptr;
          }
          v26 = &v25[24 * v24];
          *(_QWORD *)v26 = 0;
          *(_OWORD *)(v26 + 8) = 0;
          ++*(_QWORD *)v30;
        }
      }
    }
    sub_5EEC40((__int64)a1, (__int64)&ptr);
    v16 = (char *)ptr;
    if ( ptr )
    {
      v17 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 )
      {
        v18 = 0;
        do
        {
          v19 = &v16[24 * v18];
          v20 = *(void **)v19;
          if ( *(_QWORD *)v19 )
          {
            *((_QWORD *)v19 + 1) = 0;
            qfree(v20);
            v16 = (char *)ptr;
          }
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)v30 = 0;
      qfree(v16);
    }
  }
  return (__int64)v31 - __readfsqword(0x28u);
}
