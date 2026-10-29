void __fastcall sub_11673D0(__int64 a1, __int64 a2, __m128 a3, double a4)
{
  __int64 *v4; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 *v17; // r13
  _QWORD *v18; // r15
  void (__fastcall *v19)(__int64, double, double); // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  void *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  void **v25; // rcx
  void **v26; // rdx
  void *v27; // rdi
  _QWORD *v28; // rdi
  int v29; // r13d
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // [rsp+0h] [rbp-58h]
  void **v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  void **v35; // [rsp+8h] [rbp-50h]
  __int64 v36[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = (__int64 *)(a1 + 16);
  v6 = sub_2237400(a1, a1 + 16, a2, 8, v36);
  v7 = *(_QWORD *)a1;
  v8 = 8LL * *(unsigned int *)(a1 + 8);
  v9 = (__int64 *)(*(_QWORD *)a1 + v8);
  if ( *(__int64 **)a1 != v9 )
  {
    v10 = *(__int64 **)a1;
    if ( (v7 >= v6 + 16 || v6 >= v7 + 16) && (unsigned __int64)v9 - v7 - 8 > 0x10 )
    {
      v11 = (((unsigned __int64)v9 - v7 - 8) >> 3) + 1;
      v12 = 0;
      a4 = 0.0;
      do
      {
        a3 = (__m128)_mm_loadu_si128((const __m128i *)(v7 + v12));
        *(_OWORD *)(v7 + v12) = 0;
        *(__m128 *)(v6 + v12) = a3;
        v12 += 16;
      }
      while ( v12 != 16 * (v11 >> 1) );
      v13 = 8 * (v11 & 0xFFFFFFFFFFFFFFFELL);
      v14 = (__int64 *)(v13 + v7);
      v15 = (_QWORD *)(v6 + v13);
      if ( v11 != (v11 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v16 = *v14;
        *v14 = 0;
        *v15 = v16;
      }
    }
    else
    {
      v30 = v6;
      do
      {
        v31 = *v10;
        *v10++ = 0;
        v30 += 8LL;
        *(_QWORD *)(v30 - 8) = v31;
      }
      while ( v9 != v10 );
    }
    v17 = *(__int64 **)a1;
    v9 = (__int64 *)(*(_QWORD *)a1 + v8);
    if ( *(__int64 **)a1 != v9 )
    {
      do
      {
        v18 = (_QWORD *)*--v9;
        if ( *v9 )
        {
          v19 = *(void (__fastcall **)(__int64, double, double))(*v18 + 8LL);
          if ( (char *)v19 == (char *)sub_10D4290 )
          {
            v20 = v18[58];
            *v18 = &off_2BA8F30;
            v21 = v18[57];
            if ( v20 != v21 )
            {
              do
              {
                if ( *(_BYTE *)(v21 + 32) && *(_QWORD *)v21 != v21 + 16 )
                {
                  v34 = v21;
                  v32 = v20;
                  operator delete(*(void **)v21);
                  v21 = v34;
                  v20 = v32;
                }
                v21 += 40;
              }
              while ( v20 != v21 );
              v21 = v18[57];
            }
            if ( v21 )
              operator delete((void *)v21);
            v22 = (void *)v18[54];
            if ( v22 )
              operator delete(v22);
            v23 = (_QWORD *)v18[50];
            if ( v23 != v18 + 52 )
              operator delete(v23);
            v24 = (_QWORD *)v18[32];
            if ( v24 != v18 + 34 )
              free(v24);
            v25 = (void **)v18[29];
            v26 = (void **)v18[28];
            if ( v25 != v26 )
            {
              do
              {
                while ( *v26 != v26 + 2 )
                {
                  v35 = v26;
                  v33 = v25;
                  operator delete(*v26);
                  v25 = v33;
                  v26 = v35 + 4;
                  if ( v33 == v35 + 4 )
                    goto LABEL_28;
                }
                v26 += 4;
              }
              while ( v25 != v26 );
LABEL_28:
              v26 = (void **)v18[28];
            }
            if ( v26 )
              operator delete(v26);
            v27 = (void *)v18[25];
            if ( v27 )
              operator delete(v27);
            v28 = (_QWORD *)v18[7];
            if ( v28 != v18 + 9 )
              free(v28);
            operator delete(v18, 0x208u);
          }
          else
          {
            v19(*v9, *(double *)a3.m128_u64, a4);
          }
        }
      }
      while ( v17 != v9 );
      v9 = *(__int64 **)a1;
    }
  }
  v29 = v36[0];
  if ( v4 != v9 )
    free(v9);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v29;
}
