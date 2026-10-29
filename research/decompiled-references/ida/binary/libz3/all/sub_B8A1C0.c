__int64 __fastcall sub_B8A1C0(__int64 a1, double a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // r13d
  __int64 v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // ebp
  size_t v13; // rsi
  unsigned int *v14; // rax
  char *v15; // rdi
  char *v16; // rdx
  __int64 v17; // rbp
  _QWORD **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  unsigned int v21; // r14d
  _QWORD *v22; // r15
  __int64 i; // rax
  _DWORD *v24; // rax
  int *v25; // rdx
  int *v26; // rdx
  void *v27; // r12
  char v28; // al
  char v30; // dl
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // rbp
  __int64 v36; // rax
  char **exception; // rbp
  unsigned int v38; // [rsp+Ch] [rbp-ECh]
  __int64 v39; // [rsp+10h] [rbp-E8h]
  void *v40; // [rsp+20h] [rbp-D8h]
  _QWORD *v41; // [rsp+28h] [rbp-D0h]
  __int64 v42; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A0h]
  __int64 v45; // [rsp+60h] [rbp-98h]
  __int64 v46; // [rsp+68h] [rbp-90h]
  __int64 v47; // [rsp+70h] [rbp-88h] BYREF
  __int64 v48; // [rsp+78h] [rbp-80h]
  __int64 v49; // [rsp+80h] [rbp-78h]
  __int64 v50; // [rsp+88h] [rbp-70h]
  __int64 v51; // [rsp+90h] [rbp-68h] BYREF
  __int64 v52; // [rsp+98h] [rbp-60h]
  int v53; // [rsp+A0h] [rbp-58h] BYREF
  char v54; // [rsp+A4h] [rbp-54h]
  __int64 v55; // [rsp+A8h] [rbp-50h]

  v3 = *(_DWORD **)(a1 + 1104);
  v42 = 0;
  v41 = (_QWORD *)(a1 + 960);
  if ( v3 )
    *(v3 - 1) = 0;
  v4 = *(_QWORD *)(a1 + 1112);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD *)(a1 + 1120);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD *)(a1 + 1128);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(a1 + 984);
  if ( !v7 )
  {
    if ( !v3 )
    {
      v9 = 0;
      v8 = 0;
      goto LABEL_18;
    }
    v8 = 0;
    v9 = 0;
    goto LABEL_64;
  }
  v8 = *(_DWORD *)(v7 - 4);
  v9 = v8;
  if ( !v3 )
  {
    if ( !v8 )
      goto LABEL_18;
    v36 = sub_186B270(0xAu);
    v3 = (_DWORD *)(v36 + 8);
    v11 = 2;
    *(_QWORD *)v36 = 2;
    LODWORD(v10) = 0;
    *(_QWORD *)(a1 + 1104) = v36 + 8;
    if ( v8 > 2 )
      goto LABEL_13;
    *(_DWORD *)(v36 + 4) = v8;
    v15 = (char *)(v36 + 8);
    v16 = (char *)v3 + v8;
    goto LABEL_17;
  }
  v10 = (unsigned int)*(v3 - 1);
  if ( (unsigned int)v10 >= v8 )
  {
LABEL_64:
    *(v3 - 1) = v8;
    goto LABEL_18;
  }
  v11 = *(v3 - 2);
  if ( v11 < v8 )
  {
    do
    {
LABEL_13:
      v12 = (3 * v11 + 1) >> 1;
      v13 = v12 + 8;
      if ( v11 + 8 >= (unsigned int)v13 || v11 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(&v51, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v51);
        sub_233E40((__int64)&v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v3 - 2, v13);
      v3 = v14 + 2;
      *v14 = v12;
      v11 = v12;
      *(_QWORD *)(a1 + 1104) = v14 + 2;
    }
    while ( v12 < v8 );
    v14[1] = v8;
    v15 = (char *)v3 + (unsigned int)v10;
    v16 = (char *)v3 + v8;
    if ( (_DWORD)v10 == v8 )
      goto LABEL_18;
    goto LABEL_17;
  }
  *(v3 - 1) = v8;
  v15 = (char *)v3 + v10;
  v16 = (char *)v3 + v8;
LABEL_17:
  memset(v15, 0, v16 - v15);
LABEL_18:
  sub_8C3430((_QWORD *)(a1 + 1112), v8, 0xFFFFFFFF);
  sub_8C3430(&v42, v8, 0xFFFFFFFF);
  *(_QWORD *)(a1 + 1136) = 0;
  v17 = 0;
  if ( v9 > 0 )
  {
    do
    {
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 1112) + 4 * v17) != -1 )
      {
        if ( v9 == ++v17 )
          goto LABEL_23;
      }
      sub_B893C0((__int64)v41, v17++, &v42);
    }
    while ( v9 != v17 );
  }
LABEL_23:
  v18 = *(_QWORD ***)(a1 + 32);
  if ( !v18 || (v19 = *((unsigned int *)v18 - 1), !(_DWORD)v19) )
  {
LABEL_36:
    LODWORD(v27) = 1;
    goto LABEL_37;
  }
  v20 = 0;
  v21 = 0;
  v22 = *v18;
  v39 = 8 * v19;
  for ( i = sub_15D1F10(**v18); ; i = sub_15D1F10(*v22) )
  {
    v24 = *(_DWORD **)(i + 24);
    if ( v24 )
    {
      if ( *v24 == 5 && v24[1] == 1 )
        break;
    }
LABEL_28:
    v20 += 8;
    v21 += 2;
    if ( v20 == v39 )
      goto LABEL_36;
    v22 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + v20);
  }
  BYTE4(v51) &= 0xFCu;
  v25 = (int *)(*(_QWORD *)(a1 + 984) + 32LL * v21);
  v38 = v21 | 1;
  v54 &= 0xFCu;
  LODWORD(v51) = 0;
  v52 = 0;
  v53 = 1;
  v55 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v51, v25);
  v43 = 0;
  v44 = 0;
  v45 = 1;
  v46 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, (int *)&v51);
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v51);
  sub_182CBA0(v40, &v53);
  BYTE4(v51) &= 0xFCu;
  v26 = (int *)(*(_QWORD *)(a1 + 984) + 32LL * (v21 | 1));
  v54 &= 0xFCu;
  LODWORD(v51) = 0;
  v52 = 0;
  v53 = 1;
  v55 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v51, v26);
  v47 = 0;
  v48 = 0;
  v49 = 1;
  v50 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, (int *)&v51);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v51);
  sub_182CBA0(v27, &v53);
  v28 = (v49 & 0x100000000LL) == 0;
  if ( (v45 & 0x100000000LL) != 0 || (_DWORD)v45 != 1 )
  {
    if ( (v49 & 0x100000000LL) != 0 || (_DWORD)v49 != 1 )
      goto LABEL_35;
    v30 = 0;
    goto LABEL_46;
  }
  if ( (v43 & 0x100000000LL) != 0 )
    v30 = (*(_DWORD *)(v44 + 8) & 1) == 0;
  else
    v30 = (v43 & 1) == 0;
  if ( (v49 & 0x100000000LL) == 0 )
  {
    v28 = 0;
    if ( (_DWORD)v49 == 1 )
    {
LABEL_46:
      if ( (v47 & 0x100000000LL) != 0 )
        v28 = (*(_DWORD *)(v48 + 8) & 1) == 0;
      else
        v28 = (v47 & 1) == 0;
    }
  }
  if ( v28 == v30
    || (LOBYTE(v27) = *(_DWORD *)(v42 + 4LL * v21) == -1
                   || *(_DWORD *)(v42 + 4LL * (v21 | 1)) != *(_DWORD *)(v42 + 4LL * v21),
        (_BYTE)v27) )
  {
LABEL_35:
    sub_25A130((char *)&v47);
    sub_25A130((char *)&v43);
    goto LABEL_28;
  }
  v31 = *(_QWORD *)(a1 + 1328);
  if ( v31 )
    *(_DWORD *)(v31 - 4) = 0;
  v32 = *(_QWORD *)(a1 + 1336);
  if ( v32 )
    *(_DWORD *)(v32 - 4) = 0;
  if ( !(unsigned __int8)sub_B897C0(v41, v21, v38, 0xFFFFFFFF, (_DWORD **)(a1 + 1328), 1u) )
  {
    sub_1872CE0("");
    sub_1873130(114, 456);
  }
  v33 = v38;
  if ( !(unsigned __int8)sub_B897C0(v41, v38, v21, 0xFFFFFFFF, (_DWORD **)(a1 + 1328), 1u) )
  {
    sub_1872CE0("");
    sub_1873130(114, 457);
  }
  if ( (unsigned int)sub_180B130(v41) )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v34 = sub_180B150(v41, v38);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v51, *v22, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v34, &v51);
      v33 = (__int64)"\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&v53);
      sub_186A500(&v53, "\n");
    }
    else
    {
      v35 = sub_180B150(v41, v38);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v51, *v22, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v35, &v51);
      v33 = (__int64)"\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&v53);
    }
  }
  sub_B86380(a1, v33, a2);
  sub_25A130((char *)&v47);
  sub_25A130((char *)&v43);
LABEL_37:
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  return (unsigned int)v27;
}

