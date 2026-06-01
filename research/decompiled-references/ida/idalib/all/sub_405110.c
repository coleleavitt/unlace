unsigned __int64 __fastcall sub_405110(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
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
  v3 = (_QWORD *)(88 * a3 + *(_QWORD *)(a2 + 40));
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 88 * a3);
  switch_dbctx(*(int *)(a1 + 8));
  sub_7781C0(&ptr, *(_QWORD *)(a1 + 64));
  sub_778740(*(_QWORD *)(a1 + 64), "/");
  v5 = haystack;
  if ( v3[6] )
    v5 = (const char *)v3[5];
  sub_404AB0(a1, v5);
  sub_778740(*(_QWORD *)(a1 + 64), v5);
  *v4 = *v3;
  v4[1] = v3[1];
  if ( v4 + 2 != v3 + 2 )
  {
    v6 = v3[3];
    if ( v6 > 1 )
    {
      v15 = (const void *)v3[2];
      v16 = (void *)v4[2];
      if ( v4[4] < v6 )
      {
        v17 = (const void *)v3[2];
        v16 = (void *)qvector_reserve(v4 + 2, v4[2], v3[3], 1);
        v4[2] = v16;
        v15 = v17;
      }
      v4[3] = v6;
      memmove(v16, v15, v6 - 1);
      *(_BYTE *)(v4[2] + v6 - 1) = 0;
    }
    else
    {
      v4[3] = 0;
    }
  }
  if ( v4 + 5 != v3 + 5 )
  {
    v7 = v3[6];
    if ( v7 > 1 )
    {
      v13 = (const void *)v3[5];
      v14 = (void *)v4[5];
      if ( v4[7] < v7 )
      {
        v18 = (const void *)v3[5];
        v14 = (void *)qvector_reserve(v4 + 5, v4[5], v3[6], 1);
        v4[5] = v14;
        v13 = v18;
      }
      v4[6] = v7;
      memmove(v14, v13, v7 - 1);
      *(_BYTE *)(v4[5] + v7 - 1) = 0;
    }
    else
    {
      v4[6] = 0;
    }
  }
  if ( v4 + 8 != v3 + 8 )
  {
    v8 = v3[9];
    if ( v8 > 1 )
    {
      v11 = (const void *)v3[8];
      v12 = (void *)v4[8];
      if ( v4[10] < v8 )
      {
        v12 = (void *)qvector_reserve(v4 + 8, v4[8], v8, 1);
        v4[8] = v12;
      }
      v4[9] = v8;
      memmove(v12, v11, v8 - 1);
      *(_BYTE *)(v4[8] + v8 - 1) = 0;
    }
    else
    {
      v4[9] = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 76) )
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
      *(_QWORD *)(a1 + 32),
      v4,
      *v4,
      *(unsigned int *)(a2 + 12),
      *(unsigned int *)(a1 + 12),
      0);
  sub_77EDA0(*(_QWORD *)(a1 + 64), *v4, 1);
  v9 = haystack;
  if ( v20 )
    v9 = (const char *)ptr;
  sub_778740(*(_QWORD *)(a1 + 64), v9);
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
  }
  return v21 - __readfsqword(0x28u);
}
