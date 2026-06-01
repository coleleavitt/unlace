unsigned __int64 __fastcall sub_49D500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int *v7; // rbx
  _QWORD *v8; // r13
  _QWORD *v9; // rax
  __m128i *v10; // rax
  unsigned int v11; // esi
  __int64 *v12; // rbx
  __int64 *i; // r15
  void *v14; // rdi
  void *v15; // rdi
  char *v16; // rbx
  __int64 v17; // r14
  unsigned __int32 v18; // r15d
  unsigned int v19; // r13d
  char *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbp
  char *v23; // rbx
  void *v24; // rdi
  void *v25; // rdi
  char *v27; // [rsp+8h] [rbp-70h]
  __m128i *dest; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v5 = *(int *)(a2 + 8);
  v31 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  v8 = sub_49D3D0(a2, *v7, *(_QWORD **)(a2 + 56));
  v9 = sub_49D3D0(a2, v7[1], v8);
  ptr = nullptr;
  v30 = 0;
  sub_47FD60((__int64 *)&ptr, nullptr, (__int64)v8, (__int64)v9);
  *(_BYTE *)(a1 + 528) = 1;
  switch_dbctx(*(int *)(a1 + 8));
  v10 = (__m128i *)sub_49D3D0(a1, *v7, *(_QWORD **)(a1 + 56));
  v11 = v7[1];
  dest = v10;
  v12 = (__int64 *)v10;
  for ( i = sub_49D3D0(a1, v11, v10); i != v12; v12 += 16 )
  {
    clear_tinfo_t(v12 + 8);
    v14 = (void *)v12[5];
    if ( v14 )
    {
      v12[6] = 0;
      qfree(v14);
    }
    v15 = (void *)v12[2];
    if ( v15 )
    {
      v12[3] = 0;
      qfree(v15);
    }
  }
  memmove(dest, i, *(_QWORD *)(a1 + 56) + (*(_QWORD *)(a1 + 64) << 7) - (_QWORD)i);
  *(_QWORD *)(a1 + 64) -= ((char *)i - (char *)dest) >> 7;
  v16 = (char *)ptr;
  v27 = (char *)ptr + 128 * (_QWORD)v30;
  if ( v27 != ptr )
  {
    do
    {
      v17 = *(_QWORD *)(a1 + 32);
      v18 = *(_DWORD *)(a1 + 12);
      v19 = *(_DWORD *)(a2 + 12);
      (*(void (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 32LL))(
        v17,
        v16 + 64,
        v19,
        v18,
        1);
      sub_48E940(v17, (__int64)(v16 + 72), v19, v18);
      v16 += 128;
    }
    while ( v16 != v27 );
  }
  switch_dbctx(*(int *)(a1 + 8));
  sub_47FD60((__int64 *)(a1 + 56), dest, (__int64)ptr, (__int64)ptr + 128 * (_QWORD)v30);
  v20 = (char *)ptr;
  *(_BYTE *)(a1 + 528) = 1;
  if ( v20 )
  {
    v21 = v30;
    if ( (_QWORD)v30 )
    {
      v22 = 0;
      do
      {
        v23 = &v20[128 * v22];
        clear_tinfo_t(v23 + 64);
        v24 = *((void **)v23 + 5);
        if ( v24 )
        {
          *((_QWORD *)v23 + 6) = 0;
          qfree(v24);
        }
        v25 = *((void **)v23 + 2);
        if ( v25 )
        {
          *((_QWORD *)v23 + 3) = 0;
          qfree(v25);
        }
        ++v22;
        v20 = (char *)ptr;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v20);
  }
  return v31 - __readfsqword(0x28u);
}

