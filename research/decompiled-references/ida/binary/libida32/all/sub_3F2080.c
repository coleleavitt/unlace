unsigned __int64 __fastcall sub_3F2080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int *v4; // rbx
  const char *v5; // r14
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r14
  const char *v9; // rsi
  const void *v11; // rbp
  void *v12; // rax
  const void *v13; // r8
  void *v14; // rax
  const void *v15; // r8
  void *v16; // rax
  const void *v17; // [rsp+8h] [rbp-60h]
  const void *v18; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v3 = 80 * a3 + *(_QWORD *)(a2 + 40);
  v4 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 80 * a3);
  switch_dbctx(*(int *)(a1 + 8));
  sub_757CB0(&ptr, *(_QWORD *)(a1 + 64));
  sub_758270(*(_QWORD *)(a1 + 64), "/");
  v5 = haystack;
  if ( *(_QWORD *)(v3 + 40) )
    v5 = *(const char **)(v3 + 32);
  sub_3F1A20(a1, v5);
  sub_758270(*(_QWORD *)(a1 + 64), v5);
  *v4 = *(_DWORD *)v3;
  v4[1] = *(_DWORD *)(v3 + 4);
  if ( v4 + 2 != (unsigned int *)(v3 + 8) )
  {
    v6 = *(_QWORD *)(v3 + 16);
    if ( v6 > 1 )
    {
      v15 = *(const void **)(v3 + 8);
      v16 = *((void **)v4 + 1);
      if ( *((_QWORD *)v4 + 3) < v6 )
      {
        v17 = *(const void **)(v3 + 8);
        v16 = (void *)qvector_reserve(v4 + 2, *((_QWORD *)v4 + 1), *(_QWORD *)(v3 + 16), 1);
        *((_QWORD *)v4 + 1) = v16;
        v15 = v17;
      }
      *((_QWORD *)v4 + 2) = v6;
      memmove(v16, v15, v6 - 1);
      *(_BYTE *)(*((_QWORD *)v4 + 1) + v6 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v4 + 2) = 0;
    }
  }
  if ( v4 + 8 != (unsigned int *)(v3 + 32) )
  {
    v7 = *(_QWORD *)(v3 + 40);
    if ( v7 > 1 )
    {
      v13 = *(const void **)(v3 + 32);
      v14 = *((void **)v4 + 4);
      if ( *((_QWORD *)v4 + 6) < v7 )
      {
        v18 = *(const void **)(v3 + 32);
        v14 = (void *)qvector_reserve(v4 + 8, *((_QWORD *)v4 + 4), *(_QWORD *)(v3 + 40), 1);
        *((_QWORD *)v4 + 4) = v14;
        v13 = v18;
      }
      *((_QWORD *)v4 + 5) = v7;
      memmove(v14, v13, v7 - 1);
      *(_BYTE *)(*((_QWORD *)v4 + 4) + v7 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v4 + 5) = 0;
    }
  }
  if ( v4 + 14 != (unsigned int *)(v3 + 56) )
  {
    v8 = *(_QWORD *)(v3 + 64);
    if ( v8 > 1 )
    {
      v11 = *(const void **)(v3 + 56);
      v12 = *((void **)v4 + 7);
      if ( *((_QWORD *)v4 + 9) < v8 )
      {
        v12 = (void *)qvector_reserve(v4 + 14, *((_QWORD *)v4 + 7), v8, 1);
        *((_QWORD *)v4 + 7) = v12;
      }
      *((_QWORD *)v4 + 8) = v8;
      memmove(v12, v11, v8 - 1);
      *(_BYTE *)(*((_QWORD *)v4 + 7) + v8 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v4 + 8) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 76) )
    (*(void (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
      *(_QWORD *)(a1 + 32),
      v4,
      *v4,
      *(unsigned int *)(a2 + 12),
      *(unsigned int *)(a1 + 12),
      0);
  sub_75E950(*(_QWORD *)(a1 + 64), *v4, 1);
  v9 = haystack;
  if ( v20 )
    v9 = (const char *)ptr;
  sub_758270(*(_QWORD *)(a1 + 64), v9);
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
  }
  return v21 - __readfsqword(0x28u);
}

