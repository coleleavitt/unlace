__int64 __fastcall sub_1F215F0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  char *v4; // rbx
  signed __int64 v5; // r8
  char *v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  char *v14; // r14
  char *v15; // rbp
  char *v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 *v28; // rbp
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // r12
  signed __int64 v39; // rax
  char *v40; // r13
  __int64 v41; // r15
  unsigned __int64 v42; // rdx
  size_t na; // [rsp+0h] [rbp-58h]
  size_t nd; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+0h] [rbp-58h]
  size_t nb; // [rsp+0h] [rbp-58h]
  size_t nf; // [rsp+0h] [rbp-58h]
  size_t ng; // [rsp+0h] [rbp-58h]
  size_t nc; // [rsp+0h] [rbp-58h]
  size_t ne; // [rsp+0h] [rbp-58h]
  signed __int64 v51; // [rsp+8h] [rbp-50h]
  signed __int64 v52; // [rsp+8h] [rbp-50h]
  signed __int64 v53; // [rsp+8h] [rbp-50h]
  signed __int64 v54; // [rsp+8h] [rbp-50h]
  char *v55; // [rsp+10h] [rbp-48h]
  char *v56; // [rsp+10h] [rbp-48h]
  signed __int64 v57; // [rsp+10h] [rbp-48h]
  __int64 v58; // [rsp+18h] [rbp-40h]
  char *v59; // [rsp+18h] [rbp-40h]

  result = *a1;
  v4 = *(char **)a2;
  v5 = 8LL * *(unsigned int *)(a2 + 8);
  v6 = (char *)(*(_QWORD *)a2 + v5);
  v7 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a1 & 4) != 0 )
  {
    v29 = *(unsigned int *)(v7 + 8);
    v10 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
    result = 8 * v29;
    if ( v4 == v6 )
      return result;
    if ( v7 )
    {
      v17 = *(unsigned int *)(v7 + 12);
      v19 = v5 >> 3;
      v20 = (v5 >> 3) + v29;
      goto LABEL_27;
    }
    v7 = 8 * v29;
    goto LABEL_4;
  }
  if ( !v7 )
  {
    if ( v4 == v6 )
      return result;
LABEL_4:
    if ( v6 == v4 + 8 )
    {
      result = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFBLL;
      *a1 = result;
      return result;
    }
    na = 8LL * *(unsigned int *)(a2 + 8);
    v8 = operator new(0x30u);
    v5 = na;
    *(_QWORD *)(v8 + 8) = 0x400000000LL;
    *(_QWORD *)v8 = v8 + 16;
    v9 = v8 | 4;
    *a1 = v9;
    goto LABEL_6;
  }
  if ( v4 == v6 )
    return result;
  n = 8LL * *(unsigned int *)(a2 + 8);
  v30 = operator new(0x30u);
  v5 = n;
  *(_QWORD *)(v30 + 8) = 0x400000000LL;
  *(_QWORD *)v30 = v30 + 16;
  v31 = v30;
  v32 = v30 & 0xFFFFFFFFFFFFFFF8LL;
  v33 = *(unsigned int *)((v30 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v34 = *(unsigned int *)(v32 + 12);
  *a1 = v31 | 4;
  if ( v33 + 1 > v34 )
  {
    sub_2237220(v32, v32 + 16, v33 + 1, 8);
    v33 = *(unsigned int *)(v32 + 8);
    v5 = n;
  }
  *(_QWORD *)(*(_QWORD *)v32 + 8 * v33) = v7;
  v7 = 8;
  v9 = *a1;
  ++*(_DWORD *)(v32 + 8);
LABEL_6:
  v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = *(unsigned int *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v12 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  v13 = 8 * v11;
  v14 = (char *)(v12 + 8 * v11);
  if ( (v9 & 4) != 0 )
  {
    v15 = (char *)(v12 + v7);
    v16 = (char *)v7;
  }
  else
  {
    v15 = (char *)a1 + v7;
    v16 = &v15[-v12];
  }
  v17 = *(unsigned int *)(v10 + 12);
  v18 = v5 >> 3;
  v19 = v5 >> 3;
  v20 = (v5 >> 3) + v11;
  if ( v14 != v15 )
  {
    if ( v20 > v17 )
    {
      nb = v10;
      v58 = v5 >> 3;
      v55 = v16;
      v51 = v5;
      sub_2237220(v10, v10 + 16, v20, 8);
      v10 = nb;
      v16 = v55;
      v18 = v58;
      v5 = v51;
      v11 = *(unsigned int *)(nb + 8);
      v12 = *(_QWORD *)nb;
      v13 = 8 * v11;
      v15 = &v55[*(_QWORD *)nb];
      v14 = (char *)(*(_QWORD *)nb + 8 * v11);
    }
    v21 = v13 - (_QWORD)v16;
    v22 = (v13 - (__int64)v16) >> 3;
    if ( v22 >= v18 )
    {
      v35 = v13;
      v36 = v13;
      v37 = v14;
      v38 = v35 - v5;
      v39 = v36 - v38;
      v40 = (char *)(v12 + v38);
      v41 = v39 >> 3;
      v42 = (v39 >> 3) + v11;
      if ( v42 > *(unsigned int *)(v10 + 12) )
      {
        ne = v10;
        v59 = v16;
        v57 = v39;
        v54 = v5;
        sub_2237220(v10, v10 + 16, v42, 8);
        v10 = ne;
        v16 = v59;
        v39 = v57;
        v5 = v54;
        v11 = *(unsigned int *)(ne + 8);
        v37 = (void *)(*(_QWORD *)ne + 8 * v11);
      }
      if ( v40 != v14 )
      {
        v56 = v16;
        v52 = v5;
        nf = v10;
        memmove(v37, v40, v39);
        v10 = nf;
        v16 = v56;
        v5 = v52;
        LODWORD(v11) = *(_DWORD *)(nf + 8);
      }
      *(_DWORD *)(v10 + 8) = v41 + v11;
      if ( v40 != v15 )
      {
        ng = v5;
        memmove(&v14[-(v38 - (_QWORD)v16)], v15, v38 - (_QWORD)v16);
        v5 = ng;
      }
      return (__int64)memmove(v15, v4, v5);
    }
    else
    {
      result = v11 + v18;
      *(_DWORD *)(v10 + 8) = result;
      if ( v15 != v14 )
        result = (__int64)memcpy((void *)(v12 + 8LL * (unsigned int)result - v21), v15, v13 - (_QWORD)v16);
      if ( v22 )
      {
        if ( (v15 >= v4 + 16 || v4 >= v15 + 16) && v22 - 1 > 3 )
        {
          v23 = 0;
          v24 = 0;
          v25 = ((v22 - 2) >> 1) + 1;
          do
          {
            ++v24;
            *(__m128i *)&v15[v23] = _mm_loadu_si128((const __m128i *)&v4[v23]);
            v23 += 16;
          }
          while ( v24 < v25 );
          v26 = 2 * v25;
          result = 16 * v25;
          v27 = (__int64 *)&v4[result];
          v28 = (__int64 *)&v15[result];
          if ( v22 != v26 )
          {
            result = *v27;
            *v28 = *v27;
          }
        }
        else
        {
          for ( result = 0; result != v22; ++result )
            *(_QWORD *)&v15[8 * result] = *(_QWORD *)&v4[8 * result];
        }
        v4 += v21;
      }
      if ( v6 != v4 )
        return (__int64)memcpy(v14, v4, v6 - v4);
    }
    return result;
  }
LABEL_27:
  if ( v17 < v20 )
  {
    nc = v10;
    v53 = v5;
    sub_2237220(v10, v10 + 16, v20, 8);
    v5 = v53;
    v10 = nc;
  }
  nd = v10;
  result = (__int64)memcpy((void *)(*(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8)), v4, v5);
  *(_DWORD *)(nd + 8) += v19;
  return result;
}
