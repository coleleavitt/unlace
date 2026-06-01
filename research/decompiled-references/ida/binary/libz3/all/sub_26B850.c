void __fastcall sub_26B850(__int64 a1, unsigned int a2, __int64 a3, const char *a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  unsigned int v6; // r13d
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  unsigned int v9; // r12d
  __int64 v10; // rbx
  char *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // cf
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  _QWORD *v24; // rdi
  char *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // r8
  char *v29; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  unsigned __int64 v38; // r8
  char *v39; // rsi
  char *v40; // r9
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // esi
  __int64 v44; // r10
  char *v45; // rbx
  size_t v46; // rax
  char *v47; // r13
  size_t v48; // rbp
  size_t v49; // rax
  unsigned int v50; // r8d
  unsigned __int64 v51; // rsi
  char *v52; // rdi
  char *v53; // r10
  unsigned int v54; // r8d
  unsigned int v55; // edi
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // r14
  unsigned __int64 v59; // rdi
  __int64 v60; // [rsp+8h] [rbp-80h]
  void *v64; // [rsp+30h] [rbp-58h] BYREF
  __int64 v65; // [rsp+38h] [rbp-50h]
  _QWORD v66[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a2 + 1;
  v7 = *(_QWORD **)a1;
  v8 = *(_QWORD **)(*(_QWORD *)a1 + 104LL);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 >= v6 )
      goto LABEL_3;
  }
  else
  {
    if ( a2 == -1 )
      goto LABEL_3;
    v9 = 0;
    v57 = (_QWORD *)sub_186B270(0x18u);
    v8 = v57 + 1;
    *v57 = 2;
    v7[13] = v57 + 1;
  }
  while ( 1 )
  {
    v34 = *((_DWORD *)v8 - 2);
    if ( v34 >= v6 )
      break;
    v31 = (3 * v34 + 1) >> 1;
    v32 = 8 * v31 + 8;
    if ( 8 * v34 + 8 >= (unsigned int)v32 || v34 >= v31 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_ACE4E((__int64 *)&v64, "Overflow encountered when expanding vector", v5);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v64);
      sub_233E40((__int64)&v64);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v33 = (unsigned int *)sub_186B300(v8 - 1, v32);
    v8 = v33 + 2;
    v7[13] = v33 + 2;
    *v33 = v31;
  }
  *((_DWORD *)v8 - 1) = v6;
  v35 = 8LL * v9;
  v36 = 8LL * v6;
  if ( v35 != v36 )
    memset(&v8[(unsigned __int64)v35 / 8], 0, v36 - v35);
LABEL_3:
  v10 = v7[15];
  v11 = (char *)v7[14];
  v12 = v10 - (_QWORD)v11;
  v13 = (v10 - (__int64)v11) >> 5;
  if ( v6 >= (unsigned int)v13 )
  {
    while ( 1 )
    {
      v64 = v66;
      v65 = 0;
      LOBYTE(v66[0]) = 0;
      if ( v7[16] != v10 )
      {
        *(_QWORD *)v10 = v10 + 16;
        if ( v64 == v66 )
        {
          *(_BYTE *)(v10 + 16) = v66[0];
        }
        else
        {
          *(_QWORD *)v10 = v64;
          *(_QWORD *)(v10 + 16) = v66[0];
        }
        v14 = v7[15];
        *(_QWORD *)(v10 + 8) = 0;
        v10 = v14 + 32;
        v7[15] = v14 + 32;
        goto LABEL_8;
      }
      if ( v13 == 0x3FFFFFFFFFFFFFFLL )
        JUMPOUT(0xAD0E6);
      v15 = 1;
      if ( v13 )
        v15 = v13;
      v16 = __CFADD__(v15, v13);
      v17 = v15 + v13;
      if ( v16 )
      {
        v60 = 0x7FFFFFFFFFFFFFE0LL;
        v19 = 0x7FFFFFFFFFFFFFE0LL;
      }
      else
      {
        v18 = 0x3FFFFFFFFFFFFFFLL;
        if ( v17 <= 0x3FFFFFFFFFFFFFFLL )
          v18 = v17;
        v60 = 32 * v18;
        v19 = 32 * v18;
      }
      v20 = operator new(v19);
      v21 = v65;
      v22 = (_QWORD *)(v20 + v12);
      v23 = v64;
      v24 = v22 + 2;
      *v22 = v22 + 2;
      if ( v23 == v66 )
      {
        v50 = v21 + 1;
        if ( (unsigned int)(v21 + 1) >= 8 )
        {
          v22[2] = v66[0];
          *(_QWORD *)((char *)v24 + v50 - 8) = *(_QWORD *)((char *)&v66[-1] + v50);
          v51 = (unsigned __int64)(v22 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v52 = (char *)v24 - v51;
          v53 = (char *)((char *)v66 - v52);
          v54 = ((_DWORD)v52 + v50) & 0xFFFFFFF8;
          if ( v54 >= 8 )
          {
            v55 = 0;
            do
            {
              v56 = v55;
              v55 += 8;
              *(_QWORD *)(v51 + v56) = *(_QWORD *)&v53[v56];
            }
            while ( v55 < (v54 & 0xFFFFFFF8) );
          }
        }
        else if ( (v50 & 4) != 0 )
        {
          *((_DWORD *)v22 + 4) = v66[0];
          *(_DWORD *)((char *)v24 + v50 - 4) = *(_DWORD *)((char *)&v65 + v50 + 4);
        }
        else if ( (_DWORD)v21 != -1 )
        {
          *((_BYTE *)v22 + 16) = v66[0];
          if ( (v50 & 2) != 0 )
            *(_WORD *)((char *)v24 + v50 - 2) = *(_WORD *)((char *)&v65 + v50 + 6);
        }
      }
      else
      {
        *v22 = v23;
        v22[2] = v66[0];
      }
      v22[1] = v21;
      v64 = v66;
      v65 = 0;
      LOBYTE(v66[0]) = 0;
      if ( v11 == (char *)v10 )
      {
        v10 = v20 + 32;
        if ( v11 )
          goto LABEL_36;
LABEL_61:
        v7[14] = v20;
        v7[15] = v10;
        v7[16] = v20 + v60;
        goto LABEL_8;
      }
      v25 = v11 + 16;
      v26 = (_QWORD *)v20;
      do
      {
        v27 = v26 + 2;
        v28 = *((_QWORD *)v25 - 1);
        *v26 = v26 + 2;
        v29 = *((char **)v25 - 2);
        if ( v29 != v25 )
        {
          *v26 = v29;
          v26[2] = *(_QWORD *)v25;
          goto LABEL_22;
        }
        v30 = v28 + 1;
        if ( (unsigned int)(v28 + 1) >= 8 )
        {
          *v27 = *(_QWORD *)v25;
          *(_QWORD *)((char *)v27 + v30 - 8) = *(_QWORD *)&v25[v30 - 8];
          v38 = (unsigned __int64)(v26 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v39 = (char *)v27 - v38;
          v40 = (char *)(v25 - v39);
          v41 = ((_DWORD)v39 + v30) & 0xFFFFFFF8;
          if ( v41 >= 8 )
          {
            v42 = v41 & 0xFFFFFFF8;
            v43 = 0;
            do
            {
              v44 = v43;
              v43 += 8;
              *(_QWORD *)(v38 + v44) = *(_QWORD *)&v40[v44];
            }
            while ( v43 < v42 );
          }
LABEL_28:
          v28 = *((_QWORD *)v25 - 1);
          goto LABEL_22;
        }
        if ( (v30 & 4) != 0 )
        {
          *(_DWORD *)v27 = *(_DWORD *)v25;
          *(_DWORD *)((char *)v27 + v30 - 4) = *(_DWORD *)&v25[v30 - 4];
          v28 = *((_QWORD *)v25 - 1);
        }
        else
        {
          if ( (_DWORD)v28 == -1 )
            goto LABEL_22;
          *(_BYTE *)v27 = *v25;
          if ( (v30 & 2) == 0 )
            goto LABEL_28;
          *(_WORD *)((char *)v27 + v30 - 2) = *(_WORD *)&v25[v30 - 2];
          v28 = *((_QWORD *)v25 - 1);
        }
LABEL_22:
        v25 += 32;
        v26[1] = v28;
        v26 += 4;
      }
      while ( (char *)(v10 + 16) != v25 );
      v10 = v20 + v10 - (_QWORD)v11 + 32;
      if ( !v11 )
        goto LABEL_61;
LABEL_36:
      operator delete(v11, v7[16] - (_QWORD)v11);
      v37 = v64;
      v7[14] = v20;
      v7[15] = v10;
      v7[16] = v20 + v60;
      if ( v37 != v66 )
      {
        operator delete(v37, v66[0] + 1LL);
        v10 = v7[15];
      }
LABEL_8:
      v11 = (char *)v7[14];
      v12 = v10 - (_QWORD)v11;
      v13 = (v10 - (__int64)v11) >> 5;
      if ( v6 < (unsigned int)v13 )
      {
        v8 = (_QWORD *)v7[13];
        break;
      }
    }
  }
  v8[a2] = a3;
  v45 = &v11[32 * a2];
  v46 = strlen(a4);
  v47 = *(char **)v45;
  v48 = v46;
  if ( *(char **)v45 == v45 + 16 )
  {
    if ( v46 <= 0xF )
      goto LABEL_46;
    if ( v46 > 0x1D )
    {
      v58 = v46;
      v47 = (char *)operator new(v46 + 1);
    }
    else
    {
      v58 = 30;
      v47 = (char *)operator new(0x1Fu);
    }
    goto LABEL_76;
  }
  v49 = *((_QWORD *)v45 + 2);
  if ( v49 < v48 )
  {
    v58 = 2 * v49;
    if ( v48 < 2 * v49 )
    {
      v59 = v58 + 1;
      if ( (v49 & 0x4000000000000000LL) != 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v59 = v48 + 1;
      v58 = v48;
    }
    v47 = (char *)operator new(v59);
    if ( v48 == 1 )
    {
      *v47 = *a4;
      goto LABEL_77;
    }
LABEL_76:
    memcpy(v47, a4, v48);
LABEL_77:
    if ( v45 + 16 != *(char **)v45 )
      operator delete(*(void **)v45, *((_QWORD *)v45 + 2) + 1LL);
    *(_QWORD *)v45 = v47;
    *((_QWORD *)v45 + 2) = v58;
    goto LABEL_51;
  }
LABEL_46:
  if ( a4 < v47 )
  {
    if ( !v48 )
      goto LABEL_51;
    goto LABEL_48;
  }
  if ( &v47[*((_QWORD *)v45 + 1)] >= a4 )
  {
    std::string::_M_replace_cold();
    v47 = *(char **)v45;
    goto LABEL_51;
  }
  if ( v48 )
  {
LABEL_48:
    if ( v48 == 1 )
      *v47 = *a4;
    else
      memcpy(*(void **)v45, a4, v48);
    v47 = *(char **)v45;
  }
LABEL_51:
  *((_QWORD *)v45 + 1) = v48;
  v47[v48] = 0;
}

