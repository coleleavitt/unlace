__int64 __fastcall sub_4EF0C0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char **v4; // r13
  char **exception; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  _QWORD *v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 result; // rax
  __int64 *v30; // r13
  unsigned __int64 v31; // r14
  __int64 v32; // rsi
  __int64 *v33; // rbp
  unsigned __int64 v34; // r13
  __int64 v35; // rsi
  __int64 *v36; // rbx
  unsigned __int64 v37; // rbp
  __int64 v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  __int64 *v42; // rsi
  unsigned int v43; // r8d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // r8d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rsi
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  unsigned int v55; // [rsp+14h] [rbp-A4h]
  unsigned int v56; // [rsp+14h] [rbp-A4h]
  __int64 v57; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v58; // [rsp+38h] [rbp-80h]
  __int64 v59; // [rsp+40h] [rbp-78h]
  __int64 v60; // [rsp+50h] [rbp-68h]
  __int64 v61[11]; // [rsp+60h] [rbp-58h] BYREF

  v8 = *a4;
  if ( *a4 )
  {
    v9 = a4[1];
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  *a4 = 0;
  v11 = sub_4D6490(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
  v58 = nullptr;
  v57 = v11;
  v12 = v11;
  v59 = v11;
  v60 = v11;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v13 = (_QWORD *)sub_186B270(0x18u);
  v13[1] = a2;
  v58 = v13 + 1;
  *v13 = 0x100000002LL;
  sub_15EE300(&v57);
  v14 = v58;
  if ( v58 )
  {
    v15 = nullptr;
    v16 = nullptr;
    v17 = 0;
    do
    {
      if ( v17 >= *((_DWORD *)v14 - 1) )
        break;
      v18 = v14[v17];
      if ( sub_4ED630(a1, v18) )
      {
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( v16 )
        {
          v19 = *((_DWORD *)v16 - 1);
          if ( v19 == *((_DWORD *)v16 - 2) )
          {
            v43 = (3 * v19 + 1) >> 1;
            v44 = 8 * v43 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v44 || v19 >= v43 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v55 = (3 * v19 + 1) >> 1;
            v45 = (unsigned int *)sub_186B300(v16 - 1, v44);
            v46 = v45[1];
            v16 = v45 + 2;
            *v45 = v55;
            LODWORD(v45) = v46;
            v22 = &v16[v46];
            v21 = (_DWORD)v45 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v16[v20];
          }
        }
        else
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          v16 = v52 + 1;
          *v52 = 2;
          v21 = 1;
          v22 = v16;
        }
        *v22 = v18;
        *((_DWORD *)v16 - 1) = v21;
      }
      else
      {
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        if ( v15 )
        {
          v39 = *((_DWORD *)v15 - 1);
          if ( v39 == *((_DWORD *)v15 - 2) )
          {
            v47 = (3 * v39 + 1) >> 1;
            v48 = 8 * v47 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v48 || v39 >= v47 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v56 = (3 * v39 + 1) >> 1;
            v49 = (unsigned int *)sub_186B300(v15 - 1, v48);
            v50 = v49[1];
            v15 = v49 + 2;
            *v49 = v56;
            LODWORD(v49) = v50;
            v42 = &v15[v50];
            v41 = (_DWORD)v49 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v15[v40];
          }
        }
        else
        {
          v51 = (_QWORD *)sub_186B270(0x18u);
          v15 = v51 + 1;
          *v51 = 2;
          v41 = 1;
          v42 = v15;
        }
        *v42 = v18;
        *((_DWORD *)v15 - 1) = v41;
      }
      v14 = v58;
      ++v17;
    }
    while ( v58 );
    if ( v16 )
      v23 = *((unsigned int *)v16 - 1);
    else
      v23 = 0;
  }
  else
  {
    v16 = nullptr;
    v15 = nullptr;
    v23 = 0;
  }
  v24 = sub_15EC1C0(v12, v23);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_4EBFD0(*a3, a3[1]);
  *a3 = v25;
  if ( v15 )
    v26 = *((unsigned int *)v15 - 1);
  else
    v26 = 0;
  v27 = sub_15EC1C0(v12, v26);
  v28 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  result = sub_4EBFD0(*a4, a4[1]);
  *a4 = v28;
  if ( v15 )
  {
    v30 = v15;
    v31 = (unsigned __int64)&v15[*((unsigned int *)v15 - 1)];
    if ( (unsigned __int64)v15 < v31 )
    {
      do
      {
        while ( 1 )
        {
          v32 = *v30;
          if ( *v30 )
          {
            v10 = (*(_DWORD *)(v32 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v30 >= v31 )
            goto LABEL_32;
        }
        ++v30;
        sub_15D7BC0(v12, v32);
      }
      while ( (unsigned __int64)v30 < v31 );
    }
LABEL_32:
    result = sub_186B220(v15 - 1);
  }
  if ( v16 )
  {
    v33 = v16;
    v34 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v34 )
    {
      do
      {
        while ( 1 )
        {
          v35 = *v33;
          if ( *v33 )
          {
            v10 = (*(_DWORD *)(v35 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v33 >= v34 )
            goto LABEL_40;
        }
        ++v33;
        sub_15D7BC0(v12, v35);
      }
      while ( (unsigned __int64)v33 < v34 );
    }
LABEL_40:
    result = sub_186B220(v16 - 1);
  }
  v36 = v58;
  if ( v58 )
  {
    result = *((unsigned int *)v58 - 1);
    v37 = (unsigned __int64)&v58[result];
    if ( (unsigned __int64)v58 >= v37 )
      return sub_186B220(v36 - 1);
    do
    {
      while ( 1 )
      {
        v38 = *v36;
        if ( *v36 )
        {
          v10 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( (unsigned __int64)++v36 >= v37 )
          goto LABEL_48;
      }
      result = sub_15D7BC0(v57, v38);
      ++v36;
    }
    while ( (unsigned __int64)v36 < v37 );
LABEL_48:
    v36 = v58;
    if ( v58 )
      return sub_186B220(v36 - 1);
  }
  return result;
}

