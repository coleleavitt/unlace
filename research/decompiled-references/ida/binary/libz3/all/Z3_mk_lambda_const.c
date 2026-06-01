__int64 __fastcall Z3_mk_lambda_const(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char **exception; // r15
  char **v5; // r15
  char **v6; // r14
  char v7; // al
  __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // r13
  int v13; // edx
  _DWORD *v14; // r12
  _QWORD *v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // edx
  size_t v28; // rsi
  __int64 v29; // rax
  unsigned int v30; // r8d
  size_t v31; // rsi
  _DWORD *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  unsigned int v35; // ecx
  size_t v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rdi
  bool v42; // zf
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // [rsp+0h] [rbp-98h]
  __int64 v50; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+18h] [rbp-80h]
  void *v53; // [rsp+20h] [rbp-78h]
  char v54; // [rsp+27h] [rbp-71h]
  int v55; // [rsp+28h] [rbp-70h]
  int v56[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v57; // [rsp+48h] [rbp-50h]

  HIDWORD(v50) = a2;
  v55 = a4;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  HIBYTE(v53) = v7;
  if ( v7 )
  {
    sub_299590(a1, a2, a3, a4);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 0xAu, nullptr);
      sub_2BB620(0);
      v43 = 0;
LABEL_39:
      byte_1C7EBA0 = 1;
      return v43;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 0xAu, nullptr);
      return 0;
    }
  }
  v8 = *(_QWORD *)a3;
  v9 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
  v10 = (_QWORD *)(sub_186B270(0x18u) + 8);
  v11 = nullptr;
  v12 = 0;
  v13 = 1;
  *(v10 - 1) = 2;
  v14 = v10;
  v15 = nullptr;
  while ( 1 )
  {
    *v10 = *(_QWORD *)(v9 + 16);
    *(v14 - 1) = v13;
    if ( v15 )
    {
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v27 = (3 * v16 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v16 + 8 >= (unsigned int)v28 || v16 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v56, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v56);
          sub_233E40((__int64)v56);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v53) = (3 * v16 + 1) >> 1;
        v29 = sub_186B300(v15 - 1, v28);
        v15 = (_QWORD *)(v29 + 8);
        *(_DWORD *)v29 = (_DWORD)v53;
        LODWORD(v29) = *(_DWORD *)(v29 + 4);
        v19 = &v15[(unsigned int)v29];
        v18 = v29 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v15[v17];
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      v15 = v48 + 1;
      v19 = v48 + 1;
      *v48 = 2;
      v18 = 1;
    }
    *v19 = v8;
    *((_DWORD *)v15 - 1) = v18;
    v20 = sub_15D1F10(v8);
    if ( v11 )
    {
      v21 = *((_DWORD *)v11 - 1);
      if ( v21 == *((_DWORD *)v11 - 2) )
      {
        v35 = (3 * v21 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v36 || v21 >= v35 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v56, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v56);
          sub_233E40((__int64)v56);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v53) = (3 * v21 + 1) >> 1;
        v37 = sub_186B300(v11 - 1, v36);
        v11 = (_QWORD *)(v37 + 8);
        *(_DWORD *)v37 = (_DWORD)v53;
        LODWORD(v37) = *(_DWORD *)(v37 + 4);
        v24 = &v11[(unsigned int)v37];
        v23 = v37 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v11[v22];
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x18u);
      v11 = v47 + 1;
      *v47 = 2;
      v24 = v47 + 1;
      v23 = 1;
    }
    *v24 = v20;
    ++v12;
    *((_DWORD *)v11 - 1) = v23;
    if ( (unsigned int)v12 >= HIDWORD(v50) )
      break;
    v25 = *(v14 - 1);
    v8 = *(_QWORD *)(a3 + 8 * v12);
    v9 = *(_QWORD *)(v8 + 16);
    if ( v25 == *(v14 - 2) )
    {
      v30 = (3 * v25 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v31 || v25 >= v30 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v56, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v56);
        sub_233E40((__int64)v56);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v53) = (3 * v25 + 1) >> 1;
      v32 = (_DWORD *)sub_186B300(v14 - 2, v31);
      v14 = v32 + 2;
      *v32 = (_DWORD)v53;
      v33 = (unsigned int)v32[1];
      v34 = v33;
      v10 = &v14[2 * v33];
      v13 = v34 + 1;
    }
    else
    {
      v26 = v25;
      v13 = v25 + 1;
      v10 = &v14[2 * v26];
    }
  }
  *(_QWORD *)v56 = 0;
  v57 = *(_QWORD *)(a1 + 232);
  sub_1697FC0(v57, 0, SHIDWORD(v50), (int)v15, v55, (int)v56, v49, v50, a3, a1, v53);
  v38 = sub_15DBD70(*(_QWORD *)(a1 + 232), *((unsigned int *)v11 - 1), v11, v14, *(_QWORD *)v56);
  v39 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  v40 = *(_QWORD *)v56;
  if ( *(_QWORD *)v56 )
  {
    v41 = v57;
    v42 = (*(_DWORD *)(*(_QWORD *)v56 + 8LL))-- == 1;
    if ( v42 )
      sub_15D7BC0(v41, v40);
  }
  *(_QWORD *)v56 = v39;
  sub_251FD0(v52, v39);
  v43 = *(_QWORD *)v56;
  v44 = *(_QWORD *)v56;
  if ( v54 )
  {
    sub_2BB620(*(_QWORD *)v56);
    v44 = *(_QWORD *)v56;
  }
  if ( v44 )
  {
    v45 = v57;
    v42 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v42 )
      sub_15D7BC0(v45, v44);
  }
  sub_186B220(v15 - 1);
  sub_186B220(v11 - 1);
  sub_186B220(v14 - 2);
  if ( v54 )
    goto LABEL_39;
  return v43;
}

