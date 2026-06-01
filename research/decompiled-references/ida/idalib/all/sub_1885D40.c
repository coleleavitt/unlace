void __fastcall sub_1885D40(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // edi
  const void *v15; // rsi
  _BYTE *v16; // r13
  _DWORD **v17; // rbx
  unsigned __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rsi
  int v25; // esi
  _BYTE *v26; // [rsp+10h] [rbp-68h] BYREF
  __int64 v27; // [rsp+18h] [rbp-60h]
  _BYTE v28[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 3592) )
  {
    sub_1884DF0(a1, a2, a3, a4, a5, a6);
    v9 = *(unsigned int *)(a1 + 3640);
    if ( !(_DWORD)v9 )
      return;
  }
  else
  {
    v9 = *(unsigned int *)(a1 + 3640);
    if ( !(_DWORD)v9 )
      return;
  }
  v27 = 0x400000000LL;
  v26 = v28;
  if ( v9 > 4 )
  {
    sub_2237220(&v26, v28, v9, 8);
    v9 = *(unsigned int *)(a1 + 3640);
    v11 = (unsigned int)v27;
    v12 = (unsigned int)v27;
    if ( v9 <= (unsigned int)v27 )
      v12 = *(unsigned int *)(a1 + 3640);
    if ( v12 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)&v26[v21];
        v23 = (__int64 *)(v21 + *(_QWORD *)(a1 + 3632));
        v21 += 8;
        v24 = *v23;
        *v23 = *v22;
        *v22 = v24;
      }
      while ( 8 * v12 != v21 );
    }
    v10 = v26;
    if ( v9 <= v11 )
    {
      if ( v9 < v11 )
      {
        v25 = v9;
        v16 = &v26[8 * v12];
        if ( v16 != &v26[8 * v11] )
        {
          memcpy((void *)(*(_QWORD *)(a1 + 3632) + 8 * v9), v16, 8 * v11 - 8 * v12);
          v10 = v26;
          v25 = *(_DWORD *)(a1 + 3640);
          v16 = &v26[8 * v12];
        }
        LODWORD(v27) = v12;
        *(_DWORD *)(a1 + 3640) = v25 + v11 - v9;
      }
      else
      {
        v16 = &v26[8 * v11];
      }
      goto LABEL_10;
    }
  }
  else
  {
    v10 = v28;
    v11 = 0;
    v12 = 0;
  }
  v13 = *(_QWORD *)(a1 + 3632);
  v14 = v11;
  v15 = (const void *)(v13 + 8 * v12);
  if ( v15 != (const void *)(8 * v9 + v13) )
  {
    memcpy(&v10[8 * v11], v15, 8 * v9 - 8 * v12);
    v14 = v27;
    v10 = v26;
  }
  *(_DWORD *)(a1 + 3640) = v12;
  LODWORD(v27) = v14 + v9 - v11;
  v16 = &v10[8 * (unsigned int)v27];
LABEL_10:
  if ( v10 != v16 )
  {
    v17 = (_DWORD **)v10;
    do
    {
      v19 = (__int64)*v17;
      sub_1885C80((__int64 *)a1, *v17, (*v17)[6], a7, a8);
      v20 = *(_QWORD *)(sub_B8C1B0(v19 + 72) + 16);
      if ( (v20 & 4) != 0 )
        v18 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v18 = v20 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
        v18 -= 64LL;
      if ( (unsigned int)sub_B97260(v18) != 4 )
        sub_17A59F0(a1);
      ++v17;
    }
    while ( v16 != (_BYTE *)v17 );
    v16 = v26;
  }
  if ( v16 != v28 )
    free(v16);
}
