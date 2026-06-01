__int64 __fastcall sub_702C60(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _BYTE *v16; // rbx
  _BYTE *v17; // rdx
  _BYTE *v18; // rsi
  _QWORD *v19; // rcx
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  _DWORD *v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // rbp
  unsigned int j; // ebx
  __int64 v27; // rsi
  int v28; // eax
  _DWORD *v29; // rsi
  unsigned int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // ecx
  unsigned int *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // ebp
  unsigned int v36; // edx
  unsigned int *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  unsigned int i; // ebp
  int v44; // eax
  _BYTE *v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // r13d
  unsigned int *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  char **v52; // rbp
  char **v53; // rbp
  char **exception; // rbp
  char **v55; // rbp
  _DWORD *v56; // [rsp+8h] [rbp-50h] BYREF
  __int64 v57[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(unsigned int *)(a1 + 168);
  v4 = *(_QWORD *)(a1 + 160);
  v56 = nullptr;
  v5 = v4 + 20 * v3;
  if ( v4 != v5 )
  {
    while ( *(_DWORD *)(v4 + 4) != 2 )
    {
      v4 += 20;
      if ( v5 == v4 )
        goto LABEL_14;
    }
    if ( v4 != v5 )
    {
      v6 = (_QWORD *)sub_186B270(0x10u);
      *v6 = 2;
      v7 = v6 + 1;
      v56 = v7;
      v8 = v7;
      while ( 1 )
      {
        *v7 = *(_DWORD *)(v4 + 8);
        v9 = v4 + 20;
        ++*(v8 - 1);
        if ( v5 == v4 + 20 )
          break;
        while ( 1 )
        {
          v4 = v9;
          if ( *(_DWORD *)(v9 + 4) == 2 )
            break;
          v9 += 20;
          if ( v5 == v9 )
            goto LABEL_14;
        }
        if ( v5 == v9 )
          break;
        v10 = (unsigned int)*(v8 - 1);
        if ( (_DWORD)v10 == *(v8 - 2) )
        {
          v12 = (unsigned int)(3 * v10 + 1) >> 1;
          v13 = 4 * v12 + 8;
          if ( 4 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0(v57, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v57);
            sub_233E40((__int64)v57);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(v8 - 2, v13);
          v8 = v14 + 2;
          *v14 = v12;
          v15 = v14[1];
          v56 = v8;
          v7 = &v8[v15];
        }
        else
        {
          v7 = &v8[v10];
        }
      }
    }
  }
LABEL_14:
  sub_1144C10(a1 + 16, a1 + 40);
  sub_11431D0(a1 + 16, &v56, a1 + 72);
  *(_BYTE *)(a1 + 120) = 1;
  if ( a2 )
  {
    v16 = *(_BYTE **)(a1 + 64);
    v17 = *(_BYTE **)(a1 + 104);
    v18 = v16;
    if ( !v17 )
    {
      if ( v16 && *((_DWORD *)v16 - 1) )
      {
        v42 = (_QWORD *)sub_186B270(0xAu);
        v18 = *(_BYTE **)(a1 + 64);
        *v42 = 2;
        i = 0;
        v17 = v42 + 1;
        v44 = 1;
        *(_QWORD *)(a1 + 104) = v17;
        v45 = v17;
        goto LABEL_57;
      }
      goto LABEL_31;
    }
    *((_DWORD *)v17 - 1) = 0;
    if ( v16 )
    {
      if ( *((_DWORD *)v16 - 1) )
      {
        for ( i = 0; ; v16 = &v18[i] )
        {
          v46 = *((_DWORD *)v17 - 1);
          if ( v46 == *((_DWORD *)v17 - 2) )
          {
            v48 = (3 * v46 + 1) >> 1;
            if ( v46 + 8 >= v48 + 8 || v46 >= v48 )
            {
              v53 = (char **)__cxa_allocate_exception(0x28u);
              sub_6FFCA0(v57, "Overflow encountered when expanding vector");
              *v53 = (char *)off_1C63128;
              sub_2333C0(v53 + 1, v57);
              sub_233E40((__int64)v57);
              __cxa_throw(v53, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v49 = (unsigned int *)sub_186B300(v17 - 8, v48 + 8);
            v50 = v49[1];
            v17 = v49 + 2;
            v18 = *(_BYTE **)(a1 + 64);
            *v49 = v48;
            *(_QWORD *)(a1 + 104) = v49 + 2;
            LODWORD(v49) = v50;
            v45 = &v17[v50];
            v44 = (_DWORD)v49 + 1;
          }
          else
          {
            v47 = v46;
            v44 = v46 + 1;
            v45 = &v17[v47];
          }
LABEL_57:
          ++i;
          *v45 = *v16;
          *((_DWORD *)v17 - 1) = v44;
          if ( !v18 || i >= *((_DWORD *)v18 - 1) )
            break;
        }
      }
      v19 = *(_QWORD **)(a1 + 88);
      v20 = *((_DWORD *)v17 - 1);
      if ( v19 )
      {
        v21 = *((_DWORD *)v19 - 1);
        if ( v21 >= v20 )
          goto LABEL_26;
      }
      else
      {
        if ( !v20 )
          goto LABEL_31;
        v51 = (_QWORD *)sub_186B270(0x18u);
        *v51 = 2;
        v21 = 0;
        v19 = v51 + 1;
        *(_QWORD *)(a1 + 88) = v51 + 1;
      }
      while ( 1 )
      {
        v38 = *((_DWORD *)v19 - 2);
        if ( v38 >= v20 )
          break;
        v35 = (3 * v38 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v38 + 8 >= v36 || v38 >= v35 )
        {
          v55 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v57, "Overflow encountered when expanding vector");
          *v55 = (char *)off_1C63128;
          sub_2333C0(v55 + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v19 - 1, v36);
        v19 = v37 + 2;
        *v37 = v35;
        *(_QWORD *)(a1 + 88) = v37 + 2;
      }
      *((_DWORD *)v19 - 1) = v20;
      v39 = 8LL * v21;
      v40 = 8LL * v20;
      if ( v39 != v40 )
        memset(&v19[(unsigned __int64)v39 / 8], 0, v40 - v39);
      v17 = *(_BYTE **)(a1 + 104);
      if ( v17 )
      {
LABEL_26:
        v22 = 0;
        while ( v22 < *((_DWORD *)v17 - 1) )
        {
          if ( v17[v22] )
          {
            sub_17B32B0(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 88) + 8LL * v22, 8LL * v22 + *(_QWORD *)(a1 + 48));
            v17 = *(_BYTE **)(a1 + 104);
            ++v22;
            if ( !v17 )
              break;
          }
          else
          {
            v17 = *(_BYTE **)(a1 + 104);
            ++v22;
            if ( !v17 )
              break;
          }
        }
      }
    }
LABEL_31:
    v23 = *(_DWORD **)(a1 + 112);
    if ( v23 )
    {
      v24 = *(_DWORD **)(a1 + 72);
      *(v23 - 1) = 0;
      v25 = v24;
      if ( v24 && *(v24 - 1) )
      {
        for ( j = 0; ; v25 = &v24[j] )
        {
          v30 = *(v23 - 1);
          if ( v30 == *(v23 - 2) )
          {
            v31 = (3 * v30 + 1) >> 1;
            v32 = 4 * v31 + 8;
            if ( 4 * v30 + 8 >= v32 || v30 >= v31 )
            {
              v52 = (char **)__cxa_allocate_exception(0x28u);
              sub_6FFCA0(v57, "Overflow encountered when expanding vector");
              *v52 = (char *)off_1C63128;
              sub_2333C0(v52 + 1, v57);
              sub_233E40((__int64)v57);
              __cxa_throw(v52, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v33 = (unsigned int *)sub_186B300(v23 - 2, v32);
            v34 = v33[1];
            v23 = v33 + 2;
            *v33 = v31;
            *(_QWORD *)(a1 + 112) = v33 + 2;
            LODWORD(v33) = v34;
            v29 = &v23[v34];
            v24 = *(_DWORD **)(a1 + 72);
            v28 = (_DWORD)v33 + 1;
          }
          else
          {
            v27 = v30;
            v28 = v30 + 1;
            v29 = &v23[v27];
          }
LABEL_36:
          ++j;
          *v29 = *v25;
          *(v23 - 1) = v28;
          if ( !v24 || j >= *(v24 - 1) )
            break;
        }
      }
    }
    else
    {
      v25 = *(_DWORD **)(a1 + 72);
      if ( v25 && *(v25 - 1) )
      {
        v41 = (_QWORD *)sub_186B270(0x10u);
        *v41 = 2;
        v24 = *(_DWORD **)(a1 + 72);
        j = 0;
        v23 = v41 + 1;
        v28 = 1;
        *(_QWORD *)(a1 + 112) = v23;
        v29 = v23;
        goto LABEL_36;
      }
    }
  }
  result = (__int64)v56;
  if ( v56 )
    return sub_186B220(v56 - 2);
  return result;
}

