signed int *__fastcall sub_B6BA00(__int64 a1, unsigned int *a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbx
  __int64 v5; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r13
  char *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  signed int *result; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // r14
  unsigned int v27; // ecx
  _QWORD *v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r13
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
  __int64 v47; // rsi
  unsigned int v48; // ebp
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // ebp
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  __int64 v57; // r8
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  int v60; // [rsp+0h] [rbp-128h]
  signed int *v61; // [rsp+8h] [rbp-120h]
  char v62[8]; // [rsp+10h] [rbp-118h]
  char v63[8]; // [rsp+10h] [rbp-118h]
  int v64[2]; // [rsp+18h] [rbp-110h]
  int v65; // [rsp+20h] [rbp-108h] BYREF
  void *v66; // [rsp+28h] [rbp-100h]
  __int64 v67; // [rsp+30h] [rbp-F8h]
  __int64 v68; // [rsp+40h] [rbp-E8h] BYREF
  char v69; // [rsp+48h] [rbp-E0h]
  __int64 v70; // [rsp+50h] [rbp-D8h]
  void *v71; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+68h] [rbp-C0h]
  _BYTE v73[184]; // [rsp+70h] [rbp-B8h] BYREF

  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 712LL);
  if ( v8 )
  {
    v26 = 0;
    v27 = 0;
    v71 = v73;
    v72 = 0x1000000000LL;
    do
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (a2[v26] >> 1));
      if ( (a2[v26] & 1) != 0 )
      {
        v32 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        v27 = v72;
        v31 = v32;
      }
      if ( v27 < HIDWORD(v72) )
      {
        v28 = v71;
      }
      else
      {
        v33 = (unsigned int)(2 * HIDWORD(v72));
        v34 = (char *)sub_186B270(8 * v33);
        v27 = v72;
        v35 = (char *)v71;
        v28 = v34;
        if ( (_DWORD)v72 )
        {
          if ( (unsigned int)(v72 - 1) <= 2 || v34 == (char *)v71 + 8 )
          {
            v56 = 0;
            v57 = 8LL * (unsigned int)v72;
            do
            {
              v28[v56 / 8] = *(_QWORD *)&v35[v56];
              v56 += 8LL;
            }
            while ( v57 != v56 );
          }
          else
          {
            v36 = 0;
            v37 = 16LL * ((unsigned int)v72 >> 1);
            do
            {
              *(__m128i *)&v28[v36 / 8] = _mm_loadu_si128((const __m128i *)&v35[v36]);
              v36 += 16LL;
            }
            while ( v36 != v37 );
            if ( (v27 & 1) != 0 )
              v28[v27 & 0xFFFFFFFE] = *(_QWORD *)&v35[8 * (v27 & 0xFFFFFFFE)];
          }
        }
        if ( v35 && v35 != v73 )
        {
          sub_186B220(v35);
          v27 = v72;
        }
        v71 = v28;
        HIDWORD(v72) = v33;
      }
      v29 = v27++;
      v28[v29] = v31;
      v30 = v26 + 1;
      v26 = 1;
      LODWORD(v72) = v27;
    }
    while ( v30 != 2 );
    v38 = sub_15E1AF0(*(_QWORD *)(a1 + 104));
    v39 = sub_15DEFF0(*(_QWORD *)(a1 + 104), v38);
    if ( v71 != v73 && v71 )
      sub_186B220(v71);
    sub_B725E0(&v68, a1, v39, 1);
    v40 = sub_180C100(a1 + 8400, 24);
    v41 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v40 + 8) = v69 & 3 | *(_BYTE *)(v40 + 8) & 0xFC;
    *(_QWORD *)v40 = off_1C57620;
    *(_QWORD *)(v40 + 16) = v70;
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
          sub_14E142((__int64 *)&v71, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v71);
          sub_233E40((__int64)&v71);
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
    return sub_B68F30(a1, 2u, a2, v40, 0, 0);
  }
  else if ( *(_BYTE *)(a1 + 7576) )
  {
    v9 = 0;
    v71 = v73;
    v72 = 0x1000000000LL;
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (a2[v9] >> 1));
      if ( (a2[v9] & 1) != 0 )
      {
        v8 = v72;
        v13 = sub_15E1A70(*(_QWORD *)(a1 + 104));
      }
      if ( v8 < HIDWORD(v72) )
      {
        v10 = (char *)v71;
      }
      else
      {
        *(_QWORD *)v62 = v13;
        v14 = (unsigned int)(2 * HIDWORD(v72));
        v8 = v72;
        v15 = (char *)v71;
        v10 = (char *)sub_186B270(8 * v14);
        v13 = *(_QWORD *)v62;
        if ( (_DWORD)v72 )
        {
          if ( (unsigned int)(v72 - 1) <= 2 || v10 == (char *)v71 + 8 )
          {
            v46 = 0;
            v47 = 8LL * (unsigned int)v72;
            do
            {
              *(_QWORD *)&v10[v46] = *(_QWORD *)&v15[v46];
              v46 += 8;
            }
            while ( v46 != v47 );
          }
          else
          {
            v16 = 0;
            v17 = 16LL * ((unsigned int)v72 >> 1);
            do
            {
              *(__m128i *)&v10[v16] = _mm_loadu_si128((const __m128i *)&v15[v16]);
              v16 += 16;
            }
            while ( v17 != v16 );
            if ( (v8 & 1) != 0 )
              *(_QWORD *)&v10[8 * (v8 & 0xFFFFFFFE)] = *(_QWORD *)&v15[8 * (v8 & 0xFFFFFFFE)];
          }
        }
        if ( v15 && v15 != v73 )
        {
          sub_186B220(v15);
          v8 = v72;
          v13 = *(_QWORD *)v62;
        }
        v71 = v10;
        HIDWORD(v72) = v14;
      }
      v11 = v8++;
      *(_QWORD *)&v10[8 * v11] = v13;
      v12 = v9 + 1;
      v9 = 1;
      LODWORD(v72) = v8;
    }
    while ( v12 != 2 );
    *(_QWORD *)v64 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)v63 = *(_QWORD *)(*(_QWORD *)v64 + 848LL);
    sub_180C5A0(&v68, "tseitin");
    v19 = sub_15E3760(v64[0], (int)&v68, v8, (int)v10, v63[0], v60, (int)v73, *(int *)v63, v64[0], v65, v66);
    sub_B725E0(&v65, a1, v19, 1);
    v20 = sub_180C100(a1 + 8400, 24);
    v21 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v20 + 8) = (unsigned __int8)v66 & 3 | *(_BYTE *)(v20 + 8) & 0xFC;
    *(_QWORD *)v20 = off_1C57620;
    *(_QWORD *)(v20 + 16) = v67;
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
          sub_14E142(&v68, "Overflow encountered when expanding vector", v3);
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v68);
          sub_233E40((__int64)&v68);
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
    sub_B68F30(a1, 2u, a2, v20, 0, 0);
    result = v61;
    if ( v71 != v61 )
    {
      if ( v71 )
        return (signed int *)sub_186B220(v71);
    }
  }
  else
  {
    return sub_B68F30(a1, 2u, a2, 0, 0, 0);
  }
  return result;
}

