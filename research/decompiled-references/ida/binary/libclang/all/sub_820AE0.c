void __fastcall sub_820AE0(char *dest, char *a2, char *a3)
{
  char *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // r9
  char *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 *v12; // r8
  unsigned __int64 v13; // r10
  char *v14; // rdx
  __int64 v15; // r11
  __int64 v16; // xmm0_8
  char v17; // di
  char v18; // di
  char v19; // di
  char v20; // di
  char v21; // di
  char v22; // di
  char v23; // di
  unsigned __int64 v24; // rdx
  char *v25; // rcx
  char *v26; // rdx
  char v27; // di
  char v28; // r8
  char v29; // r8
  char v30; // di
  char v31; // bp
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm0
  char *v36; // r8
  __int64 *v37; // r9
  char *v38; // rax
  __int64 v39; // rdx
  char v40; // dl
  char v41; // dl
  char v42; // dl
  char v43; // dl
  char v44; // dl
  char v45; // dl
  char v46; // dl
  __int64 v47; // rbp
  char v48; // r12
  char *v49; // rsi
  char v50; // al
  char v51; // dl

  if ( dest == a2 )
    return;
  v3 = a2;
  if ( a2 == a3 )
    return;
  v4 = a2 - dest;
  v5 = a3 - dest;
  v6 = dest;
  if ( v4 != a3 - v3 )
  {
    while ( 1 )
    {
      v7 = v5 - v4;
      if ( v4 < (__int64)(v5 - v4) )
        break;
LABEL_27:
      v25 = &v6[v5];
      if ( v7 == 1 )
      {
        v31 = v6[v5 - 1];
        if ( (__int64)(v5 - 1) <= 1 )
        {
          if ( v5 == 2 )
            *(v25 - 1) = *v6;
        }
        else
        {
          memmove(v6 + 1, v6, v5 - 1);
        }
        *v6 = v31;
        return;
      }
      if ( v4 <= 0 )
      {
        v6 += v4;
      }
      else
      {
        v26 = &v6[v4];
        do
        {
          v27 = *(v26 - 1);
          v28 = *(v25 - 1);
          --v26;
          --v25;
          *v26 = v28;
          *v25 = v27;
        }
        while ( v6 != v26 );
      }
      v4 = v5 % v7;
      if ( !(v5 % v7) )
        return;
      v5 = v7;
    }
    while ( 1 )
    {
      if ( v4 == 1 )
      {
        v47 = v5 - 1;
        v48 = *v6;
        if ( (__int64)(v5 - 1) <= 1 )
        {
          if ( v5 == 2 )
            *v6 = v6[1];
        }
        else
        {
          memmove(v6, v6 + 1, v5 - 1);
        }
        v6[v47] = v48;
        return;
      }
      v8 = &v6[v4];
      if ( v7 > 0 )
        break;
LABEL_25:
      v24 = v5 % v4;
      if ( !(v5 % v4) )
        return;
      v5 = v4;
      v4 -= v24;
      v7 = v5 - v4;
      if ( v4 >= (__int64)(v5 - v4) )
        goto LABEL_27;
    }
    if ( (unsigned __int64)(v7 - 1) <= 6 || v4 + 16 > 0 && v8 < v6 + 16 )
    {
      v14 = &v6[v7];
      do
      {
        v29 = *v8;
        v30 = *v6++;
        ++v8;
        *(v6 - 1) = v29;
        *(v8 - 1) = v30;
      }
      while ( v14 != v6 );
      goto LABEL_24;
    }
    if ( (unsigned __int64)(v7 - 1) <= 0xE )
    {
      v15 = v7;
      v14 = v6;
      v10 = 0;
      v13 = 0;
      v12 = (__int64 *)v6;
    }
    else
    {
      v9 = 0;
      v10 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      do
      {
        v11 = _mm_loadu_si128((const __m128i *)&v6[v9]);
        *(__m128i *)&v6[v9] = _mm_loadu_si128((const __m128i *)&v8[v9]);
        *(__m128i *)&v8[v9] = v11;
        v9 += 16;
      }
      while ( v10 != v9 );
      v12 = (__int64 *)&v6[v10];
      v13 = v7 & 0xFFFFFFFFFFFFFFF0LL;
      v8 += v10;
      v14 = &v6[v10];
      if ( v10 == v7 )
        goto LABEL_24;
      v15 = v7 - v10;
      if ( v7 - v10 - 1 <= 6 )
        goto LABEL_16;
    }
    v16 = *v12;
    *v12 = *(_QWORD *)&v6[v4 + v10];
    *(_QWORD *)&v6[v4 + v10] = v16;
    v13 += v15 & 0xFFFFFFFFFFFFFFF8LL;
    v8 += v15 & 0xFFFFFFFFFFFFFFF8LL;
    v14 += v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15 & 7) == 0 )
    {
LABEL_23:
      v14 = &v6[v7];
LABEL_24:
      v6 = v14;
      goto LABEL_25;
    }
LABEL_16:
    v17 = *v14;
    *v14 = *v8;
    *v8 = v17;
    if ( v7 > (__int64)(v13 + 1) )
    {
      v18 = v14[1];
      v14[1] = v8[1];
      v8[1] = v18;
      if ( v7 > (__int64)(v13 + 2) )
      {
        v19 = v14[2];
        v14[2] = v8[2];
        v8[2] = v19;
        if ( v7 > (__int64)(v13 + 3) )
        {
          v20 = v14[3];
          v14[3] = v8[3];
          v8[3] = v20;
          if ( v7 > (__int64)(v13 + 4) )
          {
            v21 = v14[4];
            v14[4] = v8[4];
            v8[4] = v21;
            if ( v7 > (__int64)(v13 + 5) )
            {
              v22 = v14[5];
              v14[5] = v8[5];
              v8[5] = v22;
              if ( v7 > (__int64)(v13 + 6) )
              {
                v23 = v14[6];
                v14[6] = v8[6];
                v8[6] = v23;
              }
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  v32 = v4;
  if ( (unsigned __int64)(v4 - 1) <= 6 || (unsigned __int64)(v6 + 15 - v3) <= 0x1E )
  {
    v49 = (char *)(2LL * (_QWORD)v3 - (_QWORD)v6);
    do
    {
      v50 = *v6;
      v51 = *v3++;
      *v6++ = v51;
      *(v3 - 1) = v50;
    }
    while ( v3 != v49 );
    return;
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xE )
  {
    v38 = v3;
    v36 = v3;
    v37 = (__int64 *)v6;
  }
  else
  {
    v33 = 0;
    v34 = v4 & 0xFFFFFFFFFFFFFFF0LL;
    do
    {
      v35 = _mm_loadu_si128((const __m128i *)&v6[v33]);
      *(__m128i *)&v6[v33] = _mm_loadu_si128((const __m128i *)&v3[v33]);
      *(__m128i *)&v3[v33] = v35;
      v33 += 16;
    }
    while ( v34 != v33 );
    v36 = &v3[v34];
    v37 = (__int64 *)&v6[v34];
    v38 = &v3[v34];
    v6 += v34;
    if ( v4 == v34 )
      return;
    v32 = v4 - v34;
    if ( v4 - v34 - 1 <= 6 )
      goto LABEL_51;
  }
  v39 = *v37;
  *v37 = *(_QWORD *)v36;
  *(_QWORD *)v36 = v39;
  v38 += v32 & 0xFFFFFFFFFFFFFFF8LL;
  v6 += v32 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v32 & 7) == 0 )
    return;
LABEL_51:
  v40 = *v6;
  *v6 = *v38;
  *v38 = v40;
  if ( v3 != v6 + 1 )
  {
    v41 = v6[1];
    v6[1] = v38[1];
    v38[1] = v41;
    if ( v3 != v6 + 2 )
    {
      v42 = v6[2];
      v6[2] = v38[2];
      v38[2] = v42;
      if ( v3 != v6 + 3 )
      {
        v43 = v6[3];
        v6[3] = v38[3];
        v38[3] = v43;
        if ( v3 != v6 + 4 )
        {
          v44 = v6[4];
          v6[4] = v38[4];
          v38[4] = v44;
          if ( v3 != v6 + 5 )
          {
            v45 = v6[5];
            v6[5] = v38[5];
            v38[5] = v45;
            if ( v3 != v6 + 6 )
            {
              v46 = v6[6];
              v6[6] = v38[6];
              v38[6] = v46;
            }
          }
        }
      }
    }
  }
}

