__int64 __fastcall sub_B8C320(__int64 a1, double a2)
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
  unsigned int v21; // r13d
  _QWORD *v22; // r14
  __int64 i; // rax
  _DWORD *v24; // rax
  int *v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  void *v29; // r12
  char v30; // al
  char v32; // dl
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rbp
  __int64 v38; // rax
  char **exception; // rbp
  int *v40; // [rsp+0h] [rbp-F8h]
  unsigned int v41; // [rsp+Ch] [rbp-ECh]
  __int64 v42; // [rsp+10h] [rbp-E8h]
  void *v43; // [rsp+20h] [rbp-D8h]
  int *v44; // [rsp+20h] [rbp-D8h]
  _QWORD *v45; // [rsp+28h] [rbp-D0h]
  __int64 v46; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A0h]
  __int64 v49; // [rsp+60h] [rbp-98h]
  __int64 v50; // [rsp+68h] [rbp-90h]
  __int64 v51; // [rsp+70h] [rbp-88h] BYREF
  __int64 v52; // [rsp+78h] [rbp-80h]
  __int64 v53; // [rsp+80h] [rbp-78h]
  __int64 v54; // [rsp+88h] [rbp-70h]
  __int64 v55; // [rsp+90h] [rbp-68h] BYREF
  __int64 v56; // [rsp+98h] [rbp-60h]
  int v57; // [rsp+A0h] [rbp-58h] BYREF
  char v58; // [rsp+A4h] [rbp-54h]
  __int64 v59; // [rsp+A8h] [rbp-50h]
  int v60; // [rsp+B0h] [rbp-48h]

  v3 = *(_DWORD **)(a1 + 1112);
  v46 = 0;
  v45 = (_QWORD *)(a1 + 968);
  if ( v3 )
    *(v3 - 1) = 0;
  v4 = *(_QWORD *)(a1 + 1120);
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(_QWORD *)(a1 + 1128);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD *)(a1 + 1136);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(a1 + 992);
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
    v38 = sub_186B270(0xAu);
    v3 = (_DWORD *)(v38 + 8);
    v11 = 2;
    *(_QWORD *)v38 = 2;
    LODWORD(v10) = 0;
    *(_QWORD *)(a1 + 1112) = v38 + 8;
    if ( v8 > 2 )
      goto LABEL_13;
    *(_DWORD *)(v38 + 4) = v8;
    v15 = (char *)(v38 + 8);
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
        sub_B75C60(&v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v55);
        sub_233E40((__int64)&v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v3 - 2, v13);
      v3 = v14 + 2;
      *v14 = v12;
      v11 = v12;
      *(_QWORD *)(a1 + 1112) = v14 + 2;
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
  sub_8C3430((_QWORD *)(a1 + 1120), v8, 0xFFFFFFFF);
  sub_8C3430(&v46, v8, 0xFFFFFFFF);
  *(_QWORD *)(a1 + 1144) = 0;
  v17 = 0;
  if ( v9 > 0 )
  {
    do
    {
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 1120) + 4 * v17) != -1 )
      {
        if ( v9 == ++v17 )
          goto LABEL_23;
      }
      sub_B8B400((__int64)v45, v17++, &v46);
    }
    while ( v9 != v17 );
  }
LABEL_23:
  v18 = *(_QWORD ***)(a1 + 32);
  if ( !v18 || (v19 = *((unsigned int *)v18 - 1), !(_DWORD)v19) )
  {
LABEL_36:
    LODWORD(v29) = 1;
    goto LABEL_37;
  }
  v20 = 0;
  v21 = 0;
  v22 = *v18;
  v42 = 8 * v19;
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
    if ( v20 == v42 )
      goto LABEL_36;
    v22 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + v20);
  }
  BYTE4(v55) &= 0xFCu;
  v41 = v21 | 1;
  v25 = (int *)(*(_QWORD *)(a1 + 992) + 40LL * v21);
  v58 &= 0xFCu;
  v40 = v25;
  LODWORD(v55) = 0;
  v56 = 0;
  v57 = 1;
  v59 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v55, v25);
  v47 = 0;
  v26 = v40[8];
  v48 = 0;
  v60 = v26;
  v49 = 1;
  v50 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, (int *)&v55);
  v43 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v55);
  sub_182CBA0(v43, &v57);
  BYTE4(v55) &= 0xFCu;
  v27 = *(_QWORD *)(a1 + 992);
  v58 &= 0xFCu;
  LODWORD(v55) = 0;
  v56 = 0;
  v57 = 1;
  v59 = 0;
  v44 = (int *)(v27 + 40LL * (v21 | 1));
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v55, v44);
  v51 = 0;
  v52 = 0;
  v53 = 1;
  v28 = v44[8];
  v54 = 0;
  v60 = v28;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v51, (int *)&v55);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v55);
  sub_182CBA0(v29, &v57);
  v30 = (v53 & 0x100000000LL) == 0;
  if ( (v49 & 0x100000000LL) != 0 || (_DWORD)v49 != 1 )
  {
    if ( (v53 & 0x100000000LL) != 0 || (_DWORD)v53 != 1 )
      goto LABEL_35;
    v32 = 0;
    goto LABEL_46;
  }
  if ( (v47 & 0x100000000LL) != 0 )
    v32 = (*(_DWORD *)(v48 + 8) & 1) == 0;
  else
    v32 = (v47 & 1) == 0;
  if ( (v53 & 0x100000000LL) == 0 )
  {
    v30 = 0;
    if ( (_DWORD)v53 == 1 )
    {
LABEL_46:
      if ( (v51 & 0x100000000LL) != 0 )
        v30 = (*(_DWORD *)(v52 + 8) & 1) == 0;
      else
        v30 = (v51 & 1) == 0;
    }
  }
  if ( v30 == v32
    || (LOBYTE(v29) = *(_DWORD *)(v46 + 4LL * v21) == -1
                   || *(_DWORD *)(v46 + 4LL * (v21 | 1)) != *(_DWORD *)(v46 + 4LL * v21),
        (_BYTE)v29) )
  {
LABEL_35:
    sub_25A130((char *)&v51);
    sub_25A130((char *)&v47);
    goto LABEL_28;
  }
  v33 = *(_QWORD *)(a1 + 1336);
  if ( v33 )
    *(_DWORD *)(v33 - 4) = 0;
  v34 = *(_QWORD *)(a1 + 1344);
  if ( v34 )
    *(_DWORD *)(v34 - 4) = 0;
  if ( !(unsigned __int8)sub_B8B800(v45, v21, v41, 0xFFFFFFFF, (_DWORD **)(a1 + 1336), 1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 456);
  }
  v35 = v41;
  if ( !(unsigned __int8)sub_B8B800(v45, v41, v21, 0xFFFFFFFF, (_DWORD **)(a1 + 1336), 1) )
  {
    sub_1872CE0("");
    sub_1873130(114, 457);
  }
  if ( (unsigned int)sub_180B130(v45) )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v36 = sub_180B150(v45, v41);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v55, *v22, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v36, &v55);
      v35 = (__int64)"\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&v57);
      sub_186A500(&v57, "\n");
    }
    else
    {
      v37 = sub_180B150(v45, v41);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v55, *v22, *(_QWORD *)(a1 + 24), 0, 0, 0);
      sub_160E8B0(v37, &v55);
      v35 = (__int64)"\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&v57);
    }
  }
  sub_B86E00(a1, v35, a2);
  sub_25A130((char *)&v51);
  sub_25A130((char *)&v47);
LABEL_37:
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  return (unsigned int)v29;
}

