void __fastcall sub_69BB30(unsigned int *a1, __int64 a2)
{
  __int64 v3; // r14
  __m128i *v4; // rbx
  __m128i *v5; // rcx
  const __m128i *i; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const __m128i *v14; // rdx
  const __m128i *v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  const __m128i *v18; // rdx
  unsigned int v19; // esi
  __m128i *v20; // r13
  _QWORD *v21; // rdi
  _QWORD *v22; // rbp
  _QWORD *v23; // r15
  char *v24; // rdi
  void *v25; // rdi
  unsigned __int64 *v26; // rdi
  unsigned int v27; // ebp
  unsigned __int64 v28; // rdx
  unsigned int v29; // esi
  unsigned int v30; // esi
  unsigned int v31; // edi
  __int64 v32; // r8
  __m128i *v33; // [rsp+8h] [rbp-50h]
  __int64 v34[8]; // [rsp+18h] [rbp-40h] BYREF

  v33 = (__m128i *)(a1 + 4);
  v3 = sub_25D5F70(a1, a1 + 4, a2, 104, v34);
  v4 = (__m128i *)(*(_QWORD *)a1 + 104LL * a1[2]);
  if ( *(__m128i **)a1 == v4 )
    goto LABEL_27;
  v5 = (__m128i *)(v3 + 40);
  for ( i = (const __m128i *)(*(_QWORD *)a1 + 40LL); ; i = v14 )
  {
    v16 = i[-3].m128i_i64[1];
    v17 = _mm_loadu_si128(i - 2);
    v5[-1].m128i_i64[0] = (__int64)v5;
    v5[-3].m128i_i64[1] = v16;
    v5[-2] = v17;
    v18 = (const __m128i *)i[-1].m128i_i64[0];
    if ( v18 != i )
    {
      v5[-1].m128i_i64[0] = (__int64)v18;
      v5->m128i_i64[0] = i->m128i_i64[0];
LABEL_4:
      v7 = i[-1].m128i_i64[1];
      goto LABEL_5;
    }
    v7 = i[-1].m128i_i64[1];
    v19 = v7 + 1;
    if ( (unsigned int)(v7 + 1) >= 8 )
    {
      v5->m128i_i64[0] = i->m128i_i64[0];
      *(__int64 *)((char *)&v5->m128i_i64[-1] + v19) = *(__int64 *)((char *)&i->m128i_i64[-1] + v19);
      v28 = (unsigned __int64)&v5->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      v29 = ((_DWORD)v5 - v28 + v19) & 0xFFFFFFF8;
      if ( v29 >= 8 )
      {
        v30 = v29 & 0xFFFFFFF8;
        v31 = 0;
        do
        {
          v32 = v31;
          v31 += 8;
          *(_QWORD *)(v28 + v32) = *(_QWORD *)((char *)i - ((char *)v5 - v28) + v32);
        }
        while ( v31 < v30 );
      }
      goto LABEL_4;
    }
    if ( (v19 & 4) != 0 )
    {
      v5->m128i_i32[0] = i->m128i_i32[0];
      *(__int32 *)((char *)&v5->m128i_i32[-1] + v19) = *(__int32 *)((char *)&i->m128i_i32[-1] + v19);
      v7 = i[-1].m128i_i64[1];
    }
    else if ( (_DWORD)v7 != -1 )
    {
      v5->m128i_i8[0] = i->m128i_i8[0];
      if ( (v19 & 2) == 0 )
        goto LABEL_4;
      *(__int16 *)((char *)&v5->m128i_i16[-1] + v19) = *(__int16 *)((char *)&i->m128i_i16[-1] + v19);
      v7 = i[-1].m128i_i64[1];
    }
LABEL_5:
    v5[-1].m128i_i64[1] = v7;
    v8 = i[1].m128i_i64[0];
    v5 = (__m128i *)((char *)v5 + 104);
    i[-1].m128i_i64[0] = (__int64)i;
    i[-1].m128i_i64[1] = 0;
    i->m128i_i8[0] = 0;
    v5[-6].m128i_i64[1] = v8;
    v9 = i[1].m128i_i64[1];
    i[1].m128i_i64[0] = 0;
    v5[-5].m128i_i64[0] = v9;
    v10 = i[2].m128i_i64[0];
    i[1].m128i_i64[1] = 0;
    v5[-5].m128i_i64[1] = v10;
    v11 = i[2].m128i_i64[1];
    i[2].m128i_i64[0] = 0;
    v5[-4].m128i_i64[0] = v11;
    v12 = i[3].m128i_i64[0];
    i[2].m128i_i64[1] = 0;
    v5[-4].m128i_i64[1] = v12;
    v13 = i[3].m128i_i64[1];
    i[3].m128i_i64[0] = 0;
    v5[-3].m128i_i64[0] = v13;
    v14 = (const __m128i *)((char *)i + 104);
    v15 = i + 4;
    v15[-1].m128i_i64[1] = 0;
    if ( v4 == v15 )
      break;
  }
  v20 = *(__m128i **)a1;
  v4 = (__m128i *)(*(_QWORD *)a1 + 104LL * a1[2]);
  if ( *(__m128i **)a1 != v4 )
  {
    do
    {
      v21 = (_QWORD *)v4[-2].m128i_i64[1];
      v22 = (_QWORD *)v4[-1].m128i_i64[0];
      v4 = (__m128i *)((char *)v4 - 104);
      v23 = v21;
      if ( v22 != v21 )
      {
        do
        {
          v24 = (char *)v23[3];
          if ( v24 != (char *)(v23 + 5) )
            operator delete(v24, v23[5] + 1LL);
          v23 += 8;
        }
        while ( v22 != v23 );
        v21 = (_QWORD *)v4[5].m128i_i64[0];
      }
      if ( v21 )
        operator delete(v21, v4[6].m128i_i64[0] - (_QWORD)v21);
      v25 = (void *)v4[3].m128i_i64[1];
      if ( v25 )
        operator delete(v25, v4[4].m128i_i64[1] - (_QWORD)v25);
      v26 = (unsigned __int64 *)v4[1].m128i_i64[1];
      if ( v26 != &v4[2].m128i_u64[1] )
        operator delete(v26, v4[2].m128i_i64[1] + 1);
    }
    while ( v20 != v4 );
    v4 = *(__m128i **)a1;
  }
LABEL_27:
  v27 = v34[0];
  if ( v33 != v4 )
    free(v4);
  *(_QWORD *)a1 = v3;
  a1[3] = v27;
}

