__int64 __fastcall sub_B261A0(__int64 a1, char *a2, double a3)
{
  char **exception; // rbx
  _QWORD *v4; // rcx
  _QWORD *v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  char *v9; // r12
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rdx
  char **v13; // rax
  __int64 v14; // r13
  char *v15; // r10
  char **v16; // rdx
  __int64 v17; // rdx
  int v18; // ebp
  unsigned int v19; // r14d
  char *v20; // r11
  __int64 v21; // r14
  char *v22; // r13
  char *v23; // rax
  char *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r13
  unsigned int v27; // r14d
  _QWORD *v28; // rax
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  char **v34; // rcx
  __int64 *v35; // r12
  __int64 *v36; // r13
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v40; // rdx
  int v41; // eax
  char *v42; // rax
  unsigned int v43; // r13d
  unsigned int v44; // ecx
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rdi
  __int64 v49; // r13
  _QWORD *v50; // rdx
  __int64 v51[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v52[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *((_QWORD **)a2 + 1);
  if ( !v4 )
    return 0;
  v6 = &v4[*((unsigned int *)v4 - 1)];
  if ( v6 == v4 )
    return 0;
  v7 = -1;
  v8 = 0;
  v9 = nullptr;
  v10 = 0;
LABEL_7:
  while ( 2 )
  {
    v12 = *v4;
    if ( *(_WORD *)(*v4 + 4LL) )
      goto LABEL_6;
    a2 = *(char **)(*(_QWORD *)(v12 + 16) + 24LL);
    if ( !a2 )
      goto LABEL_6;
    if ( *(_DWORD *)a2
      || *((_DWORD *)a2 + 1) != 8
      || *(_DWORD *)(v12 + 24) != 1
      || (v13 = *(char ***)(a1 + 96)) == nullptr
      || (v14 = *((unsigned int *)v13 - 1), !(_DWORD)v14) )
    {
LABEL_4:
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
      if ( v11 == *(_DWORD *)a2 )
      {
        LOBYTE(v11) = *((_DWORD *)a2 + 1) == 2;
        v10 |= v11;
      }
      goto LABEL_6;
    }
    v15 = *(char **)(v12 + 32);
    v16 = &v13[v14];
    while ( *v13 != v15 )
    {
      if ( v16 == ++v13 )
        goto LABEL_4;
    }
    v17 = *(unsigned int *)(a1 + 152);
    v18 = *((_DWORD *)v15 + 3);
    a2 = *(char **)(a1 + 144);
    v19 = v17 - 1;
    v17 *= 16;
    v20 = &a2[v17];
    v21 = 16LL * (v18 & v19);
    v22 = &a2[v21];
    v23 = &a2[v21];
    if ( v21 != v17 )
    {
      do
      {
        v24 = *(char **)v23;
        if ( *(_QWORD *)v23 > 1u )
        {
          if ( *((_DWORD *)v24 + 3) == v18 && v15 == v24 )
          {
LABEL_49:
            v25 = *((_DWORD *)v23 + 2);
            if ( v25 < v7 )
              goto LABEL_26;
            v10 = 1;
            if ( v25 == v7 )
            {
              a2 = (char *)v7;
              goto LABEL_52;
            }
LABEL_6:
            if ( v6 == ++v4 )
              goto LABEL_27;
            goto LABEL_7;
          }
        }
        else if ( !v24 )
        {
          goto LABEL_24;
        }
        v23 += 16;
      }
      while ( v20 != v23 );
    }
    for ( ; v22 != a2; a2 += 16 )
    {
      v42 = *(char **)a2;
      if ( *(_QWORD *)a2 > 1u )
      {
        if ( *((_DWORD *)v42 + 3) == v18 && v15 == v42 )
        {
          v23 = a2;
          goto LABEL_49;
        }
      }
      else if ( !v42 )
      {
        break;
      }
    }
LABEL_24:
    a2 = nullptr;
    if ( !v7 )
    {
LABEL_52:
      v40 = *(_QWORD *)(a1 + 16);
      ++v8;
      v41 = 214013 * *(_DWORD *)(v40 + 7504) + 2531011;
      *(_DWORD *)(v40 + 7504) = v41;
      if ( !((HIWORD(v41) & 0x7FFFu) % v8) )
      {
        v7 = (unsigned int)a2;
        v9 = v15;
      }
      v10 = 1;
      goto LABEL_6;
    }
    v25 = 0;
LABEL_26:
    a2 = *(char **)(a1 + 16);
    ++v4;
    v7 = v25;
    v9 = v15;
    v8 = 1;
    v10 = 1;
    *((_DWORD *)a2 + 1876) = 214013 * *((_DWORD *)a2 + 1876) + 2531011;
    if ( v6 != v4 )
      continue;
    break;
  }
LABEL_27:
  if ( !(_BYTE)v10 )
    return 0;
  ++*(_DWORD *)(a1 + 192);
  v26 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    if ( v26 )
    {
      v27 = *(_DWORD *)(v26 - 4);
      if ( v27 )
      {
LABEL_31:
        v6 = *(_QWORD **)(a1 + 96);
        v28 = (_QWORD *)(v26 + 8LL * v27);
        while ( (char *)*v6 != v9 )
        {
          if ( v28 == ++v6 )
            goto LABEL_38;
        }
        a2 = (char *)(v6 + 1);
        if ( v6 + 1 != v28 )
          memmove(v6, a2, (char *)(v28 - 1) - (char *)v6);
        v6 = *(_QWORD **)(a1 + 88);
        *(_DWORD *)(v26 - 4) = v27 - 1;
        if ( (*((_DWORD *)v9 + 2))-- == 1 )
        {
          a2 = v9;
          sub_15D7BC0(v6, v9);
        }
      }
    }
LABEL_38:
    v30 = *(_QWORD **)(a1 + 112);
    ++*((_DWORD *)v9 + 2);
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 != *((_DWORD *)v30 - 2) )
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = (char **)&v30[v32];
        goto LABEL_41;
      }
      v43 = (3 * v31 + 1) >> 1;
      v44 = 8 * v43 + 8;
      if ( 8 * v31 + 8 >= v44 || v31 >= v43 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v51, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v51);
        sub_233E40((__int64)v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v6 = v30 - 1;
      a2 = (char *)v44;
      v45 = (unsigned int *)sub_186B300(v30 - 1, v44);
      v46 = v45[1];
      *v45 = v43;
      *(_QWORD *)(a1 + 112) = v45 + 2;
      *(_QWORD *)&v45[2 * v46 + 2] = v9;
      v45[1] = v46 + 1;
      if ( (unsigned int)sub_180B130(v6) > 1 )
      {
LABEL_66:
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v47 = sub_180B150(v6, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v51, v9, *(_QWORD *)(a1 + 24), 0, 0, 0);
          sub_160E8B0(v47, v51);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v52);
          sub_186A500(v52, ")\n");
        }
        else
        {
          v49 = sub_180B150(v6, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v51, v9, *(_QWORD *)(a1 + 24), 0, 0, 0);
          sub_160E8B0(v49, v51);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v52);
        }
      }
    }
    else
    {
      v6 = &qword_18;
      v50 = (_QWORD *)sub_186B270(0x18u);
      *v50 = 2;
      v33 = 1;
      v30 = v50 + 1;
      *(_QWORD *)(a1 + 112) = v30;
      v34 = (char **)v30;
LABEL_41:
      *v34 = v9;
      *((_DWORD *)v30 - 1) = v33;
      if ( (unsigned int)sub_180B130(v6) > 1 )
        goto LABEL_66;
    }
  }
  else
  {
    if ( v26 )
    {
      v27 = *(_DWORD *)(v26 - 4);
      if ( v27 )
      {
        v9 = *(char **)(v26 + 8LL * (v27 - 1));
        if ( v9 )
          goto LABEL_31;
      }
    }
    if ( (unsigned int)sub_180B130(v6) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(v6, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v48 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v48, ")\n");
      }
      else
      {
        sub_180B150(v6, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  v35 = *(__int64 **)(a1 + 112);
  if ( !v35 )
    return v10;
  v36 = &v35[*((unsigned int *)v35 - 1)];
  if ( v36 == v35 )
    return v10;
  do
  {
    v37 = *v35++;
    v38 = sub_186B270(0x20u);
    *(_QWORD *)(v38 + 16) = 0;
    *(_QWORD *)(v38 + 24) = v37;
    *(_OWORD *)v38 = 0;
    sub_B23930(a1, v38);
  }
  while ( v36 != v35 );
  return v10;
}

