unsigned __int64 __fastcall sub_1E50(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  int *v9; // r12
  unsigned __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // rax
  int *v13; // rdx
  unsigned int v14; // r14d
  int v15; // r15d
  int *v16; // r15
  int v17; // ebx
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdi
  unsigned __int8 v21; // dl
  __int64 v22; // rdi
  unsigned int v24; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a2 + 84);
  v24 = 0;
  qlseek(a1, v3, 0);
  lreadbytes(a1, &v24, 4, *(unsigned __int8 *)(a2 + 88));
  v4 = qalloc(v24 + 1);
  if ( !v4 )
    sub_1870((__int64)"Unable to allocate string table for %u bytes\n", v24 + 1);
  v5 = v4;
  qlseek(a1, *(unsigned int *)(a2 + 84), 0);
  lreadbytes(a1, v5, v24, 0);
  *(_BYTE *)(v5 + v24) = 0;
  v6 = *(unsigned int *)(a2 + 80);
  v7 = *(_DWORD *)(a2 + 16) / 0xCu;
  *(_DWORD *)(a2 + 48) = v7;
  v25 = v7;
  if ( !(unsigned __int8)sub_1DA0(a1, &v25, 0xCu, v6, -1) )
    sub_1870((__int64)"%s is incorrect, maximum possible value is %u%s", "Number of symbols", v25, "");
  v8 = qcalloc(*(unsigned int *)(a2 + 48), 12);
  v9 = (int *)v8;
  if ( !v8 )
    sub_1870((__int64)"Unable to allocate symbol table for %u entries\n", *(_DWORD *)(a2 + 48));
  v10 = v8;
  v11 = 0;
  qlseek(a1, *(unsigned int *)(a2 + 80), 0);
  if ( v9 < &v9[3 * *(unsigned int *)(a2 + 48)] )
  {
    do
    {
      lreadbytes(a1, v10, 4, *(unsigned __int8 *)(a2 + 88));
      lreadbytes(a1, v10 + 4, 1, *(unsigned __int8 *)(a2 + 88));
      lreadbytes(a1, v10 + 5, 1, *(unsigned __int8 *)(a2 + 88));
      lreadbytes(a1, v10 + 6, 2, *(unsigned __int8 *)(a2 + 88));
      lreadbytes(a1, v10 + 8, 4, *(unsigned __int8 *)(a2 + 88));
      if ( *(_BYTE *)(v10 + 4) == 1 )
        ++v11;
      v12 = *(unsigned int *)(a2 + 48);
      v10 += 12LL;
      v13 = &v9[3 * v12];
    }
    while ( v10 < (unsigned __int64)v13 );
    v14 = *(_DWORD *)(a2 + 68);
    if ( v11 )
    {
      v15 = 4 * v11;
      add_segm(0, v14, v15 + v14, "extern", "XTRN", 32);
      v12 = *(unsigned int *)(a2 + 48);
      *(_QWORD *)(a2 + 64) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(*(_DWORD *)(a2 + 68) + v15)).m128i_u64[0];
      v13 = &v9[3 * v12];
    }
    if ( v9 < v13 )
    {
      v16 = v9;
      v17 = 0;
      do
      {
        v21 = *((_BYTE *)v16 + 4);
        if ( v21 <= 0x1Fu )
        {
          if ( v21 == 1 )
          {
            v22 = v14 + 4 * v17;
            v16[2] = v22;
            if ( getseg(v22) )
              put_dword((unsigned int)v16[2], 0);
            ++v17;
          }
          if ( getseg((unsigned int)v16[2]) )
          {
            v18 = *v16;
            v19 = *((unsigned __int8 *)v16 + 4);
            v20 = (unsigned int)v16[2];
            if ( (unsigned int)v18 >= v24 )
              sub_1600(
                (__int64)"%08X: type=0x%02X other=0x%02X desc=0x%04X: bad str offset %08X\n",
                v20,
                v19,
                *((char *)v16 + 5),
                *((__int16 *)v16 + 3),
                v18);
            else
              set_name(v20, v5 + v18, (v19 & 1) == 0 ? 1285 : 1283);
            v12 = *(unsigned int *)(a2 + 48);
          }
          else
          {
            v12 = *(unsigned int *)(a2 + 48);
          }
        }
        v16 += 3;
      }
      while ( v16 < &v9[3 * v12] );
    }
  }
  *(_QWORD *)(a2 + 40) = v5;
  *(_QWORD *)(a2 + 32) = v9;
  return v26 - __readfsqword(0x28u);
}

