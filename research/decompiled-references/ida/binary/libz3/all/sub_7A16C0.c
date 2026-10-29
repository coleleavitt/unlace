__int64 __fastcall sub_7A16C0(_DWORD *a1, _QWORD *a2)
{
  char **exception; // r13
  char **v3; // r13
  char **v4; // r13
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // r14
  unsigned int v8; // r15d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rbp
  unsigned int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  size_t v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rbp
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  size_t v33; // rsi
  __int64 v34; // rax
  unsigned int v35; // ebp
  __int64 v36; // r15
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  size_t v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 *v47; // rbp
  unsigned __int64 v48; // r13
  __int64 v49; // rsi
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  int v54; // [rsp+0h] [rbp-138h]
  __int64 v55; // [rsp+8h] [rbp-130h]
  __int64 v56; // [rsp+10h] [rbp-128h]
  __int64 v57; // [rsp+18h] [rbp-120h]
  void *v58; // [rsp+20h] [rbp-118h]
  void *v59; // [rsp+28h] [rbp-110h]
  __int64 v60[4]; // [rsp+50h] [rbp-E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h]
  __int64 v62; // [rsp+78h] [rbp-C0h]
  int v63[46]; // [rsp+80h] [rbp-B8h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v6 == sub_79EFD0 )
    v7 = a2[18];
  else
    v7 = v6((__int64)a2);
  v8 = a1[4];
  v59 = *(void **)(v7 + 848);
  ptr = v63;
  v62 = 0x1000000000LL;
  if ( v8 < a1[5] )
  {
    v9 = nullptr;
    v10 = 4LL * v8;
    while ( 1 )
    {
      v14 = a2[291];
      v15 = *(_DWORD *)(a2[1028] + v10);
      v16 = v15 >> 1;
      if ( !v14 )
        break;
      if ( (unsigned int)v16 < *(_DWORD *)(v14 - 4) )
      {
        v14 = *(_QWORD *)(v14 + 8 * v16);
        v55 = a2[18];
        if ( v14 )
        {
          if ( (v15 & 1) == 0 || (v56 = v10, v23 = sub_15EC2C0(a2[18], v14), v10 = v56, (v14 = v23) != 0) )
            ++*(_DWORD *)(v14 + 8);
        }
LABEL_12:
        if ( v9 )
          goto LABEL_13;
        goto LABEL_18;
      }
      v14 = 0;
      v55 = a2[18];
      if ( v9 )
      {
LABEL_13:
        v17 = *((_DWORD *)v9 - 1);
        if ( v17 == *((_DWORD *)v9 - 2) )
        {
          v18 = (3 * v17 + 1) >> 1;
          v19 = 8 * v18 + 8;
          if ( 8 * v17 + 8 >= (unsigned int)v19 || v17 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v60, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v60);
            sub_233E40((__int64)v60);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = v10;
          LODWORD(v56) = (3 * v17 + 1) >> 1;
          v20 = (_DWORD *)sub_186B300(v9 - 1, v19);
          v21 = (unsigned int)v20[1];
          v9 = v20 + 2;
          v10 = v57;
          *v20 = v56;
          LODWORD(v20) = v21;
          v13 = &v9[v21];
          v12 = (_DWORD)v20 + 1;
        }
        else
        {
          v11 = v17;
          v12 = v17 + 1;
          v13 = &v9[v11];
        }
        goto LABEL_6;
      }
LABEL_18:
      v56 = v10;
      v22 = (_QWORD *)sub_186B270(0x18u);
      v9 = v22 + 1;
      *v22 = 2;
      v10 = v56;
      v12 = 1;
      v13 = v9;
LABEL_6:
      *v13 = v14;
      ++v8;
      v10 += 4;
      *((_DWORD *)v9 - 1) = v12;
      if ( v8 >= a1[5] )
        goto LABEL_23;
    }
    v55 = a2[18];
    goto LABEL_12;
  }
  v9 = nullptr;
LABEL_23:
  v24 = a1[6];
  if ( v24 < a1[7] )
  {
    v25 = 16LL * v24;
    do
    {
      v29 = sub_15E1B70(v7);
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      if ( v9 )
      {
        v31 = *((_DWORD *)v9 - 1);
        if ( v31 == *((_DWORD *)v9 - 2) )
        {
          v32 = (3 * v31 + 1) >> 1;
          v33 = 8 * v32 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v60, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v60);
            sub_233E40((__int64)v60);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v56) = (3 * v31 + 1) >> 1;
          v55 = v30;
          v34 = sub_186B300(v9 - 1, v33);
          v9 = (_QWORD *)(v34 + 8);
          v30 = v55;
          *(_DWORD *)v34 = v56;
          LODWORD(v34) = *(_DWORD *)(v34 + 4);
          v28 = &v9[(unsigned int)v34];
          v27 = v34 + 1;
        }
        else
        {
          v26 = v31;
          v27 = v31 + 1;
          v28 = &v9[v26];
        }
      }
      else
      {
        v55 = v29;
        v53 = (_QWORD *)sub_186B270(0x18u);
        v9 = v53 + 1;
        *v53 = 2;
        v30 = v55;
        v27 = 1;
        v28 = v9;
      }
      *v28 = v30;
      ++v24;
      v25 += 16;
      *((_DWORD *)v9 - 1) = v27;
    }
    while ( v24 < a1[7] );
    v35 = a1[8];
    if ( v35 >= a1[9] )
      goto LABEL_45;
    goto LABEL_35;
  }
  v35 = a1[8];
  if ( v35 < a1[9] )
  {
LABEL_35:
    v36 = 16LL * v35;
    do
    {
      sub_15E1B70(v7);
      v40 = sub_15E1A70(v7);
      v41 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      if ( v9 )
      {
        v42 = *((_DWORD *)v9 - 1);
        if ( v42 == *((_DWORD *)v9 - 2) )
        {
          v43 = (3 * v42 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v42 + 8 >= (unsigned int)v44 || v42 >= v43 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v60, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v60);
            sub_233E40((__int64)v60);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v56) = (3 * v42 + 1) >> 1;
          v55 = v41;
          v45 = sub_186B300(v9 - 1, v44);
          v9 = (_QWORD *)(v45 + 8);
          v41 = v55;
          *(_DWORD *)v45 = v56;
          LODWORD(v45) = *(_DWORD *)(v45 + 4);
          v39 = &v9[(unsigned int)v45];
          v38 = v45 + 1;
        }
        else
        {
          v37 = v42;
          v38 = v42 + 1;
          v39 = &v9[v37];
        }
      }
      else
      {
        v55 = v40;
        v52 = (_QWORD *)sub_186B270(0x18u);
        v9 = v52 + 1;
        *v52 = 2;
        v41 = v55;
        v38 = 1;
        v39 = v9;
      }
      *v39 = v41;
      ++v35;
      v36 += 16;
      *((_DWORD *)v9 - 1) = v38;
    }
    while ( v35 < a1[9] );
    goto LABEL_45;
  }
  if ( !v9 )
  {
    v46 = sub_15E3760(v7, (int)a1 + 8, 0, 0, (char)v59, v54, v55, v56, v57, (int)v63, v59);
    goto LABEL_52;
  }
LABEL_45:
  v46 = sub_15E3760(v7, (int)a1 + 8, *((_DWORD *)v9 - 1), (int)v9, (char)v59, v54, v55, v56, v57, (int)v63, v59);
  v47 = v9;
  v48 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
  if ( (unsigned __int64)v9 < v48 )
  {
    do
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( *v47 )
        {
          if ( (*(_DWORD *)(v49 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v47 >= v48 )
          goto LABEL_51;
      }
      ++v47;
      sub_15D7BC0(v7, v49);
    }
    while ( (unsigned __int64)v47 < v48 );
  }
LABEL_51:
  sub_186B220(v9 - 1);
LABEL_52:
  if ( ptr != v58 && ptr )
    sub_186B220(ptr);
  return v46;
}

