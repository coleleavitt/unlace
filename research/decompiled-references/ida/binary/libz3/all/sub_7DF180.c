__int64 __fastcall sub_7DF180(__int64 a1, __int64 a2, double a3)
{
  char **exception; // rbx
  int *v4; // rbp
  int *v5; // rcx
  __int64 v7; // r13
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  __int64 v10; // rbx
  unsigned __int8 v11; // dl
  unsigned int *v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebp
  __int64 v20; // rax
  int v21; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rbx
  unsigned int v31; // ebx
  unsigned int v32; // ecx
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rbx
  _QWORD *v37; // rdx
  unsigned int v38; // [rsp+0h] [rbp-88h]
  unsigned __int8 v39; // [rsp+7h] [rbp-81h]
  int v40[2]; // [rsp+8h] [rbp-80h]
  __int64 v41[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v42[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(int **)a2;
  if ( !*(_QWORD *)a2 )
    return 0;
  v5 = &v4[*(v4 - 1)];
  if ( v4 == v5 )
    return 0;
  v38 = 0;
  v7 = 0;
  v8 = 0;
  v9 = -1;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 80);
      v14 = *v4;
      v10 = *(_QWORD *)(v13 + 2328);
      v15 = (unsigned int)*v4 >> 1;
      if ( !v10 )
        goto LABEL_5;
      if ( (unsigned int)v15 < *(_DWORD *)(v10 - 4) )
      {
        v10 = *(_QWORD *)(v10 + 8 * v15);
LABEL_5:
        v11 = v14 & 1;
        if ( (v14 & 1) == 0 )
          goto LABEL_6;
        goto LABEL_14;
      }
      v10 = 0;
      v11 = v14 & 1;
      if ( (v14 & 1) == 0 )
        goto LABEL_6;
LABEL_14:
      v16 = *(_QWORD **)(a1 + 152);
      if ( !v16 || (a2 = *((unsigned int *)v16 - 1), !(_DWORD)a2) )
      {
LABEL_6:
        if ( !*(_WORD *)(v10 + 4) )
        {
          v12 = *(unsigned int **)(*(_QWORD *)(v10 + 16) + 24LL);
          if ( v12 )
          {
            v13 = *v12;
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) == (_DWORD)v13 )
            {
              LOBYTE(v12) = v12[1] == 2;
              v8 |= (unsigned int)v12;
            }
          }
        }
        goto LABEL_10;
      }
      a2 = (__int64)&v16[a2];
      while ( *v16 != v10 )
      {
        if ( (_QWORD *)a2 == ++v16 )
          goto LABEL_6;
      }
      a2 = v10;
      *(_QWORD *)v40 = v5;
      v39 = v11;
      v17 = sub_79D990(v13, v10);
      v5 = *(int **)v40;
      if ( v17 < v9 )
        break;
      v8 = v39;
      if ( v17 == v9 )
      {
        v23 = *(_QWORD *)(a1 + 24);
        a2 = ++v38;
        v24 = 214013 * *(_DWORD *)(v23 + 2356) + 2531011;
        *(_DWORD *)(v23 + 2356) = v24;
        if ( !((HIWORD(v24) & 0x7FFFu) % v38) )
          v7 = v10;
      }
LABEL_10:
      if ( v5 == ++v4 )
        goto LABEL_21;
    }
    v13 = *(_QWORD *)(a1 + 24);
    ++v4;
    v7 = v10;
    v9 = v17;
    v38 = 1;
    v8 = v39;
    a2 = (unsigned int)(214013 * *(_DWORD *)(v13 + 2356) + 2531011);
    *(_DWORD *)(v13 + 2356) = a2;
  }
  while ( *(int **)v40 != v4 );
LABEL_21:
  if ( !(_BYTE)v8 )
    return 0;
  ++*(_DWORD *)(a1 + 248);
  v18 = *(_QWORD *)(a1 + 152);
  if ( v7 )
  {
    if ( v18 && (v19 = *(_DWORD *)(v18 - 4)) != 0 )
    {
LABEL_25:
      v13 = *(_QWORD *)(a1 + 152);
      v20 = v18 + 8LL * v19;
      while ( *(_QWORD *)v13 != v7 )
      {
        v13 += 8;
        if ( v13 == v20 )
          goto LABEL_37;
      }
      a2 = v13 + 8;
      if ( v13 + 8 != v20 )
        memmove((void *)v13, (const void *)a2, v20 - 8 - v13);
      v13 = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(v18 - 4) = v19 - 1;
      v21 = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(v7 + 8) = v21 - 1;
      if ( v21 == 1 )
      {
        a2 = v7;
        sub_15D7BC0(v13, v7);
        v21 = *(_DWORD *)(v7 + 8) + 1;
      }
    }
    else
    {
LABEL_37:
      v21 = *(_DWORD *)(v7 + 8) + 1;
    }
    v25 = *(_QWORD **)(a1 + 168);
    *(_DWORD *)(v7 + 8) = v21;
    if ( v25 )
    {
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 == *((_DWORD *)v25 - 2) )
      {
        v31 = (3 * v26 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v26 + 8 >= v32 || v26 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v41, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v41);
          sub_233E40((__int64)v41);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a2 = v32;
        v13 = (__int64)(v25 - 1);
        v33 = (unsigned int *)sub_186B300(v25 - 1, v32);
        v34 = v33[1];
        v25 = v33 + 2;
        *v33 = v31;
        *(_QWORD *)(a1 + 168) = v33 + 2;
        LODWORD(v33) = v34;
        v29 = &v25[v34];
        v28 = (_DWORD)v33 + 1;
      }
      else
      {
        v27 = v26;
        v28 = v26 + 1;
        v29 = &v25[v27];
      }
    }
    else
    {
      v13 = 24;
      v37 = (_QWORD *)sub_186B270(0x18u);
      *v37 = 2;
      v28 = 1;
      v25 = v37 + 1;
      *(_QWORD *)(a1 + 168) = v25;
      v29 = v25;
    }
    *v29 = v7;
    *((_DWORD *)v25 - 1) = v28;
    if ( (unsigned int)sub_180B130(v13) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v30 = sub_180B150(v13, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v41, v7, *(_QWORD *)(a1 + 72), 0, 0, 0);
        sub_160E8B0(v30, v41);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v42);
        sub_186A500(v42, ")\n");
      }
      else
      {
        v36 = sub_180B150(v13, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v41, v7, *(_QWORD *)(a1 + 72), 0, 0, 0);
        sub_160E8B0(v36, v41);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v42);
      }
    }
  }
  else
  {
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 - 4);
      if ( v19 )
      {
        v7 = *(_QWORD *)(v18 + 8LL * (v19 - 1));
        if ( v7 )
          goto LABEL_25;
      }
    }
    if ( (unsigned int)sub_180B130(v13) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v35 = sub_180B150(v13, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v35, "(smt.recfun :increment-round)\n");
      }
      else
      {
        sub_180B150(v13, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return v8;
}

