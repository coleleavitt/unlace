void *__fastcall sub_13C2050(__m128 *a1, size_t *a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rbp
  unsigned __int64 v12; // rsi
  size_t *v13; // rax
  unsigned __int64 v14; // rsi
  _QWORD *v16; // r12
  char *v17; // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r13
  _QWORD *v21; // rax
  size_t *v22; // [rsp+8h] [rbp-40h] BYREF
  void *v23[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = (unsigned __int64 *)a1[38].m128_u64[1];
  v3 = (unsigned __int64 *)a1[38].m128_u64[0];
  v22 = a2;
  if ( v3 == v2 )
    goto LABEL_14;
  v4 = ((char *)v2 - (char *)v3) >> 4;
  if ( !(_DWORD)v4 )
    goto LABEL_14;
  v6 = (__int64)&v3[2 * (unsigned int)(v4 - 1) + 2];
  while ( 2 )
  {
    v7 = *v3;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( !v8 )
        break;
      v7 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v8 & 4) == 0 || !v7 )
        goto LABEL_8;
    }
    v7 = 0;
LABEL_8:
    v9 = (unsigned __int64)a2;
    do
    {
      v10 = *(_QWORD *)(v9 + 8);
      if ( !v10 )
      {
        if ( v7 )
          goto LABEL_13;
        return (void *)v3[1];
      }
      v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v10 & 4) != 0 && v9 );
    if ( v7 == v9 )
      return (void *)v3[1];
LABEL_13:
    v3 += 2;
    if ( (unsigned __int64 *)v6 != v3 )
      continue;
    break;
  }
LABEL_14:
  sub_13BED30(v23, v22, a1[2].m128_i64[1]);
  v11 = v23[0];
  if ( !v23[0] )
    return v11;
  v12 = a1[38].m128_u64[1];
  if ( v12 != a1[39].m128_u64[0] )
  {
    v13 = v22;
    *(void **)(v12 + 8) = v23[0];
    v14 = v12 + 16;
    *(_QWORD *)(v14 - 16) = v13;
    a1[38].m128_u64[1] = v14;
    return v11;
  }
  sub_13C1DC0(a1 + 38, (char *)v12, &v22, v23);
  v16 = v23[0];
  v11 = *(void **)(a1[38].m128_u64[1] - 8);
  if ( !v23[0] )
    return v11;
  v17 = *((char **)v23[0] + 2);
  if ( *((_DWORD *)v23[0] + 7) )
  {
    v18 = *((_DWORD *)v23[0] + 6);
    if ( v18 )
    {
      v19 = 0;
      v20 = 8LL * (unsigned int)(v18 - 1) + 8;
      do
      {
        v21 = *(_QWORD **)&v17[v19];
        if ( v21 && v21 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v17[v19], *v21 + 25LL, 8);
          v17 = (char *)v16[2];
        }
        v19 += 8;
      }
      while ( v19 != v20 );
    }
  }
  free(v17);
  if ( *v16 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  operator delete(v16, 0x28u);
  return v11;
}
