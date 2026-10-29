__int64 __fastcall sub_57AB60(__int64 a1, char a2)
{
  const char *v4; // rdi
  int v5; // eax
  int v6; // r9d
  char *v7; // rsi
  size_t v8; // rax
  size_t v9; // r13
  const char *v10; // rdi
  const char *v11; // rdi
  __int64 v12; // r8
  int *v13; // rax
  void *v15; // rdi
  size_t v16; // r14
  const char *v17; // rdi
  unsigned __int64 v18; // rbx
  const void *v19; // rbp
  void *v20; // rax
  __int64 v21; // rbx
  void *v22; // r12
  void *v23; // rax
  char v24; // [rsp+0h] [rbp-2088h]
  unsigned __int8 v25; // [rsp+Fh] [rbp-2079h]
  __int64 v26; // [rsp+10h] [rbp-2078h]
  __int64 v27; // [rsp+18h] [rbp-2070h]
  __int64 v28; // [rsp+18h] [rbp-2070h]
  __int64 v29; // [rsp+18h] [rbp-2070h]
  __int64 v30; // [rsp+18h] [rbp-2070h]
  void *dest; // [rsp+20h] [rbp-2068h] BYREF
  __int128 v32; // [rsp+28h] [rbp-2060h]
  char v33[4096]; // [rsp+40h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1040h] [rbp-1048h] BYREF
  unsigned __int64 v35; // [rsp+2048h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v26 = *(_QWORD *)(a1 + 1352);
  v25 = *(_BYTE *)(v26 + 265);
  if ( !v25 )
    return v25;
  if ( *(_QWORD *)(a1 + 8) <= 1u )
    return 0;
  dest = nullptr;
  v32 = 0;
  qdirname(v33);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = *(const char **)a1;
  v5 = qbasename(v4);
  qmakepath((int)s, 4096, (int)v33, v5, 0, v6, v24);
  v7 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
  sub_57A620(s, 4096, s, "idb");
  v8 = strlen(s);
  v9 = v8;
  if ( v8 )
  {
    v15 = dest;
    v16 = v8 + 1;
    if ( *((_QWORD *)&v32 + 1) < v8 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v16, 1);
      v15 = dest;
    }
    v7 = s;
    *(_QWORD *)&v32 = v16;
    memmove(v15, s, v9);
    *((_BYTE *)dest + v9) = 0;
    v8 = v32;
    if ( !a2 )
      goto LABEL_7;
    if ( (_QWORD)v32 )
    {
      v17 = (const char *)dest;
LABEL_25:
      qunlink(v17);
      v8 = v32;
      goto LABEL_7;
    }
LABEL_26:
    v17 = haystack;
    goto LABEL_25;
  }
  *(_QWORD *)&v32 = 0;
  if ( a2 )
    goto LABEL_26;
LABEL_7:
  v10 = haystack;
  if ( v8 )
    v10 = (const char *)dest;
  if ( (unsigned __int8)qfileexist(v10, v7) )
LABEL_14:
    sub_375400();
  v11 = haystack;
  if ( (_QWORD)v32 )
    v11 = (const char *)dest;
  v12 = fopenWB(v11);
  if ( !v12 )
  {
    v13 = __errno_location();
    qerrstr(*v13);
    goto LABEL_14;
  }
  if ( v26 + 8 != a1 + 24 )
  {
    v18 = *(_QWORD *)(a1 + 32);
    if ( v18 < 2 )
    {
      *(_QWORD *)(v26 + 16) = 0;
    }
    else
    {
      v19 = *(const void **)(a1 + 24);
      v20 = *(void **)(v26 + 8);
      if ( *(_QWORD *)(v26 + 24) < v18 )
      {
        v30 = v12;
        v20 = (void *)qvector_reserve(v26 + 8, *(_QWORD *)(v26 + 8), v18, 1);
        v12 = v30;
        *(_QWORD *)(v26 + 8) = v20;
      }
      v27 = v12;
      *(_QWORD *)(v26 + 16) = v18;
      memmove(v20, v19, v18 - 1);
      v12 = v27;
      *(_BYTE *)(*(_QWORD *)(v26 + 8) + v18 - 1) = 0;
    }
  }
  if ( (void **)(v26 + 32) != &dest )
  {
    v21 = v32;
    if ( (unsigned __int64)v32 < 2 )
    {
      *(_QWORD *)(v26 + 40) = 0;
    }
    else
    {
      v22 = dest;
      v23 = *(void **)(v26 + 32);
      if ( *(_QWORD *)(v26 + 48) < (unsigned __int64)v32 )
      {
        v29 = v12;
        v23 = (void *)qvector_reserve(v26 + 32, *(_QWORD *)(v26 + 32), v32, 1);
        v12 = v29;
        *(_QWORD *)(v26 + 32) = v23;
      }
      v28 = v12;
      *(_QWORD *)(v26 + 40) = v21;
      memmove(v23, v22, v21 - 1);
      v12 = v28;
      *(_BYTE *)(*(_QWORD *)(v26 + 32) + v21 - 1) = 0;
    }
  }
  *(_QWORD *)(v26 + 56) = v12;
  if ( dest )
  {
    *(_QWORD *)&v32 = 0;
    qfree(dest);
  }
  return v25;
}

