void __fastcall sub_AD6FF0(__m128i *a1, char *a2, __int64 a3, __int64 a4)
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
  _DWORD *v26; // r14
  char v27; // al
  _DWORD *v28; // rax
  int v29; // eax
  unsigned int v30; // eax
  __m128d v31; // xmm0
  char *i; // rbx
  _DWORD *v33; // rcx
  char v34; // al
  __m128i v35; // xmm0
  char v36; // dl
  _DWORD *v37; // rax
  __int64 v38; // r15
  __m128i *v39; // r13
  _DWORD *v40; // rbp
  __int64 v41; // r14
  unsigned __int8 v42; // al
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rbx
  __m128i *v47; // r12
  __int64 v48; // r13
  __int64 *v49; // r14
  char v50; // al
  __int64 *v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rsi
  __int64 v55; // [rsp+20h] [rbp-B8h]
  __int64 v56; // [rsp+28h] [rbp-B0h]
  unsigned int v57; // [rsp+30h] [rbp-A8h]
  bool v58; // [rsp+38h] [rbp-A0h]
  char *v59; // [rsp+40h] [rbp-98h]
  char v61; // [rsp+5Eh] [rbp-7Ah] BYREF
  char v62; // [rsp+5Fh] [rbp-79h] BYREF
  __int64 v63; // [rsp+60h] [rbp-78h] BYREF
  __int64 v64; // [rsp+68h] [rbp-70h]
  __int64 v65; // [rsp+70h] [rbp-68h] BYREF
  __int64 v66; // [rsp+78h] [rbp-60h]
  __int64 v67; // [rsp+80h] [rbp-58h] BYREF
  __int64 v68; // [rsp+88h] [rbp-50h]
  __int64 v69; // [rsp+90h] [rbp-48h] BYREF
  __int64 v70; // [rsp+98h] [rbp-40h]

  v59 = a2;
  v4 = a2 - (char *)a1;
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
    v67 = a4;
    v13 = sub_AD65D0(&v67, v10, v12);
    v14 = *((_DWORD **)v59 - 1);
    if ( v13 )
    {
      if ( (unsigned __int8)sub_AD65D0(&v67, *v9, v14) )
      {
        v15 = (_DWORD *)a1->m128i_i64[0];
        a1->m128i_i64[0] = (__int64)*v9;
        *v9 = v15;
        v16 = (_DWORD *)a1->m128i_i64[0];
      }
      else
      {
        v34 = sub_AD65D0(&v67, (_DWORD *)a1->m128i_i64[1], *((_DWORD **)v59 - 1));
        v35 = _mm_loadl_epi64(a1);
        if ( v34 )
        {
          a1->m128i_i64[0] = *((_QWORD *)v59 - 1);
          *((_QWORD *)v59 - 1) = v35.m128i_i64[0];
          v16 = (_DWORD *)a1->m128i_i64[0];
        }
        else
        {
          v16 = (_DWORD *)a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, v35);
        }
      }
    }
    else if ( (unsigned __int8)sub_AD65D0(&v67, (_DWORD *)a1->m128i_i64[1], v14) )
    {
      v31 = (__m128d)_mm_loadu_si128(a1);
      v16 = (_DWORD *)a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v31, v31, 1);
    }
    else
    {
      v36 = sub_AD65D0(&v67, *v9, *((_DWORD **)v59 - 1));
      v37 = (_DWORD *)a1->m128i_i64[0];
      if ( v36 )
      {
        a1->m128i_i64[0] = *((_QWORD *)v59 - 1);
        *((_QWORD *)v59 - 1) = v37;
      }
      else
      {
        a1->m128i_i64[0] = (__int64)*v9;
        *v9 = v37;
      }
      v16 = (_DWORD *)a1->m128i_i64[0];
    }
    v17 = v59;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *(_DWORD **)v11;
        v63 = 0;
        v64 = 0;
        v65 = 1;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 1;
        v70 = 0;
        if ( (unsigned __int8)sub_1666AE0(a4, v21, &v63, &v62) && (unsigned __int8)sub_1666AE0(a4, v16, &v67, &v61) )
        {
          v18 = qword_1C7F2C0;
          if ( (v65 & 0x100000000LL) != 0 || (_DWORD)v65 != 1 || (v69 & 0x100000000LL) != 0 || (_DWORD)v69 != 1 )
          {
            LOBYTE(v57) = sub_1848D40(qword_1C7F2C0, &v63, &v67);
            v18 = qword_1C7F2C0;
          }
          else if ( (v63 & 0x100000000LL) != 0 || (v67 & 0x100000000LL) != 0 )
          {
            v30 = sub_182C7B0(qword_1C7F2C0, &v63, &v67);
            v18 = qword_1C7F2C0;
            v57 = v30 >> 31;
          }
          else
          {
            LOBYTE(v57) = (int)v63 < (int)v67;
          }
        }
        else
        {
          LOBYTE(v57) = *v21 < *v16;
          v18 = qword_1C7F2C0;
        }
        sub_182CBA0(v18, &v67);
        sub_182CBA0(v18, &v69);
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v63);
        sub_182CBA0(v19, &v65);
        v20 = (_DWORD *)a1->m128i_i64[0];
        v16 = (_DWORD *)a1->m128i_i64[0];
        if ( !(_BYTE)v57 )
          break;
        v11 += 8;
      }
      for ( v17 -= 8; ; v17 -= 8 )
      {
        v26 = *(_DWORD **)v17;
        v63 = 0;
        v64 = 0;
        v65 = 1;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 1;
        v70 = 0;
        if ( (unsigned __int8)sub_1666AE0(a4, v20, &v63, &v62) && (unsigned __int8)sub_1666AE0(a4, v26, &v67, &v61) )
        {
          v23 = qword_1C7F2C0;
          if ( (v65 & 0x100000000LL) != 0 || (_DWORD)v65 != 1 || (v69 & 0x100000000LL) != 0 || (_DWORD)v69 != 1 )
          {
            v27 = sub_1848D40(qword_1C7F2C0, &v63, &v67);
            v23 = qword_1C7F2C0;
            v24 = v27;
          }
          else if ( (v63 & 0x100000000LL) != 0 || (v67 & 0x100000000LL) != 0 )
          {
            v29 = sub_182C7B0(qword_1C7F2C0, &v63, &v67);
            v23 = qword_1C7F2C0;
            v24 = v29 < 0;
          }
          else
          {
            v24 = (int)v63 < (int)v67;
          }
        }
        else
        {
          v22 = *v20 < *v26;
          v23 = qword_1C7F2C0;
          v24 = v22;
        }
        sub_182CBA0(v23, &v67);
        sub_182CBA0(v23, &v69);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v63);
        sub_182CBA0(v25, &v65);
        if ( !v24 )
          break;
        v20 = (_DWORD *)a1->m128i_i64[0];
      }
      if ( v11 >= v17 )
        break;
      v28 = *(_DWORD **)v11;
      v11 += 8;
      *((_QWORD *)v11 - 1) = *(_QWORD *)v17;
      *(_QWORD *)v17 = v28;
      v16 = (_DWORD *)a1->m128i_i64[0];
    }
    sub_AD6FF0(v11, v59, a3, a4);
    v5 = v11 - (char *)a1;
    if ( v11 - (char *)a1 <= 128 )
      return;
    v59 = v11;
  }
  v38 = v7 - 1;
  v39 = a1;
  v55 = v7 - 1;
  v56 = (v8 - 1) >> 1;
  v58 = (v8 & 1) == 0;
  while ( 1 )
  {
    v40 = (_DWORD *)v39->m128i_i64[v38];
    v63 = a4;
    if ( v38 >= v56 )
    {
      v45 = &v39->m128i_i64[v38];
      v41 = v38;
    }
    else
    {
      v41 = v38;
      do
      {
        v42 = sub_AD65D0(&v63, (_DWORD *)v39[v41 + 1].m128i_i64[0], (_DWORD *)v39[v41].m128i_i64[1]);
        v43 = v41;
        v44 = 2 * (v41 + 1) - v42;
        v45 = &v39->m128i_i64[v44];
        v41 = v44;
        v39->m128i_i64[v43] = *v45;
      }
      while ( v56 > v44 );
    }
    if ( v41 == v55 && v58 )
    {
      v53 = v39[v41].m128i_i64[1];
      v41 = 2 * v41 + 1;
      *v45 = v53;
      v45 = &v39->m128i_i64[v41];
    }
    v46 = (v41 - 1) >> 1;
    v67 = v63;
    if ( v38 >= v41 )
    {
      *v45 = (__int64)v40;
      goto LABEL_67;
    }
    v47 = v39;
    v48 = v41;
    while ( 1 )
    {
      v49 = &v47->m128i_i64[v46];
      v50 = sub_AD65D0(&v67, (_DWORD *)*v49, v40);
      v51 = &v47->m128i_i64[v48];
      if ( !v50 )
      {
        v52 = &v47->m128i_i64[v48];
        v39 = v47;
        goto LABEL_66;
      }
      v48 = v46;
      *v51 = *v49;
      if ( v46 <= v38 )
        break;
      v46 = (v46 - 1) / 2;
    }
    v39 = v47;
    v52 = &v47->m128i_i64[v46];
LABEL_66:
    *v52 = (__int64)v40;
    if ( !v38 )
      break;
LABEL_67:
    --v38;
  }
  for ( i = v59; i - (char *)a1 > 8; sub_AD6E70((__int64)a1, 0, (i - (char *)a1) >> 3, v33, a4) )
  {
    i -= 8;
    v33 = *(_DWORD **)i;
    *(_QWORD *)i = a1->m128i_i64[0];
  }
}

