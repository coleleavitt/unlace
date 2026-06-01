__int64 __fastcall sub_82A500(__m128i *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  char *v5; // r14
  __int64 v7; // rdx
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // r13
  __int64 *v12; // r12
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r13
  void *v18; // rdi
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  __m128d v26; // xmm0
  __int64 v27; // r13
  __int64 v28; // r12
  __m128i *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rsi
  char v32; // al
  __m128i v33; // xmm0
  char v34; // dl
  __int64 v35; // rax
  __int64 j; // r13
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // r13
  unsigned int v44; // eax
  __int8 *v45; // r15
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 k; // r15
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // [rsp+0h] [rbp-68h]
  __int64 i; // [rsp+0h] [rbp-68h]
  __int64 v60; // [rsp+0h] [rbp-68h]
  __int64 v61; // [rsp+8h] [rbp-60h]
  __int64 v62; // [rsp+8h] [rbp-60h]
  __int64 v63; // [rsp+10h] [rbp-58h]
  __int64 v64; // [rsp+18h] [rbp-50h]
  __int64 v65; // [rsp+20h] [rbp-48h]
  bool v66; // [rsp+2Fh] [rbp-39h]

  result = a2 - (char *)a1;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  v5 = a2;
  while ( 2 )
  {
    v7 = result;
    v8 = qword_1C7F2C0;
    v9 = result >> 4;
    v10 = v7 >> 3;
    if ( !a3 )
    {
      v65 = v9 - 1;
      v63 = (v10 - 1) >> 1;
      v66 = (v10 & 1) == 0;
      for ( i = v9 - 1; ; --i )
      {
        v64 = a1->m128i_i64[i];
        if ( i >= v63 )
          break;
        for ( j = i; ; j = v38 )
        {
          v40 = j + 1;
          v41 = a1[v40 - 1].m128i_i64[1];
          v37 = a1[v40].m128i_i64[0];
          v42 = v37 + 24;
          if ( (*(_BYTE *)(v37 + 44) & 1) != 0
            || *(_DWORD *)(v37 + 40) != 1
            || (*(_BYTE *)(v41 + 44) & 1) != 0
            || *(_DWORD *)(v41 + 40) != 1 )
          {
            LOBYTE(v37) = sub_1848D40(v8, v42, v41 + 24);
            v8 = qword_1C7F2C0;
          }
          else if ( (*(_BYTE *)(v37 + 28) & 1) != 0 || (*(_BYTE *)(v41 + 28) & 1) != 0 )
          {
            LODWORD(v37) = sub_182C7B0(v8, v42, v41 + 24);
            v8 = qword_1C7F2C0;
            LODWORD(v37) = (unsigned int)v37 >> 31;
          }
          else
          {
            LOBYTE(v37) = *(_DWORD *)(v37 + 24) < *(_DWORD *)(v41 + 24);
          }
          v38 = 2 * (j + 1) - (unsigned __int8)v37;
          v39 = &a1->m128i_i64[v38];
          a1->m128i_i64[j] = *v39;
          if ( v63 <= v38 )
            break;
        }
        if ( v65 == v38 && v66 )
          goto LABEL_98;
LABEL_79:
        v43 = (v38 - 1) >> 1;
        if ( i < v38 )
        {
          v61 = v64 + 24;
          while ( 1 )
          {
            v45 = &a1->m128i_i8[8 * v43];
            v46 = *(_QWORD *)v45;
            v47 = *(_QWORD *)v45 + 24LL;
            if ( (*(_BYTE *)(*(_QWORD *)v45 + 44LL) & 1) != 0
              || *(_DWORD *)(v46 + 40) != 1
              || (*(_BYTE *)(v64 + 44) & 1) != 0
              || *(_DWORD *)(v64 + 40) != 1 )
            {
              break;
            }
            if ( (*(_BYTE *)(v46 + 28) & 1) != 0 || (*(_BYTE *)(v64 + 28) & 1) != 0 )
            {
              v44 = (unsigned int)sub_182C7B0(v8, v47, v61) >> 31;
LABEL_82:
              if ( !(_BYTE)v44 )
                goto LABEL_92;
              goto LABEL_83;
            }
            if ( *(_DWORD *)(v46 + 24) >= *(_DWORD *)(v64 + 24) )
            {
LABEL_92:
              v45 = &a1->m128i_i8[8 * v38];
LABEL_93:
              *(_QWORD *)v45 = v64;
              if ( i )
              {
                v8 = qword_1C7F2C0;
                goto LABEL_95;
              }
              result = v5 - (char *)a1;
              if ( v5 - (char *)a1 > 8 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v5 -= 8;
                    v62 = *(_QWORD *)v5;
                    *(_QWORD *)v5 = a1->m128i_i64[0];
                    v49 = ((v5 - (char *)a1) >> 3) - 1;
                    v60 = ((v5 - (char *)a1) >> 3) & 1;
                    v50 = v49 / 2;
                    if ( v5 - (char *)a1 <= 16 )
                      break;
                    for ( k = 0; ; k = v28 )
                    {
                      v54 = k + 1;
                      v55 = a1[v54 - 1].m128i_i64[1];
                      v52 = a1[v54].m128i_i64[0];
                      v56 = v52 + 24;
                      if ( (*(_BYTE *)(v52 + 44) & 1) != 0
                        || *(_DWORD *)(v52 + 40) != 1
                        || (*(_BYTE *)(v55 + 44) & 1) != 0
                        || *(_DWORD *)(v55 + 40) != 1 )
                      {
                        LOBYTE(v52) = sub_1848D40(qword_1C7F2C0, v56, v55 + 24);
                      }
                      else if ( (*(_BYTE *)(v52 + 28) & 1) != 0 || (*(_BYTE *)(v55 + 28) & 1) != 0 )
                      {
                        LODWORD(v52) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v56, v55 + 24) >> 31;
                      }
                      else
                      {
                        LOBYTE(v52) = *(_DWORD *)(v52 + 24) < *(_DWORD *)(v55 + 24);
                      }
                      v28 = 2 * (k + 1) - (unsigned __int8)v52;
                      v53 = &a1->m128i_i64[v28];
                      a1->m128i_i64[k] = *v53;
                      if ( v50 <= v28 )
                        break;
                    }
                    if ( !v60 && (((v5 - (char *)a1) >> 3) - 2) >> 1 == v28 )
                      goto LABEL_116;
                    v27 = (v28 - 1) / 2;
                    if ( v28 )
                      goto LABEL_41;
                    *v53 = v62;
                  }
                  v29 = a1;
                  if ( !v60 && (unsigned __int64)v49 <= 2 )
                  {
                    v53 = (__int64 *)a1;
                    v28 = 0;
LABEL_116:
                    v57 = 2 * v28 + 2;
                    v28 = 2 * v28 + 1;
                    v27 = (v57 >> 1) - 1;
                    *v53 = a1->m128i_i64[v57 - 1];
LABEL_41:
                    v58 = v62 + 24;
                    while ( 1 )
                    {
                      v29 = (__m128i *)((char *)a1 + 8 * v27);
                      v30 = v29->m128i_i64[0];
                      v31 = v29->m128i_i64[0] + 24;
                      if ( (*(_BYTE *)(v29->m128i_i64[0] + 44) & 1) != 0
                        || *(_DWORD *)(v30 + 40) != 1
                        || (*(_BYTE *)(v62 + 44) & 1) != 0
                        || *(_DWORD *)(v62 + 40) != 1 )
                      {
                        if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v31, v58) )
                          goto LABEL_53;
                      }
                      else
                      {
                        if ( (*(_BYTE *)(v30 + 28) & 1) != 0 || (*(_BYTE *)(v62 + 28) & 1) != 0 )
                          LODWORD(v30) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v31, v58) >> 31;
                        else
                          LOBYTE(v30) = *(_DWORD *)(v30 + 24) < *(_DWORD *)(v62 + 24);
                        if ( !(_BYTE)v30 )
                        {
LABEL_53:
                          v29 = (__m128i *)((char *)a1 + 8 * v28);
                          break;
                        }
                      }
                      a1->m128i_i64[v28] = v29->m128i_i64[0];
                      v28 = v27;
                      if ( !v27 )
                        break;
                      v27 = (v27 - 1) / 2;
                    }
                  }
                  result = v62;
                  v29->m128i_i64[0] = v62;
                  if ( v5 - (char *)a1 <= 8 )
                    return result;
                }
              }
              return result;
            }
LABEL_83:
            a1->m128i_i64[v38] = *(_QWORD *)v45;
            if ( i >= v43 )
              goto LABEL_93;
            v8 = qword_1C7F2C0;
            v38 = v43;
            v43 = (v43 - 1) / 2;
          }
          LOBYTE(v44) = sub_1848D40(v8, v47, v61);
          goto LABEL_82;
        }
LABEL_120:
        *v39 = v64;
LABEL_95:
        ;
      }
      v39 = &a1->m128i_i64[i];
      if ( v65 != i || !v66 )
        goto LABEL_120;
      v38 = i;
LABEL_98:
      v48 = a1[v38].m128i_i64[1];
      v38 = 2 * v38 + 1;
      *v39 = v48;
      v39 = &a1->m128i_i64[v38];
      goto LABEL_79;
    }
    v11 = &a1->m128i_i64[v9];
    --a3;
    v12 = &a1->m128i_i64[1];
    v13 = sub_3ED700((__int64)qword_1C7F2C0, a1->m128i_i64[1] + 24, *v11 + 24);
    v14 = *((_QWORD *)v5 - 1) + 24LL;
    if ( v13 )
    {
      if ( sub_3ED700((__int64)qword_1C7F2C0, *v11 + 24, v14) )
      {
        v15 = a1->m128i_i64[0];
        a1->m128i_i64[0] = *v11;
        *v11 = v15;
        v16 = a1->m128i_i64[0];
      }
      else
      {
        v32 = sub_3ED700((__int64)qword_1C7F2C0, a1->m128i_i64[1] + 24, *((_QWORD *)v5 - 1) + 24LL);
        v33 = _mm_loadl_epi64(a1);
        if ( v32 )
        {
          a1->m128i_i64[0] = *((_QWORD *)v5 - 1);
          *((_QWORD *)v5 - 1) = v33.m128i_i64[0];
          v16 = a1->m128i_i64[0];
        }
        else
        {
          v16 = a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, v33);
        }
      }
    }
    else if ( sub_3ED700((__int64)qword_1C7F2C0, a1->m128i_i64[1] + 24, v14) )
    {
      v26 = (__m128d)_mm_loadu_si128(a1);
      v16 = a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v26, v26, 1);
    }
    else
    {
      v34 = sub_3ED700((__int64)qword_1C7F2C0, *v11 + 24, *((_QWORD *)v5 - 1) + 24LL);
      v35 = a1->m128i_i64[0];
      if ( v34 )
      {
        a1->m128i_i64[0] = *((_QWORD *)v5 - 1);
        *((_QWORD *)v5 - 1) = v35;
      }
      else
      {
        a1->m128i_i64[0] = *v11;
        *v11 = v35;
      }
      v16 = a1->m128i_i64[0];
    }
    v17 = (__int64 *)v5;
    while ( 2 )
    {
      v18 = qword_1C7F2C0;
      v19 = v16 + 24;
      while ( 1 )
      {
        v21 = *v12;
        if ( (*(_BYTE *)(*v12 + 44) & 1) != 0
          || *(_DWORD *)(v21 + 40) != 1
          || (*(_BYTE *)(v16 + 44) & 1) != 0
          || *(_DWORD *)(v16 + 40) != 1 )
        {
          LOBYTE(v20) = sub_1848D40(v18, *v12 + 24, v19);
          v16 = a1->m128i_i64[0];
          v18 = qword_1C7F2C0;
          v19 = a1->m128i_i64[0] + 24;
          goto LABEL_10;
        }
        if ( (*(_BYTE *)(v21 + 28) & 1) == 0 && (*(_BYTE *)(v16 + 28) & 1) == 0 )
          break;
        v25 = sub_182C7B0(v18, *v12 + 24, v19);
        v16 = a1->m128i_i64[0];
        v18 = qword_1C7F2C0;
        v20 = v25 >> 31;
        v19 = a1->m128i_i64[0] + 24;
LABEL_10:
        if ( !(_BYTE)v20 )
          goto LABEL_19;
LABEL_11:
        ++v12;
      }
      if ( *(_DWORD *)(v21 + 24) < *(_DWORD *)(v16 + 24) )
        goto LABEL_11;
LABEL_19:
      --v17;
      while ( 2 )
      {
        v23 = *v17;
        if ( (*(_BYTE *)(v16 + 44) & 1) != 0
          || *(_DWORD *)(v16 + 40) != 1
          || (*(_BYTE *)(v23 + 44) & 1) != 0
          || *(_DWORD *)(v23 + 40) != 1 )
        {
          LOBYTE(v22) = sub_1848D40(v18, v19, *v17 + 24);
          goto LABEL_21;
        }
        if ( (*(_BYTE *)(v16 + 28) & 1) != 0 || (*(_BYTE *)(v23 + 28) & 1) != 0 )
        {
          v22 = (unsigned int)sub_182C7B0(v18, v19, *v17 + 24) >> 31;
LABEL_21:
          if ( !(_BYTE)v22 )
            break;
          goto LABEL_22;
        }
        if ( *(_DWORD *)(v16 + 24) < *(_DWORD *)(v23 + 24) )
        {
LABEL_22:
          v16 = a1->m128i_i64[0];
          v18 = qword_1C7F2C0;
          --v17;
          v19 = a1->m128i_i64[0] + 24;
          continue;
        }
        break;
      }
      if ( v12 < v17 )
      {
        v24 = *v12++;
        *(v12 - 1) = *v17;
        *v17 = v24;
        v16 = a1->m128i_i64[0];
        continue;
      }
      break;
    }
    sub_82A500(v12, v5, a3);
    result = (char *)v12 - (char *)a1;
    if ( (char *)v12 - (char *)a1 > 128 )
    {
      v5 = (char *)v12;
      continue;
    }
    return result;
  }
}

