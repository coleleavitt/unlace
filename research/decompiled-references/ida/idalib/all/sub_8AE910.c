__int64 __fastcall sub_8AE910(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int *v3; // r10
  int *v4; // r13
  int *v5; // r15
  __int64 v6; // rax
  const char *v7; // rbx
  int v8; // edx
  __int16 v9; // ax
  __int64 v10; // rax
  __m128 v12; // xmm0
  void *v13; // rdi
  __m128i v14; // xmm1
  void *v15; // rax
  void *v16; // [rsp+20h] [rbp-130h] BYREF
  __m128i v17; // [rsp+28h] [rbp-128h] BYREF
  void *ptr; // [rsp+40h] [rbp-110h] BYREF
  __int128 v19; // [rsp+48h] [rbp-108h]
  int v20; // [rsp+60h] [rbp-F0h] BYREF
  __int16 v21; // [rsp+64h] [rbp-ECh]
  __int64 v22; // [rsp+68h] [rbp-E8h]
  __int64 v23; // [rsp+70h] [rbp-E0h]
  int v24; // [rsp+80h] [rbp-D0h]
  __int16 v25; // [rsp+84h] [rbp-CCh]
  unsigned __int64 v26; // [rsp+118h] [rbp-38h]

  v2 = 3LL * *(_QWORD *)(a1 + 472);
  v26 = __readfsqword(0x28u);
  v3 = *(int **)(a1 + 464);
  v4 = (int *)((char *)v3 + 2 * v2);
  v5 = v3;
  if ( v3 == v4 )
    return 0;
  while ( 1 )
  {
    v16 = nullptr;
    ptr = nullptr;
    v17 = 0;
    v19 = 0;
    sub_35A790((char **)&ptr);
    v7 = haystack;
    if ( (_QWORD)v19 )
      v7 = (const char *)ptr;
    v8 = *v5;
    v9 = *((_WORD *)v5 + 2);
    v22 = 0;
    v24 = v8;
    v25 = v9;
    v20 = v8;
    v21 = v9;
    v23 = 0;
    v10 = sub_8AD170(a1, (__int64)&v20);
    if ( v10 )
      break;
    if ( (debug & 0x200) != 0 )
      sub_3879F0();
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    if ( v16 )
    {
      v17.m128i_i64[0] = 0;
      v5 = (int *)((char *)v5 + 6);
      qfree(v16);
      if ( v4 == v5 )
        return 0;
    }
    else
    {
LABEL_11:
      v5 = (int *)((char *)v5 + 6);
      if ( v4 == v5 )
        return 0;
    }
  }
  v6 = *(int *)(v10 + 12);
  if ( (int)v6 >= 7 )
    v6 = 0;
  get_borrowed_license(0, 0, (__int64)&v16, off_2C82080[v6], v7);
  if ( !v17.m128i_i64[0] )
  {
    if ( (debug & 0x200) != 0 )
      sub_3879F0();
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    if ( v16 )
    {
      v17.m128i_i64[0] = 0;
      qfree(v16);
    }
    goto LABEL_11;
  }
  if ( (debug & 0x200) != 0 )
    sub_3879F0();
  v12 = _mm_loadh_ps((const double *)&v17.m128i_i64[1]);
  v13 = *(void **)a2;
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v16;
  v15 = ptr;
  *(__m128 *)(a2 + 8) = v12;
  v16 = v13;
  v17 = v14;
  if ( v15 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v15);
    v13 = v16;
  }
  if ( v13 )
  {
    v17.m128i_i64[0] = 0;
    qfree(v13);
  }
  return 1;
}
