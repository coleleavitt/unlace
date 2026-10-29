__int64 __fastcall sub_4AFD20(__int64 a1, char **a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  char *v8; // rbp
  __int64 *v9; // rbp
  __int16 v10; // dx
  __int64 *v11; // rbx
  unsigned int v12; // r13d
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r14
  char v16; // al
  unsigned int v17; // esi
  unsigned int v18; // ebp
  char *v19; // r10
  __int16 v20; // ax
  _DWORD *v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int16 v24; // cx
  char v25; // cl
  __int64 v26; // rbp
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // r13
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // edi
  __int64 v33; // r13
  char v34; // si
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // ebx
  __int64 *v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // ebx
  char *v43; // rbp
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // rax
  char *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  char *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  char *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // cl
  __int64 v67; // r13
  unsigned int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // r14
  _QWORD *v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rbx
  _QWORD *v76; // rdi
  __int64 v77; // rsi
  __int64 i; // rsi
  __int64 j; // rsi
  char *v81; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v83; // [rsp+28h] [rbp-140h]
  __int64 v84; // [rsp+30h] [rbp-138h] BYREF
  int v85; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *((_DWORD *)a2 + 2);
    v7 = *((_DWORD *)a2 + 3);
    if ( v6 >= v7 )
    {
      v61 = 2 * v7;
      v62 = sub_186B270(8 * v61);
      v6 = *((_DWORD *)a2 + 2);
      v63 = *a2;
      v8 = (char *)v62;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (char *)v62 == v63 + 8 )
        {
          v71 = 0;
          do
          {
            *(_QWORD *)&v8[v71] = *(_QWORD *)&v63[v71];
            v71 += 8;
          }
          while ( 8LL * v6 != v71 );
        }
        else
        {
          v64 = 0;
          do
          {
            *(__m128i *)&v8[v64] = _mm_loadu_si128((const __m128i *)&v63[v64]);
            v64 += 16;
          }
          while ( v64 != 16LL * (v6 >> 1) );
          if ( (v6 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v6 & 0xFFFFFFFE)] = *(_QWORD *)&v63[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v63 != (char *)(a2 + 2) && v63 )
      {
        sub_186B220(v63);
        v6 = *((_DWORD *)a2 + 2);
      }
      *a2 = v8;
      *((_DWORD *)a2 + 3) = v61;
    }
    else
    {
      v8 = *a2;
    }
    *(_QWORD *)&v8[8 * v6] = v3;
    *((_DWORD *)a2 + 2) = v6 + 1;
  }
  v9 = &v84;
  v84 = v3;
  ptr = &v84;
  v85 = 0;
  v83 = 0x1000000001LL;
  result = 0;
LABEL_8:
  while ( 2 )
  {
    v10 = *(_WORD *)(v3 + 4);
    v11 = &v9[2 * (unsigned int)result];
    if ( v10 == 1 )
      goto LABEL_36;
    if ( v10 == 2 )
    {
      v30 = *(_DWORD *)(v3 + 72);
      v31 = *((_DWORD *)v11 + 2);
      v32 = v30 + *(_DWORD *)(v3 + 76) + 1;
      if ( v31 < v32 )
      {
        if ( !v31 )
        {
          v33 = *(_QWORD *)(v3 + 24);
          v31 = 1;
          *((_DWORD *)v11 + 2) = 1;
          if ( *(_DWORD *)(v33 + 8) > 1u )
            goto LABEL_42;
LABEL_48:
          v36 = (unsigned int)v83;
          v37 = HIDWORD(v83);
          if ( (unsigned int)v83 < HIDWORD(v83) )
            goto LABEL_49;
          goto LABEL_60;
        }
        while ( 1 )
        {
          v35 = v31 - 1;
          if ( v30 < v31 )
            v35 = (unsigned int)v35 - v30;
          ++v31;
          v33 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v35 + 80);
          *((_DWORD *)v11 + 2) = v31;
          if ( *(_DWORD *)(v33 + 8) <= 1u )
            goto LABEL_48;
LABEL_42:
          v34 = *(_BYTE *)(v33 + 6);
          if ( (v34 & 1) == 0 )
            break;
          if ( v31 >= v32 )
            goto LABEL_35;
          v30 = *(_DWORD *)(v3 + 72);
        }
        *(_BYTE *)(v33 + 6) = v34 | 1;
        v41 = *((_DWORD *)a2 + 2);
        v42 = *((_DWORD *)a2 + 3);
        if ( v41 < v42 )
        {
          v43 = *a2;
          goto LABEL_59;
        }
        v54 = 2 * v42;
        v55 = sub_186B270(8 * v54);
        v41 = *((_DWORD *)a2 + 2);
        v56 = *a2;
        v43 = (char *)v55;
        if ( v41 )
        {
          if ( v41 - 1 <= 2 || (char *)v55 == v56 + 8 )
          {
            v59 = 0;
            do
            {
              *(_QWORD *)&v43[v59] = *(_QWORD *)&v56[v59];
              v59 += 8;
            }
            while ( v59 != 8LL * v41 );
            if ( v56 )
            {
LABEL_92:
              if ( v56 != (char *)(a2 + 2) )
              {
                sub_186B220(v56);
                v41 = *((_DWORD *)a2 + 2);
              }
            }
LABEL_94:
            *a2 = v43;
            *((_DWORD *)a2 + 3) = v54;
LABEL_59:
            v37 = HIDWORD(v83);
            *(_QWORD *)&v43[8 * v41] = v33;
            *((_DWORD *)a2 + 2) = v41 + 1;
            v36 = (unsigned int)v83;
            if ( (unsigned int)v83 < HIDWORD(v83) )
            {
LABEL_49:
              v9 = ptr;
LABEL_50:
              v38 = &v9[2 * v36];
              *((_DWORD *)v38 + 2) = 0;
              v39 = (unsigned int)v83;
              *v38 = v33;
              v40 = v83 + 1;
              goto LABEL_51;
            }
LABEL_60:
            v44 = (unsigned int)(2 * v37);
            v9 = (__int64 *)sub_186B270(16 * v44);
            v45 = 0;
            v36 = (unsigned int)v83;
            if ( (_DWORD)v83 )
            {
              do
              {
                *(__m128i *)&v9[v45] = _mm_loadu_si128((const __m128i *)&ptr[v45]);
                v45 += 2;
              }
              while ( v45 != 2LL * (unsigned int)v83 );
            }
            if ( ptr != &v84 && ptr )
            {
              sub_186B220(ptr);
              v36 = (unsigned int)v83;
            }
            ptr = v9;
            HIDWORD(v83) = v44;
            goto LABEL_50;
          }
          v57 = 0;
          do
          {
            *(__m128i *)&v43[v57] = _mm_loadu_si128((const __m128i *)&v56[v57]);
            v57 += 16;
          }
          while ( v57 != 16LL * (v41 >> 1) );
          if ( (v41 & 1) != 0 )
            *(_QWORD *)&v43[8 * (v41 & 0xFFFFFFFE)] = *(_QWORD *)&v56[8 * (v41 & 0xFFFFFFFE)];
        }
        if ( v56 )
          goto LABEL_92;
        goto LABEL_94;
      }
LABEL_35:
      result = (unsigned int)(v83 - 1);
LABEL_36:
      LODWORD(v83) = result;
      goto LABEL_37;
    }
    if ( v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v12 = *(_DWORD *)(v3 + 24);
    v13 = *((_DWORD *)v11 + 2);
    if ( v13 < v12 )
    {
      while ( 1 )
      {
        v14 = v13++;
        v15 = *(_QWORD *)(v3 + 8 * v14 + 32);
        *((_DWORD *)v11 + 2) = v13;
        if ( *(_DWORD *)(v15 + 8) > 1u )
        {
          v16 = *(_BYTE *)(v15 + 6);
          if ( (v16 & 1) != 0 )
            goto LABEL_22;
          *(_BYTE *)(v15 + 6) = v16 | 1;
          v17 = *((_DWORD *)a2 + 2);
          v18 = *((_DWORD *)a2 + 3);
          if ( v17 >= v18 )
          {
            v50 = 2 * v18;
            v51 = sub_186B270(8 * v50);
            v17 = *((_DWORD *)a2 + 2);
            v52 = *a2;
            v19 = (char *)v51;
            if ( v17 )
            {
              if ( v17 - 1 <= 2 || (char *)v51 == v52 + 8 )
              {
                v60 = 0;
                do
                {
                  *(_QWORD *)&v19[v60] = *(_QWORD *)&v52[v60];
                  v60 += 8;
                }
                while ( 8LL * v17 != v60 );
              }
              else
              {
                v53 = 0;
                do
                {
                  *(__m128i *)&v19[v53] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                  v53 += 16;
                }
                while ( v53 != 16LL * (v17 >> 1) );
                if ( (v17 & 1) != 0 )
                  *(_QWORD *)&v19[8 * (v17 & 0xFFFFFFFE)] = *(_QWORD *)&v52[8 * (v17 & 0xFFFFFFFE)];
              }
            }
            if ( v52 != (char *)(a2 + 2) && v52 )
            {
              v81 = v19;
              sub_186B220(v52);
              v17 = *((_DWORD *)a2 + 2);
              v19 = v81;
            }
            *a2 = v19;
            *((_DWORD *)a2 + 3) = v50;
          }
          else
          {
            v19 = *a2;
          }
          *(_QWORD *)&v19[8 * v17] = v15;
          *((_DWORD *)a2 + 2) = v17 + 1;
        }
        v20 = *(_WORD *)(v15 + 4);
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            v48 = (unsigned int)v83;
            if ( (unsigned int)v83 >= HIDWORD(v83) )
            {
              v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v83)));
              v58 = 0;
              v48 = (unsigned int)v83;
              if ( (_DWORD)v83 )
              {
                do
                {
                  *(__m128i *)&v9[v58] = _mm_loadu_si128((const __m128i *)&ptr[v58]);
                  v58 += 2;
                }
                while ( 2LL * (unsigned int)v83 != v58 );
              }
              if ( ptr != &v84 && ptr )
              {
                sub_186B220(ptr);
                v48 = (unsigned int)v83;
              }
              ptr = v9;
              HIDWORD(v83) *= 2;
            }
            else
            {
              v9 = ptr;
            }
            v49 = &v9[2 * v48];
            *((_DWORD *)v49 + 2) = 0;
            v39 = (unsigned int)v83;
            *v49 = v15;
            v40 = v83 + 1;
LABEL_51:
            LODWORD(v83) = v40;
            result = (unsigned int)(v40 - 1);
            v3 = v9[2 * v39];
            goto LABEL_8;
          }
          if ( v20 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v15 + 24) )
          {
            v46 = (unsigned int)v83;
            if ( (unsigned int)v83 >= HIDWORD(v83) )
            {
              v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v83)));
              v65 = 0;
              v46 = (unsigned int)v83;
              if ( (_DWORD)v83 )
              {
                do
                {
                  *(__m128i *)&v9[v65] = _mm_loadu_si128((const __m128i *)&ptr[v65]);
                  v65 += 2;
                }
                while ( 2LL * (unsigned int)v83 != v65 );
              }
              if ( ptr )
              {
                if ( ptr != &v84 )
                {
                  sub_186B220(ptr);
                  v46 = (unsigned int)v83;
                }
              }
              ptr = v9;
              HIDWORD(v83) *= 2;
            }
            else
            {
              v9 = ptr;
            }
            v47 = &v9[2 * v46];
            *((_DWORD *)v47 + 2) = 0;
            v39 = (unsigned int)v83;
            *v47 = v15;
            v40 = v83 + 1;
            goto LABEL_51;
          }
        }
        v13 = *((_DWORD *)v11 + 2);
LABEL_22:
        if ( v13 >= v12 )
        {
          result = (unsigned int)(v83 - 1);
          break;
        }
      }
    }
    LODWORD(v83) = result;
    if ( !*(_WORD *)(v3 + 4) )
    {
      v21 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( v21 )
      {
        if ( *v21 == 5 && v21[1] == 9 && *(_DWORD *)(v3 + 24) == 2 )
        {
          v22 = *(_QWORD *)(v3 + 32);
          v23 = *(_QWORD *)(v3 + 40);
          v24 = *(_WORD *)(v23 + 4);
          if ( *(_WORD *)(v22 + 4) == 1 )
          {
            if ( v24 != 1 )
            {
              v66 = *(_BYTE *)(v23 + 6);
              if ( (v66 & 2) == 0 )
              {
                v67 = *(_QWORD *)(a1 + 8);
                *(_BYTE *)(v23 + 6) = v66 | 2;
                v68 = *(_DWORD *)(v67 + 8);
                v69 = *(_DWORD *)(v67 + 12);
                if ( v68 >= v69 )
                {
                  v75 = 2 * v69;
                  v70 = sub_186B270(8 * v75);
                  v68 = *(_DWORD *)(v67 + 8);
                  v76 = *(_QWORD **)v67;
                  if ( v68 )
                  {
                    if ( v68 - 1 <= 2 || (_QWORD *)v70 == v76 + 1 )
                    {
                      for ( i = 0; i != v68; ++i )
                        *(_QWORD *)(v70 + i * 8) = v76[i];
                    }
                    else
                    {
                      v77 = 0;
                      do
                      {
                        *(__m128i *)(v70 + v77 * 8) = _mm_loadu_si128((const __m128i *)&v76[v77]);
                        v77 += 2;
                      }
                      while ( v77 != 2LL * (v68 >> 1) );
                      if ( (v68 & 1) != 0 )
                        *(_QWORD *)(v70 + 8LL * (v68 & 0xFFFFFFFE)) = v76[v68 & 0xFFFFFFFE];
                    }
                  }
                  if ( v76 != (_QWORD *)(v67 + 16) && v76 )
                  {
                    sub_186B220(v76);
                    v68 = *(_DWORD *)(v67 + 8);
                  }
                  *(_QWORD *)v67 = v70;
                  *(_DWORD *)(v67 + 12) = v75;
                }
                else
                {
                  v70 = *(_QWORD *)v67;
                }
                *(_QWORD *)(v70 + 8LL * v68) = v23;
                v9 = ptr;
                *(_DWORD *)(v67 + 8) = v68 + 1;
                result = (unsigned int)v83;
LABEL_37:
                if ( !(_DWORD)result )
                  break;
                goto LABEL_38;
              }
            }
          }
          else if ( v24 == 1 )
          {
            v25 = *(_BYTE *)(v22 + 6);
            if ( (v25 & 2) == 0 )
            {
              v26 = *(_QWORD *)(a1 + 8);
              *(_BYTE *)(v22 + 6) = v25 | 2;
              v27 = *(_DWORD *)(v26 + 8);
              v28 = *(_DWORD *)(v26 + 12);
              if ( v27 >= v28 )
              {
                v72 = 2 * v28;
                v29 = sub_186B270(8 * v72);
                v27 = *(_DWORD *)(v26 + 8);
                v73 = *(_QWORD **)v26;
                if ( v27 )
                {
                  if ( v27 - 1 <= 2 || (_QWORD *)v29 == v73 + 1 )
                  {
                    for ( j = 0; j != v27; ++j )
                      *(_QWORD *)(v29 + j * 8) = v73[j];
                  }
                  else
                  {
                    v74 = 0;
                    do
                    {
                      *(__m128i *)(v29 + v74 * 8) = _mm_loadu_si128((const __m128i *)&v73[v74]);
                      v74 += 2;
                    }
                    while ( 2LL * (v27 >> 1) != v74 );
                    if ( (v27 & 1) != 0 )
                      *(_QWORD *)(v29 + 8LL * (v27 & 0xFFFFFFFE)) = v73[v27 & 0xFFFFFFFE];
                  }
                }
                if ( v73 != (_QWORD *)(v26 + 16) && v73 )
                {
                  sub_186B220(v73);
                  v27 = *(_DWORD *)(v26 + 8);
                }
                *(_QWORD *)v26 = v29;
                *(_DWORD *)(v26 + 12) = v72;
              }
              else
              {
                v29 = *(_QWORD *)v26;
              }
              *(_QWORD *)(v29 + 8LL * v27) = v22;
              *(_DWORD *)(v26 + 8) = v27 + 1;
              v9 = ptr;
              result = (unsigned int)v83;
              goto LABEL_37;
            }
          }
        }
      }
    }
    v9 = ptr;
    if ( (_DWORD)result )
    {
LABEL_38:
      result = (unsigned int)(result - 1);
      v3 = v9[2 * result];
      continue;
    }
    break;
  }
  if ( v9 )
  {
    result = (__int64)&v84;
    if ( v9 != &v84 )
      return sub_186B220(v9);
  }
  return result;
}

