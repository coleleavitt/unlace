signed int *__fastcall sub_B6AC80(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  char **v5; // r13
  __int64 v6; // rdx
  char **exception; // rbx
  __int64 v8; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int *v12; // r13
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  char *v18; // rax
  char *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  signed int *result; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  unsigned int *v30; // r13
  unsigned int v31; // ecx
  _QWORD *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rbx
  char *v37; // rax
  char *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rbx
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 *v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // r9
  unsigned int v51; // ebp
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // r14d
  unsigned int v56; // ecx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  __int64 v60; // r9
  _QWORD *v61; // rdx
  _QWORD *v62; // rdx
  char v63[8]; // [rsp+0h] [rbp-138h]
  char v64[8]; // [rsp+0h] [rbp-138h]
  char v65[8]; // [rsp+0h] [rbp-138h]
  unsigned int *v66; // [rsp+8h] [rbp-130h]
  int v67[2]; // [rsp+10h] [rbp-128h]
  int v68[2]; // [rsp+10h] [rbp-128h]
  int v69; // [rsp+18h] [rbp-120h]
  unsigned int v70[2]; // [rsp+20h] [rbp-118h] BYREF
  void *v71; // [rsp+28h] [rbp-110h]
  _BYTE v72[16]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v73; // [rsp+40h] [rbp-F8h]
  __int64 v74; // [rsp+50h] [rbp-E8h] BYREF
  char v75; // [rsp+58h] [rbp-E0h]
  __int64 v76; // [rsp+60h] [rbp-D8h]
  void *v77; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+78h] [rbp-C0h]
  _BYTE v79[184]; // [rsp+80h] [rbp-B8h] BYREF

  v10 = *(_QWORD *)(a1 + 104);
  v70[0] = a2;
  v11 = *(_DWORD *)(v10 + 712);
  v70[1] = a3;
  v71 = (void *)__PAIR64__(a5, a4);
  if ( v11 )
  {
    v30 = v70;
    v31 = 0;
    v77 = v79;
    v78 = 0x1000000000LL;
    do
    {
      v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v30 >> 1));
      if ( (*v30 & 1) != 0 )
      {
        v35 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        v31 = v78;
        v34 = v35;
      }
      if ( v31 < HIDWORD(v78) )
      {
        v32 = v77;
      }
      else
      {
        *(_QWORD *)v65 = v34;
        v36 = (unsigned int)(2 * HIDWORD(v78));
        v37 = (char *)sub_186B270(8 * v36);
        v31 = v78;
        v38 = (char *)v77;
        v32 = v37;
        v34 = *(_QWORD *)v65;
        if ( (_DWORD)v78 )
        {
          if ( (unsigned int)(v78 - 1) <= 2 || v37 == (char *)v77 + 8 )
          {
            v59 = 0;
            v60 = 8LL * (unsigned int)v78;
            do
            {
              v32[v59 / 8] = *(_QWORD *)&v38[v59];
              v59 += 8LL;
            }
            while ( v60 != v59 );
          }
          else
          {
            v39 = 0;
            v40 = 16LL * ((unsigned int)v78 >> 1);
            do
            {
              *(__m128i *)&v32[v39 / 8] = _mm_loadu_si128((const __m128i *)&v38[v39]);
              v39 += 16LL;
            }
            while ( v39 != v40 );
            if ( (v31 & 1) != 0 )
              v32[v31 & 0xFFFFFFFE] = *(_QWORD *)&v38[8 * (v31 & 0xFFFFFFFE)];
          }
        }
        if ( v38 != v79 && v38 )
        {
          sub_186B220(v38);
          v31 = v78;
          v34 = *(_QWORD *)v65;
        }
        v77 = v32;
        HIDWORD(v78) = v36;
      }
      v33 = v31;
      ++v30;
      ++v31;
      v32[v33] = v34;
      LODWORD(v78) = v31;
    }
    while ( v30 != (unsigned int *)v72 );
    v41 = sub_15E1AF0(*(_QWORD *)(a1 + 104));
    v42 = sub_15DEFF0(*(_QWORD *)(a1 + 104), v41);
    if ( v77 != v79 && v77 )
      sub_186B220(v77);
    sub_B725E0(&v74, a1, v42, 1);
    v43 = sub_180C100(a1 + 8400, 24);
    v44 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v43 + 8) = v75 & 3 | *(_BYTE *)(v43 + 8) & 0xFC;
    *(_QWORD *)v43 = off_1C57620;
    *(_QWORD *)(v43 + 16) = v76;
    if ( v44 )
    {
      v45 = *((_DWORD *)v44 - 1);
      if ( v45 == *((_DWORD *)v44 - 2) )
      {
        v51 = (3 * v45 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v45 + 8 >= v52 || v45 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142((__int64 *)&v77, "Overflow encountered when expanding vector", v8);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v77);
          sub_233E40((__int64)&v77);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B300(v44 - 1, v52);
        v54 = v53[1];
        v44 = v53 + 2;
        *v53 = v51;
        *(_QWORD *)(a1 + 8600) = v53 + 2;
        LODWORD(v53) = v54;
        v48 = &v44[v54];
        v47 = (_DWORD)v53 + 1;
      }
      else
      {
        v46 = v45;
        v47 = v45 + 1;
        v48 = &v44[v46];
      }
    }
    else
    {
      v62 = (_QWORD *)sub_186B270(0x18u);
      *v62 = 2;
      v47 = 1;
      v44 = v62 + 1;
      *(_QWORD *)(a1 + 8600) = v44;
      v48 = v44;
    }
    *v48 = v43;
    *((_DWORD *)v44 - 1) = v47;
    return sub_B68F30(a1, 4u, v70, v43, 0, 0);
  }
  else if ( *(_BYTE *)(a1 + 7576) )
  {
    v12 = v70;
    v77 = v79;
    v78 = 0x1000000000LL;
    do
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v12 >> 1));
      if ( (*v12 & 1) != 0 )
      {
        v16 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        v11 = v78;
        v15 = v16;
      }
      if ( v11 < HIDWORD(v78) )
      {
        v13 = v77;
      }
      else
      {
        *(_QWORD *)v63 = v15;
        v17 = (unsigned int)(2 * HIDWORD(v78));
        v18 = (char *)sub_186B270(8 * v17);
        v11 = v78;
        v19 = (char *)v77;
        v13 = v18;
        v15 = *(_QWORD *)v63;
        if ( (_DWORD)v78 )
        {
          if ( (unsigned int)(v78 - 1) <= 2 || v18 == (char *)v77 + 8 )
          {
            v49 = 0;
            v50 = 8LL * (unsigned int)v78;
            do
            {
              v13[v49 / 8] = *(_QWORD *)&v19[v49];
              v49 += 8LL;
            }
            while ( v50 != v49 );
          }
          else
          {
            v20 = 0;
            v21 = 16LL * ((unsigned int)v78 >> 1);
            do
            {
              *(__m128i *)&v13[v20 / 8] = _mm_loadu_si128((const __m128i *)&v19[v20]);
              v20 += 16LL;
            }
            while ( v20 != v21 );
            if ( (v11 & 1) != 0 )
              v13[v11 & 0xFFFFFFFE] = *(_QWORD *)&v19[8 * (v11 & 0xFFFFFFFE)];
          }
        }
        if ( v19 && v19 != v79 )
        {
          *(_QWORD *)v67 = v13;
          sub_186B220(v19);
          v11 = v78;
          v13 = *(_QWORD **)v67;
          v15 = *(_QWORD *)v63;
        }
        v77 = v13;
        HIDWORD(v78) = v17;
      }
      v14 = v11;
      ++v12;
      ++v11;
      v13[v14] = v15;
      LODWORD(v78) = v11;
    }
    while ( v72 != (_BYTE *)v12 );
    v69 = (int)v13;
    *(_QWORD *)v68 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)v64 = *(_QWORD *)(*(_QWORD *)v68 + 848LL);
    sub_180C5A0(&v74, "tseitin");
    v23 = sub_15E3760(v68[0], (int)&v74, v11, v69, v64[0], *(int *)v64, (int)v70, v68[0], v69, v70[0], v71);
    sub_B725E0(v72, a1, v23, 1);
    v24 = sub_180C100(a1 + 8400, 24);
    v25 = *(_QWORD **)(a1 + 8600);
    *(_BYTE *)(v24 + 8) = v72[8] & 3 | *(_BYTE *)(v24 + 8) & 0xFC;
    *(_QWORD *)v24 = off_1C57620;
    *(_QWORD *)(v24 + 16) = v73;
    if ( v25 )
    {
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 == *((_DWORD *)v25 - 2) )
      {
        v55 = (3 * v26 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v26 + 8 >= v56 || v26 >= v55 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(&v74, "Overflow encountered when expanding vector", v6);
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, &v74);
          sub_233E40((__int64)&v74);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v25 - 1, v56);
        v58 = v57[1];
        v25 = v57 + 2;
        *v57 = v55;
        *(_QWORD *)(a1 + 8600) = v57 + 2;
        LODWORD(v57) = v58;
        v29 = &v25[v58];
        v28 = (_DWORD)v57 + 1;
      }
      else
      {
        v27 = v26;
        v28 = v26 + 1;
        v29 = &v25[v27];
      }
    }
    else
    {
      v61 = (_QWORD *)sub_186B270(0x18u);
      *v61 = 2;
      v28 = 1;
      v25 = v61 + 1;
      *(_QWORD *)(a1 + 8600) = v25;
      v29 = v25;
    }
    *v29 = v24;
    *((_DWORD *)v25 - 1) = v28;
    result = sub_B68F30(a1, 4u, v66, v24, 0, 0);
    if ( v77 != v79 )
    {
      if ( v77 )
        return (signed int *)sub_186B220(v77);
    }
  }
  else
  {
    return sub_B68F30(a1, 4u, v70, 0, 0, 0);
  }
  return result;
}

