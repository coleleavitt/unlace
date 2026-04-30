unsigned __int64 __fastcall sub_43E420(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  const char *v4; // rsi
  __int64 *v5; // r15
  char v6; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rax
  size_t v12; // r12
  _QWORD *v13; // r13
  const char *v14; // rsi
  void *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rax
  __int64 (__fastcall *v19)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v20; // rdi
  __int64 (*v21)(); // rax
  const char *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // r13
  const char *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  unsigned __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rdi
  const void *v46; // r13
  void *v47; // rdi
  __int64 v48; // rax
  const char *v49; // rbp
  __int64 v50; // [rsp+0h] [rbp-B8h]
  unsigned int v51; // [rsp+Ch] [rbp-ACh]
  __int64 v52; // [rsp+20h] [rbp-98h] BYREF
  __int128 v53; // [rsp+28h] [rbp-90h]
  __int64 v54; // [rsp+40h] [rbp-78h] BYREF
  __int128 v55; // [rsp+48h] [rbp-70h]
  __int64 v56; // [rsp+60h] [rbp-58h] BYREF
  __int128 v57; // [rsp+68h] [rbp-50h]
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v58 = __readfsqword(0x28u);
  v4 = *(const char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v2 + 1) )
  {
    v8 = qvector_reserve(a1, v4, v2 + 1, 32);
    v2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    v4 = (const char *)v8;
  }
  v5 = (__int64 *)&v4[32 * v2];
  *v5 = 0;
  *((_DWORD *)v5 + 6) = 0;
  *(_OWORD *)(v5 + 1) = 0;
  ++*(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a2 + 72);
  if ( v6 == 3 )
  {
    if ( (__int64 *)a2 != v5 )
    {
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 > 1 )
      {
        v46 = *(const void **)a2;
        v47 = (void *)*v5;
        if ( v5[2] < v9 )
        {
          v48 = qvector_reserve(v5, *v5, *(_QWORD *)(a2 + 8), 1);
          *v5 = v48;
          v47 = (void *)v48;
        }
        v5[1] = v9;
        memmove(v47, v46, v9 - 1);
        *(_BYTE *)(*v5 + v9 - 1) = 0;
      }
      else
      {
        v5[1] = 0;
      }
    }
    *((_DWORD *)v5 + 6) = *(_DWORD *)(a2 + 60) - 1;
    return v58 - __readfsqword(0x28u);
  }
  if ( v6 != 8 )
    return v58 - __readfsqword(0x28u);
  v51 = *(_DWORD *)(a2 + 60);
  v10 = sub_426230(a1, v4);
  v11 = sub_417080((__int64)v10);
  v12 = *(_QWORD *)(a2 + 8);
  v52 = 0;
  v13 = (_QWORD *)v11;
  v53 = 0;
  if ( v12 )
  {
    v15 = (void *)qalloc_or_throw(v12);
    memcpy(v15, *(const void **)a2, v12);
    v17 = v53;
    v14 = (const char *)v52;
    v16 = v53 + 1;
    if ( *((_QWORD *)&v53 + 1) >= (unsigned __int64)(v53 + 1) )
      goto LABEL_13;
  }
  else
  {
    v14 = nullptr;
    v15 = nullptr;
    v16 = 1;
  }
  v52 = qvector_reserve(&v52, v14, v16, 24);
  v14 = (const char *)v52;
  v17 = v53;
LABEL_13:
  v18 = (char *)&v14[24 * v17];
  *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  *(_QWORD *)v18 = v15;
  v54 = 0;
  *(_QWORD *)&v53 = v53 + 1;
  v55 = 0;
  v19 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v13 + 240LL);
  if ( v19 == vault_with_events_t__::vfunc_30 )
  {
    v20 = v13[1];
    if ( !v20 )
      goto LABEL_48;
    v21 = *(__int64 (**)())(*(_QWORD *)v20 + 480LL);
    if ( v21 != sub_178B60 && (unsigned __int8)v21() )
    {
      v28 = v54;
      goto LABEL_41;
    }
    v56 = 0;
    v57 = 0;
    v22 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64 *, _QWORD, __int64))(*(_QWORD *)v13[1] + 208LL))(
                          v13[1],
                          &v56,
                          &v54,
                          &v52,
                          v51,
                          18);
    v14 = v22;
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v13 + 24LL))(v13, v22, &v56);
    v23 = v56;
    if ( v56 )
    {
      v24 = v57;
      if ( (_QWORD)v57 )
      {
        v25 = 0;
        do
        {
          v26 = v23 + 32 * v25;
          v27 = *(_QWORD *)(v26 + 8);
          if ( v27 )
          {
            *(_QWORD *)(v26 + 16) = 0;
            qfree(v27, v22);
            v23 = v56;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v57 = 0;
      qfree(v23, v22);
    }
  }
  else
  {
    v14 = (const char *)&v54;
    LODWORD(v22) = v19(v13, (__int64)&v54, (__int64)&v52, v51, 18);
  }
  v28 = v54;
  if ( (_DWORD)v22 )
    goto LABEL_41;
  v29 = v55;
  if ( (unsigned __int64)v55 <= 1 )
    goto LABEL_41;
  v30 = v54 + 80;
  v31 = 1;
  v50 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v33 = *(_QWORD *)(v30 + 8);
    if ( v50 )
    {
      v14 = *(const char **)a2;
      v32 = &s1;
      if ( !v33 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v14 = &s1;
    if ( !v33 )
      break;
LABEL_27:
    v32 = *(const char **)v30;
LABEL_28:
    if ( !strcmp(v32, v14) )
      break;
LABEL_29:
    ++v31;
    v30 += 80;
    if ( v31 == v29 )
      goto LABEL_41;
  }
  if ( v51 != *(_DWORD *)(v30 + 60) )
    goto LABEL_29;
  v34 = 16 * (5 * v31 - 5);
  v35 = v28 + v34;
  if ( *(_BYTE *)(v28 + v34 + 72) != 2 )
    goto LABEL_37;
  if ( v31 != 1 && *(_BYTE *)(v30 + 72) == 8 )
  {
    v35 = v28 + v34 - 80;
LABEL_37:
    if ( v5 != (__int64 *)v35 )
    {
      v36 = *(_QWORD *)(v35 + 8);
      if ( v36 > 1 )
      {
        v49 = *(const char **)v35;
        if ( v5[2] < v36 )
          *v5 = qvector_reserve(v5, *v5, *(_QWORD *)(v35 + 8), 1);
        v5[1] = v36;
        v14 = v49;
        memmove((void *)*v5, v49, v36 - 1);
        *(_BYTE *)(*v5 + v36 - 1) = 0;
        v28 = v54;
      }
      else
      {
        v5[1] = 0;
      }
    }
    *((_DWORD *)v5 + 6) = *(_DWORD *)(v35 + 60);
  }
LABEL_41:
  if ( v28 )
  {
    v37 = v55;
    if ( (_QWORD)v55 )
    {
      v38 = 0;
      do
      {
        v39 = (__int64 *)(v28 + 80 * v38);
        v40 = *v39;
        if ( *v39 )
        {
          v39[1] = 0;
          qfree(v40, v14);
          v28 = v54;
        }
        ++v38;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v28, v14);
  }
LABEL_48:
  v41 = v52;
  if ( v52 )
  {
    v42 = v53;
    if ( (_QWORD)v53 )
    {
      v43 = 0;
      do
      {
        v44 = (__int64 *)(v41 + 24 * v43);
        v45 = *v44;
        if ( *v44 )
        {
          v44[1] = 0;
          qfree(v45, v14);
          v41 = v52;
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v53 = 0;
    qfree(v41, v14);
  }
  return v58 - __readfsqword(0x28u);
}
