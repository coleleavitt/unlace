__int64 __fastcall sub_81E340(
        unsigned __int64 *a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  char **exception; // rbp
  __int64 v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // r14
  __int64 *v20; // rbp
  unsigned int v21; // eax
  _QWORD *v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // r14
  __int16 v25; // bx
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int v28; // r15d
  unsigned int *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 result; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // r8d
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  int v46; // r9d
  int v47; // r8d
  __int64 v48; // r15
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rsi
  int v52; // eax
  __int64 *v53; // rsi
  unsigned int v54; // ebx
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rsi
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  unsigned __int64 *v62; // [rsp+10h] [rbp-78h]
  unsigned __int64 v63; // [rsp+10h] [rbp-78h]
  int v64; // [rsp+1Ch] [rbp-6Ch]
  __int64 v65[11]; // [rsp+30h] [rbp-58h] BYREF

  do
  {
    v17 = a2;
    v18 = a2;
    a2 = *(_DWORD *)(a1[42] + 4LL * a2);
  }
  while ( v18 != a2 );
  v19 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 4LL) )
    BUG();
  v20 = *(__int64 **)(a1[39] + 8 * v17);
  if ( *v20 && *(_DWORD *)(*v20 - 4) )
  {
    v34 = a1 + 14;
    goto LABEL_16;
  }
  v62 = a1 + 14;
  v21 = sub_15F10D0(a1 + 14, *(_QWORD *)(*(_QWORD *)(v19 + 16) + 48LL));
  v22 = (_QWORD *)*v20;
  v23 = v21;
  if ( *v20 )
  {
    v24 = *((unsigned int *)v22 - 1);
    if ( (unsigned int)v24 < v21 )
      goto LABEL_12;
    *((_DWORD *)v22 - 1) = v21;
    goto LABEL_8;
  }
  if ( !v21 )
  {
LABEL_8:
    v19 = *(_QWORD *)a3;
    v25 = *(_WORD *)(*(_QWORD *)a3 + 4LL);
    goto LABEL_15;
  }
  v24 = 0;
  v58 = (_QWORD *)sub_186B270(0x18u);
  v22 = v58 + 1;
  *v58 = 2;
  *v20 = (__int64)(v58 + 1);
LABEL_12:
  while ( 1 )
  {
    v30 = *((_DWORD *)v22 - 2);
    if ( v30 >= v23 )
      break;
    v26 = (3 * v30 + 1) >> 1;
    v27 = 8 * v26 + 8;
    v28 = v26;
    if ( 8 * v30 + 8 >= (unsigned int)v27 || v30 >= v26 )
      goto LABEL_40;
    v29 = (unsigned int *)sub_186B300(v22 - 1, v27);
    v22 = v29 + 2;
    *v20 = (__int64)(v29 + 2);
    *v29 = v28;
  }
  v31 = 8 * v24;
  *((_DWORD *)v22 - 1) = v23;
  v32 = &v22[v24];
  v19 = *(_QWORD *)a3;
  v33 = 8LL * v23;
  v25 = *(_WORD *)(*(_QWORD *)a3 + 4LL);
  if ( v31 != v33 )
    memset(v32, 0, v33 - v31);
LABEL_15:
  v34 = v62;
  v35 = 0;
  if ( !v25 )
LABEL_16:
    v35 = *(_QWORD *)(v19 + 16);
  v36 = (unsigned int)sub_15F0DD0(v34, v35);
  result = *v20;
  v38 = *(_QWORD *)(*v20 + 8 * v36);
  if ( !v38 )
  {
    v39 = a1[10];
    result = *(_QWORD *)(*(_QWORD *)(v39 + 24) + 3288LL);
    v40 = (unsigned int)(2 * a3[7]);
    v41 = *(_DWORD *)(result + 4 * v40);
    if ( v41 != 1 )
    {
      if ( v41 == -1 && (v42 = (__int64 *)v20[1]) != nullptr )
      {
        v43 = *v42;
        v44 = 0;
        if ( !*(_WORD *)(v43 + 4) )
          v44 = *(_QWORD *)(v43 + 16);
        if ( !*(_WORD *)(*(_QWORD *)a3 + 4LL) )
          v38 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
        result = sub_15F0BB0((_DWORD)v34, v38, v40, (_DWORD)a3, -1, v39);
        if ( v44 == result )
          return sub_81C420(a1, v20[1], (__int64)a3);
      }
      else
      {
        v64 = v41;
        v63 = a1[10];
        v45 = sub_180C100(v39 + 2144, 24);
        v46 = v63;
        v47 = v64;
        v48 = v45;
        v49 = *(_QWORD **)(v63 + 2128);
        *(_QWORD *)v45 = off_1C55040;
        *(_QWORD *)(v45 + 8) = v20;
        *(_DWORD *)(v45 + 16) = v36;
        if ( v49 )
        {
          v50 = *((_DWORD *)v49 - 1);
          if ( v50 == *((_DWORD *)v49 - 2) )
          {
            v54 = (3 * v50 + 1) >> 1;
            v55 = 8 * v54 + 8;
            if ( 8 * v50 + 8 >= (unsigned int)v55 || v50 >= v54 )
            {
LABEL_40:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v65, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v65);
              sub_233E40((__int64)v65);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (unsigned int *)sub_186B300(v49 - 1, v55);
            v46 = v63;
            v47 = v64;
            v57 = v56[1];
            v49 = v56 + 2;
            *(_QWORD *)(v63 + 2128) = v56 + 2;
            *v56 = v54;
            LODWORD(v56) = v57;
            v53 = &v49[v57];
            v52 = (_DWORD)v56 + 1;
          }
          else
          {
            v51 = v50;
            v52 = v50 + 1;
            v53 = &v49[v51];
          }
        }
        else
        {
          v59 = (_QWORD *)sub_186B270(0x18u);
          v46 = v63;
          v47 = v64;
          v60 = v59;
          *v59 = 2;
          v52 = 1;
          v49 = v60 + 1;
          *(_QWORD *)(v63 + 2128) = v49;
          v53 = v49;
        }
        *v53 = v48;
        *((_DWORD *)v49 - 1) = v52;
        result = *v20;
        *(_QWORD *)(*v20 + 8 * v36) = a3;
        if ( v47 == -1 )
          return sub_81E6B0((_DWORD)a1, v18, (_DWORD)a3, (_DWORD)a3, -1, v46, a7, a8, a9, a10, a11, a12, a13, a14, a15);
      }
    }
  }
  return result;
}

