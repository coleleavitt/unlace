__int64 __fastcall sub_21CCBB0(__int64 a1, __int64 a2, __int64 a3, void **a4, int a5, __int64 a6)
{
  int v7; // r14d
  __int64 v10; // r12
  __int64 v11; // rax
  _QWORD *v12; // r14
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __int64 v15; // rbp
  char *v16; // r15
  char *v17; // r12
  void **v18; // rdi
  void **v19; // rdx
  void **v20; // r13
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 result; // rax
  __int64 v25; // [rsp+0h] [rbp-48h] BYREF
  void **v26; // [rsp+8h] [rbp-40h] BYREF

  v7 = a6;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_2C74D60;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v10 = *(_QWORD *)(a2 + 8);
  v26 = a4;
  v11 = operator new(0x50u);
  v25 = v10;
  *(_DWORD *)(v11 + 60) = v7;
  v12 = *(_QWORD **)(a1 + 8);
  *(_QWORD *)(v11 + 48) = 0;
  v13 = _mm_loadh_ps((const double *)&v25);
  v25 = a2 + 16;
  *(__m128 *)v11 = v13;
  *(_OWORD *)(v11 + 32) = 0;
  v14 = _mm_loadh_ps((const double *)&v26);
  *(_DWORD *)(v11 + 56) = a5;
  *(__m128 *)(v11 + 16) = v14;
  *(_DWORD *)(v11 + 64) = 1;
  *(_QWORD *)(v11 + 72) = a3;
  *(_QWORD *)(a1 + 8) = v11;
  if ( v12 )
  {
    v15 = v12[4];
    v25 = v12[5];
    if ( v25 == v15 )
    {
LABEL_16:
      v23 = (void *)v12[4];
      if ( !v23 )
      {
LABEL_18:
        operator delete(v12, 0x50u);
        v11 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v11 + 8);
        a3 = *(_QWORD *)(v11 + 72);
        goto LABEL_19;
      }
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v16 = *(char **)(v15 + 48);
          if ( v16 )
          {
            v17 = v16 + 72;
            do
            {
              while ( 1 )
              {
                v17 -= 24;
                v18 = *(void ***)v17;
                v19 = *((void ***)v17 + 1);
                v20 = *(void ***)v17;
                if ( v19 != *(void ***)v17 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v21 = *v20;
                      if ( !*v20 )
                        break;
                      v26 = v19;
                      v20 += 3;
                      operator delete(v21);
                      v19 = v26;
                      if ( v26 == v20 )
                        goto LABEL_8;
                    }
                    v20 += 3;
                  }
                  while ( v19 != v20 );
LABEL_8:
                  v18 = *(void ***)v17;
                }
                if ( !v18 )
                  break;
                operator delete(v18);
                if ( v16 == v17 )
                  goto LABEL_11;
              }
            }
            while ( v16 != v17 );
LABEL_11:
            operator delete(v16, 0x48u);
          }
          v22 = *(void **)(v15 + 24);
          if ( v22 )
            operator delete(v22);
          if ( !*(_QWORD *)v15 )
            break;
          operator delete(*(void **)v15);
          v15 += 80;
          if ( v25 == v15 )
            goto LABEL_16;
        }
        v15 += 80;
      }
      while ( v25 != v15 );
      v23 = (void *)v12[4];
      if ( !v23 )
        goto LABEL_18;
    }
    operator delete(v23);
    goto LABEL_18;
  }
LABEL_19:
  result = v11 + 32;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
