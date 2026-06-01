unsigned __int64 __fastcall sub_46CE40(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  char *v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  char *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  bool v22; // cf
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  char *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __m128i v30; // xmm0
  __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v3 = a1[1];
  v33 = __readfsqword(0x28u);
  v31 = 0;
  v32 = 0;
  if ( a2 < v3 )
  {
    v11 = a2;
    do
    {
      v12 = *a1 + 24 * v11;
      v13 = *(void **)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        qfree(v13);
      }
      ++v11;
    }
    while ( v3 != v11 );
    a1[1] = a2;
  }
  else
  {
    if ( v3 >= a2 )
      return v33 - __readfsqword(0x28u);
    v5 = (char *)*a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v31 >= *a1 && &v31 < (__int64 *)&v5[24 * v6] )
    {
      if ( v6 >= a2 )
        goto LABEL_7;
      v23 = qvector_reserve(a1, 0, a2, 24);
      v24 = a1[1];
      v25 = a1[2];
      a1[2] = v6;
      v26 = (char *)*a1;
      v27 = v23;
      v28 = v24 - 1;
      if ( v28 >= 0 )
      {
        do
        {
          v29 = *(_QWORD *)v26;
          v30 = _mm_loadu_si128((const __m128i *)(v26 + 8));
          v23 += 24;
          v26 += 24;
          *((_QWORD *)v26 - 3) = 0;
          *(_QWORD *)(v23 - 24) = v29;
          *(__m128i *)(v23 - 16) = v30;
          *((_QWORD *)v26 - 1) = 0;
          v22 = v28-- == 0;
        }
        while ( !v22 );
        v26 = (char *)*a1;
      }
      qfree(v26);
      a1[2] = v25;
      v3 = a1[1];
      v5 = (char *)v27;
      *a1 = v27;
      if ( v3 < a2 )
      {
LABEL_7:
        v7 = 24 * v3;
        while ( 1 )
        {
          v8 = &v5[v7];
          ++v3;
          v7 += 24;
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          if ( a2 == v3 )
            break;
          v5 = (char *)*a1;
        }
      }
LABEL_10:
      a1[1] = a2;
      return v33 - __readfsqword(0x28u);
    }
    if ( v6 < a2 )
    {
      v14 = qvector_reserve(a1, 0, a2, 24);
      v15 = a1[1];
      v16 = a1[2];
      a1[2] = v6;
      v17 = (char *)*a1;
      v18 = v14;
      v19 = v15 - 1;
      if ( v19 >= 0 )
      {
        do
        {
          v20 = *(_QWORD *)v17;
          v21 = _mm_loadu_si128((const __m128i *)(v17 + 8));
          v14 += 24;
          v17 += 24;
          *((_QWORD *)v17 - 3) = 0;
          *(_QWORD *)(v14 - 24) = v20;
          *(__m128i *)(v14 - 16) = v21;
          *((_QWORD *)v17 - 1) = 0;
          v22 = v19-- == 0;
        }
        while ( !v22 );
        v17 = (char *)*a1;
      }
      qfree(v17);
      a1[2] = v16;
      v3 = a1[1];
      *a1 = v18;
      if ( v3 >= a2 )
        goto LABEL_10;
      v5 = (char *)v18;
    }
    v9 = 24 * v3;
    while ( 1 )
    {
      v10 = &v5[v9];
      ++v3;
      v9 += 24;
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      if ( a2 == v3 )
        break;
      v5 = (char *)*a1;
    }
    a1[1] = a2;
  }
  return v33 - __readfsqword(0x28u);
}

