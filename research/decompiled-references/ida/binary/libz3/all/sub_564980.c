__int64 __fastcall sub_564980(__m128i *a1, char *a2, __int64 a3, __int64 (__fastcall *a4)(__int64, __int64))
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // r15
  char *v11; // r13
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  char *v16; // r15
  char v17; // al
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 *v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 *v27; // r12
  __int64 *v28; // r13
  __m128d v29; // xmm0
  __int64 v30; // r12
  unsigned __int8 v31; // al
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 *v34; // rax
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 *v37; // r15
  __int64 *v38; // r13
  char v39; // al
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 i; // [rsp+0h] [rbp-68h]
  __int64 v46; // [rsp+0h] [rbp-68h]
  char *v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+10h] [rbp-58h]
  __int64 v49; // [rsp+10h] [rbp-58h]
  __int64 v50; // [rsp+18h] [rbp-50h]
  __int64 v51; // [rsp+18h] [rbp-50h]
  __int64 v52; // [rsp+20h] [rbp-48h]
  bool v53; // [rsp+2Fh] [rbp-39h]

  result = a2 - (char *)a1;
  v47 = a2;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  v8 = result >> 4;
  v9 = (a2 - (char *)a1) >> 3;
  if ( !a3 )
  {
LABEL_16:
    v52 = v8 - 1;
    v50 = (v9 - 1) >> 1;
    v53 = (v9 & 1) == 0;
    for ( i = v8 - 1; ; --i )
    {
      v48 = a1->m128i_i64[i];
      if ( i >= v50 )
        break;
      v20 = i;
      do
      {
        v21 = a4(a1[v20 + 1].m128i_i64[0], a1[v20].m128i_i64[1]);
        v22 = v20;
        v20 = 2 * (v20 + 1) - v21;
        v23 = v20;
        v24 = &a1->m128i_i64[v20];
        a1->m128i_i64[v22] = *v24;
      }
      while ( v20 < v50 );
      if ( v20 == v52 && v53 )
        goto LABEL_59;
LABEL_22:
      v25 = (v20 - 1) >> 1;
      if ( i >= v20 )
        goto LABEL_62;
      while ( 1 )
      {
        v27 = &a1->m128i_i64[v25];
        v28 = &a1->m128i_i64[v23];
        if ( !(unsigned __int8)a4(*v27, v48) )
          break;
        v26 = v25;
        *v28 = *v27;
        if ( i >= v25 )
        {
          v28 = &a1->m128i_i64[v25];
          break;
        }
        v25 = (v25 - 1) / 2;
        v23 = v26;
      }
      *v28 = v48;
      if ( !i )
      {
        result = v47 - (char *)a1;
        if ( v47 - (char *)a1 <= 8 )
          return result;
LABEL_32:
        while ( 2 )
        {
          while ( 2 )
          {
            v47 -= 8;
            v46 = *(_QWORD *)v47;
            *(_QWORD *)v47 = a1->m128i_i64[0];
            v49 = v47 - (char *)a1;
            v51 = ((v47 - (char *)a1) >> 3) & 1;
            if ( v47 - (char *)a1 <= 16 )
            {
              v38 = (__int64 *)a1;
              if ( !v51 && (unsigned __int64)(((v47 - (char *)a1) >> 3) - 1) <= 2 )
              {
                v34 = (__int64 *)a1;
                v30 = 0;
                goto LABEL_57;
              }
            }
            else
            {
              v30 = 0;
              do
              {
                v31 = a4(a1[v30 + 1].m128i_i64[0], a1[v30].m128i_i64[1]);
                v32 = v30;
                v30 = 2 * (v30 + 1) - v31;
                v33 = 8 * v30;
                v34 = &a1->m128i_i64[v30];
                a1->m128i_i64[v32] = *v34;
              }
              while ( v30 < (((v47 - (char *)a1) >> 3) - 1) / 2 );
              if ( v51 || v30 != (((v47 - (char *)a1) >> 3) - 2) >> 1 )
              {
                v35 = (v30 - 1) / 2;
                if ( v30 )
                  goto LABEL_41;
                *v34 = v46;
                continue;
              }
LABEL_57:
              v43 = 2 * v30 + 2;
              v33 = 8 * v43 - 8;
              *v34 = a1->m128i_i64[v43 - 1];
              v35 = (v43 >> 1) - 1;
LABEL_41:
              while ( 1 )
              {
                v37 = &a1->m128i_i64[v35];
                v38 = (__int64 *)((char *)a1->m128i_i64 + v33);
                if ( !(unsigned __int8)a4(*v37, v46) )
                  break;
                v36 = v35;
                *v38 = *v37;
                if ( !v35 )
                {
                  result = v46;
                  *v37 = v46;
                  if ( v49 > 8 )
                    goto LABEL_32;
                  return result;
                }
                v35 = (v35 - 1) / 2;
                v33 = 8 * v36;
              }
            }
            break;
          }
          result = v46;
          *v38 = v46;
          if ( v49 <= 8 )
            return result;
          continue;
        }
      }
LABEL_28:
      ;
    }
    v24 = &a1->m128i_i64[i];
    if ( v52 != i || !v53 )
    {
LABEL_62:
      *v24 = v48;
      goto LABEL_28;
    }
    v20 = i;
LABEL_59:
    v44 = 2 * v20 + 2;
    v20 = 2 * v20 + 1;
    v23 = v20;
    *v24 = a1->m128i_i64[v44 - 1];
    v24 = &a1->m128i_i64[v20];
    goto LABEL_22;
  }
  while ( 1 )
  {
    v10 = &a1->m128i_i64[v8];
    --a3;
    v11 = &a1->m128i_i8[8];
    v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64))a4)(a1->m128i_i64[1], *v10, v9);
    v13 = *((_QWORD *)v47 - 1);
    if ( v12 )
    {
      if ( (unsigned __int8)a4(*v10, v13) )
      {
        v14 = a1->m128i_i64[0];
        a1->m128i_i64[0] = *v10;
        *v10 = v14;
        v15 = a1->m128i_i64[0];
      }
      else
      {
        v39 = a4(a1->m128i_i64[1], *((_QWORD *)v47 - 1));
        v40 = a1->m128i_i64[0];
        if ( v39 )
        {
          a1->m128i_i64[0] = *((_QWORD *)v47 - 1);
          *((_QWORD *)v47 - 1) = v40;
          v15 = a1->m128i_i64[0];
        }
        else
        {
          v15 = a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v40);
        }
      }
    }
    else if ( (unsigned __int8)a4(a1->m128i_i64[1], v13) )
    {
      v29 = (__m128d)_mm_loadu_si128(a1);
      v15 = a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v29, v29, 1);
    }
    else
    {
      v41 = a4(*v10, *((_QWORD *)v47 - 1));
      v42 = a1->m128i_i64[0];
      if ( v41 )
      {
        a1->m128i_i64[0] = *((_QWORD *)v47 - 1);
        *((_QWORD *)v47 - 1) = v42;
      }
      else
      {
        a1->m128i_i64[0] = *v10;
        *v10 = v42;
      }
      v15 = a1->m128i_i64[0];
    }
    v16 = v47;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = a4(*(_QWORD *)v11, v15);
        v18 = a1->m128i_i64[0];
        v15 = a1->m128i_i64[0];
        if ( !v17 )
          break;
        v11 += 8;
      }
      for ( v16 -= 8; (unsigned __int8)a4(v18, *(_QWORD *)v16); v16 -= 8 )
        v18 = a1->m128i_i64[0];
      if ( v11 >= v16 )
        break;
      v19 = *(_QWORD *)v11;
      v11 += 8;
      *((_QWORD *)v11 - 1) = *(_QWORD *)v16;
      *(_QWORD *)v16 = v19;
      v15 = a1->m128i_i64[0];
    }
    sub_564980(v11, v47, a3, a4);
    result = v11 - (char *)a1;
    if ( v11 - (char *)a1 <= 128 )
      return result;
    v47 = v11;
    v8 = result >> 4;
    v9 = (v11 - (char *)a1) >> 3;
    if ( !a3 )
      goto LABEL_16;
  }
}

