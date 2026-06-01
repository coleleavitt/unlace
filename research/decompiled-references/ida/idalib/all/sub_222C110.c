unsigned __int64 __fastcall sub_222C110(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // r12
  char *v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int16 *v11; // r14
  unsigned __int16 *v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r13
  unsigned __int16 *v15; // r14
  unsigned __int16 *v16; // rsi
  __int64 v17; // rdi
  unsigned __int16 *i; // r14
  unsigned __int16 v19; // dx
  __int16 *v20; // rbp
  __int16 *v21; // r13
  __int16 *v22; // rdi
  __int16 *v23; // rdi
  unsigned __int64 result; // rax
  __m128 v25; // xmm0
  __int64 v26; // r13
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v29; // rbp
  void **v30; // rdx
  void *v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // [rsp+0h] [rbp-58h] BYREF
  __int64 v34; // [rsp+8h] [rbp-50h]
  void **v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v4 = *(unsigned __int16 **)(a1 + 8);
  v5 = *(unsigned __int16 **)a1;
  v6 = (char *)a2 - *(_QWORD *)a1;
  if ( !(0xCCCCCCCCCCCCCCCDLL * (((__int64)v4 - *(_QWORD *)a1) >> 3)) )
  {
    v7 = 1;
    goto LABEL_45;
  }
  v7 = 0x999999999999999ALL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v8 = -16;
  if ( 0xCCCCCCCCCCCCCCCDLL * (((__int64)v4 - *(_QWORD *)a1) >> 3) > 0x999999999999999ALL
                                                                   * (((__int64)v4 - *(_QWORD *)a1) >> 3)
    || v7 > 0x666666666666666LL )
  {
    goto LABEL_3;
  }
  if ( v7 )
  {
LABEL_45:
    v8 = 40 * v7;
LABEL_3:
    v34 = operator new(v8);
    v36 = v34 + v8;
    v33 = v34 + 40;
    goto LABEL_4;
  }
  v33 = 40;
  v36 = 0;
  v34 = 0;
LABEL_4:
  v9 = v34;
  *(_WORD *)&v6[v34] = 0;
  if ( a2 != v5 )
  {
    v10 = v9;
    v11 = v5;
    do
    {
      v12 = v11;
      v13 = v10;
      v11 += 20;
      v10 += 40;
      sub_222B350(v13, v12);
    }
    while ( a2 != v11 );
    v33 = v34 + 8 * ((unsigned __int64)((char *)(a2 - 20) - (char *)v5) >> 3) + 80;
  }
  v14 = v33;
  v15 = a2;
  if ( a2 != v4 )
  {
    do
    {
      v16 = v15;
      v17 = v14;
      v15 += 20;
      v14 += 40LL;
      sub_222B350(v17, v16);
    }
    while ( v15 != v4 );
    v33 += 8 * ((unsigned __int64)((char *)v4 - (char *)a2 - 40) >> 3) + 40;
  }
  for ( i = v5; i != v4; i += 20 )
  {
    while ( 1 )
    {
      v19 = *i;
      if ( *i == 7 )
      {
        v26 = *((_QWORD *)i + 1);
        v27 = *((unsigned int *)i + 6);
        v28 = v27 << 6;
        if ( (_DWORD)v27 )
        {
          v29 = v26 + v28;
          if ( v26 + v28 != v26 )
          {
            do
            {
              v32 = *(_QWORD *)(v26 + 8);
              if ( v32 != -1 && v32 != -2 )
                sub_222B2A0((__int16 *)(v26 + 24));
              v30 = *(void ***)v26;
              if ( *(_QWORD *)v26 )
              {
                v31 = *v30;
                if ( *v30 != v30 + 2 )
                {
                  v35 = *(void ***)v26;
                  operator delete(v31);
                  v30 = v35;
                }
                operator delete(v30, 0x20u);
              }
              v26 += 64;
            }
            while ( v29 != v26 );
            v26 = *((_QWORD *)i + 1);
            v28 = (unsigned __int64)*((unsigned int *)i + 6) << 6;
          }
        }
        operator delete(v26, v28, 8);
        goto LABEL_14;
      }
      if ( v19 == 8 )
        break;
      if ( v19 == 6 )
      {
        v23 = *((__int16 **)i + 1);
        if ( v23 != (__int16 *)(i + 12) )
          goto LABEL_22;
      }
LABEL_14:
      i += 20;
      if ( i == v4 )
        goto LABEL_23;
    }
    v20 = *((__int16 **)i + 2);
    v21 = *((__int16 **)i + 1);
    if ( v20 != v21 )
    {
      do
      {
        v22 = v21;
        v21 += 20;
        sub_222B2A0(v22);
      }
      while ( v20 != v21 );
      v21 = *((__int16 **)i + 1);
    }
    if ( !v21 )
      goto LABEL_14;
    v23 = v21;
LABEL_22:
    operator delete(v23);
  }
LABEL_23:
  if ( v5 )
    operator delete(v5);
  result = v36;
  v25 = _mm_loadh_ps((const double *)&v33);
  *(_QWORD *)(a1 + 16) = v36;
  *(__m128 *)a1 = v25;
  return result;
}
