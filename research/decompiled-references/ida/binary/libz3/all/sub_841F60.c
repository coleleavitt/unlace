__int64 __fastcall sub_841F60(__m128i *a1, char *a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 *v12; // r13
  char *v13; // rbp
  char v14; // si
  __int64 v15; // rdx
  unsigned __int8 (__fastcall *v16)(__int64 *, __int64, __int64); // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // r13
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128d v23; // xmm0
  __int64 v24; // r14
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 *v28; // rax
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 *v31; // r13
  __int64 *v32; // rbp
  char v33; // al
  __int64 v34; // rsi
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rbp
  __int64 *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r13
  __int64 *v44; // r14
  __int64 *v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 i; // [rsp+0h] [rbp-68h]
  char *v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+10h] [rbp-58h]
  __int64 v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+20h] [rbp-48h]
  bool v55; // [rsp+2Fh] [rbp-39h]

  result = a2 - (char *)a1;
  v49 = a2;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  while ( 1 )
  {
    v7 = result;
    v8 = result >> 4;
    v9 = *a4;
    v10 = v7 >> 3;
    v11 = *(_QWORD *)(*a4 + 24);
    if ( !a3 )
      break;
    v12 = &a1->m128i_i64[v8];
    --a3;
    v13 = &a1->m128i_i8[8];
    v14 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v11)(a4, a1->m128i_i64[1], *v12);
    v15 = *((_QWORD *)v49 - 1);
    v16 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*a4 + 24);
    if ( v14 )
    {
      if ( v16(a4, *v12, v15) )
      {
        v17 = a1->m128i_i64[0];
        a1->m128i_i64[0] = *v12;
        *v12 = v17;
        v18 = a1->m128i_i64[0];
      }
      else
      {
        v33 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a4 + 24))(
                a4,
                a1->m128i_i64[1],
                *((_QWORD *)v49 - 1));
        v34 = a1->m128i_i64[0];
        if ( v33 )
        {
          a1->m128i_i64[0] = *((_QWORD *)v49 - 1);
          *((_QWORD *)v49 - 1) = v34;
          v18 = a1->m128i_i64[0];
        }
        else
        {
          v18 = a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v34);
        }
      }
    }
    else if ( v16(a4, a1->m128i_i64[1], v15) )
    {
      v23 = (__m128d)_mm_loadu_si128(a1);
      v18 = a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v23, v23, 1);
    }
    else
    {
      v35 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a4 + 24))(a4, *v12, *((_QWORD *)v49 - 1));
      v36 = a1->m128i_i64[0];
      if ( v35 )
      {
        a1->m128i_i64[0] = *((_QWORD *)v49 - 1);
        *((_QWORD *)v49 - 1) = v36;
      }
      else
      {
        a1->m128i_i64[0] = *v12;
        *v12 = v36;
      }
      v18 = a1->m128i_i64[0];
    }
    v19 = v49;
    while ( 1 )
    {
      while ( 1 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a4 + 24))(a4, *(_QWORD *)v13, v18);
        v21 = a1->m128i_i64[0];
        v18 = a1->m128i_i64[0];
        if ( !v20 )
          break;
        v13 += 8;
      }
      for ( v19 -= 8;
            (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a4 + 24))(a4, v21, *(_QWORD *)v19);
            v19 -= 8 )
      {
        v21 = a1->m128i_i64[0];
      }
      if ( v13 >= v19 )
        break;
      v22 = *(_QWORD *)v13;
      v13 += 8;
      *((_QWORD *)v13 - 1) = *(_QWORD *)v19;
      *(_QWORD *)v19 = v22;
      v18 = a1->m128i_i64[0];
    }
    sub_841F60(v13, v49, a3, a4);
    result = v13 - (char *)a1;
    if ( v13 - (char *)a1 <= 128 )
      return result;
    v49 = v13;
  }
  v54 = v8 - 1;
  v53 = (v10 - 1) >> 1;
  v55 = (v10 & 1) == 0;
  for ( i = v8 - 1; ; --i )
  {
    v37 = i;
    v51 = a1->m128i_i64[i];
    if ( i >= v53 )
    {
      v41 = &a1->m128i_i64[i];
      if ( v54 != i || !v55 )
        goto LABEL_64;
      v38 = i;
LABEL_61:
      v11 = 2 * v38 + 2;
      v38 = 2 * v38 + 1;
      v40 = v38;
      *v41 = a1->m128i_i64[v11 - 1];
      v41 = &a1->m128i_i64[v38];
      goto LABEL_45;
    }
    v38 = i;
    while ( 1 )
    {
      v39 = v38;
      v38 = 2 * (v38 + 1)
          - (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64))(v9 + 24))(
              a4,
              a1[v38 + 1].m128i_i64[0],
              a1[v38].m128i_i64[1],
              v37,
              v11);
      v40 = v38;
      v41 = &a1->m128i_i64[v38];
      a1->m128i_i64[v39] = *v41;
      if ( v38 >= v53 )
        break;
      v9 = *a4;
    }
    v9 = *a4;
    if ( v38 == v54 && v55 )
      goto LABEL_61;
LABEL_45:
    v42 = (v38 - 1) >> 1;
    if ( i < v38 )
      break;
LABEL_64:
    *v41 = v51;
LABEL_52:
    ;
  }
  while ( 1 )
  {
    v44 = &a1->m128i_i64[v42];
    v45 = &a1->m128i_i64[v40];
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(v9 + 24))(a4, *v44, v51) )
      break;
    v43 = v42;
    *v45 = *v44;
    if ( i >= v42 )
    {
      v45 = &a1->m128i_i64[v42];
      break;
    }
    v42 = (v42 - 1) / 2;
    v9 = *a4;
    v40 = v43;
  }
  *v45 = v51;
  if ( i )
  {
    v9 = *a4;
    goto LABEL_52;
  }
  result = v49 - (char *)a1;
  if ( v49 - (char *)a1 > 8 )
  {
LABEL_19:
    while ( 2 )
    {
      while ( 2 )
      {
        v49 -= 8;
        v47 = *(_QWORD *)v49;
        *(_QWORD *)v49 = a1->m128i_i64[0];
        v50 = v49 - (char *)a1;
        v52 = ((v49 - (char *)a1) >> 3) & 1;
        if ( v49 - (char *)a1 <= 16 )
        {
          v32 = (__int64 *)a1;
          if ( !v52 && (unsigned __int64)(((v49 - (char *)a1) >> 3) - 1) <= 2 )
          {
            v28 = (__int64 *)a1;
            v24 = 0;
            goto LABEL_59;
          }
        }
        else
        {
          v24 = 0;
          do
          {
            v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*a4 + 24))(
                    a4,
                    a1[v24 + 1].m128i_i64[0],
                    a1[v24].m128i_i64[1]);
            v26 = v24;
            v24 = 2 * (v24 + 1) - v25;
            v27 = 8 * v24;
            v28 = &a1->m128i_i64[v24];
            a1->m128i_i64[v26] = *v28;
          }
          while ( v24 < (((v49 - (char *)a1) >> 3) - 1) / 2 );
          if ( v52 || v24 != (((v49 - (char *)a1) >> 3) - 2) >> 1 )
          {
            v29 = (v24 - 1) / 2;
            if ( v24 )
              goto LABEL_28;
            *v28 = v47;
            continue;
          }
LABEL_59:
          v46 = 2 * v24 + 2;
          v27 = 8 * v46 - 8;
          *v28 = a1->m128i_i64[v46 - 1];
          v29 = (v46 >> 1) - 1;
LABEL_28:
          while ( 1 )
          {
            v31 = &a1->m128i_i64[v29];
            v32 = (__int64 *)((char *)a1->m128i_i64 + v27);
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*a4 + 24))(a4, *v31, v47) )
              break;
            v30 = v29;
            *v32 = *v31;
            if ( !v29 )
            {
              result = v47;
              *v31 = v47;
              if ( v50 > 8 )
                goto LABEL_19;
              return result;
            }
            v29 = (v29 - 1) / 2;
            v27 = 8 * v30;
          }
        }
        break;
      }
      result = v47;
      *v32 = v47;
      if ( v50 <= 8 )
        return result;
      continue;
    }
  }
  return result;
}

