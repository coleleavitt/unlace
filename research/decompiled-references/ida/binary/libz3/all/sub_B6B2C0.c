signed int *__fastcall sub_B6B2C0(__int64 a1, unsigned int *a2)
{
  char **v2; // r12
  __int64 v3; // rdx
  char **exception; // rbx
  __int64 v5; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // r12
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  signed int *result; // rax
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  unsigned int *v26; // r12
  unsigned int *v27; // rbp
  unsigned int v28; // ecx
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbx
  char *v34; // rax
  char *v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rbx
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r9
  unsigned int v48; // ebp
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // r14d
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // r9
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  int v60; // [rsp+0h] [rbp-128h]
  int v61[2]; // [rsp+8h] [rbp-120h]
  int v62; // [rsp+8h] [rbp-120h]
  int v63[2]; // [rsp+8h] [rbp-120h]
  unsigned int *v65; // [rsp+10h] [rbp-118h]
  char *v66; // [rsp+18h] [rbp-110h]
  int v67; // [rsp+20h] [rbp-108h] BYREF
  void *v68; // [rsp+28h] [rbp-100h]
  __int64 v69; // [rsp+30h] [rbp-F8h]
  __int64 v70; // [rsp+40h] [rbp-E8h] BYREF
  char v71; // [rsp+48h] [rbp-E0h]
  __int64 v72; // [rsp+50h] [rbp-D8h]
  void *v73; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+68h] [rbp-C0h]
  _BYTE v75[184]; // [rsp+70h] [rbp-B8h] BYREF

  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 712LL);
  if ( v7 )
  {
    v26 = a2;
    v27 = a2 + 3;
    v28 = 0;
    v73 = v75;
    v74 = 0x1000000000LL;
    do
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v26 >> 1));
      if ( (*v26 & 1) != 0 )
      {
        v32 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        v28 = v74;
        v31 = v32;
      }
      if ( v28 < HIDWORD(v74) )
      {
        v29 = v73;
      }
      else
      {
        *(_QWORD *)v63 = v31;
        v33 = (unsigned int)(2 * HIDWORD(v74));
        v34 = (char *)sub_186B270(8 * v33);
        v28 = v74;
        v35 = (char *)v73;
        v29 = v34;
        v31 = *(_QWORD *)v63;
        if ( (_DWORD)v74 )
        {
          if ( (unsigned int)(v74 - 1) <= 2 || v34 == (char *)v73 + 8 )
          {
            v56 = 0;
            v57 = 8LL * (unsigned int)v74;
            do
            {
              v29[v56 / 8] = *(_QWORD *)&v35[v56];
              v56 += 8LL;
            }
            while ( v57 != v56 );
          }
          else
          {
            v36 = 0;
            v37 = 16LL * ((unsigned int)v74 >> 1);
            do
            {
              *(__m128i *)&v29[v36 / 8] = _mm_loadu_si128((const __m128i *)&v35[v36]);
              v36 += 16LL;
            }
            while ( v36 != v37 );
            if ( (v28 & 1) != 0 )
              v29[v28 & 0xFFFFFFFE] = *(_QWORD *)&v35[8 * (v28 & 0xFFFFFFFE)];
          }
        }
        if ( v35 && v35 != v75 )
        {
          sub_186B220(v35);
          v28 = v74;
          v31 = *(_QWORD *)v63;
        }
        v73 = v29;
        HIDWORD(v74) = v33;
      }
      v30 = v28;
      ++v26;
      ++v28;
      v29[v30] = v31;
      LODWORD(v74) = v28;
    }
    while ( v26 != v27 );
    v38 = sub_15E1AF0(*(_QWORD *)(a1 + 104));
    v39 = sub_15DEFF0(*(_QWORD *)(a1 + 104), v38);
    if ( v73 != v75 && v73 )
      sub_186B220(v73);
    sub_B725E0(&v70, a1, v39, 1);
    v40 = sub_180C100(a1 + 8400, 24);
    v41 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v40 + 8) = v71 & 3 | *(_BYTE *)(v40 + 8) & 0xFC;
    *(_QWORD *)v40 = off_1C57620;
    *(_QWORD *)(v40 + 16) = v72;
    if ( v41 )
    {
      v42 = *((_DWORD *)v41 - 1);
      if ( v42 == *((_DWORD *)v41 - 2) )
      {
        v48 = (3 * v42 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v42 + 8 >= v49 || v42 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142((__int64 *)&v73, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v73);
          sub_233E40((__int64)&v73);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v41 - 1, v49);
        v51 = v50[1];
        v41 = v50 + 2;
        *v50 = v48;
        *(_QWORD *)(a1 + 8600) = v50 + 2;
        LODWORD(v50) = v51;
        v45 = &v41[v51];
        v44 = (_DWORD)v50 + 1;
      }
      else
      {
        v43 = v42;
        v44 = v42 + 1;
        v45 = &v41[v43];
      }
    }
    else
    {
      v59 = (_QWORD *)sub_186B270(0x18u);
      *v59 = 2;
      v44 = 1;
      v41 = v59 + 1;
      *(_QWORD *)(a1 + 8600) = v41;
      v45 = v41;
    }
    *v45 = v40;
    *((_DWORD *)v41 - 1) = v44;
    return sub_B68F30(a1, 3u, a2, v40, 0, 0);
  }
  else if ( *(_BYTE *)(a1 + 7576) )
  {
    v73 = v75;
    v74 = 0x1000000000LL;
    v8 = a2;
    *(_QWORD *)v61 = a2 + 3;
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v8 >> 1));
      if ( (*v8 & 1) != 0 )
      {
        v7 = v74;
        v11 = sub_15E1A70(*(_QWORD *)(a1 + 104));
      }
      if ( v7 < HIDWORD(v74) )
      {
        v9 = (char *)v73;
      }
      else
      {
        v12 = (unsigned int)(2 * HIDWORD(v74));
        v7 = v74;
        v13 = (char *)v73;
        v9 = (char *)sub_186B270(8 * v12);
        if ( (_DWORD)v74 )
        {
          if ( (unsigned int)(v74 - 1) <= 2 || v9 == (char *)v73 + 8 )
          {
            v46 = 0;
            v47 = 8LL * (unsigned int)v74;
            do
            {
              *(_QWORD *)&v9[v46] = *(_QWORD *)&v13[v46];
              v46 += 8;
            }
            while ( v47 != v46 );
          }
          else
          {
            v14 = 0;
            v15 = 16LL * ((unsigned int)v74 >> 1);
            do
            {
              *(__m128i *)&v9[v14] = _mm_loadu_si128((const __m128i *)&v13[v14]);
              v14 += 16;
            }
            while ( v14 != v15 );
            if ( (v7 & 1) != 0 )
              *(_QWORD *)&v9[8 * (v7 & 0xFFFFFFFE)] = *(_QWORD *)&v13[8 * (v7 & 0xFFFFFFFE)];
          }
        }
        if ( v13 && v13 != v75 )
        {
          v66 = v9;
          sub_186B220(v13);
          v7 = v74;
          v9 = v66;
        }
        v73 = v9;
        HIDWORD(v74) = v12;
      }
      v10 = v7++;
      ++v8;
      *(_QWORD *)&v9[8 * v10] = v11;
      LODWORD(v74) = v7;
    }
    while ( *(unsigned int **)v61 != v8 );
    v17 = *(_QWORD *)(a1 + 104);
    v62 = (int)v9;
    v18 = *(_QWORD *)(v17 + 848);
    sub_180C5A0(&v70, "tseitin");
    v19 = sub_15E3760(v17, (int)&v70, v7, v62, v18, v60, v62, (int)a2, (int)v66, v67, v68);
    sub_B725E0(&v67, a1, v19, 1);
    v20 = sub_180C100(a1 + 8400, 24);
    v21 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v20 + 8) = (unsigned __int8)v68 & 3 | *(_BYTE *)(v20 + 8) & 0xFC;
    *(_QWORD *)v20 = off_1C57620;
    *(_QWORD *)(v20 + 16) = v69;
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 - 1);
      if ( v22 == *((_DWORD *)v21 - 2) )
      {
        v52 = (3 * v22 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v22 + 8 >= v53 || v22 >= v52 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(&v70, "Overflow encountered when expanding vector", v3);
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v70);
          sub_233E40((__int64)&v70);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (unsigned int *)sub_186B300(v21 - 1, v53);
        v55 = v54[1];
        v21 = v54 + 2;
        *v54 = v52;
        *(_QWORD *)(a1 + 8600) = v54 + 2;
        LODWORD(v54) = v55;
        v25 = &v21[v55];
        v24 = (_DWORD)v54 + 1;
      }
      else
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = &v21[v23];
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x18u);
      *v58 = 2;
      v24 = 1;
      v21 = v58 + 1;
      *(_QWORD *)(a1 + 8600) = v21;
      v25 = v21;
    }
    *v25 = v20;
    *((_DWORD *)v21 - 1) = v24;
    result = sub_B68F30(a1, 3u, v65, v20, 0, 0);
    if ( v73 != v75 )
    {
      if ( v73 )
        return (signed int *)sub_186B220(v73);
    }
  }
  else
  {
    return sub_B68F30(a1, 3u, a2, 0, 0, 0);
  }
  return result;
}

