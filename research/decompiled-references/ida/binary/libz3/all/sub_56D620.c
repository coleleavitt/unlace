__int64 __fastcall sub_56D620(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  char **exception; // r12
  char **v9; // r12
  char **v10; // r12
  int v11; // eax
  __int64 v13; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int *v20; // rax
  unsigned int *v21; // rdx
  unsigned int v22; // esi
  int v23; // r9d
  __int64 v24; // rax
  unsigned int v25; // edi
  unsigned int v27; // r10d
  size_t v28; // rsi
  unsigned int *v29; // rax
  unsigned int *v30; // rax
  unsigned int *v31; // rdx
  unsigned int v32; // esi
  int v33; // r9d
  __int64 v34; // rax
  unsigned int v35; // edi
  unsigned int v36; // r10d
  size_t v37; // rsi
  unsigned int *v38; // rax
  _QWORD *v39; // rax
  unsigned int *v40; // rax
  unsigned int *v41; // rdx
  unsigned int v42; // esi
  int v43; // r9d
  __int64 v44; // rax
  unsigned int v45; // edi
  unsigned int v46; // r10d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // [rsp+8h] [rbp-88h]
  __int64 v53; // [rsp+18h] [rbp-78h]
  unsigned int *v54; // [rsp+28h] [rbp-68h]
  unsigned int *v55; // [rsp+28h] [rbp-68h]
  unsigned int *v56; // [rsp+28h] [rbp-68h]
  __int64 v57[10]; // [rsp+40h] [rbp-50h] BYREF

  v11 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a2 + 32) != v11 || *(_DWORD *)(a3 + 32) != v11 )
    return 0;
  v13 = *(_QWORD *)(a2 + 16);
  if ( v13 )
    v17 = *(_DWORD *)(v13 - 4);
  else
    v17 = 0;
  v18 = *(_QWORD *)(a3 + 16);
  if ( v18 )
    v17 += *(_DWORD *)(v18 - 4);
  if ( a7 == v17 )
    return 0;
  v53 = a2 + 16;
  if ( sub_56AD10(a2 + 16, a3 + 16, a4, a5, a6) )
    return 0;
  v19 = sub_186B270(0x30u);
  *(_QWORD *)v19 = qword_1C65E48;
  *(_QWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v19 + 16) = 0;
  *(_QWORD *)(v19 + 24) = 0;
  if ( a4 )
  {
    v20 = (unsigned int *)(sub_186B270(0x10u) + 8);
    v54 = (unsigned int *)a5;
    v52 = 4LL * a4;
    *((_QWORD *)v20 - 1) = 2;
    v21 = v20;
    *(_QWORD *)(v19 + 24) = v20;
    while ( 1 )
    {
      v22 = *v54++;
      *v20 = v22;
      v23 = *(v21 - 1);
      v24 = (unsigned int)(v23 + 1);
      *(v21 - 1) = v24;
      if ( v54 == (unsigned int *)(a5 + v52) )
        break;
      v25 = *(v21 - 2);
      if ( v25 == (_DWORD)v24 )
      {
        v27 = (3 * v25 + 1) >> 1;
        v28 = 4 * v27 + 8;
        if ( 4 * v23 + 12 >= (unsigned int)v28 || v25 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v21 - 2, v28);
        v21 = v29 + 2;
        *(_QWORD *)(v19 + 24) = v29 + 2;
        *v29 = (3 * v25 + 1) >> 1;
        v20 = &v29[v29[1] + 2];
      }
      else
      {
        v20 = &v21[v24];
      }
    }
    *(_QWORD *)(v19 + 32) = 0;
    v30 = (unsigned int *)(sub_186B270(0x10u) + 8);
    v55 = (unsigned int *)a6;
    *((_QWORD *)v30 - 1) = 2;
    v31 = v30;
    *(_QWORD *)(v19 + 32) = v30;
    while ( 1 )
    {
      v32 = *v55++;
      *v30 = v32;
      v33 = *(v31 - 1);
      v34 = (unsigned int)(v33 + 1);
      *(v31 - 1) = v34;
      if ( v55 == (unsigned int *)(a6 + v52) )
        break;
      v35 = *(v31 - 2);
      if ( v35 == (_DWORD)v34 )
      {
        v36 = (3 * v35 + 1) >> 1;
        v37 = 4 * v36 + 8;
        if ( 4 * v33 + 12 >= (unsigned int)v37 || v35 >= v36 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v31 - 2, v37);
        v31 = v38 + 2;
        *(_QWORD *)(v19 + 32) = v38 + 2;
        *v38 = (3 * v35 + 1) >> 1;
        v30 = &v38[v38[1] + 2];
      }
      else
      {
        v30 = &v31[v34];
      }
    }
  }
  else
  {
    *(_QWORD *)(v19 + 32) = 0;
  }
  *(_QWORD *)(v19 + 40) = 0;
  if ( a7 )
  {
    v39 = (_QWORD *)sub_186B270(0x10u);
    *v39 = 2;
    v40 = (unsigned int *)(v39 + 1);
    *(_QWORD *)(v19 + 40) = v40;
    v56 = a8;
    v41 = v40;
    while ( 1 )
    {
      v42 = *v56++;
      *v40 = v42;
      v43 = *(v41 - 1);
      v44 = (unsigned int)(v43 + 1);
      *(v41 - 1) = v44;
      if ( v56 == &a8[a7] )
        break;
      v45 = *(v41 - 2);
      if ( v45 == (_DWORD)v44 )
      {
        v46 = (3 * v45 + 1) >> 1;
        v47 = 4 * v46 + 8;
        if ( 4 * v43 + 12 >= (unsigned int)v47 || v45 >= v46 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v48 = (unsigned int *)sub_186B300(v41 - 2, v47);
        v41 = v48 + 2;
        *(_QWORD *)(v19 + 40) = v48 + 2;
        *v48 = (3 * v45 + 1) >> 1;
        v40 = &v48[v48[1] + 2];
      }
      else
      {
        v40 = &v41[v44];
      }
    }
  }
  sub_4D8970(v53, a3 + 16, a4, a5, a6, a7, a8, v19 + 8);
  *(_QWORD *)v19 = &off_1C51400;
  v49 = *(_QWORD *)(v19 + 40);
  if ( !v49 || (v50 = *(unsigned int *)(v49 - 4), (_DWORD)v50 == *(_DWORD *)(v49 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(v19 + 40));
    v51 = *(_QWORD *)(v19 + 40);
    *(_DWORD *)(v51 + 4LL * (unsigned int)(*(_DWORD *)(v51 - 4))++) = -1;
  }
  else
  {
    *(_DWORD *)(v49 + 4 * v50) = -1;
    ++*(_DWORD *)(v49 - 4);
  }
  return v19;
}

