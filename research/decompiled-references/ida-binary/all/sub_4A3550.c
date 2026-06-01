unsigned __int64 __fastcall sub_4A3550(__int64 *a1, __int64 a2, const char *a3, char a4)
{
  const char *v7; // r15
  size_t v8; // r14
  const char *v9; // rsi
  int v10; // eax
  __int64 v11; // r14
  size_t v12; // rax
  size_t v13; // r13
  __int64 *v15; // rdi
  __int64 v16; // rbp
  const char *v17; // r14
  void *v18; // rax
  void *v19; // rdi
  size_t v20; // r14
  __int64 v21; // rax
  void *src; // [rsp+8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+10h] [rbp-50h]
  unsigned __int64 v24; // [rsp+20h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[12] = 0;
  a1[15] = 0;
  a1[18] = 0;
  a1[21] = 0;
  *(_OWORD *)(a1 + 3) = 0;
  *((_OWORD *)a1 + 3) = 0;
  *((_OWORD *)a1 + 5) = 0;
  *(_OWORD *)(a1 + 13) = 0;
  *((_OWORD *)a1 + 8) = 0;
  *(_OWORD *)(a1 + 19) = 0;
  *((_OWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 48) = 384;
  v7 = *(const char **)(a2 + 40);
  src = nullptr;
  v23 = 0;
  if ( v7 )
  {
    v8 = strlen(v7);
    src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
    *(_QWORD *)&v23 = v8 + 1;
    memmove(src, v7, v8);
    *((_BYTE *)src + v8) = 0;
  }
  v9 = (const char *)(a1 + 9);
  v10 = sub_49EFB0((__int64)&src, (__int64)(a1 + 9));
  v11 = *a1;
  *((_DWORD *)a1 + 17) = v10;
  if ( (*(_BYTE *)(v11 + 14) & 1) != 0 )
    v10 |= 2u;
  *((_DWORD *)a1 + 17) = v10;
  if ( a3 )
  {
    v12 = strlen(a3);
    v13 = v12;
    if ( !v12 )
    {
LABEL_7:
      a1[3] = 0;
      goto LABEL_8;
    }
    v19 = (void *)a1[2];
    v20 = v12 + 1;
    if ( a1[4] < v12 + 1 )
    {
      v21 = qvector_reserve(a1 + 2, a1[2], v20, 1);
      a1[2] = v21;
      v19 = (void *)v21;
    }
    a1[3] = v20;
    v9 = a3;
    memmove(v19, a3, v13);
    *(_BYTE *)(a1[2] + v13) = 0;
    v11 = *a1;
  }
  else
  {
    v15 = a1 + 2;
    if ( a1 + 2 != (__int64 *)&src )
    {
      v16 = v23;
      if ( (unsigned __int64)v23 < 2 )
        goto LABEL_7;
      v17 = (const char *)src;
      v18 = (void *)a1[2];
      if ( a1[4] < (unsigned __int64)v23 )
      {
        v18 = (void *)qvector_reserve(v15, a1[2], v23, 1);
        a1[2] = (__int64)v18;
      }
      a1[3] = v16;
      v9 = v17;
      memmove(v18, v17, v16 - 1);
      *(_BYTE *)(a1[2] + v16 - 1) = 0;
      v11 = *a1;
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(v11 + 12) & 1) != 0 )
    *((_DWORD *)a1 + 16) |= 1u;
  if ( a4 )
    *((_DWORD *)a1 + 16) |= 2u;
  if ( src )
  {
    *(_QWORD *)&v23 = 0;
    qfree(src, v9);
  }
  return v24 - __readfsqword(0x28u);
}
