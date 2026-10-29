void __fastcall sub_181D200(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  const char *v8; // rdx
  size_t v9; // rcx
  unsigned int *v10; // rdx
  __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v21[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v16 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v17 = *v16;
  v18 = *v16 + 8LL * *((unsigned int *)v16 + 2);
  if ( *v16 >= v18 )
  {
    if ( v17 == v18 )
      goto LABEL_2;
    while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 68 )
    {
      v18 += 8LL;
      if ( v17 == v18 )
        goto LABEL_2;
    }
LABEL_14:
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xD49u, 0);
    v20 = a3[1].m128i_i64[1];
    sub_1587DB0((__int64)v21, &v20);
    sub_15F7200(v21);
    return;
  }
  v19 = *v16;
  while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 68 )
  {
    v19 += 8LL;
    if ( v18 == v19 )
      goto LABEL_2;
  }
  if ( v18 != v19 )
    goto LABEL_14;
LABEL_2:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    BUG();
  v7 = *(_QWORD *)(a2 + 40);
  if ( (v7 & 7) != 0 )
  {
    v11 = sub_181C7E0(a1, a3, &byte_22F0C30, 0);
    if ( v11 )
LABEL_7:
      sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
  }
  else
  {
    v8 = &byte_22F0C30;
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9 )
    {
      v10 = *(unsigned int **)(v9 + 16);
      v9 = *v10;
      v8 = (const char *)(v10 + 4);
    }
    v11 = sub_181C7E0(a1, a3, v8, v9);
    if ( v11 )
      goto LABEL_7;
  }
}
