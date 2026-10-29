__int64 __fastcall sub_466D20(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  char **v6; // rbx
  char **exception; // rbx
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r12
  void *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 result; // rax
  _QWORD *v18; // r13
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r12
  void *v22; // r14
  __int64 v23; // rsi
  _QWORD *v24; // rbx
  _QWORD *v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  unsigned int v29; // r13d
  _DWORD *v30; // rdi
  unsigned int v31; // r12d
  _QWORD *v32; // rbx
  _QWORD *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  unsigned int v36; // r12d
  size_t v37; // rsi
  unsigned int *v38; // rax
  unsigned int v39; // eax
  _QWORD *v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  _QWORD *v45; // rax
  int v46; // [rsp+0h] [rbp-78h]
  __int64 *v47; // [rsp+0h] [rbp-78h]
  _QWORD *v48; // [rsp+0h] [rbp-78h]
  __int64 *v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  int v51; // [rsp+18h] [rbp-60h]
  int v52[2]; // [rsp+20h] [rbp-58h] BYREF
  void *v53; // [rsp+28h] [rbp-50h]
  int v54; // [rsp+30h] [rbp-48h]
  int v55; // [rsp+38h] [rbp-40h]
  int v56; // [rsp+40h] [rbp-38h]
  int v57; // [rsp+48h] [rbp-30h]
  int v58; // [rsp+50h] [rbp-28h]
  int v59; // [rsp+58h] [rbp-20h]
  int v60; // [rsp+60h] [rbp-18h]
  char v61; // [rsp+68h] [rbp-10h]

  *(_DWORD *)(a1 + 88) = a2;
  sub_4AD6C0((int)v52, 0, 0, a4, a5, a6, v46, (int)v52, v50, v51, v52[0], v53, v54, v55, v56, v57, v58, v59, v60, v61);
  v9 = *(__int64 **)(a1 + 168);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)v52;
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( (_DWORD)v10 )
    {
      v47 = &v9[v10];
      do
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = *(unsigned int *)(v11 - 4);
          if ( (_DWORD)v12 )
          {
            v13 = v11 + 32 * v12;
            do
            {
              v14 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v11);
              v15 = v11 + 16;
              v11 += 32;
              sub_182CBA0(v14, v15);
            }
            while ( v11 != v13 );
            v11 = *v9;
          }
          sub_186B220((void *)(v11 - 8));
        }
        ++v9;
      }
      while ( v9 != v47 );
      v9 = *(__int64 **)(a1 + 168);
    }
    sub_186B220(v9 - 1);
  }
  v16 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 168) = v53;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
  result = *(unsigned int *)(a1 + 88);
  v18 = *(_QWORD **)(a1 + 104);
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = result;
  if ( v18 )
  {
    result = *((unsigned int *)v18 - 1);
    if ( (_DWORD)result )
    {
      v48 = &v18[result];
      do
      {
        v19 = *v18;
        if ( *v18 )
        {
          v20 = *(unsigned int *)(v19 - 4);
          if ( (_DWORD)v20 )
          {
            v21 = v19 + 32 * v20;
            do
            {
              v22 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v19);
              v23 = v19 + 16;
              v19 += 32;
              sub_182CBA0(v22, v23);
            }
            while ( v19 != v21 );
            v19 = *v18;
          }
          sub_186B220((void *)(v19 - 8));
        }
        result = (__int64)v48;
        ++v18;
      }
      while ( v18 != v48 );
      v18 = *(_QWORD **)(a1 + 104);
    }
    *((_DWORD *)v18 - 1) = 0;
  }
  v24 = *(_QWORD **)(a1 + 120);
  if ( v24 )
  {
    result = *((unsigned int *)v24 - 1);
    v25 = &v24[result];
    if ( v24 >= v25 )
      goto LABEL_35;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 112);
          v28 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_34;
      }
      result = sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_34:
    v24 = *(_QWORD **)(a1 + 120);
    if ( v24 )
    {
LABEL_35:
      *((_DWORD *)v24 - 1) = 0;
      v29 = *(_DWORD *)(a1 + 88);
      if ( !v29 )
        goto LABEL_36;
LABEL_51:
      while ( 1 )
      {
        v39 = *((_DWORD *)v24 - 2);
        if ( v39 >= v29 )
          break;
        v36 = (3 * v39 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v39 + 8 >= (unsigned int)v37 || v39 >= v36 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v24 - 1, v37);
        v24 = v38 + 2;
        *v38 = v36;
        *(_QWORD *)(a1 + 120) = v38 + 2;
      }
      *((_DWORD *)v24 - 1) = v29;
      result = (__int64)memset(v24, 0, 8LL * v29);
      v30 = *(_DWORD **)(a1 + 128);
      if ( !v30 )
      {
        v31 = *(_DWORD *)(a1 + 88);
        if ( !v31 )
          goto LABEL_38;
        v40 = (_QWORD *)sub_186B270(0xAu);
        v30 = v40 + 1;
        *v40 = 2;
        v41 = *(_DWORD *)v40;
        *(_QWORD *)(a1 + 128) = v30;
        if ( v41 < v31 )
          goto LABEL_55;
        goto LABEL_59;
      }
LABEL_37:
      *(v30 - 1) = 0;
      v31 = *(_DWORD *)(a1 + 88);
      if ( !v31 )
        goto LABEL_38;
      while ( 1 )
      {
        v41 = *(v30 - 2);
        if ( v41 >= v31 )
          break;
LABEL_55:
        v42 = (3 * v41 + 1) >> 1;
        v43 = v42 + 8;
        if ( v41 + 8 >= (unsigned int)v43 || v41 >= v42 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v49, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v49);
          sub_233E40((__int64)v49);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v44 = (unsigned int *)sub_186B300(v30 - 2, v43);
        v30 = v44 + 2;
        *v44 = v42;
        *(_QWORD *)(a1 + 128) = v44 + 2;
      }
LABEL_59:
      *(v30 - 1) = v31;
      result = (__int64)memset(v30, 0, v31);
      goto LABEL_38;
    }
  }
  v29 = *(_DWORD *)(a1 + 88);
  if ( v29 )
  {
    v45 = (_QWORD *)sub_186B270(0x18u);
    v24 = v45 + 1;
    *v45 = 2;
    *(_QWORD *)(a1 + 120) = v45 + 1;
    goto LABEL_51;
  }
LABEL_36:
  v30 = *(_DWORD **)(a1 + 128);
  if ( v30 )
    goto LABEL_37;
LABEL_38:
  v32 = *(_QWORD **)(a1 + 200);
  if ( v32 )
  {
    result = *((unsigned int *)v32 - 1);
    v33 = &v32[result];
    if ( v32 >= v33 )
      goto LABEL_46;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          v35 = *(_QWORD *)(a1 + 192);
          v28 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_45;
      }
      result = sub_15D7BC0(v35, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_45:
    v32 = *(_QWORD **)(a1 + 200);
    if ( v32 )
LABEL_46:
      *((_DWORD *)v32 - 1) = 0;
  }
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  return result;
}

