unsigned __int64 __fastcall sub_4B1E70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int64 *v7; // rbx
  _QWORD *v8; // r13
  _QWORD *v9; // rax
  __m128i *v10; // rax
  unsigned __int64 v11; // rsi
  __int64 *v12; // rbx
  __int64 *i; // r15
  void *v14; // rdi
  void *v15; // rdi
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int32 v19; // r15d
  unsigned int v20; // r13d
  char *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbp
  char *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  char *j; // [rsp+8h] [rbp-70h]
  __m128i *dest; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v5 = *(int *)(a2 + 8);
  v32 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v8 = sub_4B1D30(a2, *v7, *(_QWORD **)(a2 + 56));
  v9 = sub_4B1D30(a2, v7[1], v8);
  ptr = nullptr;
  v31 = 0;
  sub_494890((__int64 *)&ptr, nullptr, (__int64)v8, (__int64)v9);
  *(_BYTE *)(a1 + 144) = 1;
  switch_dbctx(*(int *)(a1 + 8));
  v10 = (__m128i *)sub_4B1D30(a1, *v7, *(_QWORD **)(a1 + 56));
  v11 = v7[1];
  dest = v10;
  v12 = (__int64 *)v10;
  for ( i = sub_4B1D30(a1, v11, v10); i != v12; v12 += 18 )
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
  memmove(dest, i, *(_QWORD *)(a1 + 56) + 144LL * *(_QWORD *)(a1 + 64) - (_QWORD)i);
  v16 = (char *)ptr;
  v17 = v31;
  *(_QWORD *)(a1 + 64) -= 0x8E38E38E38E38E39LL * (((char *)i - (char *)dest) >> 4);
  for ( j = &v16[144 * v17]; v16 != j; v16 += 144 )
  {
    v18 = *(_QWORD *)(a1 + 32);
    v19 = *(_DWORD *)(a1 + 12);
    v20 = *(_DWORD *)(a2 + 12);
    (*(void (__fastcall **)(__int64, char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v18 + 32LL))(
      v18,
      v16 + 64,
      v20,
      v19,
      1);
    sub_4A3700(v18, (__int64)(v16 + 72), v20, v19);
  }
  switch_dbctx(*(int *)(a1 + 8));
  sub_494890((__int64 *)(a1 + 56), dest, (__int64)ptr, (__int64)ptr + 144 * v31);
  v21 = (char *)ptr;
  *(_BYTE *)(a1 + 144) = 1;
  if ( v21 )
  {
    v22 = v31;
    if ( (_QWORD)v31 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[144 * v23];
        clear_tinfo_t(v24 + 64);
        v25 = *((void **)v24 + 5);
        if ( v25 )
        {
          *((_QWORD *)v24 + 6) = 0;
          qfree(v25);
        }
        v26 = *((void **)v24 + 2);
        if ( v26 )
        {
          *((_QWORD *)v24 + 3) = 0;
          qfree(v26);
        }
        ++v23;
        v21 = (char *)ptr;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v21);
  }
  return v32 - __readfsqword(0x28u);
}
