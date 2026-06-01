__int64 __fastcall sub_43F150(__int64 a1, unsigned int a2, unsigned int a3)
{
  const char *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // r15
  unsigned __int8 (*v10)(void); // rax
  size_t v11; // rbp
  __int64 v12; // rsi
  void *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD *, __int64, unsigned int, unsigned int); // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 (*v20)(); // rax
  __int64 v21; // rdi
  const char *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 *v31; // rax
  __int64 v32; // rdi
  unsigned int v33; // ebx
  __int64 v34; // rbp
  int v35; // r14d
  unsigned __int64 v36; // rbx
  __int64 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // rdi
  const char *v43; // rax
  char v44; // al
  const char *v45; // r13
  void *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-C0h]
  char v51; // [rsp+22h] [rbp-9Eh]
  char v52; // [rsp+23h] [rbp-9Dh]
  int v53; // [rsp+24h] [rbp-9Ch]
  __int64 v54; // [rsp+28h] [rbp-98h] BYREF
  __int128 v55; // [rsp+30h] [rbp-90h]
  __int64 v56; // [rsp+48h] [rbp-78h] BYREF
  __int128 v57; // [rsp+50h] [rbp-70h]
  __int64 v58; // [rsp+68h] [rbp-58h] BYREF
  __int128 v59; // [rsp+70h] [rbp-50h]
  unsigned __int64 v60; // [rsp+80h] [rbp-40h]

  v3 = (const char *)a1;
  v60 = __readfsqword(0x28u);
  v54 = 0;
  v55 = 0;
  v52 = sub_43CC20(&v54, a1, (__m128)0LL);
  v5 = v54;
  if ( !v52 )
    goto LABEL_36;
  v48 = v54 + 32 * v55;
  if ( v48 == v54 )
    goto LABEL_36;
  v51 = 0;
  v6 = v54;
  do
  {
    v7 = sub_426230(v5, v3);
    v8 = sub_417080((__int64)v7);
    v5 = *(_QWORD *)(v8 + 8);
    v9 = (_QWORD *)v8;
    if ( !v5 )
      goto LABEL_28;
    v10 = *(unsigned __int8 (**)(void))(*(_QWORD *)v5 + 480LL);
    if ( (char *)v10 != (char *)sub_178B60 )
    {
      if ( v10() )
        goto LABEL_28;
    }
    v56 = 0;
    v57 = 0;
    v11 = *(_QWORD *)(v6 + 8);
    if ( !v11 )
    {
      v12 = 0;
      v13 = nullptr;
      v14 = 1;
LABEL_8:
      v56 = qvector_reserve(&v56, v12, v14, 24);
      v12 = v56;
      v15 = v57;
      goto LABEL_9;
    }
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8));
    memcpy(v13, *(const void **)v6, v11);
    v15 = v57;
    v12 = v56;
    v14 = v57 + 1;
    if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
      goto LABEL_8;
LABEL_9:
    v16 = v12 + 24 * v15;
    *(_QWORD *)v16 = v13;
    *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
    *(_QWORD *)&v57 = v57 + 1;
    v17 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int, unsigned int))(*v9 + 376LL);
    if ( a3 == -10 )
    {
      v19 = *(unsigned int *)(v6 + 24);
      if ( v17 != sub_418E80 )
        goto LABEL_62;
      v18 = v9[1];
      if ( !v18 )
      {
LABEL_48:
        LODWORD(v22) = 52;
        goto LABEL_49;
      }
    }
    else
    {
      if ( v17 != sub_418E80 )
      {
        v19 = a3;
LABEL_62:
        v5 = (__int64)v9;
        v3 = (const char *)&v56;
        LODWORD(v22) = v17(v9, (__int64)&v56, v19, a2);
LABEL_20:
        if ( !(_DWORD)v22 )
        {
          v28 = v56;
          v51 = v52;
          if ( !v56 )
            goto LABEL_28;
LABEL_22:
          v29 = v57;
          if ( (_QWORD)v57 )
          {
            v30 = 0;
            do
            {
              v31 = (__int64 *)(v28 + 24 * v30);
              v32 = *v31;
              if ( *v31 )
              {
                v31[1] = 0;
                qfree(v32, v3);
                v28 = v56;
              }
              ++v30;
            }
            while ( v29 != v30 );
          }
          *(_QWORD *)&v57 = 0;
          v5 = v28;
          qfree(v28, v3);
          goto LABEL_28;
        }
        goto LABEL_55;
      }
      v18 = v9[1];
      LODWORD(v19) = a3;
      if ( !v18 )
        goto LABEL_48;
    }
    v20 = *(__int64 (**)())(*(_QWORD *)v18 + 480LL);
    if ( v20 == sub_178B60 || (v53 = v19, v44 = v20(), LODWORD(v19) = v53, !v44) )
    {
      v59 = 0;
      v21 = v9[1];
      v58 = 0;
      v22 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v21 + 344LL))(
                            v21,
                            &v58,
                            &v56,
                            (unsigned int)v19,
                            a2);
      v5 = (__int64)v9;
      v3 = v22;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v9 + 24LL))(v9, v22, &v58);
      v23 = v58;
      if ( v58 )
      {
        v24 = v59;
        if ( (_QWORD)v59 )
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
              v23 = v58;
            }
            ++v25;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v59 = 0;
        v5 = v23;
        qfree(v23, v22);
      }
      goto LABEL_20;
    }
    LODWORD(v22) = 52;
LABEL_55:
    LODWORD(v19) = a3;
    if ( a3 == -10 )
      LODWORD(v19) = *(_DWORD *)(v6 + 24);
LABEL_49:
    v43 = &s1;
    if ( *(_QWORD *)(v6 + 8) )
      v43 = *(const char **)v6;
    v3 = "Sync \"%s\" to revision %d";
    v5 = (unsigned int)v22;
    sub_416980((unsigned int)v22, (__int64)"Sync \"%s\" to revision %d", v43, v19);
    v28 = v56;
    if ( v56 )
      goto LABEL_22;
LABEL_28:
    v6 += 32;
  }
  while ( v48 != v6 );
  v5 = v54;
  if ( !v51 )
  {
LABEL_36:
    v33 = 0;
    goto LABEL_37;
  }
  v33 = 1;
  if ( *(_DWORD *)(a1 + 8) != 69 || (_QWORD)v55 != 1 )
    goto LABEL_37;
  v34 = *(_QWORD *)(a1 + 40);
  v35 = *(_DWORD *)(v54 + 24);
  if ( v54 == v34 + 256 )
  {
    *(_DWORD *)(v34 + 280) = v35;
    v37 = 1;
    *(_BYTE *)(v34 + 284) = 1;
    goto LABEL_39;
  }
  v36 = *(_QWORD *)(v54 + 8);
  if ( v36 > 1 )
  {
    v45 = *(const char **)v54;
    v46 = *(void **)(v34 + 256);
    if ( *(_QWORD *)(v34 + 272) < v36 )
    {
      v47 = qvector_reserve(v34 + 256, *(_QWORD *)(v34 + 256), v36, 1);
      *(_QWORD *)(v34 + 256) = v47;
      v46 = (void *)v47;
    }
    *(_QWORD *)(v34 + 264) = v36;
    v3 = v45;
    memmove(v46, v45, v36 - 1);
    *(_BYTE *)(*(_QWORD *)(v34 + 256) + v36 - 1) = 0;
    v5 = v54;
  }
  else
  {
    *(_QWORD *)(v34 + 264) = 0;
  }
  *(_DWORD *)(v34 + 280) = v35;
  v33 = 1;
  *(_BYTE *)(v34 + 284) = 1;
LABEL_37:
  if ( v5 )
  {
    v37 = v55;
    if ( (_QWORD)v55 )
    {
LABEL_39:
      v38 = 0;
      v39 = v5;
      do
      {
        v40 = (__int64 *)(v39 + 32 * v38);
        v41 = *v40;
        if ( *v40 )
        {
          v40[1] = 0;
          qfree(v41, v3);
          v39 = v54;
        }
        ++v38;
      }
      while ( v38 != v37 );
      v5 = v39;
    }
    *(_QWORD *)&v55 = 0;
    qfree(v5, v3);
  }
  return v33;
}
