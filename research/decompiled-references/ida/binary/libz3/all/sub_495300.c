void __fastcall sub_495300(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, __int128 a7)
{
  __m128i v7; // xmm1
  __int64 v9; // r10
  __int64 v10; // r13
  __int64 v11; // r11
  __int64 v12; // r15
  __int64 *v13; // r14
  __int64 *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 *v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // r10
  __int64 *v21; // r14
  __int64 v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rbx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 *v29; // rsi
  __m128i v30; // xmm0
  unsigned __int64 v31; // rdx
  __int64 *v32; // rdi
  __int64 *v33; // rdx
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 *v39; // rdi
  __int64 v40; // rsi
  char *v41; // rbx
  __int64 v42; // rdx
  __m128i v43; // xmm0
  unsigned __int64 v44; // rdx
  __int64 *v45; // rcx
  __int64 *v46; // rdx
  __int64 v47; // rsi
  __int64 i; // rdx
  __int64 v49; // rsi
  __int64 v50; // rbx
  __int64 v51; // r11
  __int64 v52; // rbx
  __int64 *v53; // r11
  __int64 v54; // rbp
  __int64 v55; // r10
  __int64 *v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // r11
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __m128i v63; // xmm0
  unsigned __int64 v64; // rax
  __int64 *v65; // rdx
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  signed __int64 v71; // rdx
  __int64 *v72; // rax
  __int64 *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // [rsp+10h] [rbp-78h]
  __int64 *v77; // [rsp+10h] [rbp-78h]
  __int64 v78; // [rsp+10h] [rbp-78h]
  __int64 v79; // [rsp+10h] [rbp-78h]
  __int64 v80; // [rsp+10h] [rbp-78h]
  __m128i v82; // [rsp+20h] [rbp-68h] BYREF
  __int64 v83; // [rsp+30h] [rbp-58h]
  __int64 v84; // [rsp+38h] [rbp-50h]
  __int64 v85; // [rsp+40h] [rbp-48h]
  __int64 v86; // [rsp+48h] [rbp-40h]

  v7 = _mm_loadu_si128((const __m128i *)&a7);
  v84 = a3;
  if ( !a5 || !a4 )
    return;
  v9 = a4;
  v10 = a5;
  v82 = v7;
LABEL_4:
  if ( v10 + v9 != 2 )
  {
    if ( v10 >= v9 )
    {
      v21 = a1;
      v52 = a2 - a1;
      v53 = &a2[v10 / 2];
      v54 = v9;
      while ( v52 > 0 )
      {
        while ( !sub_4910B0(*v53, v21[v52 >> 1]) )
        {
          v21 = (__int64 *)(v55 + 8);
          v52 = v52 - (v52 >> 1) - 1;
          if ( v52 <= 0 )
            goto LABEL_54;
        }
        v52 >>= 1;
      }
LABEL_54:
      v20 = v54;
      v19 = v53;
      v22 = v10 / 2;
      v12 = v21 - a1;
      if ( v21 == a2 )
      {
LABEL_55:
        a2 = v19;
        goto LABEL_47;
      }
    }
    else
    {
      v76 = v9;
      v11 = (v84 - (__int64)a2) >> 3;
      v12 = v9 / 2;
      v13 = a2;
      v14 = &a1[v9 / 2];
      while ( v11 > 0 )
      {
        while ( 1 )
        {
          v15 = v11 >> 1;
          if ( !sub_4910B0(v13[v11 >> 1], *v14) )
            break;
          v13 = (__int64 *)(v16 + 8);
          v11 = v17 - v15 - 1;
          if ( v11 <= 0 )
            goto LABEL_10;
        }
        v11 = v15;
      }
LABEL_10:
      v18 = v14;
      v19 = v13;
      v20 = v76;
      v21 = v18;
      v22 = v19 - a2;
      if ( v18 == a2 )
        goto LABEL_55;
    }
    if ( v19 == a2 )
    {
      a2 = v21;
      goto LABEL_47;
    }
    v23 = v19 - v21;
    v24 = a2 - v21;
    if ( v24 == v23 - v24 )
    {
      v60 = (char *)(a2 - 1) - (char *)v21;
      if ( v60 <= 8 || (unsigned __int64)((char *)v21 + 15 - (char *)a2) <= 0x1E )
      {
        v72 = a2;
        v73 = v21;
        do
        {
          v74 = *v73;
          v75 = *v72++;
          *v73++ = v75;
          *(v72 - 1) = v74;
        }
        while ( v72 != (__int64 *)((char *)a2 + (char *)a2 - (char *)v21) );
      }
      else
      {
        v61 = 0;
        v62 = (v60 >> 3) + 1;
        do
        {
          v63 = _mm_loadu_si128((const __m128i *)&v21[v61]);
          *(__m128i *)&v21[v61] = _mm_loadu_si128((const __m128i *)&a2[v61]);
          *(__m128i *)&a2[v61] = v63;
          v61 += 2;
        }
        while ( v61 != 2 * (v62 >> 1) );
        if ( (v62 & 1) != 0 )
        {
          v64 = v62 & 0xFFFFFFFFFFFFFFFELL;
          v65 = &a2[v64];
          v66 = &v21[v64];
          v67 = *v66;
          *v66 = *v65;
          *v65 = v67;
        }
      }
      goto LABEL_47;
    }
    v83 = v12;
    v25 = v21;
    v85 = v22;
    a2 = (__int64 *)((char *)v21 + (char *)v19 - (char *)a2);
    while ( 1 )
    {
      v26 = v23 - v24;
      if ( v24 < (__int64)(v23 - v24) )
      {
        while ( v24 != 1 )
        {
          v27 = (unsigned __int64)&v25[v24];
          if ( (__int64)v26 > 0 )
          {
            if ( v26 - 1 <= 1 || 8 * v24 + 16 > 0 && v27 < (unsigned __int64)(v25 + 2) )
            {
              for ( i = 0; i != v26; ++i )
              {
                v49 = v25[i];
                a6 = *(__int64 **)(v27 + 8 * i);
                v25[i] = (__int64)a6;
                *(_QWORD *)(v27 + 8 * i) = v49;
              }
            }
            else
            {
              v28 = 0;
              v29 = nullptr;
              a6 = (__int64 *)(v26 >> 1);
              do
              {
                v30 = _mm_loadu_si128((const __m128i *)&v25[v28]);
                v29 = (__int64 *)((char *)v29 + 1);
                *(__m128i *)&v25[v28] = _mm_loadu_si128((const __m128i *)(v27 + v28 * 8));
                *(__m128i *)(v27 + v28 * 8) = v30;
                v28 += 2;
              }
              while ( v29 != a6 );
              if ( (v26 & 1) != 0 )
              {
                v31 = v26 & 0xFFFFFFFFFFFFFFFELL;
                v32 = (__int64 *)(v31 * 8 + v27);
                v33 = &v25[v31];
                v34 = *v33;
                *v33 = *v32;
                *v32 = v34;
              }
            }
            v25 += v26;
          }
          v35 = v23 % v24;
          if ( !(v23 % v24) )
            goto LABEL_46;
          v23 = v24;
          v24 -= v35;
          v26 = v23 - v24;
          if ( v24 >= (__int64)(v23 - v24) )
            goto LABEL_27;
        }
        v69 = 8 * v23;
        v12 = v83;
        v70 = *v25;
        v71 = 8 * v23 - 8;
        v22 = v85;
        if ( v71 <= 8 )
        {
          if ( 8 * v23 == 16 )
            *v25 = v25[1];
        }
        else
        {
          v86 = v20;
          v85 = 8 * v23;
          v83 = v70;
          v80 = v22;
          memmove(v25, v25 + 1, v71);
          v22 = v80;
          v70 = v83;
          v69 = v85;
          v20 = v86;
        }
        *(__int64 *)((char *)v25 + v69 - 8) = v70;
LABEL_47:
        v83 = v20;
        v78 = v22;
        sub_495300((_DWORD)a1, (_DWORD)v21, (_DWORD)a2, v12, v22, (_DWORD)a6, (__int128)_mm_load_si128(&v82));
        v10 -= v78;
        v9 = v83 - v12;
        if ( v83 == v12 || !v10 )
          return;
        a1 = a2;
        a2 = v19;
        goto LABEL_4;
      }
LABEL_27:
      v36 = 8 * v23;
      a6 = &v25[v23];
      if ( v26 == 1 )
      {
        v12 = v83;
        v22 = v85;
        v68 = v25[(unsigned __int64)v36 / 8 - 1];
        if ( v36 - 8 <= 8 )
        {
          if ( v36 == 16 )
            *(a6 - 1) = *v25;
        }
        else
        {
          v85 = v20;
          v83 = v68;
          v79 = v22;
          memmove(v25 + 1, v25, v36 - 8);
          v22 = v79;
          v68 = v83;
          v20 = v85;
        }
        *v25 = v68;
        goto LABEL_47;
      }
      v37 = 8 * v24;
      v77 = &v25[v24];
      if ( v24 > 0 )
        break;
      v25 += v24;
      v24 = v23 % v26;
      if ( !(v23 % v26) )
      {
LABEL_46:
        v12 = v83;
        v22 = v85;
        goto LABEL_47;
      }
LABEL_37:
      v23 = v26;
    }
    if ( (unsigned __int64)(v24 - 1) <= 1 )
    {
      v56 = &v25[v24];
      v57 = 0;
    }
    else
    {
      v38 = v36 - 16;
      if ( v36 <= v37 - 16 || v37 <= v38 )
      {
        v39 = &v25[(unsigned __int64)v37 / 8 - 2];
        v40 = 0;
        v41 = (char *)v25 + v38;
        v42 = 0;
        do
        {
          v43 = _mm_loadu_si128((const __m128i *)&v39[v42]);
          ++v40;
          *(__m128i *)&v39[v42] = _mm_loadu_si128((const __m128i *)&v41[v42 * 8]);
          *(__m128i *)&v41[v42 * 8] = v43;
          v42 -= 2;
        }
        while ( v40 != (unsigned __int64)v24 >> 1 );
        if ( (v24 & 1) != 0 )
        {
          v44 = -8LL * (v24 & 0xFFFFFFFFFFFFFFFELL) - 8;
          v45 = (__int64 *)((char *)v77 + v44);
          v46 = (__int64 *)((char *)a6 + v44);
          v47 = *v45;
          *v45 = *v46;
          *v46 = v47;
        }
LABEL_36:
        v25 = &v77[v37 / 0xFFFFFFFFFFFFFFF8LL];
        v24 = v23 % v26;
        if ( !(v23 % v26) )
          goto LABEL_46;
        goto LABEL_37;
      }
      v56 = &v25[v24];
      v57 = 0;
    }
    do
    {
      v58 = *(v56 - 1);
      v59 = *(a6 - 1);
      ++v57;
      --v56;
      --a6;
      *v56 = v59;
      *a6 = v58;
    }
    while ( v24 != v57 );
    goto LABEL_36;
  }
  v50 = *a2;
  if ( sub_4910B0(*a2, *a1) )
  {
    *a1 = v50;
    *a2 = v51;
  }
}

