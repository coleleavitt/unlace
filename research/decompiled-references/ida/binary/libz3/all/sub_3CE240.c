char __fastcall sub_3CE240(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD))
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v9; // rbx
  char *v10; // r13
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // r15
  char *v13; // r12
  __int64 j; // rbx
  __int64 v15; // rbp
  char *v16; // r14
  char *v17; // r14
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r12
  char *v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  _QWORD *v26; // rbx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __m128i v31; // xmm0
  unsigned __int64 v32; // rdx
  __int64 *v33; // rdi
  __int64 *v34; // rdx
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // r9
  __int64 v39; // r11
  _QWORD *v40; // r15
  __int64 v41; // rdx
  _QWORD *v42; // rdi
  __int64 v43; // rsi
  char *v44; // rbx
  __int64 v45; // rdx
  __m128i v46; // xmm0
  unsigned __int64 v47; // rdx
  __int64 *v48; // rcx
  __int64 *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 (__fastcall *v53)(_QWORD, _QWORD); // r15
  __int64 i; // rbx
  __int64 v55; // rbp
  char *v56; // r14
  _QWORD *v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // r10
  __int64 k; // rdx
  __int64 v62; // rsi
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __m128i v66; // xmm0
  unsigned __int64 v67; // rax
  char *v68; // rdx
  char *v69; // rax
  __int64 v70; // rcx
  char *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r15
  signed __int64 v74; // rdx
  __int64 v75; // r15
  char *v76; // rax
  char *v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rsi
  __int64 v82; // [rsp+8h] [rbp-80h]
  __int64 v83; // [rsp+10h] [rbp-78h]
  __int64 v85; // [rsp+20h] [rbp-68h]
  __int64 v86; // [rsp+28h] [rbp-60h]
  bool v87; // [rsp+28h] [rbp-60h]
  __int64 v88; // [rsp+30h] [rbp-58h]
  __int64 v89; // [rsp+30h] [rbp-58h]
  char *v90; // [rsp+38h] [rbp-50h]
  bool v91; // [rsp+47h] [rbp-41h]

  v83 = a5;
  LOBYTE(v6) = a5 == 0 || a4 == 0;
  if ( (_BYTE)v6 )
    return v6;
  v7 = a4;
  while ( v7 + v83 != 2 )
  {
    if ( v83 >= v7 )
    {
      v10 = a1;
      v51 = v83 / 2;
      v17 = &a2[8 * (v83 / 2)];
      v89 = v83 / 2;
      v52 = (a2 - a1) >> 3;
      if ( a2 - a1 <= 0 )
      {
        v91 = 0;
        v85 = 0;
      }
      else
      {
        v53 = a6;
        for ( i = (a2 - a1) >> 3; ; i >>= 1 )
        {
          while ( 1 )
          {
            v55 = i >> 1;
            v56 = &v10[8 * (i >> 1)];
            if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, __int64))v53)(
                   *(_QWORD *)&a2[8 * (v83 / 2)],
                   *(_QWORD *)v56,
                   v52) )
            {
              break;
            }
            v10 = v56 + 8;
            i = i - v55 - 1;
            if ( i <= 0 )
              goto LABEL_44;
          }
          if ( !v55 )
            break;
        }
LABEL_44:
        v17 = &a2[8 * (v83 / 2)];
        v51 = v83 / 2;
        a6 = v53;
        v85 = (v10 - a1) >> 3;
        v7 -= v85;
        v91 = v7 == 0;
      }
      v23 = v83 == v51;
      v83 -= v51;
      v21 = a2;
      v87 = v23;
      if ( v10 == a2 )
        goto LABEL_46;
    }
    else
    {
      v9 = v7 / 2;
      v85 = v7 / 2;
      v10 = &a1[8 * (v7 / 2)];
      v11 = (a3 - (__int64)a2) >> 3;
      if ( a3 - (__int64)a2 <= 0 )
      {
        v7 -= v9;
        v87 = 0;
        v90 = v10;
        v89 = 0;
        v91 = v7 == 0;
        goto LABEL_59;
      }
      v86 = v7;
      v12 = a6;
      v13 = a2;
      v88 = v9;
      for ( j = (a3 - (__int64)a2) >> 3; ; j >>= 1 )
      {
        while ( 1 )
        {
          v15 = j >> 1;
          v16 = &v13[8 * (j >> 1)];
          if ( !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, __int64))v12)(*(_QWORD *)v16, *(_QWORD *)v10, v11) )
            break;
          v13 = v16 + 8;
          j = j - v15 - 1;
          if ( j <= 0 )
            goto LABEL_9;
        }
        if ( !v15 )
          break;
      }
LABEL_9:
      v17 = v13;
      v18 = v88;
      a6 = v12;
      v19 = v13;
      v20 = v86;
      v21 = a2;
      v22 = (v19 - a2) >> 3;
      v23 = v83 == v22;
      v83 -= v22;
      v89 = v22;
      v87 = v23;
      v7 = v20 - v18;
      v91 = v7 == 0;
      if ( v10 == a2 )
      {
LABEL_46:
        a2 = v17;
        v90 = v17;
        goto LABEL_59;
      }
    }
    if ( v17 == v21 )
    {
      v90 = v10;
    }
    else
    {
      v24 = (v21 - v10) >> 3;
      v25 = (v17 - v10) >> 3;
      if ( v24 == v25 - v24 )
      {
        v63 = a2 - 8 - v10;
        if ( v63 <= 8 || (unsigned __int64)(v10 + 15 - a2) <= 0x1E )
        {
          v76 = a2;
          v77 = v10;
          do
          {
            v78 = *(_QWORD *)v77;
            v79 = *(_QWORD *)v76;
            v76 += 8;
            v77 += 8;
            *((_QWORD *)v77 - 1) = v79;
            *((_QWORD *)v76 - 1) = v78;
          }
          while ( &a2[a2 - v10] != v76 );
        }
        else
        {
          v64 = 0;
          v65 = (v63 >> 3) + 1;
          do
          {
            v66 = _mm_loadu_si128((const __m128i *)&v10[v64]);
            *(__m128i *)&v10[v64] = _mm_loadu_si128((const __m128i *)&a2[v64]);
            *(__m128i *)&a2[v64] = v66;
            v64 += 16;
          }
          while ( v64 != 16 * (v65 >> 1) );
          if ( (v65 & 1) != 0 )
          {
            v67 = 8 * (v65 & 0xFFFFFFFFFFFFFFFELL);
            v68 = &a2[v67];
            v69 = &v10[v67];
            v70 = *(_QWORD *)v69;
            *(_QWORD *)v69 = *(_QWORD *)v68;
            *(_QWORD *)v68 = v70;
          }
        }
        v71 = a2;
        a2 = v17;
        v90 = v71;
      }
      else
      {
        v26 = v10;
        v90 = &v10[v17 - a2];
        while ( 1 )
        {
          v27 = v25 - v24;
          if ( v24 < (__int64)(v25 - v24) )
            break;
LABEL_26:
          v37 = 8 * v25;
          v38 = &v26[v25];
          if ( v27 == 1 )
          {
            v75 = v26[(unsigned __int64)v37 / 8 - 1];
            if ( v37 - 8 <= 8 )
            {
              if ( v37 == 16 )
                *(v38 - 1) = *v26;
            }
            else
            {
              memmove(v26 + 1, v26, v37 - 8);
            }
            *v26 = v75;
            goto LABEL_58;
          }
          v39 = 8 * v24;
          v40 = &v26[v24];
          if ( v24 <= 0 )
          {
            v26 += v24;
            v24 = v25 % v27;
            if ( !(v25 % v27) )
              goto LABEL_58;
          }
          else
          {
            if ( (unsigned __int64)(v24 - 1) <= 1 || (v41 = v37 - 16, v37 > v39 - 16) && v39 > v41 )
            {
              v57 = &v26[v24];
              v58 = 0;
              do
              {
                v59 = *(v57 - 1);
                v60 = *(v38 - 1);
                ++v58;
                --v57;
                --v38;
                *v57 = v60;
                *v38 = v59;
              }
              while ( v24 != v58 );
            }
            else
            {
              v42 = &v26[(unsigned __int64)v39 / 8 - 2];
              v43 = 0;
              v44 = (char *)v26 + v41;
              v45 = 0;
              do
              {
                v46 = _mm_loadu_si128((const __m128i *)&v42[v45]);
                ++v43;
                *(__m128i *)&v42[v45] = _mm_loadu_si128((const __m128i *)&v44[v45 * 8]);
                *(__m128i *)&v44[v45 * 8] = v46;
                v45 -= 2;
              }
              while ( v43 != (unsigned __int64)v24 >> 1 );
              if ( (v24 & 1) != 0 )
              {
                v47 = -8LL * (v24 & 0xFFFFFFFFFFFFFFFELL) - 8;
                v48 = (_QWORD *)((char *)v40 + v47);
                v49 = (_QWORD *)((char *)v38 + v47);
                v50 = *v48;
                *v48 = *v49;
                *v49 = v50;
              }
            }
            v26 = &v40[v39 / 0xFFFFFFFFFFFFFFF8LL];
            v24 = v25 % v27;
            if ( !(v25 % v27) )
              goto LABEL_58;
          }
          v25 = v27;
        }
        while ( v24 != 1 )
        {
          v28 = (unsigned __int64)&v26[v24];
          if ( (__int64)v27 > 0 )
          {
            if ( v27 - 1 <= 1 || v28 < (unsigned __int64)(v26 + 2) && 8 * v24 + 16 > 0 )
            {
              for ( k = 0; k != v27; ++k )
              {
                v62 = v26[k];
                v26[k] = *(_QWORD *)(v28 + 8 * k);
                *(_QWORD *)(v28 + 8 * k) = v62;
              }
            }
            else
            {
              v29 = 0;
              v30 = 0;
              do
              {
                v31 = _mm_loadu_si128((const __m128i *)&v26[v29]);
                ++v30;
                *(__m128i *)&v26[v29] = _mm_loadu_si128((const __m128i *)(v28 + v29 * 8));
                *(__m128i *)(v28 + v29 * 8) = v31;
                v29 += 2;
              }
              while ( v30 != v27 >> 1 );
              if ( (v27 & 1) != 0 )
              {
                v32 = v27 & 0xFFFFFFFFFFFFFFFELL;
                v33 = (__int64 *)(v32 * 8 + v28);
                v34 = &v26[v32];
                v35 = *v34;
                *v34 = *v33;
                *v33 = v35;
              }
            }
            v26 += v27;
          }
          v36 = v25 % v24;
          if ( !(v25 % v24) )
            goto LABEL_58;
          v25 = v24;
          v24 -= v36;
          v27 = v25 - v24;
          if ( v24 >= (__int64)(v25 - v24) )
            goto LABEL_26;
        }
        v72 = 8 * v25;
        v73 = *v26;
        v74 = 8 * v25 - 8;
        if ( v74 <= 8 )
        {
          if ( 8 * v25 == 16 )
            *v26 = v26[1];
        }
        else
        {
          v82 = 8 * v25;
          memmove(v26, v26 + 1, v74);
          v72 = v82;
        }
        *(_QWORD *)((char *)v26 + v72 - 8) = v73;
LABEL_58:
        a2 = v17;
      }
    }
LABEL_59:
    LOBYTE(v6) = sub_3CE240(a1, v10, v90, v85, v89, a6);
    if ( v87 || v91 )
      return v6;
    a1 = v90;
  }
  LOBYTE(v6) = a6(*(_QWORD *)a2, *(_QWORD *)a1);
  if ( (_BYTE)v6 )
  {
    v6 = *(_QWORD *)a1;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v6;
  }
  return v6;
}

