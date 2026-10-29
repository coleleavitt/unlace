__int64 __fastcall sub_AF6E70(__int64 a1, __int64 a2)
{
  char **v2; // r12
  __int64 v3; // rdx
  char **exception; // r12
  __int64 v5; // rdx
  char **v6; // r12
  __int64 v7; // rdx
  char **v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // r15
  _DWORD *v12; // rbx
  __int64 v13; // rbp
  unsigned int v14; // r12d
  _QWORD *v15; // rax
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int v18; // r14d
  unsigned int *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rsi
  char v22; // al
  __int64 v23; // rsi
  char v24; // al
  unsigned int v25; // r13d
  __int64 v26; // rax
  int v27; // r12d
  _QWORD *v28; // rdx
  __int64 v29; // rax
  int *v30; // rax
  __int64 v31; // rsi
  unsigned int *v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned int v38; // r12d
  unsigned int v39; // edx
  size_t v40; // rsi
  unsigned int v41; // r14d
  unsigned int *v42; // rax
  unsigned int v43; // eax
  char v44; // al
  unsigned int v45; // ecx
  __int64 v46; // rax
  int v47; // ebp
  _QWORD *v48; // rdx
  __int64 v49; // rax
  int *v50; // rax
  unsigned int v51; // ebp
  int *v53; // rax
  int v54; // edx
  int v55; // ebp
  int *v56; // rdx
  _QWORD *v57; // rax
  unsigned int v58; // r13d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // r12d
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rax
  char v66; // r12
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  unsigned int **v70; // rdi
  __int64 v71; // [rsp+8h] [rbp-C0h]
  _QWORD *v72; // [rsp+10h] [rbp-B8h]
  unsigned int v74; // [rsp+20h] [rbp-A8h]
  unsigned int v75; // [rsp+28h] [rbp-A0h]
  __int64 *v76; // [rsp+38h] [rbp-90h]
  unsigned int v77; // [rsp+40h] [rbp-88h]
  unsigned int v78; // [rsp+44h] [rbp-84h]
  int v80; // [rsp+5Ch] [rbp-6Ch]
  __int64 v81; // [rsp+60h] [rbp-68h] BYREF
  void *s; // [rsp+68h] [rbp-60h] BYREF
  __int64 v83[11]; // [rsp+70h] [rbp-58h] BYREF

  v10 = *(__int64 **)(a2 + 40);
  if ( !v10 )
    return 1;
  v76 = &v10[*((unsigned int *)v10 - 1)];
  if ( v10 == v76 )
    return 1;
  v71 = 0;
  v11 = *(__int64 **)(a2 + 40);
  v12 = nullptr;
  v72 = (_QWORD *)(a2 + 64);
  while ( 1 )
  {
    v13 = *v11;
    if ( !*(_BYTE *)(*v11 + 16) )
      break;
LABEL_40:
    if ( v76 == ++v11 )
    {
LABEL_41:
      v51 = 1;
      goto LABEL_42;
    }
  }
  if ( !v12 )
  {
    v75 = *(_DWORD *)(v13 + 20);
    v74 = v75 >> 5;
    v14 = (v75 >> 5) + 1;
    v15 = (_QWORD *)sub_186B270(0x10u);
    v12 = v15 + 1;
    *v15 = 2;
    goto LABEL_10;
  }
  while ( 1 )
  {
    *(v12 - 1) = 0;
    v75 = *(_DWORD *)(v13 + 20);
    v74 = v75 >> 5;
    v14 = (v75 >> 5) + 1;
LABEL_10:
    while ( 1 )
    {
      v20 = *(v12 - 2);
      if ( v20 >= v14 )
        break;
      v16 = (3 * v20 + 1) >> 1;
      v17 = 4 * v16 + 8;
      v18 = v16;
      if ( 4 * v20 + 8 >= (unsigned int)v17 || v20 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v83, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v83);
        sub_233E40((__int64)v83);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v12 - 2, v17);
      *v19 = v18;
      v12 = v19 + 2;
    }
    *(v12 - 1) = v14;
    memset(v12, 0, 4LL * v14);
    s = v12;
    v12[v74] |= 1 << v75;
    v21 = *(unsigned int *)(v13 + 24);
    v81 = v71;
    v22 = sub_AFB050(v72, v21, &s);
    v71 = v81;
    if ( v22 )
      goto LABEL_37;
    v23 = *(unsigned int *)(v13 + 24);
    if ( *(_DWORD *)(v13 + 20) == (_DWORD)v23 )
    {
      v53 = *(int **)(a2 + 544);
      v54 = *(_BYTE *)(v13 + 16) ^ 1;
      if ( v53 )
      {
        *(v53 - 1) = 0;
        v55 = v54 + 2 * *(_DWORD *)v13;
        v56 = v53;
        if ( *(v53 - 2) )
        {
LABEL_48:
          *v56 = v55;
          ++*(v53 - 1);
          sub_AF22A0(a1, a2);
          v51 = -1;
          goto LABEL_49;
        }
        v70 = (unsigned int **)(a2 + 544);
      }
      else
      {
        v70 = (unsigned int **)(a2 + 544);
        v55 = v54 + 2 * *(_DWORD *)v13;
      }
      sub_692C60(v70);
      v53 = *(int **)(a2 + 544);
      v56 = &v53[*(v53 - 1)];
      goto LABEL_48;
    }
    v24 = sub_AFB050(v72, v23, &v81);
    v12 = s;
    if ( !v24 )
      goto LABEL_22;
    v25 = *(_DWORD *)(a2 + 192);
    v26 = *(_QWORD *)(a2 + 544);
    if ( v26 )
      *(_DWORD *)(v26 - 4) = 0;
    sub_AF07B0(v72, *(_DWORD *)(v13 + 20), v80, v25, a2);
    sub_AF07B0(v72, *(_DWORD *)(v13 + 24), v80, v25, a2);
    v27 = (*(_BYTE *)(v13 + 16) ^ 1) + 2 * *(_DWORD *)v13;
    v28 = *(_QWORD **)(a2 + 544);
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v58 = (unsigned int)(3 * v29 + 1) >> 1;
        v59 = 4 * v58 + 8;
        if ( 4 * (int)v29 + 8 >= (unsigned int)v59 || (unsigned int)v29 >= v58 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_140FB4(v83, "Overflow encountered when expanding vector", v3);
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v60 = (unsigned int *)sub_186B300(v28 - 1, v59);
        v28 = v60 + 2;
        *v60 = v58;
        v61 = v60[1];
        *(_QWORD *)(a2 + 544) = v28;
        v30 = (int *)v28 + v61;
      }
      else
      {
        v30 = (int *)v28 + v29;
      }
    }
    else
    {
      v68 = (_QWORD *)sub_186B270(0x10u);
      v28 = v68 + 1;
      *v68 = 2;
      *(_QWORD *)(a2 + 544) = v68 + 1;
      v30 = (int *)(v68 + 1);
    }
    *v30 = v27;
    ++*((_DWORD *)v28 - 1);
    LODWORD(v83[0]) = sub_AF1F90((__int64)v72, *(_DWORD *)(v13 + 24), *(_DWORD *)(v13 + 20), 0, (_QWORD *)(a2 + 544));
    v31 = LODWORD(v83[0]);
    v32 = (unsigned int *)(*(_QWORD *)(a2 + 104) + 32LL * LODWORD(v83[0]));
    if ( *((_BYTE *)v32 + 24) )
      goto LABEL_22;
    v33 = *(_DWORD *)(a2 + 192);
    v34 = *(_QWORD *)(a2 + 88);
    *((_BYTE *)v32 + 24) = 1;
    v35 = *v32;
    v32[3] = v33;
    *(_DWORD *)(a2 + 192) = v33 + 1;
    v36 = v32[1];
    *(_DWORD *)(a2 + 196) = v31;
    v37 = (unsigned int)(*(_DWORD *)(v34 + 4 * v36) - *(_DWORD *)(v34 + 4 * v35));
    if ( (int)v37 > (int)v32[2] )
      break;
    sub_AF0D60((_QWORD *)(a2 + 200), (unsigned int *)v83);
LABEL_22:
    if ( v12 )
    {
      *(v12 - 1) = 0;
      if ( v71 )
        *(_DWORD *)(v71 - 4) = 0;
      v78 = *(_DWORD *)(v13 + 24);
      v77 = v78 >> 5;
      v38 = (v78 >> 5) + 1;
    }
    else
    {
      if ( v71 )
        *(_DWORD *)(v71 - 4) = 0;
      v78 = *(_DWORD *)(v13 + 24);
      v77 = v78 >> 5;
      v38 = (v78 >> 5) + 1;
      v57 = (_QWORD *)sub_186B270(0x10u);
      v12 = v57 + 1;
      *v57 = 2;
    }
    while ( 1 )
    {
      v43 = *(v12 - 2);
      if ( v43 >= v38 )
        break;
      v39 = (3 * v43 + 1) >> 1;
      v40 = 4 * v39 + 8;
      v41 = v39;
      if ( 4 * v43 + 8 >= (unsigned int)v40 || v43 >= v39 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v83, "Overflow encountered when expanding vector", v7);
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v83);
        sub_233E40((__int64)v83);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v12 - 2, v40);
      *v42 = v41;
      v12 = v42 + 2;
    }
    *(v12 - 1) = v38;
    memset(v12, 0, 4LL * v38);
    s = v12;
    v12[v77] |= 1 << v78;
    v44 = sub_AFB050(v72, *(unsigned int *)(v13 + 20), &s);
    v71 = v81;
    if ( v44 )
    {
      v45 = *(_DWORD *)(a2 + 192);
      v46 = *(_QWORD *)(a2 + 544);
      if ( v46 )
        *(_DWORD *)(v46 - 4) = 0;
      sub_AF07B0(v72, *(_DWORD *)(v13 + 20), v80, v45, a2);
      v47 = (*(_BYTE *)(v13 + 16) ^ 1) + 2 * *(_DWORD *)v13;
      v48 = *(_QWORD **)(a2 + 544);
      if ( v48 )
      {
        v49 = *((unsigned int *)v48 - 1);
        if ( (_DWORD)v49 == *((_DWORD *)v48 - 2) )
        {
          v62 = (unsigned int)(3 * v49 + 1) >> 1;
          v63 = 4 * v62 + 8;
          if ( 4 * (int)v49 + 8 >= (unsigned int)v63 || (unsigned int)v49 >= v62 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_140FB4(v83, "Overflow encountered when expanding vector", v9);
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v64 = (unsigned int *)sub_186B300(v48 - 1, v63);
          v48 = v64 + 2;
          *v64 = v62;
          v65 = v64[1];
          *(_QWORD *)(a2 + 544) = v48;
          v50 = (int *)v48 + v65;
        }
        else
        {
          v50 = (int *)v48 + v49;
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x10u);
        v48 = v69 + 1;
        *v69 = 2;
        *(_QWORD *)(a2 + 544) = v69 + 1;
        v50 = (int *)(v69 + 1);
      }
      *v50 = v47;
      ++*((_DWORD *)v48 - 1);
      sub_AF22A0(a1, a2);
    }
LABEL_37:
    if ( v76 == ++v11 )
      goto LABEL_41;
    v13 = *v11;
    if ( *(_BYTE *)(*v11 + 16) )
      goto LABEL_40;
  }
  v66 = sub_AFB440(v72, v31, v37);
  sub_AF0D60((_QWORD *)(a2 + 200), (unsigned int *)v83);
  if ( v66 )
    goto LABEL_22;
  v67 = *(_QWORD *)(a2 + 544);
  if ( v67 )
    *(_DWORD *)(v67 - 4) = 0;
  sub_AF0E00((__int64)v72, a2);
  sub_AF22A0(a1, a2);
  v51 = -1;
LABEL_42:
  if ( v12 )
LABEL_49:
    sub_186B220(v12 - 2);
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  return v51;
}

