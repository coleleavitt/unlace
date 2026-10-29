void __fastcall sub_6BEDE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 *v6; // rax
  __int64 v7; // r13
  __int64 *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  _BYTE *v21; // rdi
  __int64 v22; // rax
  unsigned __int64 i; // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+8h] [rbp-70h]
  _BYTE v26[104]; // [rsp+10h] [rbp-68h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 33 > 3 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x10 )
    {
      ptr = v26;
      v25 = 0x800000000LL;
      sub_7BFD20(a2, &ptr);
      v14 = (unsigned int)v25;
      v15 = *(unsigned int *)(a3 + 8);
      v16 = ptr;
      v17 = (unsigned int)v25 + v15;
      v18 = 8LL * (unsigned int)v25;
      if ( *(unsigned int *)(a3 + 12) < v17 )
      {
        sub_25D6060(a3, a3 + 16, v17, 8);
        v15 = *(unsigned int *)(a3 + 8);
      }
      v19 = *(_QWORD *)a3 + 8 * v15;
      if ( v18 )
      {
        if ( v18 <= 24 || (_QWORD *)v19 == v16 + 1 )
        {
          for ( i = 0; i != v18; i += 8LL )
            *(_QWORD *)(v19 + i) = v16[i / 8];
        }
        else
        {
          v20 = 0;
          do
          {
            *(__m128i *)(v19 + v20 * 8) = _mm_loadu_si128((const __m128i *)&v16[v20]);
            v20 += 2;
          }
          while ( v20 != 2 * (v14 >> 1) );
          if ( (v14 & 0xFFFFFFFFFFFFFFFELL) != v14 )
            *(_QWORD *)(v19 + 8 * (v14 & 0xFFFFFFFFFFFFFFFELL)) = v16[v14 & 0xFFFFFFFFFFFFFFFELL];
        }
        LODWORD(v15) = *(_DWORD *)(a3 + 8);
      }
      v21 = ptr;
      *(_DWORD *)(a3 + 8) = v15 + v14;
      if ( v21 != v26 )
        free(v21);
    }
  }
  else
  {
    sub_6BE420(a1, a2);
    v5 = v4;
    v6 = sub_6BE420(a1, a2);
    v7 = v5 - (_QWORD)v6;
    v8 = v6;
    v9 = *(unsigned int *)(a3 + 8);
    v10 = v7 >> 3;
    v11 = (v7 >> 3) + v9;
    if ( *(unsigned int *)(a3 + 12) < v11 )
    {
      sub_25D6060(a3, a3 + 16, v11, 8);
      v9 = *(unsigned int *)(a3 + 8);
    }
    v12 = *(_QWORD *)a3 + 8 * v9;
    if ( v7 > 0 )
    {
      if ( v7 <= 24 || (__int64 *)v12 == v8 + 1 )
      {
        v22 = 0;
        do
        {
          *(_QWORD *)(v12 + 8 * v22) = v8[v22];
          ++v22;
        }
        while ( (__int64)(v10 - v22) > 0 );
      }
      else
      {
        v13 = 0;
        do
        {
          *(__m128i *)(v12 + v13 * 8) = _mm_loadu_si128((const __m128i *)&v8[v13]);
          v13 += 2;
        }
        while ( 2 * (v10 >> 1) != v13 );
        if ( (v10 & 1) != 0 )
          *(_QWORD *)(v12 + 8 * (v10 & 0xFFFFFFFFFFFFFFFELL)) = v8[v10 & 0xFFFFFFFFFFFFFFFELL];
      }
      LODWORD(v9) = *(_DWORD *)(a3 + 8);
    }
    *(_DWORD *)(a3 + 8) = v9 + v10;
  }
}

