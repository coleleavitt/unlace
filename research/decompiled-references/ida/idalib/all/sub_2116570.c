_WORD *__fastcall sub_2116570(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v6; // al
  const void *v7; // rsi
  size_t v8; // r12
  _DWORD *v9; // rdi
  _WORD *result; // rax
  __int64 v11; // r12
  _DWORD *v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int8 v14; // r13
  unsigned __int64 v15; // rdx
  char v16; // r14
  char v17; // r15
  const void *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  const char *v22; // rsi
  size_t v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _WORD *v27; // rcx
  unsigned __int64 v28; // rdx
  _DWORD *v29; // rdi
  const void *v30; // rsi
  size_t v31; // rbx
  __int64 v32; // rdx
  const char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rdi
  const void *v37; // rsi
  size_t v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  _WORD *v41; // rdi
  const void *v42; // rsi
  size_t v43; // rbx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  int *v51; // rdi
  int v52; // ecx
  char *v53; // rsi
  _WORD *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // r9
  char *v60; // rcx
  const char *v61; // rsi
  unsigned int v62; // edi
  unsigned int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // [rsp+8h] [rbp-40h]
  size_t v66; // [rsp+8h] [rbp-40h]

  v4 = a4;
  v6 = *(_BYTE *)(a1 + 196);
  if ( v6 == 1 )
  {
    sub_2116570(*(_QWORD *)(a1 + 176));
    if ( (*(_BYTE *)(a1 + 197) & 4) != 0 )
    {
      v29 = *(_DWORD **)(v4 + 32);
      v30 = *(const void **)(a1 + 152);
      v31 = *(_QWORD *)(a1 + 160);
      result = (_WORD *)(*(_QWORD *)(v4 + 24) - (_QWORD)v29);
      if ( (unsigned __int64)result < v31 )
      {
        v47 = sub_227BF10(v4, v30, v31);
        v29 = *(_DWORD **)(v47 + 32);
        v4 = v47;
        result = (_WORD *)(*(_QWORD *)(v47 + 24) - (_QWORD)v29);
      }
      else if ( v31 )
      {
        memcpy(v29, v30, v31);
        v57 = *(_QWORD *)(v4 + 24);
        v29 = (_DWORD *)(*(_QWORD *)(v4 + 32) + v31);
        *(_QWORD *)(v4 + 32) = v29;
        result = (_WORD *)(v57 - (_QWORD)v29);
      }
      if ( (unsigned __int64)result <= 6 )
      {
        v32 = 7;
        v33 = " CATTR\n";
        return (_WORD *)sub_227BF10(v4, v33, v32);
      }
      *v29 = 1413563168;
      *((_WORD *)v29 + 2) = 21076;
      *((_BYTE *)v29 + 6) = 10;
      *(_QWORD *)(v4 + 32) += 7LL;
    }
    else
    {
      result = (_WORD *)sub_2115D80(
                          v4,
                          *(const void **)(a1 + 152),
                          *(_QWORD *)(a1 + 160),
                          *(_BYTE *)(a1 + 185),
                          *(_BYTE *)(a1 + 191),
                          *(_BYTE *)(a1 + 189),
                          0,
                          *(_BYTE *)(a1 + 184),
                          0,
                          *(_BYTE *)(a1 + 192),
                          nullptr,
                          0);
      *(_BYTE *)(a1 + 197) |= 4u;
    }
  }
  else
  {
    if ( !v6 )
    {
      v7 = *(const void **)(a1 + 152);
      v8 = *(_QWORD *)(a1 + 160);
      v9 = *(_DWORD **)(a4 + 32);
      result = (_WORD *)(*(_QWORD *)(a4 + 24) - (_QWORD)v9);
      if ( (unsigned __int64)result < v8 )
      {
        v34 = sub_227BF10(a4, v7, v8);
        v9 = *(_DWORD **)(v34 + 32);
        v4 = v34;
        result = (_WORD *)(*(_QWORD *)(v34 + 24) - (_QWORD)v9);
        if ( (unsigned __int64)result <= 6 )
        {
LABEL_7:
          result = (_WORD *)sub_227BF10(v4, " CSECT\n", 7);
LABEL_8:
          *(_BYTE *)(a1 + 197) |= 4u;
          return result;
        }
      }
      else
      {
        if ( v8 )
        {
          memcpy(v9, v7, v8);
          v35 = *(_QWORD *)(v4 + 24);
          v9 = (_DWORD *)(v8 + *(_QWORD *)(v4 + 32));
          *(_QWORD *)(v4 + 32) = v9;
          result = (_WORD *)(v35 - (_QWORD)v9);
        }
        if ( (unsigned __int64)result <= 6 )
          goto LABEL_7;
      }
      *v9 = 1163084576;
      *((_WORD *)v9 + 2) = 21571;
      *((_BYTE *)v9 + 6) = 10;
      *(_QWORD *)(v4 + 32) += 7LL;
      goto LABEL_8;
    }
    v11 = *(_QWORD *)(a1 + 176);
    sub_2116570(*(_QWORD *)(v11 + 176));
    if ( (*(_BYTE *)(a1 + 197) & 4) == 0 )
    {
      sub_2115D80(
        v4,
        *(const void **)(v11 + 152),
        *(_QWORD *)(v11 + 160),
        *(_BYTE *)(v11 + 185),
        *(_BYTE *)(v11 + 191),
        *(_BYTE *)(v11 + 189),
        *(_BYTE *)(a1 + 185),
        *(_BYTE *)(v11 + 184),
        *(_DWORD *)(a1 + 188),
        *(_BYTE *)(v11 + 192),
        *(const void **)(a1 + 152),
        *(_QWORD *)(a1 + 160));
      v12 = *(_DWORD **)(v4 + 32);
      v13 = *(_QWORD *)(a1 + 160);
      v14 = *(_BYTE *)(a1 + 187);
      v15 = *(_QWORD *)(v4 + 24) - (_QWORD)v12;
      v16 = *(_BYTE *)(a1 + 185);
      v17 = *(_BYTE *)(a1 + 186);
      v18 = *(const void **)(a1 + 152);
      if ( v15 < v13 )
      {
        v19 = sub_227BF10(v4, v18, *(_QWORD *)(a1 + 160));
        v12 = *(_DWORD **)(v19 + 32);
        v15 = *(_QWORD *)(v19 + 24) - (_QWORD)v12;
      }
      else
      {
        v19 = v4;
        if ( v13 )
        {
          v66 = *(_QWORD *)(a1 + 160);
          memcpy(v12, v18, v66);
          v56 = *(_QWORD *)(v4 + 24);
          v19 = v4;
          v12 = (_DWORD *)(v66 + *(_QWORD *)(v4 + 32));
          *(_QWORD *)(v4 + 32) = v12;
          v15 = v56 - (_QWORD)v12;
        }
      }
      if ( v15 > 6 )
      {
        *v12 = 1413568544;
        *((_WORD *)v12 + 2) = 21076;
        *((_BYTE *)v12 + 6) = 32;
        *(_QWORD *)(v19 + 32) += 7LL;
      }
      else
      {
        sub_227BF10(v19, " XATTR ", 7);
      }
      v20 = *(_QWORD **)(v4 + 32);
      if ( *(_QWORD *)(v4 + 24) - (_QWORD)v20 > 7u )
      {
        v21 = v4;
        *v20 = 0x284547414B4E494CLL;
        *(_QWORD *)(v4 + 32) += 8LL;
      }
      else
      {
        v21 = sub_227BF10(v4, "LINKAGE(", 8);
      }
      v65 = v21;
      v22 = "XPLINK";
      if ( !v17 )
        v22 = "OS";
      v23 = strlen(v22);
      v24 = v65;
      v25 = *(_QWORD **)(v65 + 32);
      if ( v23 > *(_QWORD *)(v65 + 24) - (_QWORD)v25 )
      {
        v26 = sub_227BF10(v65, v22, v23);
        v27 = *(_WORD **)(v26 + 32);
        v24 = v26;
        goto LABEL_21;
      }
      if ( (unsigned int)v23 >= 8 )
      {
        v59 = (unsigned __int64)(v25 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v25 = *(_QWORD *)v22;
        *(_QWORD *)((char *)v25 + (unsigned int)v23 - 8) = *(_QWORD *)&v22[(unsigned int)v23 - 8];
        v60 = (char *)v25 - v59;
        v61 = (const char *)(v22 - v60);
        if ( (((_DWORD)v23 + (_DWORD)v60) & 0xFFFFFFF8) >= 8 )
        {
          v62 = (v23 + (_DWORD)v60) & 0xFFFFFFF8;
          v63 = 0;
          do
          {
            v64 = v63;
            v63 += 8;
            *(_QWORD *)(v59 + v64) = *(_QWORD *)&v61[v64];
          }
          while ( v63 < v62 );
        }
      }
      else
      {
        if ( (v23 & 4) != 0 )
        {
          *(_DWORD *)v25 = *(_DWORD *)v22;
          *(_DWORD *)((char *)v25 + (unsigned int)v23 - 4) = *(_DWORD *)&v22[(unsigned int)v23 - 4];
          v25 = *(_QWORD **)(v65 + 32);
          goto LABEL_88;
        }
        if ( !(_DWORD)v23 )
        {
LABEL_88:
          v27 = (_WORD *)((char *)v25 + v23);
          *(_QWORD *)(v65 + 32) = v27;
LABEL_21:
          if ( *(_QWORD *)(v24 + 24) - (_QWORD)v27 > 1u )
          {
            *v27 = 11305;
            *(_QWORD *)(v24 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v24, "),", 2);
          }
          v28 = *(_QWORD *)(v4 + 24);
          result = *(_WORD **)(v4 + 32);
          if ( v16 )
          {
            if ( v28 - (unsigned __int64)result > 9 )
            {
              qmemcpy(result, "REFERENCE(", 10);
              v51 = (int *)(*(_QWORD *)(v4 + 32) + 10LL);
              v50 = v4;
              *(_QWORD *)(v4 + 32) = v51;
            }
            else
            {
              v50 = sub_227BF10(v4, "REFERENCE(", 10);
              v51 = *(int **)(v50 + 32);
            }
            v52 = 1096040772;
            if ( v16 == 2 )
              v52 = 1162104643;
            v53 = "CODE";
            if ( v16 != 2 )
              v53 = "DATA";
            if ( *(_QWORD *)(v50 + 24) - (_QWORD)v51 > 3u )
            {
              *v51 = v52;
              v54 = (_WORD *)(*(_QWORD *)(v50 + 32) + 4LL);
              *(_QWORD *)(v50 + 32) = v54;
            }
            else
            {
              v50 = sub_227BF10(v50, v53, 4);
              v54 = *(_WORD **)(v50 + 32);
            }
            if ( *(_QWORD *)(v50 + 24) - (_QWORD)v54 > 1u )
            {
              *v54 = 11305;
              *(_QWORD *)(v50 + 32) += 2LL;
            }
            else
            {
              sub_227BF10(v50, "),", 2);
            }
            v28 = *(_QWORD *)(v4 + 24);
            result = *(_WORD **)(v4 + 32);
          }
          if ( !v14 )
            goto LABEL_25;
          if ( v28 - (unsigned __int64)result > 5 )
          {
            *(_DWORD *)result = 1347371859;
            result[2] = 10309;
            v48 = *(_QWORD *)(v4 + 32) + 6LL;
            *(_QWORD *)(v4 + 32) = v48;
          }
          else
          {
            sub_227BF10(v4, "SCOPE(", 6);
            v48 = *(_QWORD *)(v4 + 32);
          }
          v49 = *(_QWORD *)(v4 + 24);
          if ( v14 == 2 )
          {
            if ( v49 - v48 > 5 )
            {
              *(_DWORD *)v48 = 1430540109;
              *(_WORD *)(v48 + 4) = 17740;
              v48 = *(_QWORD *)(v4 + 32) + 6LL;
              *(_QWORD *)(v4 + 32) = v48;
            }
            else
            {
              sub_227BF10(v4, "MODULE", 6);
              v48 = *(_QWORD *)(v4 + 32);
            }
          }
          else if ( v14 <= 2u )
          {
            if ( v49 - v48 > 6 )
            {
              *(_DWORD *)v48 = 1413694803;
              *(_WORD *)(v48 + 4) = 20297;
              *(_BYTE *)(v48 + 6) = 78;
              v48 = *(_QWORD *)(v4 + 32) + 7LL;
              *(_QWORD *)(v4 + 32) = v48;
            }
            else
            {
              sub_227BF10(v4, "SECTION", 7);
              v48 = *(_QWORD *)(v4 + 32);
            }
          }
          else if ( v14 == 3 )
          {
            if ( v49 - v48 > 6 )
            {
              *(_DWORD *)v48 = 1380075852;
              *(_WORD *)(v48 + 4) = 21057;
              *(_BYTE *)(v48 + 6) = 89;
              v48 = *(_QWORD *)(v4 + 32) + 7LL;
              *(_QWORD *)(v4 + 32) = v48;
            }
            else
            {
              sub_227BF10(v4, "LIBRARY", 7);
              v48 = *(_QWORD *)(v4 + 32);
            }
          }
          else
          {
            if ( v14 != 4 )
            {
LABEL_63:
              if ( v49 <= v48 )
              {
                sub_227BA10(v4, 41);
              }
              else
              {
                *(_QWORD *)(v4 + 32) = v48 + 1;
                *(_BYTE *)v48 = 41;
              }
              result = *(_WORD **)(v4 + 32);
              v28 = *(_QWORD *)(v4 + 24);
LABEL_25:
              if ( (unsigned __int64)result >= v28 )
              {
                result = (_WORD *)sub_227BA10(v4, 10);
              }
              else
              {
                *(_QWORD *)(v4 + 32) = (char *)result + 1;
                *(_BYTE *)result = 10;
              }
              *(_BYTE *)(v11 + 197) |= 4u;
              goto LABEL_8;
            }
            if ( v49 - v48 > 5 )
            {
              *(_DWORD *)v48 = 1330665541;
              *(_WORD *)(v48 + 4) = 21586;
              v48 = *(_QWORD *)(v4 + 32) + 6LL;
              *(_QWORD *)(v4 + 32) = v48;
            }
            else
            {
              sub_227BF10(v4, "EXPORT", 6);
              v48 = *(_QWORD *)(v4 + 32);
            }
          }
          v49 = *(_QWORD *)(v4 + 24);
          goto LABEL_63;
        }
        *(_BYTE *)v25 = *v22;
        if ( (v23 & 2) != 0 )
        {
          *(_WORD *)((char *)v25 + (unsigned int)v23 - 2) = *(_WORD *)&v22[(unsigned int)v23 - 2];
          v25 = *(_QWORD **)(v65 + 32);
          goto LABEL_88;
        }
      }
      v25 = *(_QWORD **)(v65 + 32);
      goto LABEL_88;
    }
    v36 = *(void **)(v4 + 32);
    v37 = *(const void **)(v11 + 152);
    v38 = *(_QWORD *)(v11 + 160);
    v39 = *(_QWORD *)(v4 + 24) - (_QWORD)v36;
    if ( v38 > v39 )
    {
      v46 = sub_227BF10(v4, v37, v38);
      v36 = *(void **)(v46 + 32);
      v4 = v46;
      v39 = *(_QWORD *)(v46 + 24) - (_QWORD)v36;
    }
    else if ( v38 )
    {
      memcpy(v36, v37, v38);
      v58 = *(_QWORD *)(v4 + 24);
      v36 = (void *)(v38 + *(_QWORD *)(v4 + 32));
      *(_QWORD *)(v4 + 32) = v36;
      v39 = v58 - (_QWORD)v36;
    }
    if ( v39 > 0xB )
    {
      qmemcpy(v36, " CATTR PART(", 12);
      v41 = (_WORD *)(*(_QWORD *)(v4 + 32) + 12LL);
      *(_QWORD *)(v4 + 32) = v41;
    }
    else
    {
      v40 = sub_227BF10(v4, " CATTR PART(", 12);
      v41 = *(_WORD **)(v40 + 32);
      v4 = v40;
    }
    v42 = *(const void **)(a1 + 152);
    v43 = *(_QWORD *)(a1 + 160);
    v44 = *(_QWORD *)(v4 + 24) - (_QWORD)v41;
    if ( v43 > v44 )
    {
      v45 = sub_227BF10(v4, v42, v43);
      v41 = *(_WORD **)(v45 + 32);
      v4 = v45;
      v44 = *(_QWORD *)(v45 + 24) - (_QWORD)v41;
    }
    else if ( v43 )
    {
      memcpy(v41, v42, v43);
      v55 = *(_QWORD *)(v4 + 24);
      v41 = (_WORD *)(*(_QWORD *)(v4 + 32) + v43);
      *(_QWORD *)(v4 + 32) = v41;
      v44 = v55 - (_QWORD)v41;
    }
    if ( v44 <= 1 )
    {
      v32 = 2;
      v33 = ")\n";
      return (_WORD *)sub_227BF10(v4, v33, v32);
    }
    *v41 = 2601;
    *(_QWORD *)(v4 + 32) += 2LL;
    return (_WORD *)(elf_gnu_hash_indexes + 1921);
  }
  return result;
}
