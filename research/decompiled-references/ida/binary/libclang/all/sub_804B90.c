_WORD *__fastcall sub_804B90(_WORD *a1, __int64 a2, __int64 a3)
{
  _WORD *v5; // rbx
  unsigned __int16 v6; // ax
  bool v7; // cc
  __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  const __m128i *v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __m128i *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  char *v27; // rbx
  __int64 v28; // rax
  char *v29; // rbx
  int v30; // [rsp+0h] [rbp-48h] BYREF
  _WORD *v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+10h] [rbp-38h]

  v5 = a1;
  v6 = *a1 & 0x1FF;
  v7 = v6 <= 0x15u;
  if ( v6 == 21 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( v7 )
    {
      if ( v6 == 4 )
      {
        if ( *((_BYTE *)v5 + 2) >> 3 == 12 )
        {
          v8 = *((_QWORD *)v5 + 2);
          goto LABEL_8;
        }
      }
      else if ( v6 == 19 && (*((_BYTE *)v5 + 3) & 1) != 0 && *((char *)v5 + 2) < 0 )
      {
        v8 = *((_QWORD *)v5 + 2);
        if ( v8 )
          goto LABEL_8;
      }
      return v5;
    }
    if ( v6 == 58 )
    {
      if ( (~*((_DWORD *)v5 + 4) & 0x3FFF8000) != 0 )
      {
        v8 = *(_QWORD *)&v5[4 * ((*((_DWORD *)v5 + 4) >> 15) & 0x7FFF) + 16 + 4 * ((*((_BYTE *)v5 + 19) & 0x40) != 0)];
        goto LABEL_8;
      }
      return v5;
    }
    if ( v6 == 78 )
      break;
LABEL_20:
    if ( v6 <= 0x4Fu )
    {
      if ( v6 != 47 )
        return v5;
      if ( (v5[1] & 8) != 0 )
        return v5;
      v20 = *((_QWORD *)v5 + 3);
      if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 47 > 2
        || (*(_BYTE *)(v20 + 68) & 1) != 0
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 42 <= 1 )
      {
        return v5;
      }
      v30 = 1;
      v8 = *((_QWORD *)v5 + 2);
      v31 = (_WORD *)v20;
LABEL_40:
      v21 = *(unsigned int *)(a3 + 8);
      v16 = (const __m128i *)&v30;
      v22 = *(_QWORD *)a3;
      v23 = v21 + 1;
      if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v21 + 1) )
      {
        if ( (unsigned __int64)&v30 < v22 || (unsigned __int64)&v30 >= v22 + 24 * v21 )
        {
          sub_25D6060(a3, a3 + 16, v23, 24);
          v22 = *(_QWORD *)a3;
          v21 = *(unsigned int *)(a3 + 8);
        }
        else
        {
          v27 = (char *)&v30 - v22;
          sub_25D6060(a3, a3 + 16, v23, 24);
          v22 = *(_QWORD *)a3;
          v21 = *(unsigned int *)(a3 + 8);
          v16 = (const __m128i *)&v27[*(_QWORD *)a3];
        }
      }
      v19 = (__m128i *)(v22 + 24 * v21);
LABEL_42:
      *v19 = _mm_loadu_si128(v16);
      v19[1].m128i_i64[0] = v16[1].m128i_i64[0];
      ++*(_DWORD *)(a3 + 8);
      goto LABEL_43;
    }
    if ( v6 <= 0x59u )
    {
      v12 = (v5[1] >> 3) & 0x7F;
      if ( (unsigned int)(v12 - 7) <= 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 47 )
          return v5;
        v8 = *((_QWORD *)v5 + 2);
        v13 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                   & 0xFFFFFFFFFFFFFFF0LL));
        v14 = *(unsigned int *)(a3 + 8);
        v15 = *(unsigned int *)(a3 + 12);
        v31 = v5;
        v32 = v13;
        v16 = (const __m128i *)&v30;
        v17 = *(_QWORD *)a3;
        v18 = v14 + 1;
        v30 = 0;
        if ( v15 < v14 + 1 )
        {
          if ( (unsigned __int64)&v30 < v17 || (unsigned __int64)&v30 >= v17 + 24 * v14 )
          {
            sub_25D6060(a3, a3 + 16, v18, 24);
            v17 = *(_QWORD *)a3;
            v14 = *(unsigned int *)(a3 + 8);
          }
          else
          {
            v29 = (char *)&v30 - v17;
            sub_25D6060(a3, a3 + 16, v18, 24);
            v17 = *(_QWORD *)a3;
            v14 = *(unsigned int *)(a3 + 8);
            v16 = (const __m128i *)&v29[*(_QWORD *)a3];
          }
        }
        v19 = (__m128i *)(v17 + 24 * v14);
        goto LABEL_42;
      }
      if ( v12 != 5 )
        return v5;
      v8 = *((_QWORD *)v5 + 2);
    }
    else
    {
      if ( ((v6 + 393) & 0x1FFu) > 1 )
        return v5;
      if ( ((v5[1] >> 3) & 0x3F) == 0 )
      {
        v24 = *((_QWORD *)v5 + 3);
        v8 = *((_QWORD *)v5 + 2);
        v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v26 = *(_QWORD *)v25;
        if ( *(_BYTE *)(*(_QWORD *)v25 + 16LL) != 32 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 32 )
          {
            v28 = sub_B0D320(v26);
            v24 = *((_QWORD *)v5 + 3);
            v26 = v28;
          }
          else
          {
            v26 = 0;
          }
        }
        v30 = 2;
        v31 = (_WORD *)v26;
        v32 = v24;
        goto LABEL_40;
      }
      if ( ((v5[1] >> 3) & 0x3F) != 0x20 )
        return v5;
      v10 = *(unsigned int *)(a2 + 8);
      v11 = *((_QWORD *)v5 + 2);
      if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v10 + 1) )
      {
        sub_25D6060(a2, a2 + 16, v10 + 1, 8);
        v10 = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v10) = v11;
      ++*(_DWORD *)(a2 + 8);
      v8 = *((_QWORD *)v5 + 3);
    }
LABEL_43:
    if ( !v8 )
      BUG();
    while ( 1 )
    {
      v5 = (_WORD *)v8;
      v6 = *(_WORD *)v8 & 0x1FF;
      v7 = v6 <= 0x15u;
      if ( v6 != 21 )
        break;
LABEL_10:
      v8 = *((_QWORD *)v5 + 3);
LABEL_8:
      if ( v5 == (_WORD *)v8 )
      {
        v6 = *v5 & 0x1FF;
        goto LABEL_20;
      }
    }
  }
  if ( ((**((_DWORD **)v5 + 2) >> 14) & 0xC) == 0 )
  {
    if ( !*((_BYTE *)v5 + 48) )
    {
      v8 = *((_QWORD *)v5 + 4);
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  return v5;
}

