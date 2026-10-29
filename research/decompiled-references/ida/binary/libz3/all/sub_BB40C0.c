__int64 __fastcall sub_BB40C0(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v10; // ebp
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r15d
  unsigned int v16; // r13d
  unsigned int v17; // eax
  int v18; // eax
  __int64 *v19; // r12
  __int64 *v20; // r8
  unsigned int *v21; // rdx
  unsigned int *v22; // r12
  __int64 v23; // rax
  __m128i v24; // xmm0
  unsigned int v25; // r12d
  char v26; // al
  unsigned int *v27; // rsi
  unsigned int *v28; // rax
  unsigned int *v29; // rax
  int v30; // eax
  _QWORD *v31; // rdx
  unsigned int v32; // r13d
  unsigned int v33; // r13d
  __int64 v34; // r14
  unsigned __int64 v35; // r13
  void *v36; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  unsigned int *v40; // r10
  __int64 v41; // r12
  unsigned int *v42; // rdx
  unsigned int *v43; // rax
  int v44; // r8d
  unsigned int *v45; // rsi
  unsigned int *v46; // rdx
  _DWORD *v47; // rax
  int v48; // edx
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  _QWORD *v52; // rax
  int v53; // eax
  _QWORD *v54; // rcx
  __int64 v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // r14d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rax
  unsigned int *v63; // rsi
  unsigned int *v64; // rdx
  unsigned int *v65; // rax
  int v66; // eax
  unsigned int *v67; // [rsp+0h] [rbp-88h]
  unsigned int *v68; // [rsp+0h] [rbp-88h]
  unsigned int *v69; // [rsp+0h] [rbp-88h]
  __int64 v70; // [rsp+8h] [rbp-80h]
  unsigned int *v71; // [rsp+8h] [rbp-80h]
  __int64 v72; // [rsp+10h] [rbp-78h]
  __int64 v73; // [rsp+10h] [rbp-78h]
  __int64 v74; // [rsp+18h] [rbp-70h]
  __int64 v75; // [rsp+20h] [rbp-68h] BYREF
  __int64 v76; // [rsp+28h] [rbp-60h] BYREF
  __int64 v77[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a2 == a3 )
    return 1;
  v6 = *(_QWORD *)(a1 + 4256);
  v75 = 0;
  v76 = 0;
  if ( v6 )
    v10 = *(_DWORD *)(v6 - 4);
  else
    v10 = 0;
  v11 = sub_BB3CA0(a1, 0, a2, 0);
  v12 = sub_BB3CA0(a1, 0, a3, 0);
  sub_BB3E80(a1, v11, &v75);
  sub_BB3E80(a1, v12, &v76);
  v13 = v76;
  v14 = v75;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
LABEL_5:
    if ( v14 )
    {
LABEL_6:
      v17 = *(_DWORD *)(v14 - 4);
      if ( v16 < v17 )
      {
        v18 = 0;
        if ( !v13 )
        {
LABEL_11:
          if ( v15 != v18 )
            goto LABEL_12;
          v25 = a1 + 1728;
          while ( v16 < *(_DWORD *)(v14 - 4) )
          {
            v61 = sub_BCED40(a1 + 1728, *(_QWORD *)(*(_QWORD *)(v14 + 8LL * v16) + 8LL));
            v14 = v75;
            if ( !v61 )
            {
              if ( !v75 )
              {
LABEL_105:
                v66 = 0;
                goto LABEL_108;
              }
              break;
            }
            v62 = *(_QWORD *)(v75 + 8LL * v16);
            v63 = *a4;
            v64 = *(unsigned int **)(v62 + 16);
            if ( *a4 )
            {
              if ( v64 && v64 != v63 )
              {
                v65 = (unsigned int *)sub_BB01E0(*(_QWORD *)(a1 + 120), v63, v64);
                v14 = v75;
                v63 = v65;
              }
            }
            else
            {
              v63 = *(unsigned int **)(v62 + 16);
            }
            *a4 = v63;
            ++v16;
            if ( !v14 )
              goto LABEL_105;
          }
          v66 = *(_DWORD *)(v14 - 4);
LABEL_108:
          LOBYTE(v25) = v66 == v16;
          goto LABEL_32;
        }
      }
      else
      {
        if ( !v13 || v15 >= *(_DWORD *)(v13 - 4) )
        {
LABEL_79:
          v31 = *(_QWORD **)(a1 + 4256);
          v25 = 1;
          if ( v31 )
            goto LABEL_33;
          goto LABEL_80;
        }
        if ( v16 == v17 )
        {
LABEL_22:
          v25 = a1 + 1728;
          while ( v15 < *(_DWORD *)(v13 - 4) )
          {
            v26 = sub_BCED40(a1 + 1728, *(_QWORD *)(*(_QWORD *)(v13 + 8LL * v15) + 8LL));
            v13 = v76;
            if ( !v26 )
            {
              if ( !v76 )
              {
LABEL_30:
                v30 = 0;
                goto LABEL_31;
              }
              break;
            }
            v27 = *a4;
            v28 = *(unsigned int **)(*(_QWORD *)(v76 + 8LL * v15) + 16LL);
            if ( *a4 )
            {
              if ( v28 && v28 != v27 )
              {
                v29 = (unsigned int *)sub_BB01E0(
                                        *(_QWORD *)(a1 + 120),
                                        v27,
                                        *(unsigned int **)(*(_QWORD *)(v76 + 8LL * v15) + 16LL));
                v13 = v76;
                v27 = v29;
              }
            }
            else
            {
              v27 = *(unsigned int **)(*(_QWORD *)(v76 + 8LL * v15) + 16LL);
            }
            *a4 = v27;
            ++v15;
            if ( !v13 )
              goto LABEL_30;
          }
          v30 = *(_DWORD *)(v13 - 4);
LABEL_31:
          LOBYTE(v25) = v30 == v15;
          goto LABEL_32;
        }
      }
      v18 = *(_DWORD *)(v13 - 4);
      goto LABEL_11;
    }
    while ( 1 )
    {
      if ( !v13 || v15 >= *(_DWORD *)(v13 - 4) )
        goto LABEL_79;
      if ( !v16 )
        goto LABEL_22;
LABEL_12:
      v19 = *(__int64 **)(v14 + 8LL * v16);
      v20 = *(__int64 **)(v13 + 8LL * v15);
      if ( v19[1] == v20[1] )
      {
        v38 = *v19;
        if ( *v19 )
        {
          v39 = *v20;
          if ( *v20 )
          {
            if ( *(_QWORD *)(v38 + 8) == *(_QWORD *)(v39 + 8) )
            {
              v50 = *(unsigned int *)(v38 + 24);
              *(_QWORD *)(v14 + 8 * v50) = v38;
              v51 = *(unsigned int *)(v39 + 24);
              v16 = v50;
              *(_QWORD *)(v13 + 8 * v51) = v39;
              v15 = v51;
              goto LABEL_5;
            }
          }
        }
        v40 = (unsigned int *)v19[2];
        if ( *a4 )
        {
          if ( v40 )
          {
            if ( v40 == *a4 )
            {
              v42 = (unsigned int *)v20[2];
              v41 = v19[2];
            }
            else
            {
              v73 = *(_QWORD *)(v13 + 8LL * v15);
              v71 = *a4;
              v68 = (unsigned int *)v19[2];
              v41 = sub_180C100(*(_QWORD *)(a1 + 120), 24);
              *v71 = (*v71 + 1) & 0x3FFFFFFF | *v71 & 0xC0000000;
              *v68 = (*v68 + 1) & 0x3FFFFFFF | *v68 & 0xC0000000;
              *(_QWORD *)v41 = 0;
              *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v68);
              *a4 = (unsigned int *)v41;
              v42 = *(unsigned int **)(v73 + 16);
            }
          }
          else
          {
            v42 = (unsigned int *)v20[2];
            v41 = (__int64)*a4;
          }
          goto LABEL_55;
        }
        *a4 = v40;
        v43 = (unsigned int *)v20[2];
        if ( v40 )
        {
          v41 = (__int64)v40;
          v42 = (unsigned int *)v20[2];
LABEL_55:
          if ( !v42 || v42 == (unsigned int *)v41 )
          {
            v14 = v75;
            v13 = v76;
            v43 = (unsigned int *)v41;
          }
          else
          {
            v69 = v42;
            v43 = (unsigned int *)sub_180C100(*(_QWORD *)(a1 + 120), 24);
            *(_DWORD *)v41 = (*(_DWORD *)v41 + 1) & 0x3FFFFFFF | *(_DWORD *)v41 & 0xC0000000;
            *v69 = (*v69 + 1) & 0x3FFFFFFF | *v69 & 0xC0000000;
            *((_QWORD *)v43 + 1) = v41;
            *(_QWORD *)v43 = 0;
            v14 = v75;
            *((_QWORD *)v43 + 2) = v69;
            v13 = v76;
          }
        }
        *a4 = v43;
        ++v16;
        ++v15;
        goto LABEL_5;
      }
      v74 = v20[1];
      v72 = *(_QWORD *)(v13 + 8LL * v15);
      v70 = v19[1];
      if ( !(unsigned __int8)sub_BCED40(a1 + 1728, v70) )
        break;
      v21 = (unsigned int *)v19[2];
      v22 = *a4;
      if ( *a4 )
      {
        if ( v21 )
        {
          v67 = v21;
          if ( v21 != v22 )
          {
            v23 = sub_180C100(*(_QWORD *)(a1 + 120), 24);
            v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v67);
            *v22 = (*v22 + 1) & 0x3FFFFFFF | *v22 & 0xC0000000;
            v22 = (unsigned int *)v23;
            *v67 = (*v67 + 1) & 0x3FFFFFFF | *v67 & 0xC0000000;
            *(_QWORD *)v23 = 0;
            *(__m128i *)(v23 + 8) = v24;
          }
        }
      }
      else
      {
        v22 = v21;
      }
      v14 = v75;
      v13 = v76;
      *a4 = v22;
      ++v16;
      if ( v14 )
        goto LABEL_6;
    }
    v25 = sub_BCED40(a1 + 1728, v74);
    if ( !(_BYTE)v25 )
      break;
    v45 = *a4;
    v46 = *(unsigned int **)(v72 + 16);
    if ( *a4 )
    {
      if ( v46 != v45 && v46 )
        v45 = (unsigned int *)sub_BB01E0(*(_QWORD *)(a1 + 120), v45, v46);
    }
    else
    {
      v45 = *(unsigned int **)(v72 + 16);
    }
    *a4 = v45;
    v14 = v75;
    ++v15;
    v13 = v76;
  }
  if ( !*(_WORD *)(v70 + 4) )
  {
    v47 = *(_DWORD **)(*(_QWORD *)(v70 + 16) + 24LL);
    if ( v47 )
    {
      v48 = *(_DWORD *)(a1 + 1744);
      if ( v48 == *v47 && !v47[1] && *(_DWORD *)(v70 + 24) == 1 && !*(_WORD *)(v74 + 4) )
      {
        v49 = *(_DWORD **)(*(_QWORD *)(v74 + 16) + 24LL);
        if ( v49 )
        {
          if ( v48 == *v49
            && !v49[1]
            && *(_DWORD *)(v74 + 24) == 1
            && (unsigned __int8)sub_BB40C0(
                                  a1,
                                  *(_QWORD *)(v70 + 32),
                                  *(_QWORD *)(v74 + 32),
                                  (_DWORD)a4,
                                  v44,
                                  v70,
                                  v74,
                                  v70,
                                  v72,
                                  v74,
                                  v75) )
          {
            v14 = v75;
            v13 = v76;
            ++v16;
            ++v15;
            goto LABEL_5;
          }
        }
      }
    }
  }
LABEL_32:
  v31 = *(_QWORD **)(a1 + 4256);
  if ( v31 )
  {
LABEL_33:
    v32 = *((_DWORD *)v31 - 1);
    if ( v10 >= v32 )
    {
      if ( v32 < v10 )
      {
        do
        {
          v56 = *((_DWORD *)v31 - 1);
          if ( v56 == *((_DWORD *)v31 - 2) )
          {
            v57 = (3 * v56 + 1) >> 1;
            v58 = 8 * v57 + 8;
            if ( 8 * v56 + 8 >= (unsigned int)v58 || v56 >= v57 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_154526(v77, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v77);
              sub_233E40((__int64)v77);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = (unsigned int *)sub_186B300(v31 - 1, v58);
            v60 = v59[1];
            v31 = v59 + 2;
            *v59 = v57;
            *(_QWORD *)(a1 + 4256) = v59 + 2;
            LODWORD(v59) = v60;
            v54 = &v31[v60];
            v53 = (_DWORD)v59 + 1;
          }
          else
          {
            v55 = v56;
            v53 = v56 + 1;
            v54 = &v31[v55];
          }
LABEL_85:
          ++v32;
          *v54 = 0;
          *((_DWORD *)v31 - 1) = v53;
        }
        while ( v10 != v32 );
      }
    }
    else
    {
      v33 = v32 - 1;
      v34 = 8LL * v33;
      v35 = 8 * (v33 - (unsigned __int64)(v33 - v10));
      while ( 1 )
      {
        v36 = (void *)v31[(unsigned __int64)v34 / 8];
        if ( v36 )
        {
          sub_186B220(v36);
          v31 = *(_QWORD **)(a1 + 4256);
        }
        if ( v35 == v34 )
          break;
        v34 -= 8;
      }
      if ( v31 )
        *((_DWORD *)v31 - 1) = v10;
    }
    goto LABEL_41;
  }
LABEL_80:
  if ( v10 )
  {
    v52 = (_QWORD *)sub_186B270(0x18u);
    v31 = v52 + 1;
    *v52 = 2;
    v32 = 0;
    v53 = 1;
    *(_QWORD *)(a1 + 4256) = v31;
    v54 = v31;
    goto LABEL_85;
  }
LABEL_41:
  if ( v76 )
    sub_186B220((void *)(v76 - 8));
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  return v25;
}

