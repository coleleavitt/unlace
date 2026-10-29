void __fastcall sub_805500(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // r10
  _QWORD *v9; // r12
  _QWORD *v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 v14; // rdx
  __int16 v15; // cx
  unsigned int v16; // esi
  __int16 v17; // cx
  unsigned int v18; // edx
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __m128i v27; // xmm0
  unsigned __int64 v28; // rdx
  __int64 *v29; // rdi
  __int64 *v30; // rdx
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  _QWORD *v34; // r9
  __int64 v35; // r15
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  char *v39; // rbx
  __int64 v40; // rdx
  __m128i v41; // xmm0
  unsigned __int64 v42; // rdx
  __int64 *v43; // rcx
  __int64 *v44; // rdx
  __int64 v45; // rsi
  __int16 v46; // dx
  __int64 i; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  __int16 v51; // si
  __int16 v52; // cx
  unsigned int v53; // edi
  unsigned int v54; // esi
  __int64 v55; // r9
  __int64 v56; // rax
  __int16 v57; // di
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  __int64 v60; // rcx
  __int16 v61; // r8
  unsigned int v62; // ebx
  unsigned int v63; // edi
  _QWORD *v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rbx
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __m128i v71; // xmm0
  unsigned __int64 v72; // rax
  __int64 *v73; // rdx
  __int64 *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  signed __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 *v80; // rax
  __int64 *v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rsi
  _QWORD *v84; // [rsp+0h] [rbp-68h]
  __int64 v85; // [rsp+0h] [rbp-68h]
  __int64 v86; // [rsp+0h] [rbp-68h]
  __int64 v87; // [rsp+0h] [rbp-68h]
  __int64 v88; // [rsp+8h] [rbp-60h]
  __int64 v90; // [rsp+18h] [rbp-50h]
  __int64 v91; // [rsp+18h] [rbp-50h]
  _QWORD *v92; // [rsp+18h] [rbp-50h]
  _QWORD *v93; // [rsp+20h] [rbp-48h]
  __int64 v94; // [rsp+20h] [rbp-48h]
  __int64 v95; // [rsp+28h] [rbp-40h]

  if ( !a5 || !a4 )
    return;
  v7 = a5;
  v8 = a4;
  while ( v7 + v8 != 2 )
  {
    if ( v7 < v8 )
    {
      v9 = a2;
      v10 = &a1[v8 / 2];
      v88 = v8 / 2;
      v11 = *v10;
      v12 = (a3 - (__int64)a2) >> 3;
      while ( 2 )
      {
        if ( v12 <= 0 )
        {
LABEL_15:
          v19 = v9 - a2;
          if ( a2 != v10 )
            goto LABEL_16;
LABEL_76:
          a2 = v9;
          goto LABEL_63;
        }
LABEL_8:
        v13 = &v9[v12 >> 1];
        v14 = *v13;
        v15 = *(_WORD *)(*v13 + 4LL);
        if ( !v15 )
        {
          v16 = *(unsigned __int16 *)(v14 + 28);
          goto LABEL_10;
        }
        if ( v15 == 2 )
        {
          v16 = *(_DWORD *)(v14 + 40);
LABEL_10:
          v17 = *(_WORD *)(v11 + 4);
          if ( v17 )
          {
            v18 = 1;
            if ( v17 == 2 )
              goto LABEL_12;
            goto LABEL_13;
          }
        }
        else
        {
          v46 = *(_WORD *)(v11 + 4);
          if ( v46 )
          {
            if ( v46 != 2 )
            {
LABEL_46:
              v12 >>= 1;
              continue;
            }
            v16 = 1;
LABEL_12:
            v18 = *(_DWORD *)(v11 + 40);
LABEL_13:
            if ( v16 >= v18 )
              goto LABEL_46;
            v9 = v13 + 1;
            v12 = v12 - (v12 >> 1) - 1;
            if ( v12 <= 0 )
              goto LABEL_15;
            goto LABEL_8;
          }
          v16 = 1;
        }
        break;
      }
      v18 = *(unsigned __int16 *)(v11 + 28);
      goto LABEL_13;
    }
    v10 = a1;
    v9 = &a2[v7 / 2];
    v19 = v7 / 2;
    v55 = *v9;
    v56 = a2 - a1;
LABEL_67:
    if ( v56 > 0 )
    {
      while ( 1 )
      {
        v57 = *(_WORD *)(v55 + 4);
        v58 = v56 >> 1;
        v59 = &v10[v56 >> 1];
        v60 = *v59;
        v61 = *(_WORD *)(*v59 + 4LL);
        if ( !v57 )
          break;
        if ( v57 == 2 )
        {
          v62 = *(_DWORD *)(v55 + 40);
LABEL_70:
          if ( v61 )
          {
            v63 = 1;
            if ( v61 != 2 )
              goto LABEL_73;
            goto LABEL_72;
          }
          goto LABEL_82;
        }
        if ( v61 )
        {
          if ( v61 != 2 )
          {
LABEL_80:
            v10 = v59 + 1;
            v56 = v56 - v58 - 1;
            goto LABEL_67;
          }
          v62 = 1;
LABEL_72:
          v63 = *(_DWORD *)(v60 + 40);
          goto LABEL_73;
        }
        v62 = 1;
LABEL_82:
        v63 = *(unsigned __int16 *)(v60 + 28);
LABEL_73:
        if ( v62 >= v63 )
          goto LABEL_80;
        v56 >>= 1;
        if ( v58 <= 0 )
          goto LABEL_75;
      }
      v62 = *(unsigned __int16 *)(v55 + 28);
      goto LABEL_70;
    }
LABEL_75:
    v88 = v10 - a1;
    if ( a2 == v10 )
      goto LABEL_76;
LABEL_16:
    if ( a2 == v9 )
    {
      a2 = v10;
      goto LABEL_63;
    }
    v20 = v9 - v10;
    v21 = a2 - v10;
    if ( v21 == v20 - v21 )
    {
      v68 = (char *)(a2 - 1) - (char *)v10;
      if ( v68 <= 8 || (unsigned __int64)((char *)a2 + 15 - (char *)v10) <= 0x1E )
      {
        v80 = a2;
        v81 = v10;
        do
        {
          v82 = *v81;
          v83 = *v80++;
          *v81++ = v83;
          *(v80 - 1) = v82;
        }
        while ( (_QWORD *)((char *)a2 + (char *)a2 - (char *)v10) != v80 );
      }
      else
      {
        v69 = 0;
        v70 = (v68 >> 3) + 1;
        do
        {
          v71 = _mm_loadu_si128((const __m128i *)&v10[v69]);
          *(__m128i *)&v10[v69] = _mm_loadu_si128((const __m128i *)&a2[v69]);
          *(__m128i *)&a2[v69] = v71;
          v69 += 2;
        }
        while ( v69 != 2 * (v70 >> 1) );
        if ( (v70 & 1) != 0 )
        {
          v72 = v70 & 0xFFFFFFFFFFFFFFFELL;
          v73 = &a2[v72];
          v74 = &v10[v72];
          v75 = *v74;
          *v74 = *v73;
          *v73 = v75;
        }
      }
      goto LABEL_63;
    }
    v90 = v19;
    v22 = v10;
    a2 = (_QWORD *)((char *)v10 + (char *)v9 - (char *)a2);
    while ( 2 )
    {
      v23 = v20 - v21;
      if ( v21 >= (__int64)(v20 - v21) )
      {
LABEL_32:
        v33 = 8 * v20;
        v34 = &v22[v20];
        if ( v23 == 1 )
        {
          v19 = v90;
          v79 = v22[(unsigned __int64)v33 / 8 - 1];
          if ( v33 - 8 <= 8 )
          {
            if ( v33 == 16 )
              *(v34 - 1) = *v22;
          }
          else
          {
            v94 = v8;
            v92 = a1;
            v87 = v22[(unsigned __int64)v33 / 8 - 1];
            memmove(v22 + 1, v22, v33 - 8);
            v79 = v87;
            a1 = v92;
            v8 = v94;
          }
          *v22 = v79;
          goto LABEL_63;
        }
        v35 = 8 * v21;
        v84 = &v22[v21];
        if ( v21 <= 0 )
        {
          v22 += v21;
          v21 = v20 % v23;
          if ( !(v20 % v23) )
          {
LABEL_62:
            v19 = v90;
            goto LABEL_63;
          }
        }
        else
        {
          if ( (unsigned __int64)(v21 - 1) <= 1 )
          {
            v64 = &v22[v21];
            v65 = 0;
          }
          else
          {
            v36 = v33 - 16;
            if ( v33 <= v35 - 16 || v35 <= v36 )
            {
              v37 = &v22[(unsigned __int64)v35 / 8 - 2];
              v38 = 0;
              v39 = (char *)v22 + v36;
              v40 = 0;
              do
              {
                v41 = _mm_loadu_si128((const __m128i *)&v37[v40]);
                ++v38;
                *(__m128i *)&v37[v40] = _mm_loadu_si128((const __m128i *)&v39[v40 * 8]);
                *(__m128i *)&v39[v40 * 8] = v41;
                v40 -= 2;
              }
              while ( v38 != (unsigned __int64)v21 >> 1 );
              if ( (v21 & 1) != 0 )
              {
                v42 = -8LL * (v21 & 0xFFFFFFFFFFFFFFFELL) - 8;
                v43 = (_QWORD *)((char *)v84 + v42);
                v44 = (_QWORD *)((char *)v34 + v42);
                v45 = *v43;
                *v43 = *v44;
                *v44 = v45;
              }
              goto LABEL_41;
            }
            v64 = &v22[v21];
            v65 = 0;
          }
          do
          {
            v66 = *(v64 - 1);
            v67 = *(v34 - 1);
            ++v65;
            --v64;
            --v34;
            *v64 = v67;
            *v34 = v66;
          }
          while ( v21 != v65 );
LABEL_41:
          v22 = &v84[v35 / 0xFFFFFFFFFFFFFFF8LL];
          v21 = v20 % v23;
          if ( !(v20 % v23) )
            goto LABEL_62;
        }
        v20 = v23;
        continue;
      }
      break;
    }
    while ( v21 != 1 )
    {
      v24 = (unsigned __int64)&v22[v21];
      if ( (__int64)v23 > 0 )
      {
        if ( v23 - 1 <= 1 || 8 * v21 + 16 > 0 && v24 < (unsigned __int64)(v22 + 2) )
        {
          for ( i = 0; i != v23; ++i )
          {
            v48 = v22[i];
            v22[i] = *(_QWORD *)(v24 + 8 * i);
            *(_QWORD *)(v24 + 8 * i) = v48;
          }
        }
        else
        {
          v25 = 0;
          v26 = 0;
          do
          {
            v27 = _mm_loadu_si128((const __m128i *)&v22[v25]);
            ++v26;
            *(__m128i *)&v22[v25] = _mm_loadu_si128((const __m128i *)(v24 + v25 * 8));
            *(__m128i *)(v24 + v25 * 8) = v27;
            v25 += 2;
          }
          while ( v26 != v23 >> 1 );
          if ( (v23 & 1) != 0 )
          {
            v28 = v23 & 0xFFFFFFFFFFFFFFFELL;
            v29 = (__int64 *)(v28 * 8 + v24);
            v30 = &v22[v28];
            v31 = *v30;
            *v30 = *v29;
            *v29 = v31;
          }
        }
        v22 += v23;
      }
      v32 = v20 % v21;
      if ( !(v20 % v21) )
        goto LABEL_62;
      v20 = v21;
      v21 -= v32;
      v23 = v20 - v21;
      if ( v21 >= (__int64)(v20 - v21) )
        goto LABEL_32;
    }
    v76 = 8 * v20;
    v19 = v90;
    v77 = *v22;
    v78 = 8 * v20 - 8;
    if ( v78 <= 8 )
    {
      if ( 8 * v20 == 16 )
        *v22 = v22[1];
    }
    else
    {
      v95 = v8;
      v93 = a1;
      v91 = 8 * v20;
      v86 = *v22;
      memmove(v22, v22 + 1, v78);
      v77 = v86;
      v76 = v91;
      a1 = v93;
      v8 = v95;
    }
    *(_QWORD *)((char *)v22 + v76 - 8) = v77;
LABEL_63:
    v85 = v8;
    v7 -= v19;
    sub_805500(a1, v10, a2, v88, v19);
    v8 = v85 - v88;
    if ( v85 == v88 || !v7 )
      return;
    a1 = a2;
    a2 = v9;
  }
  v49 = *a2;
  v50 = *a1;
  v51 = *(_WORD *)(*a2 + 4LL);
  v52 = *(_WORD *)(*a1 + 4LL);
  if ( !v51 )
  {
    v53 = *(unsigned __int16 *)(v49 + 28);
    goto LABEL_55;
  }
  if ( v51 == 2 )
  {
    v53 = *(_DWORD *)(v49 + 40);
LABEL_55:
    if ( v52 )
    {
      v54 = 1;
      if ( v52 != 2 )
        goto LABEL_58;
      goto LABEL_57;
    }
    goto LABEL_109;
  }
  if ( v52 )
  {
    if ( v52 != 2 )
      return;
    v53 = 1;
LABEL_57:
    v54 = *(_DWORD *)(v50 + 40);
    goto LABEL_58;
  }
  v53 = 1;
LABEL_109:
  v54 = *(unsigned __int16 *)(v50 + 28);
LABEL_58:
  if ( v53 < v54 )
  {
    *a1 = v49;
    *a2 = v50;
  }
}

