__int64 __fastcall sub_706620(_BYTE *a1, char **a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  char *v9; // r13
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int16 v12; // si
  __int64 *v13; // r13
  _DWORD *v14; // rax
  unsigned int v15; // ebp
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r15
  char v19; // al
  unsigned int v20; // edx
  unsigned int v21; // eax
  char *v22; // r9
  __int16 v23; // ax
  unsigned int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // r9d
  char v27; // di
  __int64 v28; // r10
  __int64 v29; // rcx
  unsigned int v30; // ebp
  __int64 *v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // ebp
  char *v36; // r13
  __int64 v37; // rbp
  __int64 *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  _DWORD *v43; // rax
  char **exception; // rbp
  __int64 v45; // rax
  char *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rax
  char *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 v55; // rax
  char *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 v60; // rbp
  __int64 *v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rax
  char **v65; // rbp
  __int64 *v66; // [rsp+8h] [rbp-180h]
  int v67; // [rsp+8h] [rbp-180h]
  __int64 *v68; // [rsp+8h] [rbp-180h]
  char *v69; // [rsp+18h] [rbp-170h]
  __int64 v70[4]; // [rsp+20h] [rbp-168h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h]
  __int64 v72; // [rsp+48h] [rbp-140h]
  __int64 v73; // [rsp+50h] [rbp-138h] BYREF
  int v74; // [rsp+58h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    if ( v7 >= v8 )
    {
      v54 = 2 * v8;
      v55 = sub_186B270(8 * v54);
      v7 = *((_DWORD *)a2 + 2);
      v56 = *a2;
      v9 = (char *)v55;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (char *)v55 == v56 + 8 )
        {
          v64 = 0;
          do
          {
            *(_QWORD *)&v9[v64] = *(_QWORD *)&v56[v64];
            v64 += 8;
          }
          while ( 8LL * v7 != v64 );
        }
        else
        {
          v57 = 0;
          do
          {
            *(__m128i *)&v9[v57] = _mm_loadu_si128((const __m128i *)&v56[v57]);
            v57 += 16;
          }
          while ( v57 != 16LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            *(_QWORD *)&v9[8 * (v7 & 0xFFFFFFFE)] = *(_QWORD *)&v56[8 * (v7 & 0xFFFFFFFE)];
        }
      }
      if ( v56 != (char *)(a2 + 2) && v56 )
      {
        sub_186B220(v56);
        v7 = *((_DWORD *)a2 + 2);
      }
      *a2 = v9;
      *((_DWORD *)a2 + 3) = v54;
    }
    else
    {
      v9 = *a2;
    }
    *(_QWORD *)&v9[8 * v7] = v3;
    *((_DWORD *)a2 + 2) = v7 + 1;
  }
  v10 = &v73;
  v73 = v3;
  ptr = &v73;
  v74 = 0;
  v72 = 0x1000000001LL;
  LODWORD(v11) = 0;
LABEL_8:
  while ( 2 )
  {
    v12 = *(_WORD *)(v3 + 4);
    v13 = &v10[2 * (unsigned int)v11];
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
      {
        if ( v12 )
        {
          sub_1872CE0("");
          sub_1873130(114, 100);
        }
        v15 = *(_DWORD *)(v3 + 24);
        v16 = *((_DWORD *)v13 + 2);
        if ( v16 < v15 )
        {
          while ( 1 )
          {
            v17 = v16++;
            v18 = *(_QWORD *)(v3 + 8 * v17 + 32);
            *((_DWORD *)v13 + 2) = v16;
            if ( *(_DWORD *)(v18 + 8) > 1u )
            {
              v19 = *(_BYTE *)(v18 + 6);
              if ( (v19 & 1) != 0 )
                goto LABEL_32;
              *(_BYTE *)(v18 + 6) = v19 | 1;
              v20 = *((_DWORD *)a2 + 2);
              v21 = *((_DWORD *)a2 + 3);
              if ( v20 >= v21 )
              {
                v67 = 2 * v21;
                v45 = sub_186B270(16LL * v21);
                v20 = *((_DWORD *)a2 + 2);
                v46 = *a2;
                v22 = (char *)v45;
                if ( v20 )
                {
                  if ( v20 - 1 <= 2 || (char *)v45 == v46 + 8 )
                  {
                    v53 = 0;
                    do
                    {
                      *(_QWORD *)&v22[v53] = *(_QWORD *)&v46[v53];
                      v53 += 8;
                    }
                    while ( v53 != 8LL * v20 );
                  }
                  else
                  {
                    v47 = 0;
                    do
                    {
                      *(__m128i *)&v22[v47] = _mm_loadu_si128((const __m128i *)&v46[v47]);
                      v47 += 16;
                    }
                    while ( 16LL * (v20 >> 1) != v47 );
                    if ( (v20 & 1) != 0 )
                      *(_QWORD *)&v22[8 * (v20 & 0xFFFFFFFE)] = *(_QWORD *)&v46[8 * (v20 & 0xFFFFFFFE)];
                  }
                }
                if ( v46 != (char *)(a2 + 2) && v46 )
                {
                  v69 = v22;
                  sub_186B220(v46);
                  v20 = *((_DWORD *)a2 + 2);
                  v22 = v69;
                }
                *a2 = v22;
                *((_DWORD *)a2 + 3) = v67;
              }
              else
              {
                v22 = *a2;
              }
              *(_QWORD *)&v22[8 * v20] = v18;
              *((_DWORD *)a2 + 2) = v20 + 1;
            }
            v23 = *(_WORD *)(v18 + 4);
            if ( v23 == 1 )
            {
              v43 = *(_DWORD **)(sub_15D1F10(v18) + 24);
              if ( (!v43 || *v43 != 5 || v43[1])
                && !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v18) )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_6FFCA0(v70, "not NRA");
                *exception = (char *)off_1C63670;
                sub_2333C0(exception + 1, v70);
                sub_233E40((__int64)v70);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'tactic_exception,
                  (void (*)(void *))sub_230EA0);
              }
            }
            else
            {
              if ( v23 == 2 )
              {
                v29 = (unsigned int)v72;
                if ( (unsigned int)v72 < HIDWORD(v72) )
                  goto LABEL_45;
                v37 = (unsigned int)(2 * HIDWORD(v72));
                v10 = (__int64 *)sub_186B270(16 * v37);
                v38 = (__int64 *)ptr;
                v41 = 0;
                v29 = (unsigned int)v72;
                v42 = 16LL * (unsigned int)v72;
                if ( (_DWORD)v72 )
                {
                  do
                  {
                    *(__m128i *)&v10[v41 / 8] = _mm_loadu_si128((const __m128i *)&v38[v41 / 8]);
                    v41 += 16LL;
                  }
                  while ( v41 != v42 );
                }
                if ( v38 != &v73 )
                {
                  if ( v38 )
                    goto LABEL_55;
                  ptr = v10;
                  HIDWORD(v72) = v37;
                  goto LABEL_46;
                }
LABEL_56:
                ptr = v10;
                HIDWORD(v72) = v37;
LABEL_46:
                v31 = &v10[2 * v29];
                *v31 = v18;
                *((_DWORD *)v31 + 2) = 0;
                v32 = (unsigned int)v72;
                v33 = v72 + 1;
LABEL_47:
                LODWORD(v72) = v33;
                LODWORD(v11) = v33 - 1;
                v3 = v10[2 * v32];
                goto LABEL_8;
              }
              if ( v23 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( *(_DWORD *)(v18 + 24) )
              {
                v58 = (unsigned int)v72;
                if ( (unsigned int)v72 >= HIDWORD(v72) )
                {
                  v60 = (unsigned int)(2 * HIDWORD(v72));
                  v10 = (__int64 *)sub_186B270(16 * v60);
                  v61 = (__int64 *)ptr;
                  v62 = 0;
                  v58 = (unsigned int)v72;
                  v63 = 16LL * (unsigned int)v72;
                  if ( (_DWORD)v72 )
                  {
                    do
                    {
                      *(__m128i *)&v10[v62 / 8] = _mm_loadu_si128((const __m128i *)&v61[v62 / 8]);
                      v62 += 16LL;
                    }
                    while ( v63 != v62 );
                  }
                  if ( v61 && v61 != &v73 )
                  {
                    v68 = v10;
                    sub_186B220(v61);
                    v58 = (unsigned int)v72;
                    v10 = v68;
                  }
                  ptr = v10;
                  HIDWORD(v72) = v60;
                }
                else
                {
                  v10 = (__int64 *)ptr;
                }
                v59 = &v10[2 * v58];
                *((_DWORD *)v59 + 2) = 0;
                v32 = (unsigned int)v72;
                *v59 = v18;
                v33 = v32 + 1;
                goto LABEL_47;
              }
              sub_702850(a1, v18);
            }
            v16 = *((_DWORD *)v13 + 2);
LABEL_32:
            if ( v16 >= v15 )
            {
              LODWORD(v11) = v72 - 1;
              break;
            }
          }
        }
        LODWORD(v72) = v11;
        sub_702850(a1, v3);
        result = (unsigned int)v72;
        v10 = (__int64 *)ptr;
        goto LABEL_12;
      }
      v24 = *(_DWORD *)(v3 + 72);
      v25 = *((_DWORD *)v13 + 2);
      v26 = v24 + *(_DWORD *)(v3 + 76) + 1;
      if ( v25 >= v26 )
      {
LABEL_95:
        result = (unsigned int)(v72 - 1);
        LODWORD(v72) = v72 - 1;
LABEL_12:
        if ( !(_DWORD)result )
          break;
        goto LABEL_13;
      }
      if ( !v25 )
      {
        v18 = *(_QWORD *)(v3 + 24);
        v25 = 1;
        *((_DWORD *)v13 + 2) = 1;
        if ( *(_DWORD *)(v18 + 8) > 1u )
          goto LABEL_38;
LABEL_44:
        v29 = (unsigned int)v72;
        v30 = HIDWORD(v72);
        if ( (unsigned int)v72 < HIDWORD(v72) )
        {
LABEL_45:
          v10 = (__int64 *)ptr;
          goto LABEL_46;
        }
LABEL_51:
        v37 = 2 * v30;
        v10 = (__int64 *)sub_186B270(16 * v37);
        v38 = (__int64 *)ptr;
        v39 = 0;
        v29 = (unsigned int)v72;
        v40 = 16LL * (unsigned int)v72;
        if ( (_DWORD)v72 )
        {
          do
          {
            *(__m128i *)&v10[v39 / 8] = _mm_loadu_si128((const __m128i *)&v38[v39 / 8]);
            v39 += 16LL;
          }
          while ( v40 != v39 );
        }
        if ( v38 && v38 != &v73 )
        {
LABEL_55:
          v66 = v10;
          sub_186B220(v38);
          v29 = (unsigned int)v72;
          v10 = v66;
        }
        goto LABEL_56;
      }
      while ( 1 )
      {
        v28 = v25 - 1;
        if ( v24 < v25 )
          v28 = (unsigned int)v28 - v24;
        ++v25;
        v18 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v28 + 80);
        *((_DWORD *)v13 + 2) = v25;
        if ( *(_DWORD *)(v18 + 8) <= 1u )
          goto LABEL_44;
LABEL_38:
        v27 = *(_BYTE *)(v18 + 6);
        if ( (v27 & 1) == 0 )
          break;
        if ( v25 >= v26 )
          goto LABEL_95;
        v24 = *(_DWORD *)(v3 + 72);
      }
      *(_BYTE *)(v18 + 6) = v27 | 1;
      v34 = *((_DWORD *)a2 + 2);
      v35 = *((_DWORD *)a2 + 3);
      if ( v34 < v35 )
      {
        v36 = *a2;
        goto LABEL_50;
      }
      v48 = 2 * v35;
      v49 = sub_186B270(8 * v48);
      v34 = *((_DWORD *)a2 + 2);
      v50 = *a2;
      v36 = (char *)v49;
      if ( v34 )
      {
        if ( v34 - 1 <= 2 || (char *)v49 == v50 + 8 )
        {
          v52 = 0;
          do
          {
            *(_QWORD *)&v36[v52] = *(_QWORD *)&v50[v52];
            v52 += 8;
          }
          while ( 8LL * v34 != v52 );
          if ( v50 )
          {
LABEL_92:
            if ( v50 != (char *)(a2 + 2) )
            {
              sub_186B220(v50);
              v34 = *((_DWORD *)a2 + 2);
            }
          }
LABEL_94:
          *a2 = v36;
          *((_DWORD *)a2 + 3) = v48;
LABEL_50:
          v29 = (unsigned int)v72;
          v30 = HIDWORD(v72);
          *(_QWORD *)&v36[8 * v34] = v18;
          *((_DWORD *)a2 + 2) = v34 + 1;
          if ( (unsigned int)v29 < v30 )
            goto LABEL_45;
          goto LABEL_51;
        }
        v51 = 0;
        do
        {
          *(__m128i *)&v36[v51] = _mm_loadu_si128((const __m128i *)&v50[v51]);
          v51 += 16;
        }
        while ( v51 != 16LL * (v34 >> 1) );
        if ( (v34 & 1) != 0 )
          *(_QWORD *)&v36[8 * (v34 & 0xFFFFFFFE)] = *(_QWORD *)&v50[8 * (v34 & 0xFFFFFFFE)];
      }
      if ( v50 )
        goto LABEL_92;
      goto LABEL_94;
    }
    v14 = *(_DWORD **)(sub_15D1F10(v3) + 24);
    if ( (!v14 || *v14 != 5 || v14[1]) && !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), v3) )
    {
      v65 = (char **)__cxa_allocate_exception(0x28u);
      sub_6FFCA0(v70, "not NRA");
      *v65 = (char *)off_1C63670;
      sub_2333C0(v65 + 1, v70);
      sub_233E40((__int64)v70);
      __cxa_throw(v65, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    v10 = (__int64 *)ptr;
    result = (unsigned int)(v72 - 1);
    LODWORD(v72) = result;
    if ( (_DWORD)result )
    {
LABEL_13:
      v11 = (unsigned int)(result - 1);
      v3 = v10[2 * v11];
      continue;
    }
    break;
  }
  if ( v10 )
  {
    result = (__int64)&v73;
    if ( v10 != &v73 )
      return sub_186B220(v10);
  }
  return result;
}

