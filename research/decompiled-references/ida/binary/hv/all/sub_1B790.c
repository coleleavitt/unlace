unsigned __int64 __fastcall sub_1B790(__int64 *a1, int a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdx
  char *v9; // rsi
  char *v10; // rax
  size_t v11; // r13
  void *v12; // rbx
  char *v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  char *v16; // rax
  void *v17; // rdi
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v23; // [rsp+20h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]

  v4 = *a1;
  v24 = __readfsqword(0x28u);
  v5 = a1[1];
  v23 = 0;
  ptr = nullptr;
  v6 = v4 + 72 * v5;
  if ( v6 != v4 )
  {
    v7 = v4;
    do
    {
      v11 = *(_QWORD *)(v7 + 8);
      v12 = nullptr;
      if ( v11 )
      {
        v12 = (void *)sub_96030(*(_QWORD *)(v7 + 8));
        memcpy(v12, *(const void **)v7, v11);
      }
      v8 = v23;
      v9 = (char *)ptr;
      if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(v23 + 1) )
      {
        ptr = (void *)sub_96080(&ptr, ptr, v23 + 1, 24);
        v8 = v23;
        v9 = (char *)ptr;
      }
      v7 += 72;
      v10 = &v9[24 * v8];
      *(_QWORD *)v10 = v12;
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
      *(_QWORD *)&v23 = v23 + 1;
    }
    while ( v6 != v7 );
  }
  sub_1B5C0((__int64)a1, a2, (int)&ptr, a3, a4);
  v13 = (char *)ptr;
  if ( ptr )
  {
    v14 = v23;
    if ( (_QWORD)v23 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[24 * v15];
        v17 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          j__free(v17);
          v13 = (char *)ptr;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v23 = 0;
    j__free(v13);
  }
  return v24 - __readfsqword(0x28u);
}

