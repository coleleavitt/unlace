unsigned __int64 __fastcall sub_45E3C0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // eax
  __int64 v6; // rdx
  char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  char *i; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rax
  __int64 v24; // rax
  const void *v25; // r14
  __int64 v26; // rax
  _QWORD *v27; // rbx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)a1 == 0;
  v30 = __readfsqword(0x28u);
  if ( v3 )
  {
    v26 = operator new(0x70u);
    *(_DWORD *)(v26 + 8) = 0;
    *(_QWORD *)(v26 + 16) = 0;
    *(_QWORD *)v26 = &off_2B28A28;
    *(_DWORD *)(v26 + 48) = 0;
    *(_QWORD *)(v26 + 56) = 0;
    *(_QWORD *)(v26 + 64) = v26 + 48;
    *(_QWORD *)(v26 + 72) = v26 + 48;
    *(_QWORD *)(v26 + 80) = 0;
    *(_QWORD *)(v26 + 88) = 0;
    *(_QWORD *)(a1 + 8) = v26;
    *(_OWORD *)(v26 + 24) = 0;
    *(_OWORD *)(v26 + 96) = 0;
    v27 = (_QWORD *)operator new(8u);
    *v27 = create_dirtree(v27, *(_QWORD *)(a1 + 8));
    *(_QWORD *)a1 = v27;
  }
  if ( *(_DWORD *)(a2 + 40) == -1 )
  {
    v5 = *(_DWORD *)(a1 + 468);
    *(_DWORD *)(a1 + 468) = v5 + 1;
    *(_DWORD *)(a2 + 40) = v5;
  }
  v6 = *(_QWORD *)(a1 + 328);
  v7 = *(char **)(a1 + 320);
  v8 = *(_QWORD *)(a1 + 440);
  v9 = 8 * v6;
  if ( v8 == -1 )
  {
    v21 = *(_DWORD *)(a2 + 44);
    if ( v21 == -1 )
    {
      for ( i = &v7[8 * v6]; ; i -= 8 )
      {
        if ( i == v7 )
        {
          v10 = 0;
          v12 = 0;
          ptr = nullptr;
          v29 = 0;
          goto LABEL_12;
        }
        if ( *(_DWORD *)(*((_QWORD *)i - 1) + 44LL) != -2 )
          break;
      }
      v10 = i - v7;
      v12 = (i - v7) >> 3;
    }
    else
    {
      if ( v21 == -2 )
      {
        v10 = 8 * v6;
        i = &v7[8 * v6];
        ptr = nullptr;
        v12 = v9 >> 3;
        v29 = 0;
        goto LABEL_12;
      }
      v22 = v6 - 1;
      if ( v6 - 1 < 0 )
      {
LABEL_22:
        v10 = 8 * v6;
        i = &v7[8 * v6];
        v12 = v9 >> 3;
        v29 = 0;
        ptr = nullptr;
        if ( !(v9 >> 3) )
          goto LABEL_12;
LABEL_23:
        v10 = 8 * v6;
        i = &v7[8 * v6];
        v15 = v6 + 1;
        if ( *(_QWORD *)(a1 + 336) >= (unsigned __int64)(v6 + 1) )
          goto LABEL_13;
        goto LABEL_24;
      }
      while ( v21 != *(_DWORD *)(*(_QWORD *)&v7[8 * v22] + 40LL) )
      {
        if ( v22-- == 0 )
          goto LABEL_22;
      }
      v10 = 8 * v22 + 8;
      i = &v7[v10];
      v12 = v10 >> 3;
    }
  }
  else
  {
    v10 = 8 * v8;
    *(_QWORD *)(a1 + 440) = v8 + 1;
    i = &v7[8 * v8];
    v12 = (8 * v8) >> 3;
  }
  ptr = nullptr;
  v29 = 0;
  if ( !v12 )
    goto LABEL_12;
  if ( i == &v7[8 * v6] )
    goto LABEL_23;
  v13 = *(_QWORD *)&v7[v10 - 8];
  if ( &ptr != (void **)(v13 + 16) )
  {
    v14 = *(_QWORD *)(v13 + 24);
    if ( v14 > 1 )
    {
      v25 = *(const void **)(v13 + 16);
      ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v13 + 24), 1);
      *(_QWORD *)&v29 = v14;
      memmove(ptr, v25, v14 - 1);
      *((char *)ptr + v14 - 1) = 0;
      v7 = *(char **)(a1 + 320);
      v6 = *(_QWORD *)(a1 + 328);
      v10 = i - v7;
    }
  }
LABEL_12:
  v15 = v6 + 1;
  if ( *(_QWORD *)(a1 + 336) >= (unsigned __int64)(v6 + 1) )
    goto LABEL_13;
LABEL_24:
  v20 = qvector_reserve(a1 + 320, v7, v15, 8);
  *(_QWORD *)(a1 + 320) = v20;
  v6 = *(_QWORD *)(a1 + 328);
  i = (char *)(v20 + v10);
LABEL_13:
  memmove(i + 8, i, 8 * v6 - v10);
  *(_QWORD *)i = a2;
  v16 = *(_QWORD *)(a1 + 328) + 1LL;
  for ( *(_QWORD *)(a1 + 328) = v16; v12 < *(_QWORD *)(a1 + 328); ++v12 )
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v12) + 120LL) = v12;
  if ( (*(_BYTE *)(a2 + 48) & 1) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 384);
    v18 = *(_QWORD *)(a1 + 376);
    if ( *(_QWORD *)(a1 + 392) < (unsigned __int64)(v17 + 1) )
    {
      v24 = qvector_reserve(a1 + 376, v18, v17 + 1, 8);
      *(_QWORD *)(a1 + 376) = v24;
      v18 = v24;
      v17 = *(_QWORD *)(a1 + 384);
    }
    *(_QWORD *)(v18 + 8 * v17) = a2;
    ++*(_QWORD *)(a1 + 384);
  }
  sub_45DC50((__int64 **)a1, (_QWORD *)a2, &ptr);
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  return v30 - __readfsqword(0x28u);
}
