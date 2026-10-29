__int64 __fastcall sub_657080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebp
  _QWORD *v8; // r13
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r13
  __int16 v12; // dx
  int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  char v18; // al
  unsigned int v19; // edx
  unsigned int v20; // eax
  _QWORD *v21; // r9
  __int16 v22; // ax
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // edi
  char v26; // dl
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // ebp
  __int64 *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // ebp
  _QWORD *v35; // r13
  __int64 v36; // rbp
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 *v48; // rax
  __int64 j; // rax
  __int64 k; // rax
  __int64 v51; // rbp
  __int64 v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 i; // rax
  __int64 *v57; // [rsp+8h] [rbp-160h]
  int v58; // [rsp+8h] [rbp-160h]
  __int64 *v59; // [rsp+8h] [rbp-160h]
  _QWORD *v60; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v62; // [rsp+28h] [rbp-140h]
  __int64 v63; // [rsp+30h] [rbp-138h] BYREF
  int v64; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 12);
    if ( v6 >= v7 )
    {
      v51 = 2 * v7;
      v52 = sub_186B270(8 * v51);
      v6 = *(_DWORD *)(a2 + 8);
      v53 = *(_QWORD **)a2;
      v8 = (_QWORD *)v52;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (_QWORD *)v52 == v53 + 1 )
        {
          for ( i = 0; i != v6; ++i )
            v8[i] = v53[i];
        }
        else
        {
          v54 = 0;
          do
          {
            *(__m128i *)&v8[v54] = _mm_loadu_si128((const __m128i *)&v53[v54]);
            v54 += 2;
          }
          while ( v54 != 2LL * (v6 >> 1) );
          if ( (v6 & 1) != 0 )
            v8[v6 & 0xFFFFFFFE] = v53[v6 & 0xFFFFFFFE];
        }
      }
      if ( v53 != (_QWORD *)(a2 + 16) && v53 )
      {
        sub_186B220(v53);
        v6 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v8;
      *(_DWORD *)(a2 + 12) = v51;
    }
    else
    {
      v8 = *(_QWORD **)a2;
    }
    v8[v6] = v3;
    *(_DWORD *)(a2 + 8) = v6 + 1;
  }
  v9 = &v63;
  v63 = v3;
  ptr = &v63;
  v64 = 0;
  v62 = 0x1000000001LL;
  LODWORD(v10) = 0;
LABEL_8:
  while ( 2 )
  {
    v11 = &v9[2 * (unsigned int)v10];
    v12 = *(_WORD *)(v3 + 4);
    if ( v12 != 1 )
    {
      if ( v12 == 2 )
      {
        v23 = *(_DWORD *)(v3 + 72);
        v24 = *((_DWORD *)v11 + 2);
        v25 = v23 + *(_DWORD *)(v3 + 76) + 1;
        if ( v24 < v25 )
        {
          if ( !v24 )
          {
            v17 = *(_QWORD *)(v3 + 24);
            v24 = 1;
            *((_DWORD *)v11 + 2) = 1;
            if ( *(_DWORD *)(v17 + 8) > 1u )
              goto LABEL_36;
LABEL_42:
            v28 = (unsigned int)v62;
            v29 = HIDWORD(v62);
            if ( (unsigned int)v62 < HIDWORD(v62) )
            {
LABEL_43:
              v9 = ptr;
              goto LABEL_44;
            }
LABEL_49:
            v36 = (unsigned int)(2 * v29);
            v9 = (__int64 *)sub_186B270(16 * v36);
            v37 = ptr;
            v38 = 0;
            v28 = (unsigned int)v62;
            if ( (_DWORD)v62 )
            {
              do
              {
                *(__m128i *)&v9[v38] = _mm_loadu_si128((const __m128i *)&ptr[v38]);
                v38 += 2;
              }
              while ( 2LL * (unsigned int)v62 != v38 );
            }
            if ( ptr != &v63 && ptr )
            {
LABEL_53:
              v57 = v9;
              sub_186B220(v37);
              v28 = (unsigned int)v62;
              v9 = v57;
            }
            goto LABEL_54;
          }
          while ( 1 )
          {
            v27 = v24 - 1;
            if ( v23 < v24 )
              v27 = (unsigned int)v27 - v23;
            ++v24;
            v17 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v27 + 80);
            *((_DWORD *)v11 + 2) = v24;
            if ( *(_DWORD *)(v17 + 8) <= 1u )
              goto LABEL_42;
LABEL_36:
            v26 = *(_BYTE *)(v17 + 6);
            if ( (v26 & 1) == 0 )
              break;
            if ( v24 >= v25 )
              goto LABEL_83;
            v23 = *(_DWORD *)(v3 + 72);
          }
          *(_BYTE *)(v17 + 6) = v26 | 1;
          v33 = *(_DWORD *)(a2 + 8);
          v34 = *(_DWORD *)(a2 + 12);
          if ( v33 < v34 )
          {
            v35 = *(_QWORD **)a2;
            goto LABEL_48;
          }
          v43 = 2 * v34;
          v44 = sub_186B270(8 * v43);
          v33 = *(_DWORD *)(a2 + 8);
          v45 = *(_QWORD **)a2;
          v35 = (_QWORD *)v44;
          if ( v33 )
          {
            if ( v33 - 1 > 2 && (_QWORD *)v44 != v45 + 1 )
            {
              v46 = 0;
              do
              {
                *(__m128i *)&v35[v46] = _mm_loadu_si128((const __m128i *)&v45[v46]);
                v46 += 2;
              }
              while ( v46 != 2LL * (v33 >> 1) );
              if ( (v33 & 1) != 0 )
                v35[v33 & 0xFFFFFFFE] = v45[v33 & 0xFFFFFFFE];
              goto LABEL_79;
            }
            for ( j = 0; j != v33; ++j )
              v35[j] = v45[j];
            if ( !v45 )
            {
LABEL_82:
              *(_QWORD *)a2 = v35;
              *(_DWORD *)(a2 + 12) = v43;
LABEL_48:
              v28 = (unsigned int)v62;
              v29 = HIDWORD(v62);
              v35[v33] = v17;
              *(_DWORD *)(a2 + 8) = v33 + 1;
              if ( (unsigned int)v62 < HIDWORD(v62) )
                goto LABEL_43;
              goto LABEL_49;
            }
          }
          else
          {
LABEL_79:
            if ( !v45 )
              goto LABEL_82;
          }
          if ( v45 != (_QWORD *)(a2 + 16) )
          {
            sub_186B220(v45);
            v33 = *(_DWORD *)(a2 + 8);
          }
          goto LABEL_82;
        }
LABEL_83:
        LODWORD(v62) = v62 - 1;
        sub_655D80(a1, v3);
      }
      else
      {
        if ( v12 )
        {
          sub_1872CE0("");
          sub_1873130(114, 100);
        }
        v14 = *(_DWORD *)(v3 + 24);
        v15 = *((_DWORD *)v11 + 2);
        if ( v15 < v14 )
        {
          while ( 1 )
          {
            v16 = v15++;
            v17 = *(_QWORD *)(v3 + 8 * v16 + 32);
            *((_DWORD *)v11 + 2) = v15;
            if ( *(_DWORD *)(v17 + 8) > 1u )
            {
              v18 = *(_BYTE *)(v17 + 6);
              if ( (v18 & 1) != 0 )
                goto LABEL_28;
              *(_BYTE *)(v17 + 6) = v18 | 1;
              v19 = *(_DWORD *)(a2 + 8);
              v20 = *(_DWORD *)(a2 + 12);
              if ( v19 >= v20 )
              {
                v58 = 2 * v20;
                v40 = sub_186B270(16LL * v20);
                v19 = *(_DWORD *)(a2 + 8);
                v41 = *(_QWORD **)a2;
                v21 = (_QWORD *)v40;
                if ( v19 )
                {
                  if ( v19 - 1 <= 2 || (_QWORD *)v40 == v41 + 1 )
                  {
                    for ( k = 0; k != v19; ++k )
                      v21[k] = v41[k];
                  }
                  else
                  {
                    v42 = 0;
                    do
                    {
                      *(__m128i *)&v21[v42] = _mm_loadu_si128((const __m128i *)&v41[v42]);
                      v42 += 2;
                    }
                    while ( 2LL * (v19 >> 1) != v42 );
                    if ( (v19 & 1) != 0 )
                      v21[v19 & 0xFFFFFFFE] = v41[v19 & 0xFFFFFFFE];
                  }
                }
                if ( v41 && v41 != (_QWORD *)(a2 + 16) )
                {
                  v60 = v21;
                  sub_186B220(v41);
                  v19 = *(_DWORD *)(a2 + 8);
                  v21 = v60;
                }
                *(_QWORD *)a2 = v21;
                *(_DWORD *)(a2 + 12) = v58;
              }
              else
              {
                v21 = *(_QWORD **)a2;
              }
              v21[v19] = v17;
              *(_DWORD *)(a2 + 8) = v19 + 1;
            }
            v22 = *(_WORD *)(v17 + 4);
            if ( v22 != 1 )
            {
              if ( v22 == 2 )
              {
                v28 = (unsigned int)v62;
                if ( (unsigned int)v62 < HIDWORD(v62) )
                  goto LABEL_43;
                v36 = (unsigned int)(2 * HIDWORD(v62));
                v9 = (__int64 *)sub_186B270(16 * v36);
                v37 = ptr;
                v39 = 0;
                v28 = (unsigned int)v62;
                if ( (_DWORD)v62 )
                {
                  do
                  {
                    *(__m128i *)&v9[v39] = _mm_loadu_si128((const __m128i *)&ptr[v39]);
                    v39 += 2;
                  }
                  while ( v39 != 2LL * (unsigned int)v62 );
                }
                if ( ptr )
                {
                  if ( ptr != &v63 )
                    goto LABEL_53;
                  ptr = v9;
                  HIDWORD(v62) *= 2;
                  goto LABEL_44;
                }
LABEL_54:
                ptr = v9;
                HIDWORD(v62) = v36;
LABEL_44:
                v30 = &v9[2 * v28];
                *v30 = v17;
                *((_DWORD *)v30 + 2) = 0;
                v31 = (unsigned int)v62;
                v32 = v62 + 1;
LABEL_45:
                LODWORD(v62) = v32;
                LODWORD(v10) = v32 - 1;
                v3 = v9[2 * v31];
                goto LABEL_8;
              }
              if ( v22 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( *(_DWORD *)(v17 + 24) )
              {
                v47 = (unsigned int)v62;
                if ( (unsigned int)v62 >= HIDWORD(v62) )
                {
                  v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v62)));
                  v55 = 0;
                  v47 = (unsigned int)v62;
                  if ( (_DWORD)v62 )
                  {
                    do
                    {
                      *(__m128i *)&v9[v55] = _mm_loadu_si128((const __m128i *)&ptr[v55]);
                      v55 += 2;
                    }
                    while ( 2LL * (unsigned int)v62 != v55 );
                  }
                  if ( ptr != &v63 && ptr )
                  {
                    v59 = v9;
                    sub_186B220(ptr);
                    v47 = (unsigned int)v62;
                    v9 = v59;
                  }
                  ptr = v9;
                  HIDWORD(v62) *= 2;
                }
                else
                {
                  v9 = ptr;
                }
                v48 = &v9[2 * v47];
                *((_DWORD *)v48 + 2) = 0;
                v31 = (unsigned int)v62;
                *v48 = v17;
                v32 = v62 + 1;
                goto LABEL_45;
              }
            }
            sub_655D80(a1, v17);
            v15 = *((_DWORD *)v11 + 2);
LABEL_28:
            if ( v15 >= v14 )
            {
              LODWORD(v10) = v62 - 1;
              break;
            }
          }
        }
        LODWORD(v62) = v10;
        sub_655D80(a1, v3);
      }
      v13 = v62;
      v9 = ptr;
      if ( !(_DWORD)v62 )
        goto LABEL_15;
LABEL_13:
      v10 = (unsigned int)(v13 - 1);
      v3 = v9[2 * v10];
      continue;
    }
    break;
  }
  sub_655D80(a1, v3);
  v9 = ptr;
  v13 = v62 - 1;
  LODWORD(v62) = v13;
  if ( v13 )
    goto LABEL_13;
LABEL_15:
  result = (__int64)&v63;
  if ( v9 != &v63 )
  {
    if ( v9 )
      return sub_186B220(v9);
  }
  return result;
}

