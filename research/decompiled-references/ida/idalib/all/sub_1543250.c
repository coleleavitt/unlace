void __fastcall sub_1543250(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  _DWORD *v11; // rax
  __int64 v12; // r11
  _DWORD *v13; // r14
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  _BYTE *v18; // rcx
  const __m128i *v19; // r10
  __int64 v20; // rax
  __m128i *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  void *v27; // rdi
  __int64 v28; // [rsp+0h] [rbp-1F8h]
  signed __int64 v30; // [rsp+18h] [rbp-1E0h]
  __int64 v31; // [rsp+18h] [rbp-1E0h]
  int v32; // [rsp+2Ch] [rbp-1CCh] BYREF
  void *ptr; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-1C0h]
  _BYTE v35[440]; // [rsp+40h] [rbp-1B8h] BYREF

  v5 = a2[1];
  v6 = a1[3];
  v7 = *a2;
  v8 = a1[8];
  ptr = v35;
  v9 = a1[7];
  v34 = 0x1000000000LL;
  v10 = (4 * v8) >> 2;
  v11 = (_DWORD *)v9;
  if ( 4 * v8 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v10 >> 1;
        v13 = &v11[v10 >> 1];
        if ( (unsigned int)(v7 - v6) <= *v13 )
          break;
        v11 = v13 + 1;
        v10 = v10 - v12 - 1;
        if ( v10 <= 0 )
          goto LABEL_4;
      }
      v10 >>= 1;
    }
    while ( v12 );
  }
LABEL_4:
  v14 = ((__int64)v11 - v9) >> 2;
  v15 = v5 + v7 - v6;
  v16 = v14;
  v17 = v15;
  v28 = a1[5] + 24LL * (unsigned int)v14;
  if ( (_DWORD)v14 != (_DWORD)v8 && v15 > *(_DWORD *)(v9 + 4LL * (unsigned int)v14) )
  {
    v18 = v35;
    v19 = (const __m128i *)(a1[5] + 24LL * (unsigned int)v14);
    v20 = 0;
    while ( 1 )
    {
      ++v16;
      v21 = (__m128i *)&v18[24 * v20];
      *v21 = _mm_loadu_si128(v19);
      v21[1].m128i_i64[0] = v19[1].m128i_i64[0];
      v20 = (unsigned int)(v34 + 1);
      LODWORD(v34) = v34 + 1;
      if ( (_DWORD)v8 == v16 || v17 <= *(_DWORD *)(a1[7] + 4LL * v16) )
        break;
      v19 = (const __m128i *)(a1[5] + 24LL * v16);
      v22 = v20 + 1;
      v18 = ptr;
      if ( v20 + 1 > (unsigned __int64)HIDWORD(v34) )
      {
        if ( ptr > v19 || v19 >= (const __m128i *)((char *)ptr + 24 * v20) )
        {
          v31 = a1[5] + 24LL * v16;
          sub_2237220(&ptr, v35, v22, 24);
          v18 = ptr;
          v20 = (unsigned int)v34;
          v19 = (const __m128i *)v31;
        }
        else
        {
          v30 = (char *)v19 - (_BYTE *)ptr;
          sub_2237220(&ptr, v35, v22, 24);
          v18 = ptr;
          v20 = (unsigned int)v34;
          v19 = (const __m128i *)((char *)ptr + v30);
        }
      }
    }
  }
  v23 = sub_1542980(a1[1], (__int64)&ptr, &v32);
  if ( v32 && v32 != (_DWORD)v34 )
  {
    v24 = a1[5];
    v25 = v32 - 1431655765 * (unsigned int)((v28 - v24) >> 3) - 1;
    v26 = (unsigned int)(*(_DWORD *)(a1[7] + 4 * v25)
                       + *(_DWORD *)(v24 + 24 * v25 + 4)
                       - *(_DWORD *)(a1[7] + 0xFFFFFFFEAAAAAAACLL * (unsigned int)((v28 - v24) >> 3)));
    if ( v26 > a2[1] )
      v26 = a2[1];
    a2[1] = v26;
  }
  if ( v23 > 1 )
  {
    sub_1C53EF0(*(_QWORD *)(a1[1] + 96), v23 & 0xFFFFFFFFFFFFFFFELL, a3);
    v27 = ptr;
    if ( ptr == v35 )
      return;
  }
  else
  {
    v27 = ptr;
    if ( ptr == v35 )
      return;
  }
  free(v27);
}
