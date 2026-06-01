__int64 __fastcall sub_DE42B0(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // r12
  __int64 *v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // edx
  unsigned int v16; // r9d
  size_t v17; // rsi
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rcx
  _QWORD *v23; // r13
  __int64 *v24; // rbp
  unsigned __int64 v25; // r13
  __int64 v26; // rsi
  bool v27; // zf
  unsigned __int64 v28; // rdi
  __int64 v29; // rsi
  int v30; // edi
  __int64 v31; // rax
  int v32; // esi
  __int64 *v33; // rax
  __int64 *v34; // rbx
  __int64 *v35; // r14
  unsigned int *v36; // rdx
  __int64 v37; // r15
  __int64 *v38; // rbx
  _QWORD *v39; // rax
  int v40; // eax
  unsigned int *v41; // rsi
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  size_t v45; // rsi
  unsigned int v46; // ebp
  unsigned int *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rbp
  char *v51; // rax
  char *v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rsi
  unsigned int v55; // r14d
  __int64 v56; // rdi
  __int64 *v57; // r12
  __int64 v58; // rsi
  unsigned __int64 v59; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // [rsp+0h] [rbp-138h]
  unsigned __int8 v64; // [rsp+0h] [rbp-138h]
  __int64 *v65; // [rsp+8h] [rbp-130h]
  unsigned __int64 v66; // [rsp+10h] [rbp-128h]
  __int64 *v67; // [rsp+18h] [rbp-120h]
  __int64 v69; // [rsp+38h] [rbp-100h] BYREF
  unsigned __int64 v70; // [rsp+40h] [rbp-F8h] BYREF
  __int64 *v71; // [rsp+48h] [rbp-F0h]
  __int64 v72[4]; // [rsp+50h] [rbp-E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h]
  __int64 v74; // [rsp+78h] [rbp-C0h]
  _BYTE v75[184]; // [rsp+80h] [rbp-B8h] BYREF

  v5 = *(__int64 **)(a1 + 24);
  ptr = v75;
  v74 = 0x1000000000LL;
  if ( v5 )
  {
    v67 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 != v67 )
    {
      v65 = v5;
      while ( 1 )
      {
        v6 = *(_QWORD *)a2;
        v7 = *v65;
        v66 = *(_QWORD *)a2;
        v70 = *(_QWORD *)a2;
        v8 = *(unsigned int *)(v7 + 12);
        if ( (_DWORD)v8 )
          break;
        v10 = 0;
LABEL_16:
        v20 = sub_DE2960(v7, (unsigned __int64 *)a2, v8, v10);
        v21 = v74;
        v22 = v20;
        if ( (unsigned int)v74 >= HIDWORD(v74) )
        {
          v63 = v20;
          v50 = (unsigned int)(2 * HIDWORD(v74));
          v51 = (char *)sub_186B270(8 * v50);
          v21 = v74;
          v52 = (char *)ptr;
          v23 = v51;
          v22 = v63;
          if ( (_DWORD)v74 )
          {
            if ( (unsigned int)(v74 - 1) <= 2 || v51 == (char *)ptr + 8 )
            {
              v61 = 0;
              v62 = 8LL * (unsigned int)v74;
              do
              {
                v23[v61 / 8] = *(_QWORD *)&v52[v61];
                v61 += 8LL;
              }
              while ( v61 != v62 );
            }
            else
            {
              v53 = 0;
              v54 = 16LL * ((unsigned int)v74 >> 1);
              do
              {
                *(__m128i *)&v23[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                v53 += 16LL;
              }
              while ( v53 != v54 );
              if ( (v21 & 1) != 0 )
                v23[v21 & 0xFFFFFFFE] = *(_QWORD *)&v52[8 * (v21 & 0xFFFFFFFE)];
            }
          }
          if ( v52 && v52 != v75 )
          {
            sub_186B220(v52);
            v21 = v74;
            v22 = v63;
          }
          ptr = v23;
          HIDWORD(v74) = v50;
        }
        else
        {
          v23 = ptr;
        }
        v23[v21] = v22;
        LODWORD(v74) = v21 + 1;
        if ( v10 )
        {
          v24 = (__int64 *)v10;
          v25 = v10 + 8LL * *(unsigned int *)(v10 - 4);
          if ( v10 < v25 )
          {
            do
            {
              while ( 1 )
              {
                v26 = *v24;
                if ( *v24 )
                {
                  v27 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v27 )
                    break;
                }
                if ( (unsigned __int64)++v24 >= v25 )
                  goto LABEL_25;
              }
              ++v24;
              sub_15D7BC0(v66, v26);
            }
            while ( (unsigned __int64)v24 < v25 );
          }
LABEL_25:
          sub_186B220((void *)(v10 - 8));
        }
        if ( v67 == ++v65 )
          goto LABEL_27;
      }
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v69 = 8 * v9 + 1;
        v13 = sub_15D4E60(v6, &v69, 0, 0);
        v14 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        if ( !v10 )
          break;
        v15 = *(_DWORD *)(v10 - 4);
        if ( v15 != *(_DWORD *)(v10 - 8) )
        {
          v11 = v15;
          v8 = v15 + 1;
          v12 = (__int64 *)(v10 + 8 * v11);
          goto LABEL_7;
        }
        v16 = (3 * v15 + 1) >> 1;
        v17 = 8 * v16 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v72, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v63) = (3 * v15 + 1) >> 1;
        v18 = (_DWORD *)sub_186B300((void *)(v10 - 8), v17);
        v10 = (unsigned __int64)(v18 + 2);
        ++v9;
        *v18 = v63;
        v19 = (unsigned int)v18[1];
        v8 = (unsigned int)(v19 + 1);
        *(_QWORD *)(v10 + 8 * v19) = v14;
        *(_DWORD *)(v10 - 4) = v8;
        if ( (unsigned int)v9 >= *(_DWORD *)(v7 + 12) )
          goto LABEL_16;
LABEL_8:
        v6 = *(_QWORD *)a2;
      }
      v49 = (_QWORD *)sub_186B270(0x18u);
      v10 = (unsigned __int64)(v49 + 1);
      v8 = 1;
      *v49 = 2;
      v12 = v49 + 1;
LABEL_7:
      *v12 = v14;
      ++v9;
      *(_DWORD *)(v10 - 4) = v8;
      if ( (unsigned int)v9 >= *(_DWORD *)(v7 + 12) )
        goto LABEL_16;
      goto LABEL_8;
    }
  }
LABEL_27:
  v28 = *(_QWORD *)a2;
  v29 = *(unsigned int *)(a2 + 96);
  v71 = nullptr;
  v70 = v28;
  v30 = sub_15D2690(v28, v29);
  v31 = *(_QWORD *)(a1 + 24);
  if ( v31 )
    v32 = *(_DWORD *)(v31 - 4);
  else
    v32 = 0;
  v64 = sub_15FA930(v30, v32, (_DWORD)ptr, 0, 0, (unsigned int)&v70, v63, (_DWORD)v65);
  if ( v64 && (v33 = *(__int64 **)(a1 + 24)) != nullptr )
  {
    v34 = v71;
    v35 = &v33[*((unsigned int *)v33 - 1)];
    if ( v35 == v33 )
      goto LABEL_55;
    v36 = *(unsigned int **)(a2 + 176);
    v37 = *v33;
    v38 = *(__int64 **)(a1 + 24);
    if ( v36 )
      goto LABEL_37;
    v39 = (_QWORD *)sub_186B270(0x18u);
    v36 = (unsigned int *)(v39 + 1);
    *v39 = 2;
    v40 = 1;
    *(_QWORD *)(a2 + 176) = v36;
    v41 = v36;
    while ( 1 )
    {
      ++v38;
      *(_QWORD *)v41 = *(_QWORD *)(v37 + 24);
      *(v36 - 1) = v40;
      if ( v35 == v38 )
        break;
      v37 = *v38;
LABEL_37:
      v43 = *(v36 - 1);
      if ( v43 == *(v36 - 2) )
      {
        v44 = (3 * v43 + 1) >> 1;
        v45 = 8 * v44 + 8;
        v46 = v44;
        if ( 8 * v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v72, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v72);
          sub_233E40((__int64)v72);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (unsigned int *)sub_186B300(v36 - 2, v45);
        v48 = v47[1];
        v36 = v47 + 2;
        *v47 = v46;
        *(_QWORD *)(a2 + 176) = v47 + 2;
        v41 = &v47[2 * v48 + 2];
        v40 = v48 + 1;
      }
      else
      {
        v42 = v43;
        v40 = v43 + 1;
        v41 = &v36[2 * v42];
      }
    }
    v34 = v71;
    v33 = *(__int64 **)(a1 + 24);
    if ( v33 )
    {
LABEL_55:
      v55 = 0;
      do
      {
        if ( v55 >= *((_DWORD *)v33 - 1) )
          break;
        if ( !*(_DWORD *)(v33[v55] + 12) )
        {
          v56 = *(_QWORD *)(a2 + 104);
          if ( v56 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v56 + 16LL))(v56, v34[v55], a1);
            v34 = v71;
            v33 = *(__int64 **)(a1 + 24);
          }
        }
        ++v55;
      }
      while ( v33 );
    }
  }
  else
  {
    v34 = v71;
  }
  if ( v34 )
  {
    v57 = &v34[*((unsigned int *)v34 - 1)];
    if ( v34 >= v57 )
      goto LABEL_69;
    do
    {
      while ( 1 )
      {
        v58 = *v34;
        if ( *v34 )
        {
          v59 = v70;
          v27 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v27 )
            break;
        }
        if ( ++v34 >= v57 )
          goto LABEL_68;
      }
      sub_15D7BC0(v59, v58);
      ++v34;
    }
    while ( v34 < v57 );
LABEL_68:
    v34 = v71;
    if ( v71 )
LABEL_69:
      sub_186B220(v34 - 1);
  }
  if ( ptr && ptr != v75 )
    sub_186B220(ptr);
  return v64;
}

