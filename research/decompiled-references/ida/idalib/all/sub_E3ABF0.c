char *__fastcall sub_E3ABF0(__int64 *a1, char *a2, char *a3, char *a4)
{
  char *v4; // r8
  signed __int64 v6; // r11
  char *v7; // r12
  char *v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  char *v13; // rax
  unsigned __int64 v14; // r10
  __int64 v15; // rsi
  char *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  size_t v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v26; // rbx
  char *v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  char *i; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  char *v38; // [rsp+0h] [rbp-58h]
  char *v39; // [rsp+8h] [rbp-50h]
  signed __int64 v40; // [rsp+8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+8h] [rbp-50h]
  signed __int64 v42; // [rsp+10h] [rbp-48h]
  char *v43; // [rsp+10h] [rbp-48h]
  signed __int64 v44; // [rsp+10h] [rbp-48h]
  char *v45; // [rsp+18h] [rbp-40h]
  __int64 v46; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v6 = a4 - a3;
  v7 = a3;
  v8 = a2;
  v9 = (a4 - a3) >> 4;
  v10 = *((unsigned int *)a1 + 2);
  v11 = *a1;
  v12 = *((unsigned int *)a1 + 3);
  v13 = &a2[-*a1];
  v14 = v10 + v9;
  v15 = 16 * v10;
  v38 = v13;
  v16 = (char *)(*a1 + 16 * v10);
  if ( v8 == v16 )
  {
    if ( v12 < v14 )
    {
      v43 = v4;
      v40 = v6;
      sub_2237220(a1, a1 + 2, v14, 16);
      v11 = *a1;
      v10 = *((unsigned int *)a1 + 2);
      v4 = v43;
      v6 = v40;
    }
    if ( v7 != v4 )
    {
      memcpy((void *)(v11 + 16 * v10), v7, v6);
      v11 = *a1;
      LODWORD(v10) = *((_DWORD *)a1 + 2);
    }
    *((_DWORD *)a1 + 2) = v9 + v10;
    return &v38[v11];
  }
  else
  {
    v17 = *a1;
    v18 = v10;
    v19 = v9;
    if ( v12 < v14 )
    {
      v45 = v4;
      v42 = v6;
      sub_2237220(a1, a1 + 2, v10 + v9, 16);
      v18 = *((unsigned int *)a1 + 2);
      v17 = *a1;
      v4 = v45;
      v6 = v42;
      v15 = 16 * v18;
      v8 = &v38[*a1];
      v19 = v9;
      v16 = (char *)(*a1 + 16 * v18);
    }
    v20 = v15 - (_QWORD)v38;
    v21 = (v15 - (__int64)v38) >> 4;
    v22 = v21;
    if ( v21 >= v9 )
    {
      v26 = v15 - v6;
      v27 = (char *)(v17 + v15 - v6);
      v28 = (v6 >> 4) + v18;
      v29 = (__int64)v16;
      if ( v28 > *((unsigned int *)a1 + 3) )
      {
        v46 = v6 >> 4;
        v44 = v6;
        v41 = v19;
        sub_2237220(a1, a1 + 2, v28, 16);
        v6 = v44;
        v19 = v41;
        v37 = *((unsigned int *)a1 + 2);
        LODWORD(v28) = v46 + v37;
        v29 = *a1 + 16 * v37;
      }
      for ( i = v27; v16 != i; *(_QWORD *)(v29 - 8) = v32 )
      {
        v31 = *(_QWORD *)i;
        v32 = *((_QWORD *)i + 1);
        i += 16;
        v29 += 16;
        *(_QWORD *)(v29 - 16) = v31;
      }
      v33 = v26 - (_QWORD)v38;
      *((_DWORD *)a1 + 2) = v28;
      v34 = -16;
      v35 = v33 >> 4;
      if ( v33 > 0 )
      {
        do
        {
          *(__m128i *)&v16[v34] = _mm_loadu_si128((const __m128i *)&v27[v34]);
          v34 -= 16;
          --v35;
        }
        while ( v35 );
      }
      if ( v6 > 0 )
      {
        v36 = 0;
        do
        {
          *(__m128i *)&v8[v36] = _mm_loadu_si128((const __m128i *)&v7[v36]);
          v36 += 16;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v23 = v9 + v18;
      *((_DWORD *)a1 + 2) = v23;
      if ( v16 != v8 )
      {
        v39 = v4;
        memcpy((void *)(16LL * v23 - v20 + v17), v8, v20);
        v21 = (v15 - (__int64)v38) >> 4;
        v4 = v39;
        v20 = v15 - (_QWORD)v38;
      }
      if ( v21 )
      {
        v24 = 0;
        do
        {
          *(__m128i *)&v8[v24] = _mm_loadu_si128((const __m128i *)&v7[v24]);
          v24 += 16;
          --v22;
        }
        while ( v22 );
        v7 += v20;
      }
      if ( v4 != v7 )
        memcpy(v16, v7, v4 - v7);
    }
  }
  return v8;
}
