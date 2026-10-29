char *__fastcall sub_1AF7920(__int64 *a1, char *a2, char *a3, char *a4)
{
  __int64 *v4; // r8
  size_t v5; // r11
  unsigned __int64 v7; // r9
  char *v8; // rbp
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rdi
  char *v14; // r10
  unsigned __int64 v15; // rdx
  char *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r15
  unsigned __int64 v20; // r12
  unsigned int v21; // r9d
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  char *v27; // rax
  char *v28; // rcx
  __int64 i; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  void *v33; // rdi
  size_t v34; // r15
  signed __int64 v35; // rax
  char *v36; // r12
  __int64 v37; // r9
  unsigned __int64 v38; // rdx
  __int64 *v39; // [rsp+8h] [rbp-60h]
  char *v40; // [rsp+8h] [rbp-60h]
  char *v41; // [rsp+8h] [rbp-60h]
  size_t v42; // [rsp+8h] [rbp-60h]
  __int64 *v43; // [rsp+8h] [rbp-60h]
  __int64 *v44; // [rsp+8h] [rbp-60h]
  char *v45; // [rsp+10h] [rbp-58h]
  __int64 *v46; // [rsp+10h] [rbp-58h]
  size_t v47; // [rsp+10h] [rbp-58h]
  char *v48; // [rsp+10h] [rbp-58h]
  size_t v49; // [rsp+18h] [rbp-50h]
  int v50; // [rsp+18h] [rbp-50h]
  __int64 *v51; // [rsp+18h] [rbp-50h]
  size_t v52; // [rsp+18h] [rbp-50h]
  signed __int64 v53; // [rsp+18h] [rbp-50h]
  unsigned __int64 v54; // [rsp+20h] [rbp-48h]
  int v55; // [rsp+20h] [rbp-48h]
  int v56; // [rsp+20h] [rbp-48h]
  size_t v57; // [rsp+20h] [rbp-48h]
  __int64 v58; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v5 = a4 - a3;
  v7 = (a4 - a3) >> 3;
  v8 = a3;
  v9 = a2;
  v10 = *((unsigned int *)a1 + 2);
  v11 = *a1;
  v12 = *((unsigned int *)a1 + 3);
  v13 = 8 * v10;
  v14 = &a2[-v11];
  v15 = v10 + v7;
  v16 = (char *)(v11 + 8 * v10);
  if ( a2 == v16 )
  {
    if ( v12 < v15 )
    {
      v56 = v7;
      v52 = v5;
      v43 = v4;
      sub_2237220(v4, v4 + 2, v15, 8);
      v4 = v43;
      LODWORD(v7) = v56;
      v5 = v52;
      v14 = &a2[-v11];
      v11 = *v43;
      v10 = *((unsigned int *)v43 + 2);
    }
    if ( v8 != a4 )
    {
      v50 = v7;
      v46 = v4;
      v40 = v14;
      memcpy((void *)(v11 + 8 * v10), v8, v5);
      v4 = v46;
      LODWORD(v7) = v50;
      v14 = v40;
      v11 = *v46;
      LODWORD(v10) = *((_DWORD *)v46 + 2);
    }
    v9 = &v14[v11];
    *((_DWORD *)v4 + 2) = v7 + v10;
  }
  else
  {
    v17 = v11;
    v18 = v10;
    if ( v12 < v15 )
    {
      v54 = v7;
      v49 = v5;
      v45 = v14;
      v39 = v4;
      sub_2237220(v4, v4 + 2, v15, 8);
      v4 = v39;
      v14 = v45;
      v7 = v54;
      v5 = v49;
      v18 = *((unsigned int *)v39 + 2);
      v17 = *v39;
      v13 = 8 * v18;
      v9 = &v45[*v39];
      v16 = (char *)(*v39 + 8 * v18);
    }
    v19 = v13 - (_QWORD)v14;
    v20 = (v13 - (__int64)v14) >> 3;
    if ( v20 >= v7 )
    {
      v31 = v13;
      v32 = v13;
      v33 = v16;
      v34 = v31 - v5;
      v35 = v32 - v34;
      v36 = (char *)(v17 + v34);
      v37 = v35 >> 3;
      v38 = (v35 >> 3) + v18;
      if ( v38 > *((unsigned int *)v4 + 3) )
      {
        v58 = v35 >> 3;
        v57 = v5;
        v53 = v35;
        v48 = v14;
        v44 = v4;
        sub_2237220(v4, v4 + 2, v38, 8);
        v4 = v44;
        LODWORD(v37) = v58;
        v5 = v57;
        v35 = v53;
        v18 = *((unsigned int *)v44 + 2);
        v14 = v48;
        v33 = (void *)(*v44 + 8 * v18);
      }
      if ( v36 != v16 )
      {
        v55 = v37;
        v51 = v4;
        v47 = v5;
        v41 = v14;
        memmove(v33, v36, v35);
        v4 = v51;
        LODWORD(v37) = v55;
        v5 = v47;
        v14 = v41;
        LODWORD(v18) = *((_DWORD *)v51 + 2);
      }
      *((_DWORD *)v4 + 2) = v18 + v37;
      if ( v36 != v9 )
      {
        v42 = v5;
        memmove(&v16[-(v34 - (_QWORD)v14)], v9, v34 - (_QWORD)v14);
        v5 = v42;
      }
      if ( v8 != a4 )
        memmove(v9, v8, v5);
    }
    else
    {
      v21 = v18 + v7;
      *((_DWORD *)v4 + 2) = v21;
      if ( v16 != v9 )
        memcpy((void *)(v17 + 8LL * v21 - v19), v9, v13 - (_QWORD)v14);
      if ( v20 )
      {
        if ( (v9 >= v8 + 16 || v8 >= v9 + 16) && v20 - 1 > 3 )
        {
          v22 = 0;
          v23 = 0;
          v24 = ((v20 - 2) >> 1) + 1;
          do
          {
            ++v23;
            *(__m128i *)&v9[v22] = _mm_loadu_si128((const __m128i *)&v8[v22]);
            v22 += 16;
          }
          while ( v24 > v23 );
          v25 = 2 * v24;
          v26 = 16 * v24;
          v27 = &v8[v26];
          v28 = &v9[v26];
          if ( v20 != v25 )
            *(_QWORD *)v28 = *(_QWORD *)v27;
        }
        else
        {
          for ( i = 0; i != v20; ++i )
            *(_QWORD *)&v9[8 * i] = *(_QWORD *)&v8[8 * i];
        }
        v8 += v19;
      }
      if ( a4 != v8 )
        memcpy(v16, v8, a4 - v8);
    }
  }
  return v9;
}
