void __fastcall sub_1EECB50(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  char *v16; // rbp
  _QWORD *v17; // rdx
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  _BYTE *v23; // rdi
  __int64 i; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+8h] [rbp-60h]
  _BYTE v27[88]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *a1;
  ptr = v27;
  v26 = 0x400000000LL;
  sub_1F332C0(v4, &ptr);
  v5 = (unsigned int)v26;
  v6 = *(unsigned int *)(a2 + 28);
  v7 = 0;
  v8 = (char *)ptr;
  *(_DWORD *)(a2 + 24) = 0;
  v9 = 8 * v5;
  v10 = v9 >> 3;
  v11 = v9 >> 3;
  if ( v9 >> 3 > v6 )
  {
    sub_2237220(a2 + 16, a2 + 32, v9 >> 3, 8);
    v11 = *(unsigned int *)(a2 + 24);
    v7 = 8 * v11;
    LODWORD(v11) = v10 + v11;
  }
  v12 = *(_QWORD *)(a2 + 16);
  v13 = v12 + v7;
  if ( v9 )
  {
    if ( (v13 >= (unsigned __int64)(v8 + 16) || (unsigned __int64)v8 >= v12 + v7 + 16) && v10 - 1 > 3 )
    {
      v14 = 0;
      do
      {
        *(__m128i *)(v13 + v14) = _mm_loadu_si128((const __m128i *)&v8[v14]);
        v14 += 16;
      }
      while ( v14 != 16 * (v10 >> 1) );
      v15 = 8 * (v10 & 0xFFFFFFFFFFFFFFFELL);
      v16 = &v8[v15];
      v17 = (_QWORD *)(v15 + v13);
      if ( v10 != (v10 & 0xFFFFFFFFFFFFFFFELL) )
        *v17 = *(_QWORD *)v16;
    }
    else
    {
      for ( i = 0; i != v9; i += 8 )
        *(_QWORD *)(v13 + i) = *(_QWORD *)&v8[i];
    }
  }
  *(_DWORD *)(a2 + 24) = v11;
  v18 = sub_1EE7490(*a1);
  v19 = *a1;
  *(_DWORD *)a2 = v18;
  v20 = sub_1EE7490(v19);
  v21 = *a1;
  *(_DWORD *)(a2 + 12) = v20;
  v22 = sub_1EE7490(v21);
  v23 = ptr;
  *(_DWORD *)(a2 + 4) = v22;
  if ( v23 != v27 )
    free(v23);
}
