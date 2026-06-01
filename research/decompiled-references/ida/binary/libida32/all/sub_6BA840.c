unsigned __int64 __fastcall sub_6BA840(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rax
  unsigned int v6; // eax
  int v7; // r12d
  size_t v8; // r12
  size_t v9; // rbp
  size_t v10; // r13
  _BYTE *v11; // rsi
  size_t v12; // r14
  __int64 v14; // rax
  void *v15; // r13
  size_t v16; // rax
  size_t v17; // r14
  void *v18; // rdi
  size_t v19; // r12
  void *src; // [rsp+0h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-78h]
  __int128 v23; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+38h] [rbp-60h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  __int64 v27; // [rsp+58h] [rbp-40h]
  unsigned __int64 v28; // [rsp+68h] [rbp-30h]

  v5 = *a3;
  v28 = __readfsqword(0x28u);
  v23 = 0;
  ptr = nullptr;
  dest = nullptr;
  v26 = -1;
  v27 = 4;
  v25 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 16))(a3);
  if ( !v6 || (sub_FFEBC0(&src, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2312LL), v6, 1), (v15 = src) == nullptr) )
  {
LABEL_2:
    v7 = v26;
    goto LABEL_3;
  }
  v7 = HIDWORD(n[0]);
  v26 = *(size_t *)((char *)n + 4);
  v16 = strlen((const char *)src);
  v17 = v16;
  if ( v16 )
  {
    v18 = dest;
    v19 = v16 + 1;
    if ( *((_QWORD *)&v25 + 1) < v16 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v19, 1);
      v18 = dest;
    }
    *(_QWORD *)&v25 = v19;
    memmove(v18, v15, v17);
    *((_BYTE *)dest + v17) = 0;
    goto LABEL_2;
  }
  *(_QWORD *)&v25 = 0;
LABEL_3:
  if ( v7 == -1 )
    goto LABEL_12;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 7LL) & 0x40) != 0 )
    LODWORD(v26) = v7 - 1;
  src = nullptr;
  *(_OWORD *)n = 0;
  sub_3573A0((char **)&src);
  v8 = n[0];
  v9 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
  v10 = v9;
  if ( n[0] )
  {
    v8 = n[0] - 1;
    v10 = n[0] - 1 + v9;
  }
  v11 = *(_BYTE **)a2;
  v12 = v10 + 1;
  if ( *(_QWORD *)(a2 + 16) >= v10 + 1 )
  {
    *(_QWORD *)(a2 + 8) = v12;
    v11[v10] = 0;
    if ( !v9 )
      goto LABEL_10;
    goto LABEL_17;
  }
  v14 = qvector_reserve(a2, v11, v10 + 1, 1);
  *(_QWORD *)(a2 + 8) = v12;
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(v14 + v10) = 0;
  if ( v9 )
LABEL_17:
    memmove((void *)(*(_QWORD *)a2 + v8), *(const void **)a2, v9);
LABEL_10:
  memcpy(*(void **)a2, src, v8);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
LABEL_12:
  if ( dest )
  {
    *(_QWORD *)&v25 = 0;
    qfree(dest);
  }
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return v28 - __readfsqword(0x28u);
}

