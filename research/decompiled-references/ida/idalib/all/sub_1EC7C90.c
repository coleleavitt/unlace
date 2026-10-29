unsigned __int64 __fastcall sub_1EC7C90(__int64 a1, char *a2, _QWORD *a3)
{
  char *v4; // rbx
  char *v5; // r12
  char *v6; // r15
  char *v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  char *v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rdi
  char *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm2
  unsigned __int64 v27; // rsi
  _QWORD *v28; // rdx
  __int64 v29; // rax
  char *i; // rbx
  __int64 v31; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  _QWORD *v35; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  char *v37; // [rsp+10h] [rbp-48h]
  _QWORD *v38; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = (__int64)&v5[-*(_QWORD *)a1] >> 3;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_31;
  }
  v9 = 2 * v8;
  v10 = -8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_31:
    v10 = 8 * v9;
LABEL_3:
    v38 = a3;
    v37 = v7;
    v35 = a2;
    v11 = operator new(v10);
    v7 = v37;
    v12 = v11;
    a3 = v38;
    v36 = v11 + v10;
    v13 = v11 + 8;
    goto LABEL_4;
  }
  v13 = 8;
  v12 = 0;
  v36 = 0;
LABEL_4:
  v14 = *a3;
  *a3 = 0;
  *(_QWORD *)&v7[v12] = v14;
  if ( a2 != v6 )
  {
    v15 = v6;
    v16 = (unsigned __int64)(a2 - 8 - v6) >> 3;
    if ( (v12 >= (unsigned __int64)(v6 + 16) || (unsigned __int64)v6 >= v12 + 16)
      && (unsigned __int64)(a2 - 8 - v6) > 0x10 )
    {
      v17 = v16 + 1;
      v18 = 0;
      do
      {
        v19 = _mm_loadu_si128((const __m128i *)&v6[v18]);
        *(_OWORD *)&v6[v18] = 0;
        *(__m128i *)(v12 + v18) = v19;
        v18 += 16;
      }
      while ( v18 != 16 * ((v16 + 1) >> 1) );
      v20 = 8 * (v17 & 0xFFFFFFFFFFFFFFFELL);
      v21 = &v6[v20];
      v22 = (_QWORD *)(v12 + v20);
      if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v23 = *(_QWORD *)v21;
        *(_QWORD *)v21 = 0;
        *v22 = v23;
      }
    }
    else
    {
      v33 = v12;
      do
      {
        v34 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0;
        v15 += 8;
        v33 += 8LL;
        *(_QWORD *)(v33 - 8) = v34;
      }
      while ( a2 != v15 );
    }
    v13 = v12 + 8 * v16 + 16;
  }
  if ( a2 != v5 )
  {
    v24 = ((unsigned __int64)(v5 - a2 - 8) >> 3) + 1;
    if ( v5 - a2 == 8 )
    {
      v28 = (_QWORD *)v13;
    }
    else
    {
      v25 = 0;
      do
      {
        v26 = _mm_loadu_si128((const __m128i *)&a2[v25]);
        *(_OWORD *)&a2[v25] = 0;
        *(__m128i *)(v13 + v25) = v26;
        v25 += 16;
      }
      while ( v25 != 16 * (v24 >> 1) );
      v27 = 8 * (v24 & 0xFFFFFFFFFFFFFFFELL);
      v28 = (_QWORD *)(v13 + v27);
      a2 = &v4[v27];
      if ( v24 == (v24 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    v29 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    *v28 = v29;
LABEL_18:
    v13 += 8 * v24;
  }
  for ( i = v6; i != v5; i += 8 )
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)i;
      if ( !*(_QWORD *)i )
        break;
      i += 8;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 8LL))(v31, a2);
      if ( i == v5 )
        goto LABEL_22;
    }
  }
LABEL_22:
  if ( v6 )
    operator delete(v6);
  v35 = (_QWORD *)v13;
  result = v36;
  *(_QWORD *)(a1 + 16) = v36;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v35);
  return result;
}
