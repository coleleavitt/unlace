void __fastcall sub_1F57A40(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  char *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  _BYTE *v16; // rdi
  __int64 i; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  _BYTE v20[56]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *a1;
  ++*(_DWORD *)(v4 + 24);
  ptr = v20;
  v19 = 0x400000000LL;
  sub_1F332C0(v4, (__int64)&ptr);
  v5 = (char *)ptr;
  v6 = 8LL * (unsigned int)v19;
  v7 = v6 >> 3;
  if ( v6 )
  {
    if ( (a2 >= (unsigned __int64)ptr || (unsigned __int64)ptr >= a2 + 32) && v7 - 1 > 3 )
    {
      v8 = 0;
      do
      {
        *(__m128i *)(a2 + v8 + 16) = _mm_loadu_si128((const __m128i *)&v5[v8]);
        v8 += 16;
      }
      while ( v8 != 16 * (v7 >> 1) );
      v9 = 8 * (v7 & 0xFFFFFFFFFFFFFFFELL);
      v10 = &v5[v9];
      v11 = (_QWORD *)(a2 + v9 + 16);
      if ( v7 != (v7 & 0xFFFFFFFFFFFFFFFELL) )
        *v11 = *(_QWORD *)v10;
    }
    else
    {
      for ( i = 0; i != v6; i += 8 )
        *(_QWORD *)(a2 + i + 16) = *(_QWORD *)&v5[i];
    }
  }
  v12 = *a1;
  v13 = *(_QWORD *)(*a1 + 8);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v13 + 13072))-- - 8);
  *(_QWORD *)(a2 + 8) = v14;
  v15 = sub_1EE7490(v12);
  v16 = ptr;
  *(_DWORD *)(a2 + 4) = v15;
  if ( v16 != v20 )
    free(v16);
}
