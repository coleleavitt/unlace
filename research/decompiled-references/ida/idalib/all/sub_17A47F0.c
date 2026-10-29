__m128i *__fastcall sub_17A47F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const __m128i ***v18; // rax
  const __m128i **v19; // rdx
  unsigned __int64 v20; // rax
  const __m128i **v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128i *result; // rax
  unsigned __int64 *v25; // rax
  __int64 *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 *v29; // rcx
  const __m128i *v30; // rdi
  const __m128i **v31; // rax
  const __m128i **v32; // rax
  __int64 *i; // rax
  __int64 v34; // rcx

  v6 = a3;
  v8 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    goto LABEL_26;
  v9 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v9 & 4) != 0 )
    v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v10 )
    BUG();
  if ( (*(_BYTE *)(v10 - 35) & 1) == 0 )
    goto LABEL_12;
  v11 = sub_B8C3D0(v10 - 64, a2, a3, a4, a5, a6);
  a3 = *v11;
  v12 = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( a3 < v12 )
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(_QWORD *)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 178 )
        break;
      a4 += 8;
      if ( v12 == a4 )
        goto LABEL_12;
    }
    if ( v12 == a4 )
      goto LABEL_12;
    goto LABEL_52;
  }
  if ( a3 == v12 )
  {
LABEL_12:
    if ( !*(_QWORD *)(a1 + 1760) )
    {
      v15 = v10 - 64;
LABEL_14:
      while ( 1 )
      {
        v16 = *(_QWORD *)(sub_B8C1B0(v15 + 64) + 16);
        v17 = (v16 & 4) != 0 ? *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL) : v16 & 0xFFFFFFFFFFFFFFF8LL;
        a3 = (*(_BYTE *)(v17 + 8) & 0x7Fu) - 59;
        if ( (unsigned int)a3 > 2 )
          break;
        v15 = v17 - 64;
        if ( v17 == 64 )
          break;
        if ( (*(_BYTE *)(v17 - 35) & 1) != 0 )
        {
          v18 = (const __m128i ***)sub_B8C3D0(v17 - 64, a2, a3, a4, a5, a6);
          v19 = *v18;
          v20 = (unsigned __int64)&(*v18)[*((unsigned int *)v18 + 2)];
          if ( (unsigned __int64)v19 < v20 )
          {
            v29 = (__int64 *)v19;
            while ( 1 )
            {
              a2 = *v29;
              if ( *(_WORD *)(*v29 + 36) == 178 )
                break;
              if ( (__int64 *)v20 == ++v29 )
                goto LABEL_14;
            }
            if ( (__int64 *)v20 != v29 )
            {
LABEL_47:
              v30 = *v19;
              if ( (*v19)[2].m128i_i16[2] != 178 )
              {
                v31 = v19 + 1;
                do
                  v30 = *v31++;
                while ( v30[2].m128i_i16[2] != 178 );
              }
              goto LABEL_50;
            }
          }
          else if ( v19 != (const __m128i **)v20 )
          {
            if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 178 )
              goto LABEL_47;
            v21 = (const __m128i **)(v20 + 8);
            while ( v19 != v21 )
            {
              v22 = (__int64)*v21++;
              if ( *(_WORD *)(v22 + 36) == 178 )
                goto LABEL_47;
            }
          }
        }
      }
    }
LABEL_26:
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      goto LABEL_27;
    v25 = sub_B8C3D0(v8, a2, a3, a4, a5, a6);
    v26 = (__int64 *)*v25;
    v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
    if ( *v25 >= v27 )
    {
      if ( v26 == (__int64 *)v27 )
        goto LABEL_27;
      if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 356 )
        return nullptr;
      for ( i = (__int64 *)(v27 + 8); v26 != i; ++i )
      {
        v34 = *i;
        if ( *(_WORD *)(v34 + 36) == 356 )
          return nullptr;
      }
    }
    else
    {
      v28 = *v25;
      while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 356 )
      {
        v28 += 8LL;
        if ( v27 == v28 )
          goto LABEL_27;
      }
      if ( v27 != v28 )
        return nullptr;
    }
LABEL_27:
    if ( v6 )
    {
      v23 = *(_QWORD *)(a1 + 1760);
      if ( v23 )
        return (__m128i *)sub_B36D80(
                            *(_QWORD *)(a1 + 248),
                            (const void *)(v23 + 4LL * *(unsigned int *)(v23 + 4) + 20),
                            *(_DWORD *)(v23 + 16) * ((*(_WORD *)(v23 + 2) >> 6) & 7u),
                            ((unsigned __int64)*(unsigned int *)(a1 + 1768) << 32) | *(unsigned int *)(a1 + 1768),
                            3);
    }
    return nullptr;
  }
  if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 178 )
  {
    v13 = (__int64 *)(v12 + 8);
    do
    {
      a4 = (__int64)v13;
      if ( (__int64 *)a3 == v13 )
        goto LABEL_12;
      v14 = *v13++;
    }
    while ( *(_WORD *)(v14 + 36) != 178 );
  }
LABEL_52:
  v30 = *(const __m128i **)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 178 )
  {
    v32 = (const __m128i **)(a3 + 8);
    do
      v30 = *v32++;
    while ( v30[2].m128i_i16[2] != 178 );
  }
LABEL_50:
  result = sub_B34E40(v30, *(_QWORD *)(a1 + 248));
  result[2].m128i_i8[6] |= 4u;
  return result;
}
