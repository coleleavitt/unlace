__int64 __fastcall sub_445AD0(_QWORD *a1, const char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  const char *v7; // rsi
  _QWORD *v8; // rdx
  size_t v9; // rbx
  _QWORD *v10; // r14
  const char *v11; // r13
  char v12; // al
  const char *v13; // r15
  _QWORD *v14; // rbp
  _QWORD *v15; // r12
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  const char *v20; // rdi
  __int64 vault_filesys; // rbx
  const char *v22; // rdx
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  char *v29; // rax
  __m128i v30; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD *v31; // [rsp+10h] [rbp-C8h]
  __m128i v32; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-B0h]
  void *src; // [rsp+40h] [rbp-98h] BYREF
  size_t n; // [rsp+48h] [rbp-90h]
  void *v36; // [rsp+60h] [rbp-78h] BYREF
  __int128 v37; // [rsp+68h] [rbp-70h]
  __m128i v38; // [rsp+78h] [rbp-60h]
  __int64 v39; // [rsp+88h] [rbp-50h]
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v31 = a1;
  v30.m128i_i64[1] = (__int64)a2;
  v40 = __readfsqword(0x28u);
  v6 = sub_426230(a1, a2);
  sub_417500((__int64)&v32.m128i_i64[1], (__int64)v6, a4);
  v7 = (const char *)a1;
  sub_445930((__int64)&src, (__int64)a1, a3, a4);
  v9 = n;
  if ( n )
  {
    v29 = (char *)qalloc_or_throw(n);
    v7 = (const char *)src;
    v11 = v29;
    memcpy(v29, src, v9);
    v10 = (_QWORD *)v31[46];
    v8 = v31 + 45;
    v30.m128i_i64[0] = (__int64)(v31 + 45);
    if ( !v10 )
      goto LABEL_22;
    v12 = 0;
  }
  else
  {
    v10 = (_QWORD *)a1[46];
    v11 = nullptr;
    v30.m128i_i64[0] = (__int64)(a1 + 45);
    v12 = 1;
    if ( !v10 )
      goto LABEL_24;
  }
  v13 = &s1;
  v14 = (_QWORD *)v30.m128i_i64[0];
  if ( !v12 )
    v13 = v11;
  while ( 1 )
  {
    v19 = v10[5];
    if ( !v9 )
      break;
    if ( v19 )
      goto LABEL_15;
    v15 = v10;
    v7 = v11;
    v16 = &s1;
LABEL_8:
    v17 = strcmp(v16, v7);
    v18 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v17 >= 0 )
    {
      v14 = v15;
      v10 = v18;
    }
    if ( !v10 )
      goto LABEL_17;
  }
  if ( v19 )
  {
LABEL_15:
    v16 = (const char *)v10[4];
    v15 = v10;
    v7 = v13;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v18 = (_QWORD *)v10[2];
    if ( !v18 )
      break;
    v14 = v10;
    v10 = (_QWORD *)v10[2];
    if ( v18[5] )
      goto LABEL_15;
  }
  v14 = v10;
LABEL_17:
  if ( v14 == (_QWORD *)v30.m128i_i64[0] )
    goto LABEL_22;
  if ( v14[5] )
  {
    v20 = &s1;
    v7 = (const char *)v14[4];
    if ( v9 )
      v20 = v11;
LABEL_21:
    if ( strcmp(v20, v7) < 0 )
    {
LABEL_22:
      if ( v11 )
        qfree(v11, v7, v8, v18);
      goto LABEL_24;
    }
  }
  else
  {
    v20 = v11;
    v7 = &s1;
    if ( v9 )
      goto LABEL_21;
  }
  if ( v11 )
    qfree(v11, v7);
  v25 = v14[7];
  if ( v25 == -1 || !v14[8] )
  {
LABEL_24:
    v37 = 0;
    v36 = nullptr;
    vault_filesys = get_vault_filesys(&v36, 0, 0);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36, nullptr);
    }
    v22 = &s1;
    if ( v33 )
      v22 = (const char *)v32.m128i_i64[1];
    v7 = (const char *)v30.m128i_i64[1];
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)vault_filesys + 96LL))(
            vault_filesys,
            v30.m128i_i64[1],
            v22);
    LODWORD(vault_filesys) = 0;
    if ( !v23 )
    {
      vault_filesys = n;
      v36 = nullptr;
      v37 = 0;
      v27 = _mm_loadl_epi64((const __m128i *)(v30.m128i_i64[1] + 64));
      v28 = _mm_loadl_epi64((const __m128i *)(v30.m128i_i64[1] + 40));
      if ( n )
      {
        v32.m128i_i64[0] = v28.m128i_i64[0];
        v30.m128i_i64[0] = v27.m128i_i64[0];
        v36 = (void *)qalloc_or_throw(n);
        *((_QWORD *)&v37 + 1) = vault_filesys;
        memcpy(v36, src, vault_filesys);
        *(_QWORD *)&v37 = vault_filesys;
        v28 = _mm_loadl_epi64(&v32);
        v27 = _mm_loadl_epi64(&v30);
      }
      v7 = (const char *)&v36;
      v39 = -1;
      v38 = _mm_unpacklo_epi64(v28, v27);
      sub_42E200(v31, (const char *)&v36);
      LOBYTE(vault_filesys) = (*(_DWORD *)(v30.m128i_i64[1] + 12) & 0xF000) != 0x4000;
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36, (const char *)&v36);
      }
    }
  }
  else
  {
    v26 = v30.m128i_i64[1];
    LODWORD(vault_filesys) = 1;
    *(_QWORD *)(v30.m128i_i64[1] + 40) = v25;
    *(_QWORD *)(v26 + 64) = v14[8];
  }
  if ( src )
  {
    n = 0;
    qfree(src, v7);
  }
  if ( v32.m128i_i64[1] )
  {
    v33 = 0;
    qfree(v32.m128i_i64[1], v7);
  }
  return (unsigned int)vault_filesys;
}
