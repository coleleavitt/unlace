void __fastcall sub_20620F0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r14
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  char *v12; // rbx
  char *v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  char *v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  char *v23; // rbx
  char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __m128 ptr; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v29[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = a1 + 360;
  v5 = *(unsigned int *)(a1 + 376);
  v6 = *(_QWORD *)(a1 + 360);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (_QWORD *)(v6 + 56LL * v7);
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_2062080(&ptr, v8, (_QWORD *)(v6 + 56 * v5), v4, 1);
      v9 = ptr.m128_u64[0];
      goto LABEL_4;
    }
    if ( *v8 != -4096 )
    {
      v27 = 1;
      do
      {
        v7 = (v5 - 1) & (v27 + v7);
        v8 = (_QWORD *)(v6 + 56LL * v7);
        if ( a2 == *v8 )
          goto LABEL_3;
        ++v27;
      }
      while ( *v8 != -4096 );
    }
  }
  sub_2062080(&ptr, (_QWORD *)(v6 + 56LL * (unsigned int)v5), (_QWORD *)(v6 + 56LL * (unsigned int)v5), v4, 1);
  v9 = ptr.m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 360) + 56LL * *(unsigned int *)(a1 + 376));
  sub_2062080(&ptr, v10, v10, v4, 1);
  if ( ptr.m128_u64[0] == v9 )
    return;
  v11 = *(unsigned int *)(v9 + 16);
  v12 = *(char **)(v9 + 8);
  v13 = v29;
  ptr.m128_u64[1] = 0x1000000000LL;
  v14 = v29;
  v15 = 8 * v11;
  ptr.m128_u64[0] = (unsigned __int64)v29;
  v16 = &v12[v15];
  v17 = v15 >> 3;
  v18 = v15 >> 3;
  if ( (unsigned __int64)v15 > 0x80 )
  {
    sub_2237220(&ptr, v29, v15 >> 3, 8);
    v14 = (_BYTE *)ptr.m128_u64[0];
    v13 = (char *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]);
    LODWORD(v18) = v17 + ptr.m128_i32[2];
    v17 = (unsigned int)(v17 + ptr.m128_i32[2]);
    if ( v12 != v16 )
    {
LABEL_7:
      v19 = (unsigned __int64)(v16 - v12 - 8) >> 3;
      if ( (v12 >= v13 + 16 || v13 >= v12 + 16) && (v19 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
      {
        v20 = v19 + 1;
        v21 = 0;
        do
        {
          *(__m128i *)&v13[v21] = _mm_loadu_si128((const __m128i *)&v12[v21]);
          v21 += 16;
        }
        while ( v21 != 16 * (v20 >> 1) );
        v22 = 8 * (v20 & 0xFFFFFFFFFFFFFFFELL);
        v23 = &v12[v22];
        v24 = &v13[v22];
        if ( v20 != (v20 & 0xFFFFFFFFFFFFFFFELL) )
          *(_QWORD *)v24 = *(_QWORD *)v23;
      }
      else
      {
        do
        {
          v26 = *(_QWORD *)v12;
          v12 += 8;
          v13 += 8;
          *((_QWORD *)v13 - 1) = v26;
        }
        while ( v16 != v12 );
      }
      v14 = (_BYTE *)ptr.m128_u64[0];
    }
  }
  else if ( v12 != v16 )
  {
    goto LABEL_7;
  }
  ptr.m128_i32[2] = v18;
  v25 = sub_20B52A0(*(_QWORD *)(a1 + 8), v14, v17, 0, 1);
  sub_20BCE60(a2, 7, v25);
  if ( (_BYTE *)ptr.m128_u64[0] != v29 )
    free((void *)ptr.m128_u64[0]);
}
