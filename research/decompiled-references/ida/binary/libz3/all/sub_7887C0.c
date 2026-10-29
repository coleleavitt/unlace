__int64 __fastcall sub_7887C0(__int64 a1, int a2)
{
  __int64 v3; // rax
  _DWORD *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // rcx
  __int64 v8; // r10
  _DWORD *v9; // rdi
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rbp
  _DWORD *v13; // rax
  int v14; // edx
  _DWORD *v15; // rsi
  __int64 v16; // rdi
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r13d
  __m128i *v21; // rax
  __m128i *v22; // r12
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rdi
  const __m128i *v27; // r13
  unsigned int v28; // r15d
  __int64 v29; // r14
  const __m128i *v30; // rcx
  __m128i *v31; // r8
  __int64 v32; // rax
  __m128i *v33; // rdx
  __m128i *v34; // rax
  __int64 v35; // rax
  int v36; // esi
  __int64 v37; // r8
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdx
  int v43; // edx
  __int64 v44; // rdx
  int v45; // edx
  _QWORD *v46; // rsi
  __int64 v47; // rdi
  unsigned int v48; // edx
  int v49; // eax
  __int64 v50; // r13
  _QWORD *v51; // rax
  _QWORD *v52; // r12
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __m128i *v55; // rdi
  unsigned int v56; // ecx
  const __m128i *v57; // rbp
  const __m128i *v58; // r15
  __int64 v59; // r13
  char *v60; // r14
  __int64 v61; // rax
  _QWORD *v62; // rdx

  v3 = *(unsigned int *)(a1 + 128);
  v4 = *(_DWORD **)(a1 + 120);
  v5 = a2 & (unsigned int)(v3 - 1);
  v6 = 24 * v3;
  v7 = &v4[6 * v3];
  v8 = 24 * v5;
  v9 = &v4[6 * v5];
  if ( 24 * v5 == 24 * v3 )
  {
LABEL_47:
    result = (__int64)v4;
    if ( v4 == v9 )
      return result;
    while ( 1 )
    {
      v43 = *(_DWORD *)(result + 4);
      if ( v43 == 2 )
      {
        if ( a2 == *(_DWORD *)result && a2 == *(_DWORD *)(result + 8) )
          goto LABEL_8;
      }
      else if ( !v43 )
      {
        return result;
      }
      result += 24;
      if ( v9 == (_DWORD *)result )
        return result;
    }
  }
  result = (__int64)&v4[6 * v5];
  while ( 1 )
  {
    v11 = *(_DWORD *)(result + 4);
    if ( v11 != 2 )
    {
      if ( !v11 )
        return result;
      goto LABEL_4;
    }
    if ( a2 == *(_DWORD *)result && a2 == *(_DWORD *)(result + 8) )
      break;
LABEL_4:
    result += 24;
    if ( v7 == (_DWORD *)result )
      goto LABEL_47;
  }
LABEL_8:
  v12 = *(_QWORD *)(result + 16);
  v13 = v9;
  if ( v8 == v6 )
  {
LABEL_63:
    if ( v4 != v9 )
    {
      v13 = v4;
      while ( 1 )
      {
        v45 = v13[1];
        if ( v45 == 2 )
        {
          if ( a2 == *v13 && a2 == v13[2] )
            goto LABEL_15;
        }
        else if ( !v45 )
        {
          goto LABEL_39;
        }
        v13 += 6;
        if ( v9 == v13 )
          goto LABEL_39;
      }
    }
    goto LABEL_39;
  }
  while ( 2 )
  {
    v14 = v13[1];
    if ( v14 != 2 )
    {
      if ( !v14 )
        goto LABEL_39;
LABEL_11:
      v13 += 6;
      if ( v7 == v13 )
        goto LABEL_63;
      continue;
    }
    break;
  }
  if ( a2 != *v13 || a2 != v13[2] )
    goto LABEL_11;
LABEL_15:
  v15 = v13 + 6;
  v16 = *(unsigned int *)(a1 + 132);
  if ( v7 == v13 + 6 )
    v15 = v4;
  v17 = v16 - 1;
  if ( v15[1] )
  {
    v13[1] = 1;
    v18 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 132) = v17;
    v19 = v18 + 1;
    if ( v17 < 0x40 )
      v17 = 64;
    *(_DWORD *)(a1 + 136) = v19;
    if ( v17 < v19 && !(unsigned __int8)sub_186AF10(v16) )
    {
      v20 = *(_DWORD *)(a1 + 128);
      v21 = (__m128i *)sub_186B270(24LL * v20);
      v22 = v21;
      if ( v20 )
      {
        if ( v20 == 1 )
          goto LABEL_28;
        v23 = v21;
        v24 = &v21[3 * (v20 >> 1)];
        do
        {
          v23->m128i_i64[0] = 0;
          v23 += 3;
          v23[-2].m128i_i64[1] = 0;
        }
        while ( v23 != v24 );
        if ( (v20 & 1) != 0 )
        {
          v21 = (__m128i *)((char *)v22 + 24 * (v20 & 0xFFFFFFFE));
LABEL_28:
          v21->m128i_i64[0] = 0;
        }
      }
      v25 = *(unsigned int *)(a1 + 128);
      v26 = *(__m128i **)(a1 + 120);
      v27 = v26;
      v28 = v25 - 1;
      v29 = 24 * v25;
      v30 = (__m128i *)((char *)v26 + 24 * v25);
      v31 = (__m128i *)((char *)v22 + 24 * v25);
      if ( v26 != v30 )
      {
        do
        {
          if ( v27->m128i_i32[1] == 2 )
          {
            v32 = 24LL * (v27->m128i_i32[0] & v28);
            v33 = (__m128i *)((char *)v22 + v32);
            if ( v29 == v32 )
            {
LABEL_104:
              if ( v22 == v33 )
              {
LABEL_109:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v34 = v22;
              while ( v34->m128i_i32[1] )
              {
                v34 = (__m128i *)((char *)v34 + 24);
                if ( v33 == v34 )
                  goto LABEL_109;
              }
            }
            else
            {
              v34 = (__m128i *)((char *)v22 + v32);
              while ( v34->m128i_i32[1] )
              {
                v34 = (__m128i *)((char *)v34 + 24);
                if ( v31 == v34 )
                  goto LABEL_104;
              }
            }
            *v34 = _mm_loadu_si128(v27);
            v34[1].m128i_i64[0] = v27[1].m128i_i64[0];
          }
          v27 = (const __m128i *)((char *)v27 + 24);
        }
        while ( v30 != v27 );
        v26 = *(__m128i **)(a1 + 120);
      }
      if ( v26 )
        sub_186B220(v26);
      *(_QWORD *)(a1 + 120) = v22;
      *(_DWORD *)(a1 + 136) = 0;
    }
  }
  else
  {
    v13[1] = 0;
    *(_DWORD *)(a1 + 132) = v17;
  }
LABEL_39:
  v35 = *(unsigned int *)(a1 + 104);
  v36 = *(_DWORD *)(v12 + 12);
  v37 = *(_QWORD *)(a1 + 96);
  v38 = v35 - 1;
  result = 16 * v35;
  v39 = v37 + result;
  v40 = 16LL * (v36 & v38);
  v41 = v37 + v40;
  if ( v40 != result )
  {
    for ( result = v37 + v40; v39 != result; result += 16 )
    {
      v42 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v42 + 12) == v36 && v12 == v42 )
        {
LABEL_71:
          v46 = (_QWORD *)(result + 16);
          v47 = *(unsigned int *)(a1 + 108);
          if ( v39 == result + 16 )
            v46 = *(_QWORD **)(a1 + 96);
          v48 = v47 - 1;
          if ( *v46 )
          {
            *(_QWORD *)result = 1;
            v49 = *(_DWORD *)(a1 + 112);
            *(_DWORD *)(a1 + 108) = v48;
            result = (unsigned int)(v49 + 1);
            if ( v48 < 0x40 )
              v48 = 64;
            *(_DWORD *)(a1 + 112) = result;
            if ( v48 < (unsigned int)result )
            {
              result = sub_186AF10(v47);
              if ( !(_BYTE)result )
              {
                v50 = *(unsigned int *)(a1 + 104);
                v51 = (_QWORD *)sub_186B270(16 * v50);
                v52 = v51;
                v53 = &v51[2 * v50];
                if ( (_DWORD)v50 )
                {
                  do
                  {
                    *v51 = 0;
                    v51 += 2;
                    *((_DWORD *)v51 - 2) = -2;
                  }
                  while ( v53 != v51 );
                }
                v54 = *(unsigned int *)(a1 + 104);
                v55 = *(__m128i **)(a1 + 96);
                v56 = v54 - 1;
                result = 16 * v54;
                v57 = v55;
                v58 = (__m128i *)((char *)v55 + result);
                v59 = result;
                v60 = (char *)v52 + result;
                if ( v55 != (__m128i *)&v55->m128i_i8[result] )
                {
                  do
                  {
                    result = v57->m128i_i64[0];
                    if ( v57->m128i_i64[0] > 1uLL )
                    {
                      v61 = 16LL * (*(_DWORD *)(result + 12) & v56);
                      v62 = &v52[(unsigned __int64)v61 / 8];
                      if ( v59 == v61 )
                      {
LABEL_90:
                        if ( v52 == v62 )
                        {
LABEL_99:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = (__int64)v52;
                        while ( *(_QWORD *)result )
                        {
                          result += 16;
                          if ( v62 == (_QWORD *)result )
                            goto LABEL_99;
                        }
                      }
                      else
                      {
                        result = (__int64)&v52[(unsigned __int64)v61 / 8];
                        while ( *(_QWORD *)result )
                        {
                          result += 16;
                          if ( v60 == (char *)result )
                            goto LABEL_90;
                        }
                      }
                      *(__m128i *)result = _mm_loadu_si128(v57);
                    }
                    ++v57;
                  }
                  while ( v58 != v57 );
                  v55 = *(__m128i **)(a1 + 96);
                }
                if ( v55 )
                  result = sub_186B220(v55);
                *(_QWORD *)(a1 + 96) = v52;
                *(_DWORD *)(a1 + 112) = 0;
              }
            }
          }
          else
          {
            *(_QWORD *)result = 0;
            *(_DWORD *)(a1 + 108) = v48;
          }
          return result;
        }
      }
      else if ( !v42 )
      {
        return result;
      }
    }
  }
  if ( v37 != v41 )
  {
    for ( result = *(_QWORD *)(a1 + 96); v41 != result; result += 16 )
    {
      v44 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v44 + 12) == v36 && v12 == v44 )
          goto LABEL_71;
      }
      else if ( !v44 )
      {
        return result;
      }
    }
  }
  return result;
}

