__int64 __fastcall sub_CC0CE0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  unsigned int v5; // edx
  unsigned int v6; // ebx
  _QWORD *v7; // rbp
  char *v8; // rbp
  __int64 v9; // rax
  char *v10; // r12
  unsigned __int16 v11; // ax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  char v16; // di
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  int *v21; // rax
  int v22; // edx
  _DWORD *v23; // rax
  __int64 v24; // r15
  char v25; // al
  unsigned int v26; // edx
  unsigned int v27; // ebx
  _QWORD *v28; // rbp
  unsigned int v29; // ebx
  __int64 v30; // rdx
  char *v31; // rdx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  char *v35; // rdx
  __int64 v36; // rbx
  _QWORD *v37; // rdi
  __int64 v38; // r10
  __int64 v39; // rbx
  int *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbx
  int *v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  int *v51; // rdx
  int v52; // ecx
  _DWORD *v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rdi
  bool v56; // bp
  void *v57; // r12
  __int64 k; // r10
  int v59; // eax
  int v60; // edx
  _DWORD *v61; // rax
  _DWORD *v62; // rax
  __int64 v63; // rdi
  bool v64; // r13
  _DWORD *v65; // rax
  __int64 j; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  _QWORD *v69; // rdi
  __int64 v70; // rax
  int v71; // edx
  char *v72; // rax
  __int64 v73; // rdx
  _DWORD *v74; // rdx
  __int64 v75; // rbx
  int *v76; // rdi
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  __int64 i; // rax
  __int64 v80; // [rsp+10h] [rbp-178h]
  void *v81; // [rsp+10h] [rbp-178h]
  int v83[2]; // [rsp+20h] [rbp-168h] BYREF
  int v84[2]; // [rsp+28h] [rbp-160h]
  int v85[2]; // [rsp+30h] [rbp-158h] BYREF
  int v86[2]; // [rsp+38h] [rbp-150h]
  void *ptr; // [rsp+40h] [rbp-148h]
  char v88[8]; // [rsp+48h] [rbp-140h]
  int v89[2]; // [rsp+50h] [rbp-138h] BYREF
  int v90; // [rsp+58h] [rbp-130h]

  result = *(unsigned __int8 *)(a3 + 6);
  if ( (result & 1) != 0 )
    return result;
  v4 = a3;
  *(_BYTE *)(a3 + 6) = result | 1;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  if ( v5 >= v6 )
  {
    v67 = 2 * v6;
    v68 = sub_186B270(8 * v67);
    v5 = *(_DWORD *)(a2 + 8);
    v69 = *(_QWORD **)a2;
    v7 = (_QWORD *)v68;
    if ( v5 )
    {
      if ( v5 - 1 <= 2 || (_QWORD *)v68 == v69 + 1 )
      {
        for ( i = 0; i != v5; ++i )
          v7[i] = v69[i];
      }
      else
      {
        v70 = 0;
        do
        {
          *(__m128i *)&v7[v70] = _mm_loadu_si128((const __m128i *)&v69[v70]);
          v70 += 2;
        }
        while ( 2LL * (v5 >> 1) != v70 );
        if ( (v5 & 1) != 0 )
          v7[v5 & 0xFFFFFFFE] = v69[v5 & 0xFFFFFFFE];
      }
    }
    if ( v69 != (_QWORD *)(a2 + 16) && v69 )
    {
      sub_186B220(v69);
      v5 = *(_DWORD *)(a2 + 8);
    }
    *(_QWORD *)a2 = v7;
    *(_DWORD *)(a2 + 12) = v67;
  }
  else
  {
    v7 = *(_QWORD **)a2;
  }
  v7[v5] = v4;
  v8 = (char *)v89;
  *(_DWORD *)(a2 + 8) = v5 + 1;
  ptr = v89;
  *(_QWORD *)v89 = v4;
  v90 = 0;
  *(_QWORD *)v88 = 0x1000000001LL;
  v9 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v10 = &v8[16 * v9];
      v11 = *(_WORD *)(v4 + 4);
      if ( v11 != 2 )
        break;
      if ( *((_DWORD *)v10 + 2)
        || (v24 = *(_QWORD *)(v4 + 24), *((_DWORD *)v10 + 2) = 1, v25 = *(_BYTE *)(v24 + 6), (v25 & 1) != 0) )
      {
        --*(_DWORD *)v88;
        sub_1638FA();
      }
      *(_BYTE *)(v24 + 6) = v25 | 1;
      v26 = *(_DWORD *)(a2 + 8);
      v27 = *(_DWORD *)(a2 + 12);
      if ( v26 >= v27 )
      {
        v43 = 2 * v27;
        v44 = sub_186B270(8 * v43);
        v26 = *(_DWORD *)(a2 + 8);
        v45 = *(_QWORD **)a2;
        v28 = (_QWORD *)v44;
        if ( v26 )
        {
          if ( v26 - 1 <= 2 || (_QWORD *)v44 == v45 + 1 )
          {
            for ( j = 0; j != v26; ++j )
              v28[j] = v45[j];
          }
          else
          {
            v46 = 0;
            do
            {
              *(__m128i *)&v28[v46] = _mm_loadu_si128((const __m128i *)&v45[v46]);
              v46 += 2;
            }
            while ( v46 != 2LL * (v26 >> 1) );
            if ( (v26 & 1) != 0 )
              v28[v26 & 0xFFFFFFFE] = v45[v26 & 0xFFFFFFFE];
          }
        }
        if ( v45 != (_QWORD *)(a2 + 16) && v45 )
        {
          sub_186B220(v45);
          v26 = *(_DWORD *)(a2 + 8);
        }
        *(_QWORD *)a2 = v28;
        *(_DWORD *)(a2 + 12) = v43;
      }
      else
      {
        v28 = *(_QWORD **)a2;
      }
      v29 = *(_DWORD *)&v88[4];
      v28[v26] = v24;
      *(_DWORD *)(a2 + 8) = v26 + 1;
      v30 = *(unsigned int *)v88;
      if ( *(_DWORD *)v88 >= v29 )
      {
        v39 = 2 * v29;
        v8 = (char *)sub_186B270(16 * v39);
        v40 = (int *)ptr;
        v41 = 0;
        v30 = *(unsigned int *)v88;
        v42 = 16LL * *(unsigned int *)v88;
        if ( *(_DWORD *)v88 )
        {
          do
          {
            *(__m128i *)&v8[v41] = _mm_loadu_si128((const __m128i *)&v40[v41 / 4]);
            v41 += 16LL;
          }
          while ( v41 != v42 );
        }
        if ( v40 != v89 && v40 )
        {
          sub_186B220(v40);
          v30 = *(unsigned int *)v88;
        }
        ptr = v8;
        *(_DWORD *)&v88[4] = v39;
      }
      else
      {
        v8 = (char *)ptr;
      }
      v31 = &v8[16 * v30];
      *(_QWORD *)v31 = v24;
      *((_DWORD *)v31 + 2) = 0;
      v32 = *(unsigned int *)v88;
      v33 = *(_DWORD *)v88 + 1;
LABEL_38:
      *(_DWORD *)v88 = v33;
      v9 = (unsigned int)(v33 - 1);
      v4 = *(_QWORD *)&v8[16 * v32];
    }
    if ( v11 > 2u )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    if ( v11 )
      sub_1638FA();
    v12 = *(_DWORD *)(v4 + 24);
LABEL_10:
    v13 = *((unsigned int *)v10 + 2);
    v14 = v4 + 8 * v13;
    while ( (unsigned int)v13 < v12 )
    {
      v15 = *(_QWORD *)(v14 + 32);
      LODWORD(v13) = v13 + 1;
      v14 += 8;
      *((_DWORD *)v10 + 2) = v13;
      v16 = *(_BYTE *)(v15 + 6);
      if ( (v16 & 1) == 0 )
      {
        *(_BYTE *)(v15 + 6) = v16 | 1;
        v17 = *(_DWORD *)(a2 + 8);
        v18 = *(_DWORD *)(a2 + 12);
        if ( v17 >= v18 )
        {
          v36 = 2 * v18;
          v19 = sub_186B270(8 * v36);
          v17 = *(_DWORD *)(a2 + 8);
          v37 = *(_QWORD **)a2;
          if ( v17 )
          {
            if ( v17 - 1 <= 2 || (_QWORD *)v19 == v37 + 1 )
            {
              for ( k = 0; k != v17; ++k )
                *(_QWORD *)(v19 + k * 8) = v37[k];
            }
            else
            {
              v38 = 0;
              do
              {
                *(__m128i *)(v19 + v38 * 8) = _mm_loadu_si128((const __m128i *)&v37[v38]);
                v38 += 2;
              }
              while ( v38 != 2LL * (v17 >> 1) );
              if ( (v17 & 1) != 0 )
                *(_QWORD *)(v19 + 8LL * (v17 & 0xFFFFFFFE)) = v37[v17 & 0xFFFFFFFE];
            }
          }
          if ( v37 != (_QWORD *)(a2 + 16) && v37 )
          {
            v80 = v19;
            sub_186B220(v37);
            v17 = *(_DWORD *)(a2 + 8);
            v19 = v80;
          }
          *(_QWORD *)a2 = v19;
          *(_DWORD *)(a2 + 12) = v36;
        }
        else
        {
          v19 = *(_QWORD *)a2;
        }
        *(_QWORD *)(v19 + 8LL * v17) = v15;
        *(_DWORD *)(a2 + 8) = v17 + 1;
        v20 = *(_WORD *)(v15 + 4);
        if ( v20 == 2 )
        {
          v34 = *(unsigned int *)v88;
          if ( *(_DWORD *)v88 >= *(_DWORD *)&v88[4] )
          {
            v47 = (unsigned int)(2 * *(_DWORD *)&v88[4]);
            v8 = (char *)sub_186B270(16 * v47);
            v48 = (int *)ptr;
            v49 = 0;
            v34 = *(unsigned int *)v88;
            v50 = 16LL * *(unsigned int *)v88;
            if ( *(_DWORD *)v88 )
            {
              do
              {
                *(__m128i *)&v8[v49] = _mm_loadu_si128((const __m128i *)&v48[v49 / 4]);
                v49 += 16LL;
              }
              while ( v49 != v50 );
            }
            if ( v48 != v89 && v48 )
            {
              sub_186B220(v48);
              v34 = *(unsigned int *)v88;
            }
            ptr = v8;
            *(_DWORD *)&v88[4] = v47;
          }
          else
          {
            v8 = (char *)ptr;
          }
          v35 = &v8[16 * v34];
          *(_QWORD *)v35 = v15;
          *((_DWORD *)v35 + 2) = 0;
          v32 = *(unsigned int *)v88;
          v33 = *(_DWORD *)v88 + 1;
          goto LABEL_38;
        }
        if ( v20 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v20 )
          sub_1638FA();
        if ( *(_DWORD *)(v15 + 24) )
        {
          v71 = *(_DWORD *)v88;
          if ( *(_DWORD *)v88 >= *(_DWORD *)&v88[4] )
          {
            v75 = (unsigned int)(2 * *(_DWORD *)&v88[4]);
            v8 = (char *)sub_186B270(16 * v75);
            v76 = (int *)ptr;
            v77 = 0;
            v71 = *(_DWORD *)v88;
            v78 = 16LL * *(unsigned int *)v88;
            if ( *(_DWORD *)v88 )
            {
              do
              {
                *(__m128i *)&v8[v77] = _mm_loadu_si128((const __m128i *)&v76[v77 / 4]);
                v77 += 16LL;
              }
              while ( v77 != v78 );
            }
            if ( v76 && v76 != v89 )
            {
              sub_186B220(v76);
              v71 = *(_DWORD *)v88;
            }
            ptr = v8;
            *(_DWORD *)&v88[4] = v75;
          }
          else
          {
            v8 = (char *)ptr;
          }
          v72 = &v8[16 * v71];
          *((_DWORD *)v72 + 2) = 0;
          v32 = *(unsigned int *)v88;
          *(_QWORD *)v72 = v15;
          v33 = v32 + 1;
          goto LABEL_38;
        }
        v21 = *(int **)(*(_QWORD *)(v15 + 16) + 24LL);
        if ( !v21 )
        {
LABEL_108:
          v61 = *(_DWORD **)(sub_15D1F10(v15) + 24);
          if ( v61 && *v61 == 5 && !v61[1] )
          {
            if ( !*(_BYTE *)(*a1 + 186) )
              sub_1638FA();
          }
          else
          {
            v62 = *(_DWORD **)(sub_15D1F10(v15) + 24);
            if ( v62 )
            {
              if ( *v62 == 5 && v62[1] == 1 )
              {
                v63 = *a1;
                if ( !*(_BYTE *)(*a1 + 186) )
                {
                  *(_QWORD *)v83 = 0;
                  *(_QWORD *)v84 = 0;
                  *(_QWORD *)v85 = 1;
                  *(_QWORD *)v86 = 0;
                  v64 = sub_CBFB60(v63, v15, (__int64)v83);
                  v81 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v83);
                  sub_182CBA0(v81, v85);
                  if ( !v64 )
                    sub_1638FA();
                }
              }
            }
          }
          goto LABEL_10;
        }
        v22 = *v21;
        if ( !*v21 )
          goto LABEL_10;
        if ( v22 != 5 )
        {
          if ( v22 != -1 )
          {
            v23 = *(_DWORD **)(sub_15D1F10(v15) + 24);
            if ( v23 )
            {
              if ( *v23 == 5 )
                sub_1638FA();
            }
            goto LABEL_10;
          }
          goto LABEL_108;
        }
        v59 = v21[1];
        if ( v59 == 9 )
          sub_1638FA();
        if ( v59 > 9 || v59 && (unsigned int)(v59 - 2) > 4 )
          sub_1638FA();
        goto LABEL_10;
      }
    }
    v51 = *(int **)(*(_QWORD *)(v4 + 16) + 24LL);
    result = (unsigned int)--*(_DWORD *)v88;
    if ( v51 )
    {
      v52 = *v51;
      if ( !*v51 )
        goto LABEL_28;
      if ( v52 == 5 )
      {
        v60 = v51[1];
        if ( v60 == 9 )
        {
          if ( *(_DWORD *)(v4 + 24) != 2 )
            sub_1638FA();
          v73 = *(_QWORD *)(v4 + 32);
          if ( *(_WORD *)(v73 + 4)
            || (v74 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL)) == nullptr
            || *v74 != 5
            || v74[1] )
          {
            sub_1638FA();
          }
        }
        else if ( v60 > 9 || v60 && (unsigned int)(v60 - 2) > 4 )
        {
          sub_1638FA();
        }
        goto LABEL_28;
      }
      if ( !*(_WORD *)(v4 + 4) && !*(_DWORD *)(v4 + 24) && v52 == -1 )
        goto LABEL_83;
LABEL_118:
      v65 = *(_DWORD **)(sub_15D1F10(v4) + 24);
      if ( v65 && *v65 == 5 )
        sub_1638FA();
      goto LABEL_27;
    }
    if ( *(_WORD *)(v4 + 4) || *(_DWORD *)(v4 + 24) )
      goto LABEL_118;
LABEL_83:
    v53 = *(_DWORD **)(sub_15D1F10(v4) + 24);
    if ( v53 && *v53 == 5 && !v53[1] )
    {
      if ( !*(_BYTE *)(*a1 + 186) )
        sub_1638FA();
    }
    else
    {
      v54 = *(_DWORD **)(sub_15D1F10(v4) + 24);
      if ( v54 )
      {
        if ( *v54 == 5 && v54[1] == 1 )
        {
          v55 = *a1;
          if ( !*(_BYTE *)(*a1 + 186) )
          {
            *(_QWORD *)v83 = 0;
            *(_QWORD *)v84 = 0;
            *(_QWORD *)v85 = 1;
            *(_QWORD *)v86 = 0;
            v56 = sub_CBFB60(v55, v4, (__int64)v83);
            v57 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v83);
            sub_182CBA0(v57, v85);
            if ( !v56 )
              sub_1638FA();
          }
        }
      }
    }
LABEL_27:
    result = *(unsigned int *)v88;
LABEL_28:
    v8 = (char *)ptr;
    if ( (_DWORD)result )
    {
      v9 = (unsigned int)(result - 1);
      v4 = *((_QWORD *)ptr + 2 * (unsigned int)v9);
      continue;
    }
    break;
  }
  if ( ptr )
  {
    result = (__int64)v89;
    if ( ptr != v89 )
      return sub_186B220(ptr);
  }
  return result;
}

