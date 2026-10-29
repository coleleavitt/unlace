__int64 __fastcall migrate_file_to_worklist_action_t__::vfunc_0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 i; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 (__fastcall *v17)(_QWORD *, __int64, unsigned int); // rax
  __int64 v18; // rdi
  __int64 (*v19)(); // rax
  __int64 v20; // rdi
  const char *v21; // r12
  const char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v35; // [rsp+0h] [rbp-78h] BYREF
  __int128 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)a2;
  v39 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(v3 + 28);
  v5 = v3 + 48 * v2;
  if ( v5 != v3 )
  {
    while ( *(_DWORD *)(v3 + 28) == (_DWORD)v4 )
    {
      v3 += 48;
      if ( v5 == v3 )
        goto LABEL_6;
    }
    v4 = 0xFFFFFFFFLL;
  }
LABEL_6:
  v6 = sub_444E10(v4);
  v7 = v6;
  if ( v6 == -1 )
    return 0;
  if ( v6 == -2 )
  {
    v7 = sub_443130();
    if ( v7 == -1 )
      return 0;
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)a2;
  v35 = 0;
  v36 = 0;
  for ( i = v9 + 48 * v8; i != v9; *(_QWORD *)&v36 = v36 + 1 )
  {
    v13 = *(_QWORD *)(v9 + 8);
    v14 = 0;
    if ( v13 )
    {
      v4 = qalloc_or_throw(*(_QWORD *)(v9 + 8));
      v14 = v4;
      memcpy((void *)v4, *(const void **)v9, v13);
    }
    v11 = v36;
    a2 = v35;
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)(v36 + 1) )
    {
      v4 = (__int64)&v35;
      v35 = qvector_reserve(&v35, v35, v36 + 1, 24);
      v11 = v36;
      a2 = v35;
    }
    v9 += 48;
    v12 = a2 + 24 * v11;
    *(_QWORD *)v12 = v14;
    *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  }
  v15 = sub_426230(v4, (const char *)a2);
  v16 = (_QWORD *)sub_417080((__int64)v15);
  v17 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int))(*v16 + 288LL);
  if ( v17 != sub_4197C0 )
  {
    v22 = (const char *)&v35;
    LODWORD(v21) = v17(v16, (__int64)&v35, v7);
    goto LABEL_25;
  }
  v18 = v16[1];
  if ( v18 )
  {
    v19 = *(__int64 (**)())(*(_QWORD *)v18 + 480LL);
    if ( v19 == sub_178B60 || !(unsigned __int8)v19() )
    {
      v38 = 0;
      v20 = v16[1];
      v37 = 0;
      v21 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD))(*(_QWORD *)v20 + 256LL))(
                            v20,
                            &v37,
                            &v35,
                            v7);
      v22 = v21;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v16 + 24LL))(v16, v21, &v37);
      v23 = v37;
      if ( v37 )
      {
        v24 = v38;
        if ( (_QWORD)v38 )
        {
          v25 = 0;
          do
          {
            v26 = v23 + 32 * v25;
            v27 = *(_QWORD *)(v26 + 8);
            if ( v27 )
            {
              *(_QWORD *)(v26 + 16) = 0;
              qfree(v27, v21);
              v23 = v37;
            }
            ++v25;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v38 = 0;
        qfree(v23, v21);
      }
LABEL_25:
      v28 = 1;
      if ( !(_DWORD)v21 )
        goto LABEL_26;
      goto LABEL_36;
    }
  }
  LODWORD(v21) = 52;
LABEL_36:
  v22 = "Failed to migrate files";
  sub_416980((unsigned int)v21, (__int64)"Failed to migrate files");
  v28 = 0;
LABEL_26:
  v29 = v35;
  if ( v35 )
  {
    v30 = v36;
    if ( (_QWORD)v36 )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v29 + 24 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33, v22);
          v29 = v35;
        }
        ++v31;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v36 = 0;
    qfree(v29, v22);
  }
  return v28;
}
