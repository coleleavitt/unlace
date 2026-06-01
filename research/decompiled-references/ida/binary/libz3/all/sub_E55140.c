__int64 __fastcall sub_E55140(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rdx
  int v4; // r15d
  __int64 v5; // rax
  _DWORD *v6; // rax
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  _QWORD *v24; // rbx
  _QWORD *i; // r12
  __int64 v26; // rax
  int v27; // r15d
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rdi
  __int64 result; // rax
  __int64 *v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // rsi
  unsigned int v41; // r12d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r12d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // ebx
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // r12d
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  char **v61; // rbp
  char **v62; // rbp
  char **exception; // rbp
  char **v64; // rbp
  __int64 v65; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v66; // [rsp+28h] [rbp-60h]
  __int64 v67[11]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  v66 = nullptr;
  v65 = v1;
  sub_E54900(a1, &v65);
  sub_180C250(a1 + 240);
  v2 = *(_QWORD *)(a1 + 224);
  if ( v2 )
  {
    v3 = *(_QWORD **)(a1 + 232);
    v4 = *(_DWORD *)(v2 - 4);
    if ( v3 )
      goto LABEL_3;
  }
  else
  {
    v3 = *(_QWORD **)(a1 + 232);
    v4 = 0;
    if ( v3 )
    {
LABEL_3:
      v5 = *((unsigned int *)v3 - 1);
      if ( (_DWORD)v5 == *((_DWORD *)v3 - 2) )
      {
        v41 = (unsigned int)(3 * v5 + 1) >> 1;
        v42 = 4 * v41 + 8;
        if ( 4 * (int)v5 + 8 >= (unsigned int)v42 || (unsigned int)v5 >= v41 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v67, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v67);
          sub_233E40((__int64)v67);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v43 = (unsigned int *)sub_186B300(v3 - 1, v42);
        v3 = v43 + 2;
        *v43 = v41;
        v44 = v43[1];
        *(_QWORD *)(a1 + 232) = v3;
        v6 = (_DWORD *)v3 + v44;
      }
      else
      {
        v6 = (_DWORD *)v3 + v5;
      }
      goto LABEL_5;
    }
  }
  v57 = (_QWORD *)sub_186B270(0x10u);
  v3 = v57 + 1;
  *v57 = 2;
  *(_QWORD *)(a1 + 232) = v57 + 1;
  v6 = v57 + 1;
LABEL_5:
  *v6 = v4;
  ++*((_DWORD *)v3 - 1);
  v7 = *(_DWORD *)(a1 + 128);
  v8 = sub_180C100(a1 + 240, 24);
  v9 = *(_QWORD **)(a1 + 224);
  v10 = v8;
  *(_QWORD *)v8 = &off_1C4C070;
  *(_QWORD *)(v8 + 8) = a1 + 128;
  *(_DWORD *)(v8 + 16) = v7;
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v53 = (3 * v11 + 1) >> 1;
      v54 = 8 * v53 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v54 || v11 >= v53 )
      {
        v61 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v67, "Overflow encountered when expanding vector");
        *v61 = (char *)off_1C63128;
        sub_2333C0(v61 + 1, v67);
        sub_233E40((__int64)v67);
        __cxa_throw(v61, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v55 = (unsigned int *)sub_186B300(v9 - 1, v54);
      v56 = v55[1];
      v9 = v55 + 2;
      *v55 = v53;
      *(_QWORD *)(a1 + 224) = v55 + 2;
      LODWORD(v55) = v56;
      v14 = &v9[v56];
      v13 = (_DWORD)v55 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v9[v12];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    v9 = v59 + 1;
    *v59 = 2;
    v13 = 1;
    *(_QWORD *)(a1 + 224) = v9;
    v14 = v9;
  }
  *v14 = v10;
  *((_DWORD *)v9 - 1) = v13;
  v15 = *(_QWORD *)(a1 + 216);
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  v17 = sub_180C100(a1 + 240, 24);
  v18 = *(_QWORD **)(a1 + 224);
  v19 = v17;
  *(_QWORD *)v17 = off_1C4C048;
  *(_DWORD *)(v17 + 8) = v16;
  *(_QWORD *)(v17 + 16) = a1 + 120;
  if ( v18 )
  {
    v20 = *((_DWORD *)v18 - 1);
    if ( v20 == *((_DWORD *)v18 - 2) )
    {
      v49 = (3 * v20 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v50 || v20 >= v49 )
      {
        v64 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v67, "Overflow encountered when expanding vector");
        *v64 = (char *)off_1C63128;
        sub_2333C0(v64 + 1, v67);
        sub_233E40((__int64)v67);
        __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v18 - 1, v50);
      v52 = v51[1];
      v18 = v51 + 2;
      *v51 = v49;
      *(_QWORD *)(a1 + 224) = v51 + 2;
      LODWORD(v51) = v52;
      v23 = &v18[v52];
      v22 = (_DWORD)v51 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v18[v21];
    }
  }
  else
  {
    v58 = (_QWORD *)sub_186B270(0x18u);
    v18 = v58 + 1;
    *v58 = 2;
    v22 = 1;
    *(_QWORD *)(a1 + 224) = v18;
    v23 = v18;
  }
  v24 = *(_QWORD **)(a1 + 432);
  *v23 = v19;
  *((_DWORD *)v18 - 1) = v22;
  if ( v24 )
  {
    for ( i = &v24[*((unsigned int *)v24 - 1)]; i != v24; ++v24 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 24LL))(*v24);
  }
  v26 = *(_QWORD *)(a1 + 112);
  if ( v26 )
    v27 = *(_DWORD *)(v26 - 4);
  else
    v27 = 0;
  v28 = sub_180C100(a1 + 240, 24);
  v29 = *(_QWORD **)(a1 + 224);
  v30 = v28;
  *(_QWORD *)v28 = off_1C5CEF0;
  *(_QWORD *)(v28 + 8) = a1 + 112;
  *(_DWORD *)(v28 + 16) = v27;
  if ( v29 )
  {
    v31 = *((_DWORD *)v29 - 1);
    if ( v31 == *((_DWORD *)v29 - 2) )
    {
      v45 = (3 * v31 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v46 || v31 >= v45 )
      {
        v62 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v67, "Overflow encountered when expanding vector");
        *v62 = (char *)off_1C63128;
        sub_2333C0(v62 + 1, v67);
        sub_233E40((__int64)v67);
        __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v47 = (unsigned int *)sub_186B300(v29 - 1, v46);
      v48 = v47[1];
      v29 = v47 + 2;
      *v47 = v45;
      *(_QWORD *)(a1 + 224) = v47 + 2;
      LODWORD(v47) = v48;
      v34 = &v29[v48];
      v33 = (_DWORD)v47 + 1;
    }
    else
    {
      v32 = v31;
      v33 = v31 + 1;
      v34 = &v29[v32];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x18u);
    v29 = v60 + 1;
    *v60 = 2;
    v33 = 1;
    *(_QWORD *)(a1 + 224) = v29;
    v34 = v29;
  }
  v35 = *(_QWORD *)(a1 + 104);
  *v34 = v30;
  *((_DWORD *)v29 - 1) = v33;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 192LL))(v35);
  v37 = v66;
  if ( v66 )
  {
    result = *((unsigned int *)v66 - 1);
    v38 = (unsigned __int64)&v66[result];
    if ( (unsigned __int64)v66 >= v38 )
      return sub_186B220(v37 - 1);
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          if ( (*(_DWORD *)(v39 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v37 >= v38 )
          goto LABEL_28;
      }
      result = sub_15D7BC0(v65, v39);
      ++v37;
    }
    while ( (unsigned __int64)v37 < v38 );
LABEL_28:
    v37 = v66;
    if ( v66 )
      return sub_186B220(v37 - 1);
  }
  return result;
}

