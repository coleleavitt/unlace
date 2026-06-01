int __fastcall sub_5FB030(__int64 a1, double *a2, char *a3)
{
  __int64 v3; // rax
  char *v4; // r13
  double *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbp
  char *v8; // r13
  __int64 v9; // r12
  double v10; // rbp
  __int64 v11; // r15
  unsigned int *v12; // rax
  size_t v13; // rcx
  const void *v14; // rsi
  unsigned int *v15; // rax
  size_t v16; // r8
  size_t v17; // rdx
  int v18; // eax
  _QWORD *v19; // r11
  unsigned int *v20; // rax
  size_t v21; // r9
  const void *v22; // rsi
  size_t v23; // rdx
  int v24; // eax
  size_t v25; // rdx
  int v26; // eax
  double v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r15
  unsigned int *v30; // rsi
  size_t v31; // rbx
  size_t v32; // rdx
  int v33; // eax
  unsigned int *v34; // r15
  size_t v35; // rbp
  __int64 v36; // r12
  unsigned int *v37; // rdi
  size_t v38; // rbx
  size_t v39; // rdx
  int v40; // eax
  unsigned int *v41; // rax
  size_t v42; // r9
  const void *v43; // rsi
  size_t v44; // rdx
  int v45; // eax
  size_t v46; // rdx
  int v47; // eax
  double v48; // rax
  double *v49; // rbx
  __int64 i; // rbx
  __int64 *v51; // rbx
  __int64 v52; // rcx
  void *v54; // [rsp+0h] [rbp-78h]
  void *v55; // [rsp+0h] [rbp-78h]
  _QWORD *v56; // [rsp+0h] [rbp-78h]
  void *s1; // [rsp+10h] [rbp-68h]
  _QWORD *s1b; // [rsp+10h] [rbp-68h]
  double *s1a; // [rsp+10h] [rbp-68h]
  void *s2a; // [rsp+18h] [rbp-60h]
  void *s2b; // [rsp+18h] [rbp-60h]
  void *s2c; // [rsp+18h] [rbp-60h]
  char *s2; // [rsp+18h] [rbp-60h]
  void *s2d; // [rsp+18h] [rbp-60h]
  void *s2e; // [rsp+18h] [rbp-60h]
  size_t v67; // [rsp+20h] [rbp-58h]
  _QWORD *v68; // [rsp+20h] [rbp-58h]
  size_t v69; // [rsp+20h] [rbp-58h]
  _QWORD *v70; // [rsp+20h] [rbp-58h]
  size_t v71; // [rsp+20h] [rbp-58h]
  size_t v72; // [rsp+28h] [rbp-50h]
  size_t v73; // [rsp+28h] [rbp-50h]
  size_t v74; // [rsp+30h] [rbp-48h]
  size_t v75; // [rsp+30h] [rbp-48h]
  size_t v76; // [rsp+38h] [rbp-40h]
  size_t v77; // [rsp+38h] [rbp-40h]

  v3 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 128 )
  {
    v4 = a3;
    v5 = a2;
    v6 = v3 >> 4;
    v7 = ((__int64)a2 - a1) >> 3;
    if ( a3 )
    {
      do
      {
        v8 = v4 - 1;
        v9 = a1 + 8 * v6;
        v10 = *(double *)(a1 + 8);
        v11 = *(_QWORD *)v9;
        v12 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)v9 + 40LL) + 16LL);
        v13 = *v12;
        v14 = v12 + 4;
        v54 = v12 + 4;
        v15 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)&v10 + 40LL) + 16LL);
        v16 = *v15;
        s1 = v15 + 4;
        v17 = v16;
        if ( v13 <= v16 )
          v17 = v13;
        if ( v17 && (v67 = *v15, s2a = (void *)v13, v18 = memcmp(v15 + 4, v14, v17), v13 = (size_t)s2a, v16 = v67, v18) )
        {
          if ( v18 < 0 )
          {
LABEL_35:
            v19 = *((_QWORD **)v5 - 1);
            v41 = *(unsigned int **)(v19[5] + 16LL);
            v42 = *v41;
            v43 = v41 + 4;
            v44 = v42;
            if ( v13 <= v42 )
              v44 = v13;
            if ( v44
              && (v77 = *v41,
                  v75 = v16,
                  v73 = v13,
                  v70 = *((_QWORD **)v5 - 1),
                  s2d = v41 + 4,
                  v45 = memcmp(v54, v43, v44),
                  v43 = s2d,
                  v19 = v70,
                  v13 = v73,
                  v16 = v75,
                  v42 = v77,
                  v45) )
            {
              if ( v45 < 0 )
              {
LABEL_18:
                v27 = *(double *)a1;
                *(_QWORD *)a1 = v11;
                *(double *)v9 = v27;
                v10 = *(double *)a1;
                goto LABEL_19;
              }
            }
            else if ( v13 < v42 )
            {
              goto LABEL_18;
            }
            v46 = v42;
            if ( v16 <= v42 )
              v46 = v16;
            if ( v46
              && (v71 = v42,
                  s2e = (void *)v16,
                  v56 = v19,
                  v47 = memcmp(s1, v43, v46),
                  v19 = v56,
                  v16 = (size_t)s2e,
                  v42 = v71,
                  v47) )
            {
              if ( v47 < 0 )
                goto LABEL_45;
            }
            else if ( v16 < v42 )
            {
              goto LABEL_45;
            }
            goto LABEL_62;
          }
        }
        else if ( v16 < v13 )
        {
          goto LABEL_35;
        }
        v19 = *((_QWORD **)v5 - 1);
        v20 = *(unsigned int **)(v19[5] + 16LL);
        v21 = *v20;
        v22 = v20 + 4;
        v23 = v21;
        if ( v16 <= v21 )
          v23 = v16;
        if ( v23
          && (v76 = *v20,
              v74 = v16,
              v72 = v13,
              v68 = *((_QWORD **)v5 - 1),
              s2b = v20 + 4,
              v24 = memcmp(s1, v22, v23),
              v22 = s2b,
              v19 = v68,
              v13 = v72,
              v16 = v74,
              v21 = v76,
              v24) )
        {
          if ( v24 >= 0 )
          {
LABEL_13:
            v25 = v21;
            if ( v13 <= v21 )
              v25 = v13;
            if ( v25
              && (v69 = v21,
                  s2c = (void *)v13,
                  s1b = v19,
                  v26 = memcmp(v54, v22, v25),
                  v19 = s1b,
                  v13 = (size_t)s2c,
                  v21 = v69,
                  v26) )
            {
              if ( v26 >= 0 )
                goto LABEL_18;
            }
            else if ( v13 >= v21 )
            {
              goto LABEL_18;
            }
LABEL_45:
            v48 = *(double *)a1;
            *(_QWORD *)a1 = v19;
            *(v5 - 1) = v48;
            v10 = *(double *)a1;
            goto LABEL_19;
          }
        }
        else if ( v16 >= v21 )
        {
          goto LABEL_13;
        }
LABEL_62:
        *(__m128 *)a1 = _mm_loadh_ps((const double *)a1);
LABEL_19:
        s2 = v8;
        v28 = a1 + 8;
        s1a = v5;
LABEL_27:
        v34 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)&v10 + 40LL) + 16LL);
        v35 = *v34;
        v55 = v34 + 4;
        while ( 1 )
        {
          while ( 1 )
          {
            v36 = *(_QWORD *)v28;
            v37 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)v28 + 40LL) + 16LL);
            v38 = *v37;
            v39 = v38;
            if ( v35 <= v38 )
              v39 = v35;
            if ( v39 )
            {
              v40 = memcmp(v37 + 4, v55, v39);
              if ( v40 )
                break;
            }
            if ( v38 >= v35 )
              goto LABEL_20;
            v28 += 8LL;
          }
          if ( v40 >= 0 )
            break;
          v28 += 8LL;
        }
        do
        {
          while ( 1 )
          {
LABEL_20:
            v29 = *((_QWORD *)v5-- - 1);
            v30 = *(unsigned int **)(*(_QWORD *)(v29 + 40) + 16LL);
            v31 = *v30;
            v32 = v31;
            if ( v35 <= v31 )
              v32 = v35;
            if ( v32 )
            {
              v33 = memcmp(v55, v30 + 4, v32);
              if ( v33 )
                break;
            }
            if ( v35 >= v31 )
            {
              if ( v28 >= (unsigned __int64)v5 )
                goto LABEL_50;
LABEL_26:
              *(_QWORD *)v28 = v29;
              v28 += 8LL;
              *(_QWORD *)v5 = v36;
              v10 = *(double *)a1;
              goto LABEL_27;
            }
          }
        }
        while ( v33 < 0 );
        if ( v28 < (unsigned __int64)v5 )
          goto LABEL_26;
LABEL_50:
        v49 = (double *)v28;
        v4 = s2;
        sub_5FB030(v49, s1a, s2);
        v3 = (__int64)v49 - a1;
        if ( (__int64)v49 - a1 <= 128 )
          return v3;
        v5 = v49;
        v6 = v3 >> 4;
        v7 = ((__int64)v49 - a1) >> 3;
      }
      while ( s2 );
    }
    for ( i = v6 - 1; ; --i )
    {
      sub_5F8CC0(a1, i, v7, *(_QWORD *)(a1 + 8 * i));
      if ( !i )
        break;
    }
    LODWORD(v3) = (_DWORD)v5 - a1;
    if ( (__int64)v5 - a1 > 8 )
    {
      v51 = (__int64 *)v5;
      do
      {
        v52 = *--v51;
        *v51 = *(_QWORD *)a1;
        LODWORD(v3) = sub_5F8CC0(a1, 0, ((__int64)v51 - a1) >> 3, v52);
      }
      while ( (__int64)v51 - a1 > 8 );
    }
  }
  return v3;
}

