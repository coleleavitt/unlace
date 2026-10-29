__int64 __fastcall sub_789120(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned int *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 *v14; // r10
  int v15; // ecx
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 *v18; // rdx
  __int64 v19; // r9
  __int64 *v20; // rsi
  __int64 *i; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  int v24; // r15d
  __int64 *j; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  _DWORD *v28; // rdi
  unsigned int v29; // edx
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // rsi
  _DWORD *k; // rax
  int v34; // edx
  _DWORD *v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // edx
  unsigned __int64 v38; // r14
  __int64 *v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rdi
  int v43; // eax
  unsigned int v44; // eax
  unsigned __int64 v45; // r11
  __int64 v46; // r8
  int v47; // edx
  _QWORD *v48; // rcx
  __int64 v49; // rdi
  unsigned int v50; // edx
  int v51; // eax
  unsigned int v52; // eax
  __m128i *v53; // rax
  __m128i *v54; // rcx
  __m128i *v55; // rdx
  __int64 v56; // rdx
  const __m128i *v57; // rax
  unsigned int v58; // r11d
  __m128i *v59; // r9
  __int64 v60; // r8
  __m128i *v61; // r10
  __int64 v62; // rdx
  __m128i *v63; // rsi
  __m128i *v64; // rdx
  unsigned int v65; // r15d
  __int64 v66; // rax
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  __int64 v69; // rdx
  const __m128i *v70; // rcx
  unsigned int v71; // r10d
  __int64 v72; // r9
  __m128i *v73; // r15
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  __m128i *v77; // [rsp+0h] [rbp-68h]
  __m128i *v78; // [rsp+0h] [rbp-68h]
  __int64 v79; // [rsp+0h] [rbp-68h]
  unsigned int v80; // [rsp+8h] [rbp-60h]

  result = *(unsigned int *)(a1 + 296);
  v4 = *(_DWORD *)(a1 + 296) - a2;
  if ( (unsigned int)result >= a2 )
  {
    *(_DWORD *)(a1 + 296) = v4;
    return result;
  }
  *(_DWORD *)(a1 + 296) = 0;
  sub_1623780(*(_QWORD *)(a1 + 200), a2 - (unsigned int)result);
  result = *(_QWORD *)(a1 + 144);
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 160);
    v6 = (unsigned int *)(result + 4LL * (*(_DWORD *)(result - 4) + v4));
    if ( !v5 )
      goto LABEL_46;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 160);
    v6 = (unsigned int *)(4LL * v4);
    if ( !v5 )
      return result;
  }
  v7 = *v6;
  v8 = *(unsigned int *)(v5 - 4);
  v9 = v8 - 1;
  if ( v7 >= (unsigned int)v8 )
    goto LABEL_37;
  v10 = 8LL * v9;
  v11 = 8 * (v9 - (unsigned __int64)(v9 - v7));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v5 + v10);
    v13 = *(unsigned int *)(a1 + 104);
    v14 = *(__int64 **)(a1 + 96);
    v15 = *(_DWORD *)(v12 + 12);
    v16 = v13 - 1;
    v17 = 16 * v13;
    v18 = &v14[(unsigned __int64)v17 / 8];
    v19 = 16LL * (v15 & v16);
    v20 = &v14[(unsigned __int64)v19 / 8];
    if ( v19 == v17 )
    {
LABEL_51:
      if ( v14 != v20 )
      {
        for ( i = *(__int64 **)(a1 + 96); v20 != i; i += 2 )
        {
          v45 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v45 + 12) == v15 && v12 == v45 )
              goto LABEL_17;
          }
          else if ( !v45 )
          {
            break;
          }
        }
      }
LABEL_15:
      v23 = v10 - 8;
      if ( v10 == v11 )
        break;
      goto LABEL_16;
    }
    i = &v14[(unsigned __int64)v19 / 8];
    while ( 1 )
    {
      v22 = *i;
      if ( (unsigned __int64)*i > 1 )
        break;
      if ( !v22 )
        goto LABEL_15;
LABEL_12:
      i += 2;
      if ( v18 == i )
        goto LABEL_51;
    }
    if ( *(_DWORD *)(v22 + 12) != v15 || v12 != v22 )
      goto LABEL_12;
LABEL_17:
    v24 = *((_DWORD *)i + 2);
    j = &v14[(unsigned __int64)v19 / 8];
    if ( v19 != v17 )
    {
      do
      {
        v26 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v26 + 12) == v15 && v12 == v26 )
          {
LABEL_75:
            v48 = j + 2;
            v49 = *(unsigned int *)(a1 + 108);
            if ( v18 == j + 2 )
              v48 = *(_QWORD **)(a1 + 96);
            v50 = v49 - 1;
            if ( *v48 )
            {
              *j = 1;
              v51 = *(_DWORD *)(a1 + 112);
              *(_DWORD *)(a1 + 108) = v50;
              v52 = v51 + 1;
              if ( v50 < 0x40 )
                v50 = 64;
              *(_DWORD *)(a1 + 112) = v52;
              if ( v50 < v52 && !(unsigned __int8)sub_186AF10(v49) )
              {
                v80 = *(_DWORD *)(a1 + 104);
                v53 = (__m128i *)sub_186B270(16LL * v80);
                v54 = v53;
                v55 = &v53[v80];
                if ( v80 )
                {
                  do
                  {
                    v53->m128i_i64[0] = 0;
                    ++v53;
                    v53[-1].m128i_i32[2] = -2;
                  }
                  while ( v53 != v55 );
                }
                v56 = *(unsigned int *)(a1 + 104);
                v57 = *(const __m128i **)(a1 + 96);
                v58 = v56 - 1;
                v56 *= 16;
                v59 = (__m128i *)((char *)v57 + v56);
                v60 = v56;
                v61 = (__m128i *)((char *)v54 + v56);
                if ( v57 != (const __m128i *)&v57->m128i_i8[v56] )
                {
                  do
                  {
                    if ( v57->m128i_i64[0] > 1uLL )
                    {
                      v62 = 16LL * (*(_DWORD *)(v57->m128i_i64[0] + 12) & v58);
                      v63 = &v54[(unsigned __int64)v62 / 0x10];
                      if ( v60 == v62 )
                      {
LABEL_113:
                        if ( v54 == v63 )
                        {
LABEL_122:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v64 = v54;
                        while ( v64->m128i_i64[0] )
                        {
                          if ( v63 == ++v64 )
                            goto LABEL_122;
                        }
                      }
                      else
                      {
                        v64 = &v54[(unsigned __int64)v62 / 0x10];
                        while ( v64->m128i_i64[0] )
                        {
                          if ( v61 == ++v64 )
                            goto LABEL_113;
                        }
                      }
                      *v64 = _mm_loadu_si128(v57);
                    }
                    ++v57;
                  }
                  while ( v59 != v57 );
                  v59 = *(__m128i **)(a1 + 96);
                }
                if ( v59 )
                {
                  v78 = v54;
                  sub_186B220(v59);
                  v54 = v78;
                }
                *(_QWORD *)(a1 + 96) = v54;
                *(_DWORD *)(a1 + 112) = 0;
              }
            }
            else
            {
              *j = 0;
              *(_DWORD *)(a1 + 108) = v50;
            }
            goto LABEL_24;
          }
        }
        else if ( !v26 )
        {
          goto LABEL_24;
        }
        j += 2;
      }
      while ( v18 != j );
    }
    if ( v14 != v20 )
    {
      for ( j = *(__int64 **)(a1 + 96); v20 != j; j += 2 )
      {
        v46 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v46 + 12) == v15 && v12 == v46 )
            goto LABEL_75;
        }
        else if ( !v46 )
        {
          break;
        }
      }
    }
LABEL_24:
    v27 = *(unsigned int *)(a1 + 128);
    v28 = *(_DWORD **)(a1 + 120);
    v29 = v27 - 1;
    v27 *= 24;
    v30 = (_DWORD *)((char *)v28 + v27);
    v31 = 24LL * (v24 & v29);
    v32 = &v28[(unsigned __int64)v31 / 4];
    if ( v31 == v27 )
    {
LABEL_67:
      if ( v28 != v32 )
      {
        for ( k = *(_DWORD **)(a1 + 120); v32 != k; k += 6 )
        {
          v47 = k[1];
          if ( v47 == 2 )
          {
            if ( v24 == *k && v24 == k[2] )
              goto LABEL_31;
          }
          else if ( !v47 )
          {
            break;
          }
        }
      }
LABEL_50:
      v5 = *(_QWORD *)(a1 + 160);
      goto LABEL_15;
    }
    k = &v28[(unsigned __int64)v31 / 4];
    while ( 2 )
    {
      v34 = k[1];
      if ( v34 != 2 )
      {
        if ( !v34 )
          goto LABEL_50;
LABEL_27:
        k += 6;
        if ( v30 == k )
          goto LABEL_67;
        continue;
      }
      break;
    }
    if ( v24 != *k || v24 != k[2] )
      goto LABEL_27;
LABEL_31:
    v35 = k + 6;
    if ( v30 == k + 6 )
      v35 = *(_DWORD **)(a1 + 120);
    v36 = *(unsigned int *)(a1 + 132);
    v37 = v36 - 1;
    if ( v35[1] )
    {
      k[1] = 1;
      v43 = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 132) = v37;
      v44 = v43 + 1;
      if ( v37 < 0x40 )
        v37 = 64;
      *(_DWORD *)(a1 + 136) = v44;
      if ( v37 >= v44 || (unsigned __int8)sub_186AF10(v36) )
        goto LABEL_50;
      v65 = *(_DWORD *)(a1 + 128);
      v66 = sub_186B270(24LL * v65);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          v68 = (_QWORD *)v66;
LABEL_103:
          *v68 = 0;
        }
        else
        {
          v67 = (_QWORD *)v66;
          do
          {
            *v67 = 0;
            v67 += 6;
            *(v67 - 3) = 0;
          }
          while ( (_QWORD *)(v66 + 48LL * (v65 >> 1)) != v67 );
          if ( (v65 & 1) != 0 )
          {
            v68 = (_QWORD *)(v66 + 24LL * (v65 & 0xFFFFFFFE));
            goto LABEL_103;
          }
        }
      }
      v69 = *(unsigned int *)(a1 + 128);
      v70 = *(const __m128i **)(a1 + 120);
      v71 = v69 - 1;
      v72 = 24 * v69;
      v73 = (__m128i *)((char *)v70 + 24 * v69);
      v77 = (__m128i *)(v66 + 24 * v69);
      if ( v70 != v73 )
      {
        do
        {
          if ( v70->m128i_i32[1] == 2 )
          {
            v74 = 24LL * (v70->m128i_i32[0] & v71);
            v75 = (__m128i *)(v66 + v74);
            if ( v72 == v74 )
            {
LABEL_127:
              if ( (__m128i *)v66 == v75 )
              {
LABEL_132:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v76 = (__m128i *)v66;
              while ( v76->m128i_i32[1] )
              {
                v76 = (__m128i *)((char *)v76 + 24);
                if ( v75 == v76 )
                  goto LABEL_132;
              }
            }
            else
            {
              v76 = (__m128i *)(v66 + v74);
              while ( v76->m128i_i32[1] )
              {
                v76 = (__m128i *)((char *)v76 + 24);
                if ( v77 == v76 )
                  goto LABEL_127;
              }
            }
            *v76 = _mm_loadu_si128(v70);
            v76[1].m128i_i64[0] = v70[1].m128i_i64[0];
          }
          v70 = (const __m128i *)((char *)v70 + 24);
        }
        while ( v73 != v70 );
        v73 = *(__m128i **)(a1 + 120);
      }
      if ( v73 )
      {
        v79 = v66;
        sub_186B220(v73);
        v66 = v79;
      }
      *(_QWORD *)(a1 + 120) = v66;
      *(_DWORD *)(a1 + 136) = 0;
      goto LABEL_50;
    }
    k[1] = 0;
    v5 = *(_QWORD *)(a1 + 160);
    v23 = v10 - 8;
    *(_DWORD *)(a1 + 132) = v37;
    if ( v10 == v11 )
      break;
LABEL_16:
    v10 = v23;
  }
  if ( v5 )
  {
    v8 = *(unsigned int *)(v5 - 4);
LABEL_37:
    v38 = v5 + 8 * v8;
    v39 = (__int64 *)(v5 + 8LL * v7);
    if ( (unsigned __int64)v39 >= v38 )
      goto LABEL_44;
    do
    {
      while ( 1 )
      {
        v40 = *v39;
        if ( *v39 )
        {
          v41 = *(_QWORD *)(a1 + 152);
          if ( (*(_DWORD *)(v40 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v39 >= v38 )
          goto LABEL_43;
      }
      sub_15D7BC0(v41, v40);
      ++v39;
    }
    while ( (unsigned __int64)v39 < v38 );
LABEL_43:
    v5 = *(_QWORD *)(a1 + 160);
    if ( v5 )
LABEL_44:
      *(_DWORD *)(v5 - 4) = v7;
  }
  result = *(_QWORD *)(a1 + 144);
  if ( result )
LABEL_46:
    *(_DWORD *)(result - 4) += v4;
  return result;
}

