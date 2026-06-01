void __fastcall sub_649C20(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __m128i *v3; // r15
  __int64 v5; // rbx
  signed int *v6; // rbp
  unsigned __int64 v7; // rdx
  const __m128i *v8; // rbx
  const __m128i *v9; // rdi
  __int64 v10; // r13
  char *v11; // rbp
  size_t v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  size_t v15; // r9
  unsigned __int64 v16; // rax
  size_t v17; // r10
  unsigned __int64 v18; // rdx
  char *v20; // rdi
  int *v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rbp
  size_t v24; // r14
  size_t v25; // rbx
  __int64 v26; // rax
  size_t v27; // rax
  __int64 v28; // rcx
  size_t v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rdi
  size_t v34; // [rsp+8h] [rbp-60h]
  char *v35; // [rsp+8h] [rbp-60h]
  unsigned __int64 v36; // [rsp+8h] [rbp-60h]
  unsigned __int64 v38; // [rsp+18h] [rbp-50h]
  size_t v39; // [rsp+20h] [rbp-48h]
  size_t v40; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = *(__m128i **)a2;
    v5 = 32 * v2;
    v6 = (signed int *)(*(_QWORD *)a2 + 32 * v2);
    if ( *(signed int **)a2 == v6 )
      goto LABEL_9;
    if ( v5 >> 5 )
    {
      _BitScanReverse64(&v7, v5 >> 5);
      sub_6495B0(v3, (__m128i *)(*(_QWORD *)a2 + 32 * v2), 2LL * (int)v7);
      if ( v5 > 512 )
      {
        v8 = v3 + 32;
        sub_647D60((__int64)v3, v3[32].m128i_i32);
        do
        {
          v9 = v8;
          v8 += 2;
          sub_647C80(v9);
        }
        while ( v6 != (signed int *)v8 );
        v2 = *(_QWORD *)(a2 + 8);
LABEL_9:
        v10 = v2 - 1;
        if ( v10 < 0 )
          return;
        while ( 1 )
        {
          v20 = &byte_2CCBFD8;
          v21 = (int *)(*(_QWORD *)a2 + 32 * v10);
          v22 = v21[1];
          v23 = (*((_QWORD *)v21 + 2) == 0) + *((_QWORD *)v21 + 2) - 1LL;
          v24 = v23;
          if ( v22 <= v23 )
            v24 = v21[1];
          if ( a1[1] | *v21 )
            v20 = (char *)(*a1 + *v21);
          v35 = *((char **)v21 + 1);
          memcpy(v20, v35, v24);
          v25 = v24 + *v21;
          if ( v23 - v22 <= 0 )
          {
            v26 = a1[1];
            if ( v26 )
            {
              v27 = v26 - 1;
              v28 = v22 - v23;
              if ( v25 < v27 )
              {
                if ( v28 )
                {
                  v29 = v25 + v28;
                  if ( v29 < v27 )
                  {
                    v33 = (void *)(v25 + *a1);
                    v25 += v27 - v29;
                    memmove(v33, (const void *)(*a1 + v29), v27 - v29);
                  }
                  v30 = *a1;
                  if ( a1[2] < v25 + 1 )
                  {
                    v32 = qvector_reserve(a1, v30, v25 + 1, 1);
                    *a1 = v32;
                    v30 = v32;
                  }
                  a1[1] = v25 + 1;
                  *(_BYTE *)(v30 + v25) = 0;
                }
              }
            }
            goto LABEL_17;
          }
          v11 = &v35[v24];
          if ( &v35[v24] )
            break;
LABEL_17:
          if ( v10-- == 0 )
            return;
        }
        v12 = strlen(&v35[v24]);
        v13 = a1[1];
        v14 = *a1;
        v15 = v12;
        v16 = a1[2];
        if ( v13 )
        {
          --v13;
          v17 = v15 + v13;
          v18 = v15 + v13 + 1;
          if ( v16 >= v18 )
            goto LABEL_14;
        }
        else
        {
          v18 = v15 + 1;
          v17 = v15;
          if ( v16 >= v15 + 1 )
          {
            a1[1] = v18;
            *(_BYTE *)(v14 + v15) = 0;
LABEL_16:
            memmove((void *)(v13 + *a1), v11, v15);
            goto LABEL_17;
          }
        }
        v40 = v15;
        v39 = v17;
        v38 = v13;
        v36 = v18;
        v31 = qvector_reserve(a1, v14, v18, 1);
        v15 = v40;
        v17 = v39;
        *a1 = v31;
        v13 = v38;
        v14 = v31;
        v18 = v36;
LABEL_14:
        a1[1] = v18;
        *(_BYTE *)(v14 + v17) = 0;
        if ( v25 < v13 )
        {
          v34 = v15;
          memmove((void *)(v25 + *a1 + v15), (const void *)(v25 + *a1), v13 - v25);
          v15 = v34;
          v13 = v25;
        }
        goto LABEL_16;
      }
    }
    else
    {
      sub_6495B0(v3, (__m128i *)(*(_QWORD *)a2 + 32 * v2), -2);
    }
    sub_647D60((__int64)v3, v6);
    v2 = *(_QWORD *)(a2 + 8);
    goto LABEL_9;
  }
}
