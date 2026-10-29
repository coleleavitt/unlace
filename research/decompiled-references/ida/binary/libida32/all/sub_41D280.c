char *__fastcall sub_41D280(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r9
  char *v11; // rbp
  unsigned int v12; // r14d
  unsigned int *v13; // r15
  unsigned int *v14; // r13
  char *v15; // r15
  __int64 v16; // r13
  __int64 j; // r14
  __int64 v18; // r12
  __int64 v19; // rbx
  char *v20; // rax
  void *v21; // rdi
  int v23; // [rsp-4h] [rbp-98h]
  unsigned int i; // [rsp+0h] [rbp-94h]
  char *v25; // [rsp+4h] [rbp-90h]
  void *ptr; // [rsp+Ch] [rbp-88h] BYREF
  int v27[4]; // [rsp+14h] [rbp-80h]
  int v28; // [rsp+24h] [rbp-70h]
  int v29[4]; // [rsp+2Ch] [rbp-68h] BYREF
  int v30[4]; // [rsp+3Ch] [rbp-58h]
  int v31; // [rsp+4Ch] [rbp-48h]
  void *v32; // [rsp+54h] [rbp-40h]
  int v33; // [rsp+5Ch] [rbp-38h]
  int v34; // [rsp+64h] [rbp-30h]
  __int64 v35; // [rsp+6Ch] [rbp-28h]

  v5 = *(__int64 **)(a2 + 1480);
  v6 = *(_QWORD *)a3;
  v32 = (void *)__readfsqword(0x28u);
  *(_OWORD *)v27 = 0;
  ptr = nullptr;
  sub_41CBA0(v5, v5 + 213, a3, a4);
  *(_OWORD *)v29 = 0;
  v8 = operator new(0x18u);
  *(_QWORD *)(v8 + 8) = v6;
  *(_QWORD *)v8 = &ptr;
  v9 = _mm_loadl_epi64((const __m128i *)off_2AFE670);
  *(_DWORD *)(v8 + 16) = a4;
  *(_QWORD *)v29 = v8;
  *(__m128i *)v30 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_41A240);
  sub_418C60(a2, a3, (const __m128i *)v29);
  if ( *(_QWORD *)v30 )
    (*(void (__fastcall **)(int *, int *, __int64))v30)(v29, v29, 3);
  v11 = (char *)ptr;
  v25 = (char *)ptr + 32 * *(_QWORD *)v27;
  if ( v25 != ptr )
  {
    do
    {
      v12 = *(_DWORD *)v11;
      v13 = *((unsigned int **)v11 + 1);
      v14 = &v13[2 * *((_QWORD *)v11 + 2)];
      for ( i = *(_DWORD *)v11 - a4; v14 != v13; v13 += 2 )
      {
        sub_3FEAD0((__int64)v5, v12, *v13, 1);
        sub_3FEAD0((__int64)v5, i, a4 + *v13, 1);
      }
      v11 += 32;
    }
    while ( v25 != v11 );
    v11 = (char *)ptr;
    v15 = (char *)ptr + 32 * *(_QWORD *)v27;
    if ( v15 != ptr )
    {
      do
      {
        v16 = *((_QWORD *)v11 + 1);
        for ( j = v16 + 8LL * *((_QWORD *)v11 + 2); j != v16; v16 += 8 )
          sub_3FDEE0(
            v5,
            *(_DWORD *)v11,
            a4 + *(_DWORD *)v16,
            1,
            *(_BYTE *)(v16 + 4),
            v10,
            v23,
            v25,
            (__int64)ptr,
            v27[0],
            v27[2],
            v28,
            v29[0],
            v29[2],
            v30[0],
            v30[2],
            v31,
            (int)v32,
            v33,
            v34,
            v35);
        v11 += 32;
      }
      while ( v15 != v11 );
      v11 = (char *)ptr;
    }
  }
  if ( v11 )
  {
    v18 = *(_QWORD *)v27;
    if ( *(_QWORD *)v27 )
    {
      v19 = 0;
      do
      {
        v20 = &v11[32 * v19];
        v21 = *((void **)v20 + 1);
        if ( v21 )
        {
          *((_QWORD *)v20 + 2) = 0;
          qfree(v21);
          v11 = (char *)ptr;
        }
        ++v19;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)v27 = 0;
    qfree(v11);
  }
  return (char *)v32 - __readfsqword(0x28u);
}

