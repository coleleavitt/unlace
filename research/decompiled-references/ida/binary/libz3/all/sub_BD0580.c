__int64 __fastcall sub_BD0580(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // r13d
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdx
  unsigned int i; // r12d
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // r15
  _DWORD *v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rbx
  unsigned int v22; // eax
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  bool v25; // zf
  _QWORD *v26; // r12
  __int64 v27; // rsi
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int v31; // r15d
  unsigned int *v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // ebx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  _QWORD *v38; // rsi
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rax
  char **v42; // r12
  __int64 v43; // rdx
  char **exception; // r12
  __int64 v45; // rdx
  int v46; // [rsp+0h] [rbp-88h]
  int v47[2]; // [rsp+0h] [rbp-88h]
  int v48; // [rsp+8h] [rbp-80h]
  int v49[2]; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+18h] [rbp-70h]
  int v51[2]; // [rsp+20h] [rbp-68h] BYREF
  int v52[2]; // [rsp+28h] [rbp-60h]
  __int64 v53; // [rsp+30h] [rbp-58h] BYREF
  int v54; // [rsp+38h] [rbp-50h]
  int v55; // [rsp+40h] [rbp-48h]
  int v56; // [rsp+48h] [rbp-40h]
  int v57; // [rsp+50h] [rbp-38h]
  int v58; // [rsp+58h] [rbp-30h]
  int v59; // [rsp+60h] [rbp-28h]
  void *v60; // [rsp+68h] [rbp-20h]

  sub_1642120(
    a2 + 1728,
    a3,
    (int)v49,
    a4,
    a5,
    a6,
    a5,
    (int)v49,
    *(_QWORD *)(a2 + 24),
    nullptr,
    *(_QWORD *)(a2 + 24),
    0,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  sub_1642120(
    a2 + 1728,
    a4,
    (int)v51,
    v7,
    v8,
    v9,
    v46,
    v48,
    v49[0],
    ptr,
    v51[0],
    v52[0],
    v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v10 = *(_DWORD *)(a2 + 564);
  *(_DWORD *)(a2 + 564) = v10 + 1;
  v11 = *(_QWORD *)v49;
  v12 = ptr;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v11;
  if ( v12 )
  {
    v13 = nullptr;
    for ( i = 0; i < *((_DWORD *)v12 - 1); ++i )
    {
      while ( 1 )
      {
        v15 = v12[i];
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        if ( !v13 )
        {
          v40 = (_QWORD *)sub_186B270(0x18u);
          v13 = v40 + 1;
          *v40 = 2;
          v12 = ptr;
          v39 = 1;
          *(_QWORD *)(a1 + 8) = v13;
          v38 = v13;
          goto LABEL_43;
        }
        v16 = *((_DWORD *)v13 - 1);
        if ( v16 == *((_DWORD *)v13 - 2) )
          break;
        ++i;
        v13[v16] = v15;
        *((_DWORD *)v13 - 1) = v16 + 1;
        if ( i >= *((_DWORD *)v12 - 1) )
          goto LABEL_9;
      }
      v34 = (3 * v16 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v35 || v16 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(&v53, "Overflow encountered when expanding vector", v45);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v53);
        sub_233E40((__int64)&v53);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v13 - 1, v35);
      v13 = v36 + 2;
      v37 = v36[1];
      *v36 = v34;
      *(_QWORD *)(a1 + 8) = v36 + 2;
      v12 = ptr;
      LODWORD(v36) = v37;
      v38 = &v13[v37];
      v39 = (_DWORD)v36 + 1;
LABEL_43:
      *v38 = v15;
      *((_DWORD *)v13 - 1) = v39;
      if ( !v12 )
        break;
    }
  }
LABEL_9:
  v17 = *(_QWORD *)v51;
  v18 = *(_QWORD **)v52;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v17;
  if ( v18 )
  {
    v19 = nullptr;
    v20 = 0;
    while ( 2 )
    {
      if ( v20 >= *((_DWORD *)v18 - 1) )
      {
LABEL_17:
        *(_DWORD *)(a1 + 32) = v10;
        *(_QWORD *)(a1 + 40) = *(_QWORD *)v47;
        v23 = &v18[*((unsigned int *)v18 - 1)];
        if ( v18 >= v23 )
          goto LABEL_24;
        do
        {
          while ( 1 )
          {
            v24 = *v18;
            if ( *v18 )
            {
              v25 = (*(_DWORD *)(v24 + 8))-- == 1;
              if ( v25 )
                break;
            }
            if ( ++v18 >= v23 )
              goto LABEL_23;
          }
          sub_15D7BC0(*(_QWORD *)v51, v24);
          ++v18;
        }
        while ( v18 < v23 );
LABEL_23:
        v18 = *(_QWORD **)v52;
        if ( *(_QWORD *)v52 )
LABEL_24:
          sub_186B220(v18 - 1);
        v12 = ptr;
      }
      else
      {
        while ( 1 )
        {
          v21 = v18[v20];
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          if ( !v19 )
            break;
          v22 = *(v19 - 1);
          if ( v22 == *(v19 - 2) )
          {
            v29 = (3 * v22 + 1) >> 1;
            v30 = 8 * v29 + 8;
            v31 = v29;
            if ( 8 * v22 + 8 >= (unsigned int)v30 || v22 >= v29 )
            {
              v42 = (char **)__cxa_allocate_exception(0x28u);
              sub_154526(&v53, "Overflow encountered when expanding vector", v43);
              *v42 = (char *)off_1C63128;
              sub_2333C0(v42 + 1, &v53);
              sub_233E40((__int64)&v53);
              __cxa_throw(v42, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = (unsigned int *)sub_186B300(v19 - 2, v30);
            v33 = v32[1];
            *v32 = v31;
            v19 = v32 + 2;
            v18 = *(_QWORD **)v52;
            *(_QWORD *)(a1 + 24) = v32 + 2;
            *(_QWORD *)&v32[2 * v33 + 2] = v21;
            v32[1] = v33 + 1;
            if ( v18 )
              goto LABEL_39;
            goto LABEL_47;
          }
          ++v20;
          *(_QWORD *)&v19[2 * v22] = v21;
          *(v19 - 1) = v22 + 1;
          if ( v20 >= *((_DWORD *)v18 - 1) )
            goto LABEL_17;
        }
        v41 = sub_186B270(0x18u);
        v19 = (_DWORD *)(v41 + 8);
        v18 = *(_QWORD **)v52;
        *(_QWORD *)v41 = 2;
        *(_QWORD *)(a1 + 24) = v41 + 8;
        *(_QWORD *)(v41 + 8) = v21;
        *(_DWORD *)(v41 + 4) = 1;
        if ( v18 )
        {
LABEL_39:
          ++v20;
          continue;
        }
LABEL_47:
        v12 = ptr;
        *(_DWORD *)(a1 + 32) = v10;
        *(_QWORD *)(a1 + 40) = *(_QWORD *)v47;
      }
      break;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 32) = v10;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)v47;
  }
  if ( v12 )
  {
    v26 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v26 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v27 = *v12;
        if ( *v12 )
        {
          v25 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v12 >= v26 )
          goto LABEL_33;
      }
      sub_15D7BC0(*(_QWORD *)v49, v27);
      ++v12;
    }
    while ( v12 < v26 );
LABEL_33:
    v12 = ptr;
    if ( ptr )
LABEL_34:
      sub_186B220(v12 - 1);
  }
  return a1;
}

