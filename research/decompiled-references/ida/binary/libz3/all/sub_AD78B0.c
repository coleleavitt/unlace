void __fastcall sub_AD78B0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  _DWORD **v9; // rbx
  _DWORD *v10; // rsi
  char *v11; // r12
  _DWORD *v12; // rdx
  char v13; // al
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  _DWORD *v16; // r14
  char *v17; // r13
  void *v18; // r14
  void *v19; // r14
  _DWORD *v20; // r15
  _DWORD *v21; // rbx
  bool v22; // cf
  void *v23; // r15
  bool v24; // r14
  void *v25; // r15
  int v26; // r8d
  int v27; // r9d
  _DWORD *v28; // r14
  char v29; // al
  _DWORD *v30; // rax
  int v31; // eax
  unsigned int v32; // eax
  __m128d v33; // xmm0
  char *i; // rbx
  _DWORD *v35; // rcx
  char v36; // al
  __m128i v37; // xmm0
  char v38; // dl
  _DWORD *v39; // rax
  __int64 v40; // r15
  __m128i *v41; // r14
  _DWORD *v42; // rbp
  __m128i *v43; // rax
  __int64 v44; // r14
  __m128i *v45; // r12
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 *v49; // rax
  __m128i *v50; // rcx
  __int64 v51; // r12
  __int64 v52; // rbx
  __m128i *v53; // r13
  __int64 v54; // r14
  __int64 *v55; // r12
  char v56; // al
  __int64 *v57; // rdx
  __int64 *v58; // rax
  __int64 v59; // rsi
  void *v60; // [rsp+0h] [rbp-C8h]
  __int64 v62; // [rsp+28h] [rbp-A0h]
  unsigned int v63; // [rsp+30h] [rbp-98h]
  int v64[2]; // [rsp+38h] [rbp-90h]
  __int64 v66; // [rsp+40h] [rbp-88h]
  bool v67; // [rsp+4Fh] [rbp-79h]
  __int64 v68; // [rsp+50h] [rbp-78h] BYREF
  __int64 v69; // [rsp+58h] [rbp-70h]
  __int64 v70; // [rsp+60h] [rbp-68h] BYREF
  __int64 v71; // [rsp+68h] [rbp-60h]
  __int64 v72; // [rsp+70h] [rbp-58h] BYREF
  __int64 v73; // [rsp+78h] [rbp-50h]
  __int64 v74; // [rsp+80h] [rbp-48h] BYREF
  __int64 v75; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v64 = a2;
  v4 = a2 - (_QWORD)a1;
  if ( v4 <= 128 )
    return;
  v5 = v4;
  while ( 1 )
  {
    v6 = v5;
    v7 = v5 >> 4;
    v8 = v6 >> 3;
    if ( !a3 )
      break;
    --a3;
    v9 = (_DWORD **)a1 + v7;
    v10 = (_DWORD *)a1->m128i_i64[1];
    v11 = &a1->m128i_i8[8];
    v12 = *v9;
    v72 = a4;
    v13 = sub_AD6A30(&v72, v10, v12);
    v14 = *(_DWORD **)(*(_QWORD *)v64 - 8LL);
    if ( v13 )
    {
      if ( (unsigned __int8)sub_AD6A30(&v72, *v9, v14) )
      {
        v15 = (_DWORD *)a1->m128i_i64[0];
        a1->m128i_i64[0] = (__int64)*v9;
        *v9 = v15;
        v16 = (_DWORD *)a1->m128i_i64[0];
      }
      else
      {
        v36 = sub_AD6A30(&v72, (_DWORD *)a1->m128i_i64[1], *(_DWORD **)(*(_QWORD *)v64 - 8LL));
        v37 = _mm_loadl_epi64(a1);
        if ( v36 )
        {
          a1->m128i_i64[0] = *(_QWORD *)(*(_QWORD *)v64 - 8LL);
          *(_QWORD *)(*(_QWORD *)v64 - 8LL) = v37.m128i_i64[0];
          v16 = (_DWORD *)a1->m128i_i64[0];
        }
        else
        {
          v16 = (_DWORD *)a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, v37);
        }
      }
    }
    else if ( (unsigned __int8)sub_AD6A30(&v72, (_DWORD *)a1->m128i_i64[1], v14) )
    {
      v33 = (__m128d)_mm_loadu_si128(a1);
      v16 = (_DWORD *)a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v33, v33, 1);
    }
    else
    {
      v38 = sub_AD6A30(&v72, *v9, *(_DWORD **)(*(_QWORD *)v64 - 8LL));
      v39 = (_DWORD *)a1->m128i_i64[0];
      if ( v38 )
      {
        a1->m128i_i64[0] = *(_QWORD *)(*(_QWORD *)v64 - 8LL);
        *(_QWORD *)(*(_QWORD *)v64 - 8LL) = v39;
      }
      else
      {
        a1->m128i_i64[0] = (__int64)*v9;
        *v9 = v39;
      }
      v16 = (_DWORD *)a1->m128i_i64[0];
    }
    v17 = *(char **)v64;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *(_DWORD **)v11;
        v68 = 0;
        v69 = 0;
        v70 = 1;
        v71 = 0;
        v72 = 0;
        v73 = 0;
        v74 = 1;
        v75 = 0;
        if ( (unsigned __int8)sub_1673C40(a4, v21, &v68) && (unsigned __int8)sub_1673C40(a4, v16, &v72) )
        {
          v18 = qword_1C7F2C0;
          if ( (v70 & 0x100000000LL) != 0 || (_DWORD)v70 != 1 || (v74 & 0x100000000LL) != 0 || (_DWORD)v74 != 1 )
          {
            LOBYTE(v63) = sub_1848D40(qword_1C7F2C0, &v68, &v72);
            v18 = qword_1C7F2C0;
          }
          else if ( (v68 & 0x100000000LL) != 0 || (v72 & 0x100000000LL) != 0 )
          {
            v32 = sub_182C7B0(qword_1C7F2C0, &v68, &v72);
            v18 = qword_1C7F2C0;
            v63 = v32 >> 31;
          }
          else
          {
            LOBYTE(v63) = (int)v68 < (int)v72;
          }
        }
        else
        {
          LOBYTE(v63) = *v21 < *v16;
          v18 = qword_1C7F2C0;
        }
        sub_182CBA0(v18, &v72);
        sub_182CBA0(v18, &v74);
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v68);
        sub_182CBA0(v19, &v70);
        v20 = (_DWORD *)a1->m128i_i64[0];
        v16 = (_DWORD *)a1->m128i_i64[0];
        if ( !(_BYTE)v63 )
          break;
        v11 += 8;
      }
      for ( v17 -= 8; ; v17 -= 8 )
      {
        v28 = *(_DWORD **)v17;
        v68 = 0;
        v69 = 0;
        v70 = 1;
        v71 = 0;
        v72 = 0;
        v73 = 0;
        v74 = 1;
        v75 = 0;
        if ( (unsigned __int8)sub_1673C40(a4, v20, &v68) && (unsigned __int8)sub_1673C40(a4, v28, &v72) )
        {
          v23 = qword_1C7F2C0;
          if ( (v70 & 0x100000000LL) != 0 || (_DWORD)v70 != 1 || (v74 & 0x100000000LL) != 0 || (_DWORD)v74 != 1 )
          {
            v29 = sub_1848D40(qword_1C7F2C0, &v68, &v72);
            v23 = qword_1C7F2C0;
            v24 = v29;
          }
          else if ( (v68 & 0x100000000LL) != 0 || (v72 & 0x100000000LL) != 0 )
          {
            v31 = sub_182C7B0(qword_1C7F2C0, &v68, &v72);
            v23 = qword_1C7F2C0;
            v24 = v31 < 0;
          }
          else
          {
            v24 = (int)v68 < (int)v72;
          }
        }
        else
        {
          v22 = *v20 < *v28;
          v23 = qword_1C7F2C0;
          v24 = v22;
        }
        sub_182CBA0(v23, &v72);
        sub_182CBA0(v23, &v74);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v68);
        sub_182CBA0(v25, &v70);
        if ( !v24 )
          break;
        v20 = (_DWORD *)a1->m128i_i64[0];
      }
      if ( v11 >= v17 )
        break;
      v30 = *(_DWORD **)v11;
      v11 += 8;
      *((_QWORD *)v11 - 1) = *(_QWORD *)v17;
      *(_QWORD *)v17 = v30;
      v16 = (_DWORD *)a1->m128i_i64[0];
    }
    sub_AD78B0((int)v11, v64[0], a3, a4, v26, v27, v60);
    v5 = v11 - (char *)a1;
    if ( v11 - (char *)a1 <= 128 )
      return;
    *(_QWORD *)v64 = v11;
  }
  v40 = v7 - 1;
  v41 = a1;
  v62 = v40;
  v67 = (v8 & 1) == 0;
  v66 = (v8 - 1) >> 1;
  while ( 1 )
  {
    v42 = (_DWORD *)v41->m128i_i64[v40];
    v68 = a4;
    if ( v40 >= v66 )
    {
      v49 = &v41->m128i_i64[v40];
      v51 = v40;
    }
    else
    {
      v43 = v41;
      v44 = v40;
      v45 = v43;
      do
      {
        v46 = sub_AD6A30(&v68, (_DWORD *)v45[v44 + 1].m128i_i64[0], (_DWORD *)v45[v44].m128i_i64[1]);
        v47 = v44;
        v48 = 2 * (v44 + 1) - v46;
        v49 = &v45->m128i_i64[v48];
        v44 = v48;
        v45->m128i_i64[v47] = *v49;
      }
      while ( v48 < v66 );
      v50 = v45;
      v51 = v48;
      v41 = v50;
    }
    if ( v51 == v62 && v67 )
    {
      v59 = v41[v51].m128i_i64[1];
      v51 = 2 * v51 + 1;
      *v49 = v59;
      v49 = &v41->m128i_i64[v51];
    }
    v52 = (v51 - 1) >> 1;
    v72 = v68;
    if ( v40 >= v51 )
    {
      *v49 = (__int64)v42;
      goto LABEL_68;
    }
    v53 = v41;
    v54 = v51;
    while ( 1 )
    {
      v55 = &v53->m128i_i64[v52];
      v56 = sub_AD6A30(&v72, (_DWORD *)*v55, v42);
      v57 = &v53->m128i_i64[v54];
      if ( !v56 )
      {
        v58 = &v53->m128i_i64[v54];
        v41 = v53;
        goto LABEL_67;
      }
      v54 = v52;
      *v57 = *v55;
      if ( v52 <= v40 )
        break;
      v52 = (v52 - 1) / 2;
    }
    v41 = v53;
    v58 = &v53->m128i_i64[v52];
LABEL_67:
    *v58 = (__int64)v42;
    if ( !v40 )
      break;
LABEL_68:
    --v40;
  }
  for ( i = *(char **)v64; i - (char *)a1 > 8; sub_AD7730((__int64)a1, 0, (i - (char *)a1) >> 3, v35, a4) )
  {
    i -= 8;
    v35 = *(_DWORD **)i;
    *(_QWORD *)i = a1->m128i_i64[0];
  }
}

