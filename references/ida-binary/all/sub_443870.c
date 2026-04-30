__int64 __fastcall sub_443870(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 *v3; // r13
  __int64 *v5; // rbp
  __int64 v6; // rdx
  char *v7; // rax
  size_t v8; // rbx
  __int64 *v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD *, __int64, unsigned int); // rax
  __int64 v14; // rdi
  __int64 (*v15)(); // rax
  const char *v16; // r12
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  char v30; // al
  __int64 v31; // [rsp+8h] [rbp-78h] BYREF
  __int128 v32; // [rsp+10h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  __int128 v34; // [rsp+30h] [rbp-50h]
  unsigned __int64 v35; // [rsp+40h] [rbp-40h]

  v3 = &a1[11 * a2];
  v35 = __readfsqword(0x28u);
  v32 = 0;
  v31 = 0;
  if ( v3 != a1 )
  {
    v5 = a1;
    do
    {
      v8 = v5[7];
      v9 = nullptr;
      if ( v8 )
      {
        a1 = (__int64 *)qalloc_or_throw(v5[7]);
        v9 = a1;
        memcpy(a1, (const void *)v5[6], v8);
      }
      v6 = v32;
      a2 = v31;
      if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
      {
        a1 = &v31;
        v31 = qvector_reserve(&v31, v31, v32 + 1, 24);
        v6 = v32;
        a2 = v31;
      }
      v5 += 11;
      v7 = (char *)(a2 + 24 * v6);
      *(_QWORD *)v7 = v9;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      *(_QWORD *)&v32 = v32 + 1;
    }
    while ( v3 != v5 );
  }
  v10 = sub_426230(a1, (const char *)a2);
  v11 = (_QWORD *)sub_417080((__int64)v10);
  v12 = a3;
  v13 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int))(*v11 + 360LL);
  if ( v13 != sub_418FE0 )
  {
    v17 = (const char *)&v31;
    LODWORD(v16) = v13(v11, (__int64)&v31, a3);
    goto LABEL_18;
  }
  v14 = v11[1];
  if ( v14 )
  {
    v15 = *(__int64 (**)())(*(_QWORD *)v14 + 480LL);
    if ( v15 == sub_178B60 || (v30 = v15(), v12 = a3, !v30) )
    {
      v33 = 0;
      v34 = 0;
      v16 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)v11[1]
                                                                                                + 328LL))(
                            v11[1],
                            &v33,
                            &v31,
                            v12);
      v17 = v16;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v11 + 24LL))(v11, v16, &v33);
      v18 = v33;
      if ( v33 )
      {
        v19 = v34;
        if ( (_QWORD)v34 )
        {
          v20 = 0;
          do
          {
            v21 = v18 + 32 * v20;
            v22 = *(_QWORD *)(v21 + 8);
            if ( v22 )
            {
              *(_QWORD *)(v21 + 16) = 0;
              qfree(v22, v16);
              v18 = v33;
            }
            ++v20;
          }
          while ( v19 != v20 );
        }
        *(_QWORD *)&v34 = 0;
        qfree(v18, v16);
      }
LABEL_18:
      v23 = 1;
      if ( !(_DWORD)v16 )
        goto LABEL_19;
      goto LABEL_29;
    }
  }
  LODWORD(v16) = 52;
LABEL_29:
  v17 = "Failed to revert files";
  sub_416980((unsigned int)v16, (__int64)"Failed to revert files");
  v23 = 0;
LABEL_19:
  v24 = v31;
  if ( v31 )
  {
    v25 = v32;
    if ( (_QWORD)v32 )
    {
      v26 = 0;
      do
      {
        v27 = (__int64 *)(v24 + 24 * v26);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, v17);
          v24 = v31;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v24, v17);
  }
  return v23;
}
