void __fastcall __noreturn sub_767A00(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  _QWORD *v4; // rax
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  size_t v15; // rsi
  unsigned int *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  char **exception; // r15
  unsigned int v26; // [rsp+48h] [rbp-78h]
  unsigned int v27; // [rsp+48h] [rbp-78h]
  __int64 v28[10]; // [rsp+70h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
  {
LABEL_2:
    sub_1872CE0("");
    sub_1873130(114, 73);
  }
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD **)(a1 + 160);
  if ( v4 )
    v5 = *((_DWORD *)v4 - 1);
  else
    v5 = 0;
  if ( !v3 )
  {
LABEL_21:
    *(_DWORD *)(a1 + 128) += v3;
    goto LABEL_2;
  }
  v6 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      v13 = *((_DWORD *)v4 - 1);
      if ( v13 == *((_DWORD *)v4 - 2) )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = 8 * v14 + 8;
        v26 = v14;
        if ( 8 * v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
        {
LABEL_25:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_75C2B0(v28, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v4 - 1, v15);
        v4 = v16 + 2;
        v17 = v16[1];
        *v16 = v26;
        *(_QWORD *)(a1 + 160) = v16 + 2;
        LODWORD(v16) = v17;
        v9 = &v4[v17];
        v8 = (_DWORD)v16 + 1;
      }
      else
      {
        v7 = v13;
        v8 = v13 + 1;
        v9 = &v4[v7];
      }
    }
    else
    {
      v24 = (_QWORD *)sub_186B270(0x18u);
      v8 = 1;
      *v24 = 2;
      v4 = v24 + 1;
      *(_QWORD *)(a1 + 160) = v4;
      v9 = v4;
    }
    *v9 = 0;
    *((_DWORD *)v4 - 1) = v8;
    v10 = *(_QWORD **)(a1 + 528);
    if ( !v10 )
      break;
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 != *((_DWORD *)v10 - 2) )
    {
      v12 = (_DWORD *)v10 + v11;
      goto LABEL_11;
    }
    v18 = (unsigned int)(3 * v11 + 1) >> 1;
    v19 = 4 * v18 + 8;
    v27 = v18;
    if ( 4 * (int)v11 + 8 >= (unsigned int)v19 || (unsigned int)v11 >= v18 )
      goto LABEL_25;
    ++v6;
    v20 = (unsigned int *)sub_186B300(v10 - 1, v19);
    v21 = v20 + 2;
    *v20 = v27;
    v22 = v20[1];
    *(_QWORD *)(a1 + 528) = v21;
    v21[v22] = v5;
    ++*(v21 - 1);
    if ( v6 == v3 )
      goto LABEL_21;
LABEL_12:
    v4 = *(_QWORD **)(a1 + 160);
  }
  v23 = (_QWORD *)sub_186B270(0x10u);
  v10 = v23 + 1;
  *v23 = 2;
  *(_QWORD *)(a1 + 528) = v23 + 1;
  v12 = v23 + 1;
LABEL_11:
  ++v6;
  *v12 = v5;
  ++*((_DWORD *)v10 - 1);
  if ( v6 == v3 )
    goto LABEL_21;
  goto LABEL_12;
}

