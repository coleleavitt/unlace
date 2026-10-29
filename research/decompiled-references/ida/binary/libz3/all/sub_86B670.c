__int64 __fastcall sub_86B670(__int64 a1, unsigned int *a2)
{
  char **v2; // rbx
  char **exception; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  char *v7; // rbp
  char *v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // r15
  unsigned int v11; // ebp
  int v12; // r8d
  int v13; // r9d
  unsigned int *v14; // rax
  unsigned int v15; // r13d
  void *v16; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rbx
  unsigned int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  _QWORD *v29; // rcx
  unsigned int v30; // r14d
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 *v38; // rcx
  unsigned int v39; // edx
  size_t v40; // rsi
  unsigned int *v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // r15d
  unsigned int v47; // ecx
  unsigned int *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  unsigned int v51; // [rsp+8h] [rbp-C0h]
  _QWORD *v52; // [rsp+8h] [rbp-C0h]
  void *v53; // [rsp+10h] [rbp-B8h]
  unsigned int v54; // [rsp+10h] [rbp-B8h]
  void *v55; // [rsp+18h] [rbp-B0h]
  void *v56; // [rsp+18h] [rbp-B0h]
  void *v57; // [rsp+18h] [rbp-B0h]
  unsigned int v58; // [rsp+20h] [rbp-A8h] BYREF
  char v59; // [rsp+24h] [rbp-A4h] BYREF
  unsigned int *v60; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v61[2]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v62[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v63[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v64[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v65[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v66[9]; // [rsp+80h] [rbp-48h] BYREF

  v58 = 0;
  v60 = nullptr;
  if ( !(unsigned __int8)sub_1674450(a1 + 128, a2, &v60, &v58) )
  {
    sub_1872CE0("");
    sub_1873130(114, 668);
  }
  v4 = sub_7E4F00(a1, v60);
  v5 = *(unsigned int *)(a1 + 12);
  v6 = v4;
  v7 = (char *)(v4 + 88);
  if ( *(int *)(v4 + 88) >> 8 != -1 )
  {
    v8 = (char *)(v4 + 88);
    while ( (_DWORD)v5 != *v8 )
    {
      v8 = *((char **)v8 + 1);
      if ( !v8 )
        goto LABEL_19;
    }
    if ( *(int *)v8 >> 8 != -1 )
      goto LABEL_9;
  }
LABEL_19:
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v6, v5);
  LODWORD(v5) = *(_DWORD *)(a1 + 12);
  if ( *(int *)(v6 + 88) >> 8 == -1 )
  {
LABEL_20:
    v10 = 0x7FFFFFFF8LL;
    v9 = -1;
  }
  else
  {
LABEL_9:
    while ( (_DWORD)v5 != *v7 )
    {
      v7 = *((char **)v7 + 1);
      if ( !v7 )
        goto LABEL_20;
    }
    v9 = *(int *)v7 >> 8;
    v10 = 8LL * v9;
  }
  v11 = sub_7E4F30(a1, a2);
  v14 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 600) + v10) + 4LL * v58);
  v15 = *v14;
  if ( *v14 != -2 )
  {
    if ( v15 != v11 )
    {
      sub_7E5400(a1, v15, v11 ^ 1, nullptr);
      sub_7E5400(a1, v15 ^ 1, v11, nullptr);
    }
    goto LABEL_14;
  }
  *v14 = v11;
  v22 = v11 >> 1;
  v23 = sub_7E4EC0(a1);
  v24 = sub_180C100(v23, 40);
  *(_OWORD *)(v24 + 8) = 0;
  v25 = v24;
  *(_DWORD *)v24 = v11 >> 1;
  *(_QWORD *)(v24 + 24) = 0;
  *(_QWORD *)(v24 + 32) = 0xFFFFFFFEFFFFFFFELL;
  v26 = sub_7E4EC0(a1);
  v27 = sub_180C100(v26, 16);
  v28 = v58;
  v29 = *(_QWORD **)(a1 + 624);
  *(_DWORD *)v27 = v9;
  *(_DWORD *)(v27 + 4) = v28;
  *(_QWORD *)(v27 + 8) = 0;
  *(_QWORD *)(v25 + 16) = v27;
  if ( !v29 )
  {
    v30 = v22 + 1;
    v45 = (_QWORD *)sub_186B270(0x18u);
    v54 = 0;
    v29 = v45 + 1;
    *v45 = 2;
    *(_QWORD *)(a1 + 624) = v45 + 1;
    goto LABEL_31;
  }
  v30 = v22 + 1;
  v54 = *((_DWORD *)v29 - 1);
  if ( v22 >= v54 )
  {
LABEL_31:
    while ( 1 )
    {
      v42 = *((_DWORD *)v29 - 2);
      if ( v42 >= v30 )
        break;
      v39 = (3 * v42 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v42 + 8 >= (unsigned int)v40 || v42 >= v39 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (3 * v42 + 1) >> 1;
      v41 = (unsigned int *)sub_186B300(v29 - 1, v40);
      v29 = v41 + 2;
      *(_QWORD *)(a1 + 624) = v41 + 2;
      *v41 = v51;
    }
    *((_DWORD *)v29 - 1) = v30;
    v43 = 8LL * v30;
    v44 = 8LL * v54;
    if ( v44 != v43 )
    {
      v52 = v29;
      memset(&v29[(unsigned __int64)v44 / 8], 0, v43 - v44);
      v29 = v52;
    }
  }
  v31 = *(_QWORD *)(a1 + 80);
  v29[v22] = v25;
  v32 = sub_180C100(v31 + 2144, 24);
  v33 = *(_QWORD **)(v31 + 2128);
  v34 = v32;
  *(_QWORD *)v32 = off_1C556D8;
  *(_QWORD *)(v32 + 8) = a1;
  *(_DWORD *)(v32 + 16) = v22;
  if ( v33 )
  {
    v35 = *((_DWORD *)v33 - 1);
    if ( v35 == *((_DWORD *)v33 - 2) )
    {
      v46 = (3 * v35 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v35 + 8 >= v47 || v35 >= v46 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v33 - 1, v47);
      v49 = v48[1];
      v33 = v48 + 2;
      *(_QWORD *)(v31 + 2128) = v48 + 2;
      *v48 = v46;
      LODWORD(v48) = v49;
      v38 = &v33[v49];
      v37 = (_DWORD)v48 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v33[v36];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    *v50 = 2;
    v37 = 1;
    v33 = v50 + 1;
    *(_QWORD *)(v31 + 2128) = v33;
    v38 = v33;
  }
  *v38 = v34;
  *((_DWORD *)v33 - 1) = v37;
LABEL_14:
  v61[0] = 0;
  v61[1] = 0;
  v62[0] = 1;
  v62[1] = 0;
  if ( (unsigned __int8)sub_1673B50((int)a1 + 128, (_DWORD)v60, (unsigned int)v61, (unsigned int)&v59, v12, v13) )
  {
    v63[0] = 0;
    v63[1] = 0;
    v64[0] = 1;
    v64[1] = 0;
    sub_17F6290(v65, v58);
    v53 = qword_1C7F2C0;
    sub_1833EB0(qword_1C7F2C0, v61, v65, v63);
    sub_182CBA0(v53, v64);
    BYTE4(v64[0]) &= ~1u;
    LODWORD(v64[0]) = 1;
    v55 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v65);
    sub_182CBA0(v55, v66);
    v65[0] = 2;
    v65[1] = 0;
    v66[0] = 1;
    v66[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v66);
    BYTE4(v66[0]) &= ~1u;
    LODWORD(v66[0]) = 1;
    v56 = qword_1C7F2C0;
    sub_1832AB0(qword_1C7F2C0, v63, v65, v63);
    sub_182CBA0(v56, v64);
    BYTE4(v64[0]) &= ~1u;
    LODWORD(v64[0]) = 1;
    v57 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v65);
    sub_182CBA0(v57, v66);
    if ( !LODWORD(v63[0]) )
      v11 ^= 1u;
    sub_7E5160(a1, v11, nullptr, v18, v19, v20);
    v21 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v63);
    sub_182CBA0(v21, v64);
  }
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v61);
  return sub_182CBA0(v16, v62);
}

