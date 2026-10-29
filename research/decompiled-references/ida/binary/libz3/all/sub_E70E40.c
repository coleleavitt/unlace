__int64 __fastcall sub_E70E40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ebx
  _QWORD *v7; // rbp
  __int64 *v8; // rbp
  __int16 v9; // dx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  _DWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r13
  char v16; // al
  unsigned int v17; // edx
  unsigned int v18; // ebp
  _QWORD *v19; // r12
  __int16 v20; // ax
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r12
  char v25; // dl
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // ebx
  __int64 *v29; // rdx
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // ebx
  _QWORD *v34; // rbp
  __int64 v35; // rbx
  char *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // r12
  __int64 v45; // r10
  unsigned int v46; // ebp
  unsigned int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rax
  _DWORD *v54; // rax
  unsigned int v55; // r15d
  __int64 v56; // r12
  __int64 v57; // rbp
  __int64 v58; // r8
  unsigned int **v59; // r13
  unsigned int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  _QWORD *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rbx
  char *v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  __int64 j; // rax
  __int64 k; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  _QWORD *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rbx
  char *v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  __int64 i; // rax
  unsigned int v82; // [rsp+8h] [rbp-190h]
  unsigned int v83; // [rsp+8h] [rbp-190h]
  __int64 v84; // [rsp+8h] [rbp-190h]
  unsigned int **v86; // [rsp+30h] [rbp-168h]
  __int64 v87; // [rsp+30h] [rbp-168h]
  unsigned int v88; // [rsp+38h] [rbp-160h]
  unsigned int v89; // [rsp+3Ch] [rbp-15Ch]
  __int64 v90; // [rsp+48h] [rbp-150h] BYREF
  void *ptr; // [rsp+50h] [rbp-148h]
  __int64 v92; // [rsp+58h] [rbp-140h]
  __int64 v93; // [rsp+60h] [rbp-138h] BYREF
  int v94; // [rsp+68h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v5 = *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 12);
    if ( v5 >= v6 )
    {
      v73 = 2 * v6;
      v74 = sub_186B270(8 * v73);
      v5 = *(_DWORD *)(a2 + 8);
      v75 = *(_QWORD **)a2;
      v7 = (_QWORD *)v74;
      if ( v5 )
      {
        if ( v5 - 1 <= 2 || (_QWORD *)v74 == v75 + 1 )
        {
          for ( i = 0; i != v5; ++i )
            v7[i] = v75[i];
        }
        else
        {
          v76 = 0;
          do
          {
            *(__m128i *)&v7[v76] = _mm_loadu_si128((const __m128i *)&v75[v76]);
            v76 += 2;
          }
          while ( v76 != 2LL * (v5 >> 1) );
          if ( (v5 & 1) != 0 )
            v7[v5 & 0xFFFFFFFE] = v75[v5 & 0xFFFFFFFE];
        }
      }
      if ( v75 != (_QWORD *)(a2 + 16) && v75 )
      {
        sub_186B220(v75);
        v5 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v7;
      *(_DWORD *)(a2 + 12) = v73;
    }
    else
    {
      v7 = *(_QWORD **)a2;
    }
    v7[v5] = v3;
    *(_DWORD *)(a2 + 8) = v5 + 1;
  }
  v8 = &v93;
  v93 = v3;
  ptr = &v93;
  v94 = 0;
  v92 = 0x1000000001LL;
  result = 0;
LABEL_8:
  while ( 2 )
  {
    v9 = *(_WORD *)(v3 + 4);
    v10 = &v8[2 * (unsigned int)result];
    if ( v9 != 1 )
    {
      if ( v9 == 2 )
      {
        v21 = *(_DWORD *)(v3 + 72);
        v22 = *((_DWORD *)v10 + 2);
        v23 = v21 + *(_DWORD *)(v3 + 76) + 1;
        if ( v22 < v23 )
        {
          if ( !v22 )
          {
            v24 = *(_QWORD *)(v3 + 24);
            v22 = 1;
            *((_DWORD *)v10 + 2) = 1;
            if ( *(_DWORD *)(v24 + 8) > 1u )
              goto LABEL_40;
LABEL_46:
            v27 = (unsigned int)v92;
            v28 = HIDWORD(v92);
            if ( (unsigned int)v92 < HIDWORD(v92) )
            {
LABEL_47:
              v8 = (__int64 *)ptr;
LABEL_48:
              v29 = &v8[2 * v27];
              *v29 = v24;
              *((_DWORD *)v29 + 2) = 0;
              v30 = (unsigned int)v92;
              v31 = v92 + 1;
              goto LABEL_49;
            }
LABEL_53:
            v35 = 2 * v28;
            v8 = (__int64 *)sub_186B270(16 * v35);
            v36 = (char *)ptr;
            v37 = 0;
            v27 = (unsigned int)v92;
            v38 = 16LL * (unsigned int)v92;
            if ( (_DWORD)v92 )
            {
              do
              {
                *(__m128i *)&v8[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37]);
                v37 += 16LL;
              }
              while ( v37 != v38 );
            }
            if ( v36 != (char *)&v93 && v36 )
            {
              sub_186B220(v36);
              v27 = (unsigned int)v92;
            }
            ptr = v8;
            HIDWORD(v92) = v35;
            goto LABEL_48;
          }
          while ( 1 )
          {
            v26 = v22 - 1;
            if ( v21 < v22 )
              v26 = (unsigned int)v26 - v21;
            ++v22;
            v24 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v26 + 80);
            *((_DWORD *)v10 + 2) = v22;
            if ( *(_DWORD *)(v24 + 8) <= 1u )
              goto LABEL_46;
LABEL_40:
            v25 = *(_BYTE *)(v24 + 6);
            if ( (v25 & 1) == 0 )
              break;
            if ( v22 >= v23 )
              goto LABEL_119;
            v21 = *(_DWORD *)(v3 + 72);
          }
          *(_BYTE *)(v24 + 6) = v25 | 1;
          v32 = *(_DWORD *)(a2 + 8);
          v33 = *(_DWORD *)(a2 + 12);
          if ( v32 < v33 )
          {
            v34 = *(_QWORD **)a2;
            goto LABEL_52;
          }
          v63 = 2 * v33;
          v64 = sub_186B270(8 * v63);
          v32 = *(_DWORD *)(a2 + 8);
          v65 = *(_QWORD **)a2;
          v34 = (_QWORD *)v64;
          if ( v32 )
          {
            if ( v32 - 1 > 2 && (_QWORD *)v64 != v65 + 1 )
            {
              v66 = 0;
              do
              {
                *(__m128i *)&v34[v66] = _mm_loadu_si128((const __m128i *)&v65[v66]);
                v66 += 2;
              }
              while ( v66 != 2LL * (v32 >> 1) );
              if ( (v32 & 1) != 0 )
                v34[v32 & 0xFFFFFFFE] = v65[v32 & 0xFFFFFFFE];
              goto LABEL_109;
            }
            for ( j = 0; j != v32; ++j )
              v34[j] = v65[j];
            if ( !v65 )
            {
LABEL_112:
              *(_QWORD *)a2 = v34;
              *(_DWORD *)(a2 + 12) = v63;
LABEL_52:
              v28 = HIDWORD(v92);
              v34[v32] = v24;
              *(_DWORD *)(a2 + 8) = v32 + 1;
              v27 = (unsigned int)v92;
              if ( (unsigned int)v92 < v28 )
                goto LABEL_47;
              goto LABEL_53;
            }
          }
          else
          {
LABEL_109:
            if ( !v65 )
              goto LABEL_112;
          }
          if ( v65 != (_QWORD *)(a2 + 16) )
          {
            sub_186B220(v65);
            v32 = *(_DWORD *)(a2 + 8);
          }
          goto LABEL_112;
        }
LABEL_119:
        result = (unsigned int)(v92 - 1);
        LODWORD(v92) = v92 - 1;
      }
      else
      {
        if ( v9 )
        {
          sub_1872CE0("");
          sub_1873130(114, 100);
        }
        v13 = *((_DWORD *)v10 + 2);
        v82 = *(_DWORD *)(v3 + 24);
        if ( v13 < v82 )
        {
          while ( 1 )
          {
            v14 = v13++;
            v15 = *(_QWORD *)(v3 + 8 * v14 + 32);
            *((_DWORD *)v10 + 2) = v13;
            if ( *(_DWORD *)(v15 + 8) > 1u )
            {
              v16 = *(_BYTE *)(v15 + 6);
              if ( (v16 & 1) != 0 )
                goto LABEL_34;
              *(_BYTE *)(v15 + 6) = v16 | 1;
              v17 = *(_DWORD *)(a2 + 8);
              v18 = *(_DWORD *)(a2 + 12);
              if ( v17 >= v18 )
              {
                v50 = 2 * v18;
                v51 = sub_186B270(8 * v50);
                v17 = *(_DWORD *)(a2 + 8);
                v52 = *(_QWORD **)a2;
                v19 = (_QWORD *)v51;
                if ( v17 )
                {
                  if ( v17 - 1 <= 2 || (_QWORD *)v51 == v52 + 1 )
                  {
                    for ( k = 0; k != v17; ++k )
                      v19[k] = v52[k];
                  }
                  else
                  {
                    v53 = 0;
                    do
                    {
                      *(__m128i *)&v19[v53] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                      v53 += 2;
                    }
                    while ( 2LL * (v17 >> 1) != v53 );
                    if ( (v17 & 1) != 0 )
                      v19[v17 & 0xFFFFFFFE] = v52[v17 & 0xFFFFFFFE];
                  }
                }
                if ( v52 != (_QWORD *)(a2 + 16) && v52 )
                {
                  sub_186B220(v52);
                  v17 = *(_DWORD *)(a2 + 8);
                }
                *(_QWORD *)a2 = v19;
                *(_DWORD *)(a2 + 12) = v50;
              }
              else
              {
                v19 = *(_QWORD **)a2;
              }
              v19[v17] = v15;
              *(_DWORD *)(a2 + 8) = v17 + 1;
            }
            v20 = *(_WORD *)(v15 + 4);
            if ( v20 == 1 )
            {
              if ( (unsigned __int8)sub_E68690(*a1, v15, &v90) )
              {
                v43 = *(_DWORD **)(sub_15D1F10(v15) + 24);
                if ( v43 )
                {
                  if ( *v43 == 5 )
                  {
                    v44 = *a1;
                    v45 = *(_QWORD *)(*a1 + 688);
                    v88 = *(_DWORD *)(v15 + 16);
                    v46 = v88 >> 5;
                    if ( v45 )
                    {
                      v89 = *(_DWORD *)(v45 - 4);
                      if ( v46 >= v89 )
                      {
                        v47 = v46 + 1;
                        v86 = (unsigned int **)(v44 + 688);
                        goto LABEL_73;
                      }
                    }
                    else
                    {
                      v89 = 0;
                      v47 = v46 + 1;
                      v86 = (unsigned int **)(v44 + 688);
LABEL_73:
                      while ( !v45 || *(_DWORD *)(v45 - 8) < v47 )
                      {
                        sub_2FD3F0(v86);
                        v45 = *(_QWORD *)(v44 + 688);
                      }
                      *(_DWORD *)(v45 - 4) = v47;
                      v48 = 4LL * v47;
                      v49 = 4LL * v89;
                      if ( v49 != v48 )
                      {
                        v87 = v45;
                        memset((void *)(v45 + v49), 0, v48 - v49);
                        v45 = v87;
                      }
                    }
                    *(_DWORD *)(v45 + 4LL * v46) |= 1 << v88;
                    v13 = *((_DWORD *)v10 + 2);
                    goto LABEL_34;
                  }
                }
              }
            }
            else
            {
              if ( v20 == 2 )
              {
                v41 = (unsigned int)v92;
                if ( (unsigned int)v92 >= HIDWORD(v92) )
                {
                  v67 = (unsigned int)(2 * HIDWORD(v92));
                  v8 = (__int64 *)sub_186B270(16 * v67);
                  v68 = (char *)ptr;
                  v69 = 0;
                  v41 = (unsigned int)v92;
                  v70 = 16LL * (unsigned int)v92;
                  if ( (_DWORD)v92 )
                  {
                    do
                    {
                      *(__m128i *)&v8[v69 / 8] = _mm_loadu_si128((const __m128i *)&v68[v69]);
                      v69 += 16LL;
                    }
                    while ( v70 != v69 );
                  }
                  if ( v68 && v68 != (char *)&v93 )
                  {
                    sub_186B220(v68);
                    v41 = (unsigned int)v92;
                  }
                  ptr = v8;
                  HIDWORD(v92) = v67;
                }
                else
                {
                  v8 = (__int64 *)ptr;
                }
                v42 = &v8[2 * v41];
                *v42 = v15;
                *((_DWORD *)v42 + 2) = 0;
                v30 = (unsigned int)v92;
                v31 = v92 + 1;
LABEL_49:
                LODWORD(v92) = v31;
                result = (unsigned int)(v31 - 1);
                v3 = v8[2 * v30];
                goto LABEL_8;
              }
              if ( v20 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( *(_DWORD *)(v15 + 24) )
              {
                v39 = (unsigned int)v92;
                if ( (unsigned int)v92 >= HIDWORD(v92) )
                {
                  v77 = (unsigned int)(2 * HIDWORD(v92));
                  v8 = (__int64 *)sub_186B270(16 * v77);
                  v78 = (char *)ptr;
                  v79 = 0;
                  v39 = (unsigned int)v92;
                  v80 = 16LL * (unsigned int)v92;
                  if ( (_DWORD)v92 )
                  {
                    do
                    {
                      *(__m128i *)&v8[v79 / 8] = _mm_loadu_si128((const __m128i *)&v78[v79]);
                      v79 += 16LL;
                    }
                    while ( v80 != v79 );
                  }
                  if ( v78 != (char *)&v93 )
                  {
                    if ( v78 )
                    {
                      sub_186B220(v78);
                      v39 = (unsigned int)v92;
                    }
                  }
                  ptr = v8;
                  HIDWORD(v92) = v77;
                }
                else
                {
                  v8 = (__int64 *)ptr;
                }
                v40 = &v8[2 * v39];
                *((_DWORD *)v40 + 2) = 0;
                v30 = (unsigned int)v92;
                *v40 = v15;
                v31 = v30 + 1;
                goto LABEL_49;
              }
            }
            v13 = *((_DWORD *)v10 + 2);
LABEL_34:
            if ( v13 >= v82 )
            {
              v8 = (__int64 *)ptr;
              result = (unsigned int)(v92 - 1);
              break;
            }
          }
        }
        LODWORD(v92) = result;
      }
      if ( !(_DWORD)result )
        goto LABEL_20;
LABEL_13:
      result = (unsigned int)(result - 1);
      v3 = v8[2 * result];
      continue;
    }
    break;
  }
  v11 = *a1;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 8) + 16LL))(*(_QWORD *)(*a1 + 8), v3)
    && (*(_WORD *)(v3 + 4)
     || (v12 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL)) == nullptr
     || *v12 != 5
     || v12[1] != 18
     || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v11 + 8) + 16LL))(
           *(_QWORD *)(v11 + 8),
           *(_QWORD *)(v3 + 32)))
    || (v54 = *(_DWORD **)(sub_15D1F10(v3) + 24)) == nullptr
    || *v54 != 5 )
  {
    v8 = (__int64 *)ptr;
    result = (unsigned int)(v92 - 1);
    LODWORD(v92) = v92 - 1;
    goto LABEL_19;
  }
  v55 = *(_DWORD *)(v3 + 16);
  v56 = *a1;
  v57 = v55 >> 5;
  v58 = *(_QWORD *)(*a1 + 688);
  if ( !v58 )
  {
    v83 = 0;
    v59 = (unsigned int **)(v56 + 688);
    v60 = v57 + 1;
    goto LABEL_97;
  }
  v83 = *(_DWORD *)(v58 - 4);
  if ( (unsigned int)v57 >= v83 )
  {
    v59 = (unsigned int **)(v56 + 688);
    v60 = v57 + 1;
LABEL_97:
    while ( !v58 || *(_DWORD *)(v58 - 8) < v60 )
    {
      sub_2FD3F0(v59);
      v58 = *(_QWORD *)(v56 + 688);
    }
    *(_DWORD *)(v58 - 4) = v60;
    v61 = 4LL * v60;
    v62 = 4LL * v83;
    if ( v62 != v61 )
    {
      v84 = v58;
      memset((void *)(v58 + v62), 0, v61 - v62);
      v58 = v84;
    }
  }
  *(_DWORD *)(v58 + 4 * v57) |= 1 << v55;
  v8 = (__int64 *)ptr;
  result = (unsigned int)(v92 - 1);
  LODWORD(v92) = v92 - 1;
LABEL_19:
  if ( (_DWORD)result )
    goto LABEL_13;
LABEL_20:
  if ( v8 )
  {
    result = (__int64)&v93;
    if ( v8 != &v93 )
      return sub_186B220(v8);
  }
  return result;
}

