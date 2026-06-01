void __fastcall sub_AD8150(__m128i *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // r12
  __int64 v9; // rdx
  _DWORD **v10; // r13
  _DWORD *v11; // rsi
  _DWORD *v12; // rdx
  char *v13; // rbp
  char v14; // al
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  char *v18; // r13
  char v19; // al
  _DWORD *v20; // rsi
  _DWORD *v21; // rax
  __int64 v22; // r15
  __m128i *v23; // r14
  _DWORD *v24; // r12
  __m128i *v25; // r12
  __int64 v26; // r14
  unsigned __int8 v27; // al
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbp
  __m128i *v32; // r13
  __int64 v33; // r14
  __int64 *v34; // rbx
  char v35; // al
  __int64 *v36; // rdx
  __int64 *v37; // rax
  __m128d v38; // xmm0
  __m128i *v39; // rbx
  char *v40; // r15
  char *v41; // rcx
  _DWORD *v42; // r13
  __int64 v43; // rsi
  __int64 *v44; // rax
  __int64 v45; // rbx
  char *v46; // r14
  __m128i *v47; // r15
  unsigned __int8 v48; // al
  __int64 v49; // rdx
  __int64 v50; // rbp
  char *v51; // rax
  __m128i *v52; // rdx
  __int64 v53; // r14
  __int64 v54; // r12
  char *v55; // r14
  __int64 v56; // rdx
  char *v57; // r15
  char *v58; // rbp
  char v59; // al
  __m128i v60; // xmm0
  char v61; // dl
  _DWORD *v62; // rax
  __int64 v63; // rdx
  __m128i v64; // xmm0
  __int64 v65; // rsi
  __int64 v67; // [rsp+0h] [rbp-98h]
  _DWORD *v69; // [rsp+10h] [rbp-88h]
  char *v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+18h] [rbp-80h]
  __int64 v72; // [rsp+18h] [rbp-80h]
  __int64 v73; // [rsp+20h] [rbp-78h]
  char *v74; // [rsp+20h] [rbp-78h]
  __int64 v75; // [rsp+28h] [rbp-70h]
  __int32 v76; // [rsp+30h] [rbp-68h]
  bool v77; // [rsp+37h] [rbp-61h]
  char *v78; // [rsp+38h] [rbp-60h]
  __m128i v79; // [rsp+40h] [rbp-58h] BYREF
  __m128i v80; // [rsp+50h] [rbp-48h] BYREF

  v6 = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 128 )
  {
    v76 = a5;
    v7 = v6 >> 3;
    v8 = a2;
    v9 = v6 >> 4;
    if ( !a3 )
    {
LABEL_16:
      v78 = v8;
      v71 = v9 - 1;
      v73 = (v7 - 1) >> 1;
      v77 = (v7 & 1) == 0;
      v22 = v9 - 1;
      v23 = a1;
      while ( 1 )
      {
        v24 = (_DWORD *)v23->m128i_i64[v22];
        v79.m128i_i64[0] = a4;
        v79.m128i_i32[2] = v76;
        if ( v22 >= v73 )
        {
          v29 = &v23->m128i_i64[v22];
          v30 = v22;
        }
        else
        {
          v69 = v24;
          v25 = v23;
          v26 = v22;
          do
          {
            v27 = sub_ACCA40(&v79, (_DWORD *)v25[v26 + 1].m128i_i64[0], (_DWORD *)v25[v26].m128i_i64[1]);
            v28 = v26;
            v26 = 2 * (v26 + 1) - v27;
            v29 = &v25->m128i_i64[v26];
            v25->m128i_i64[v28] = *v29;
          }
          while ( v26 < v73 );
          v30 = v26;
          v23 = v25;
          v24 = v69;
        }
        if ( v71 == v30 && v77 )
        {
          v65 = v23[v30].m128i_i64[1];
          v30 = 2 * v30 + 1;
          *v29 = v65;
          v29 = &v23->m128i_i64[v30];
        }
        v31 = (v30 - 1) >> 1;
        v80 = _mm_load_si128(&v79);
        if ( v22 >= v30 )
        {
          *v29 = (__int64)v24;
        }
        else
        {
          v32 = v23;
          v33 = v30;
          while ( 1 )
          {
            v34 = &v32->m128i_i64[v31];
            v35 = sub_ACCA40(&v80, (_DWORD *)*v34, v24);
            v36 = &v32->m128i_i64[v33];
            if ( !v35 )
            {
              v37 = &v32->m128i_i64[v33];
              v23 = v32;
              goto LABEL_30;
            }
            v33 = v31;
            *v36 = *v34;
            if ( v22 >= v31 )
              break;
            v31 = (v31 - 1) / 2;
          }
          v23 = v32;
          v37 = &v32->m128i_i64[v31];
LABEL_30:
          *v37 = (__int64)v24;
          if ( !v22 )
          {
            v39 = &v80;
            v40 = (char *)v23;
            if ( v78 - (char *)v23 <= 8 )
              return;
            v41 = v78;
            while ( 2 )
            {
              while ( 2 )
              {
                v41 -= 8;
                v42 = *(_DWORD **)v41;
                *(_QWORD *)v41 = *(_QWORD *)v40;
                v67 = v41 - v40;
                v79.m128i_i64[0] = a4;
                v43 = (v41 - v40) >> 3;
                v79.m128i_i32[2] = v76;
                if ( v41 - v40 <= 16 )
                {
                  v51 = v40;
                  if ( (((v41 - v40) >> 3) & 1) == 0 )
                  {
                    v53 = 0;
                    goto LABEL_58;
                  }
                }
                else
                {
                  v72 = ((v41 - v40) >> 3) & 1;
                  v74 = v41;
                  v75 = (v41 - v40) >> 3;
                  v44 = (__int64 *)v39;
                  v45 = 0;
                  v46 = v40;
                  v47 = (__m128i *)v44;
                  do
                  {
                    v48 = sub_ACCA40(&v79, *(_DWORD **)&v46[16 * v45 + 16], *(_DWORD **)&v46[16 * v45 + 8]);
                    v49 = v45;
                    v45 = 2 * (v45 + 1) - v48;
                    v50 = 8 * v45;
                    v51 = &v46[8 * v45];
                    *(_QWORD *)&v46[8 * v49] = *(_QWORD *)v51;
                  }
                  while ( v45 < (v43 - 1) / 2 );
                  v52 = v47;
                  v40 = v46;
                  v41 = v74;
                  v53 = v45;
                  v43 = v75;
                  v39 = v52;
                  if ( v72 )
                  {
                    v80 = _mm_load_si128(&v79);
                    v54 = (v53 - 1) / 2;
                    if ( v53 )
                    {
                      v70 = v74;
                      v55 = v40;
                      goto LABEL_44;
                    }
                    *(_QWORD *)v51 = v42;
                    continue;
                  }
LABEL_58:
                  if ( v53 == (v43 - 2) / 2 )
                  {
                    v63 = 2 * v53 + 2;
                    v64 = _mm_load_si128(&v79);
                    v70 = v41;
                    v55 = v40;
                    v50 = 8 * v63 - 8;
                    *(_QWORD *)v51 = *(_QWORD *)&v40[8 * v63 - 8];
                    v54 = (v63 >> 1) - 1;
                    v80 = v64;
                    while ( 1 )
                    {
LABEL_44:
                      v57 = &v55[8 * v54];
                      v58 = &v55[v50];
                      if ( !(unsigned __int8)sub_ACCA40(v39, *(_DWORD **)v57, v42) )
                      {
                        v41 = v70;
                        v51 = v58;
                        v40 = v55;
                        goto LABEL_46;
                      }
                      *(_QWORD *)v58 = *(_QWORD *)v57;
                      v56 = v54;
                      if ( !v54 )
                        break;
                      v54 = (v54 - 1) / 2;
                      v50 = 8 * v56;
                    }
                    v41 = v70;
                    v40 = v55;
                    v51 = v55;
                  }
                  else
                  {
                    v80 = _mm_load_si128(&v79);
                    v54 = (v53 - 1) / 2;
                    if ( v53 )
                    {
                      v50 = 8 * v53;
                      v70 = v41;
                      v55 = v40;
                      goto LABEL_44;
                    }
                  }
                }
                break;
              }
LABEL_46:
              *(_QWORD *)v51 = v42;
              if ( v67 <= 8 )
                return;
              continue;
            }
          }
        }
        --v22;
      }
    }
    while ( 1 )
    {
      v10 = (_DWORD **)a1 + v9;
      v11 = (_DWORD *)a1->m128i_i64[1];
      v12 = *v10;
      --a3;
      v13 = &a1->m128i_i8[8];
      v80.m128i_i64[0] = a4;
      v80.m128i_i32[2] = v76;
      v14 = sub_ACCA40(&v80, v11, v12);
      v15 = *((_DWORD **)v8 - 1);
      if ( v14 )
      {
        if ( (unsigned __int8)sub_ACCA40(&v80, *v10, v15) )
        {
          v16 = (_DWORD *)a1->m128i_i64[0];
          a1->m128i_i64[0] = (__int64)*v10;
          *v10 = v16;
          v17 = (_DWORD *)a1->m128i_i64[0];
        }
        else
        {
          v59 = sub_ACCA40(&v80, (_DWORD *)a1->m128i_i64[1], *((_DWORD **)v8 - 1));
          v60 = _mm_loadl_epi64(a1);
          if ( v59 )
          {
            a1->m128i_i64[0] = *((_QWORD *)v8 - 1);
            *((_QWORD *)v8 - 1) = v60.m128i_i64[0];
            v17 = (_DWORD *)a1->m128i_i64[0];
          }
          else
          {
            v17 = (_DWORD *)a1->m128i_i64[1];
            *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, v60);
          }
        }
      }
      else if ( (unsigned __int8)sub_ACCA40(&v80, (_DWORD *)a1->m128i_i64[1], v15) )
      {
        v38 = (__m128d)_mm_loadu_si128(a1);
        v17 = (_DWORD *)a1->m128i_i64[1];
        *(__m128d *)a1 = _mm_shuffle_pd(v38, v38, 1);
      }
      else
      {
        v61 = sub_ACCA40(&v80, *v10, *((_DWORD **)v8 - 1));
        v62 = (_DWORD *)a1->m128i_i64[0];
        if ( v61 )
        {
          a1->m128i_i64[0] = *((_QWORD *)v8 - 1);
          *((_QWORD *)v8 - 1) = v62;
        }
        else
        {
          a1->m128i_i64[0] = (__int64)*v10;
          *v10 = v62;
        }
        v17 = (_DWORD *)a1->m128i_i64[0];
      }
      v18 = v8;
      v80.m128i_i64[0] = a4;
      v80.m128i_i32[2] = v76;
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = sub_ACCA40(&v80, *(_DWORD **)v13, v17);
          v20 = (_DWORD *)a1->m128i_i64[0];
          v17 = (_DWORD *)a1->m128i_i64[0];
          if ( !v19 )
            break;
          v13 += 8;
        }
        for ( v18 -= 8; (unsigned __int8)sub_ACCA40(&v80, v20, *(_DWORD **)v18); v18 -= 8 )
          v20 = (_DWORD *)a1->m128i_i64[0];
        if ( v13 >= v18 )
          break;
        v21 = *(_DWORD **)v13;
        v13 += 8;
        *((_QWORD *)v13 - 1) = *(_QWORD *)v18;
        *(_QWORD *)v18 = v21;
        v17 = (_DWORD *)a1->m128i_i64[0];
      }
      sub_AD8150(v13, v8, a3, a4, a5);
      if ( v13 - (char *)a1 <= 128 )
        break;
      v8 = v13;
      v9 = (v13 - (char *)a1) >> 4;
      v7 = (v13 - (char *)a1) >> 3;
      if ( !a3 )
        goto LABEL_16;
    }
  }
}

