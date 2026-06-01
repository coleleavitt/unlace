void __fastcall __noreturn sub_764B20(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  int v4; // r12d
  __int64 v5; // rcx
  int v6; // edx
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  char **exception; // r14
  int v23; // [rsp+2Ch] [rbp-94h]
  int v24; // [rsp+48h] [rbp-78h]
  __int64 v25[10]; // [rsp+70h] [rbp-50h] BYREF

  v23 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v3 = *(_QWORD **)(a1 + 160);
    if ( v3 )
      v4 = *((_DWORD *)v3 - 1);
    else
      v4 = 0;
    if ( v23 )
    {
      v24 = 0;
      while ( 1 )
      {
        if ( v3 )
        {
          v11 = *((_DWORD *)v3 - 1);
          if ( v11 == *((_DWORD *)v3 - 2) )
          {
            v12 = (3 * v11 + 1) >> 1;
            v13 = 8 * v12 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v13 || v11 >= v12 )
            {
LABEL_25:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_75C2B0(v25, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v25);
              sub_233E40((__int64)v25);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v14 = (unsigned int *)sub_186B300(v3 - 1, v13);
            v3 = v14 + 2;
            v15 = v14[1];
            *v14 = v12;
            *(_QWORD *)(a1 + 160) = v14 + 2;
            LODWORD(v14) = v15;
            v7 = &v3[v15];
            v6 = (_DWORD)v14 + 1;
          }
          else
          {
            v5 = v11;
            v6 = v11 + 1;
            v7 = &v3[v5];
          }
        }
        else
        {
          v21 = (_QWORD *)sub_186B270(0x18u);
          v6 = 1;
          *v21 = 2;
          v3 = v21 + 1;
          *(_QWORD *)(a1 + 160) = v3;
          v7 = v3;
        }
        *v7 = 0;
        *((_DWORD *)v3 - 1) = v6;
        v8 = *(_QWORD **)(a1 + 528);
        if ( v8 )
        {
          v9 = *((unsigned int *)v8 - 1);
          if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
          {
            v16 = (unsigned int)(3 * v9 + 1) >> 1;
            v17 = 4 * v16 + 8;
            if ( 4 * (int)v9 + 8 >= (unsigned int)v17 || (unsigned int)v9 >= v16 )
              goto LABEL_25;
            v18 = (unsigned int *)sub_186B300(v8 - 1, v17);
            v8 = v18 + 2;
            *v18 = v16;
            v19 = v18[1];
            *(_QWORD *)(a1 + 528) = v8;
            v10 = (_DWORD *)v8 + v19;
          }
          else
          {
            v10 = (_DWORD *)v8 + v9;
          }
        }
        else
        {
          v20 = (_QWORD *)sub_186B270(0x10u);
          v8 = v20 + 1;
          *v20 = 2;
          *(_QWORD *)(a1 + 528) = v20 + 1;
          v10 = v20 + 1;
        }
        *v10 = v4;
        ++v24;
        ++*((_DWORD *)v8 - 1);
        if ( v24 == v23 )
          break;
        v3 = *(_QWORD **)(a1 + 160);
      }
    }
    *(_DWORD *)(a1 + 128) += v23;
  }
  sub_1872CE0("");
  sub_1873130(114, 73);
}

