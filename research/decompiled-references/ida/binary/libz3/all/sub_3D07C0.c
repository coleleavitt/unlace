__int64 __fastcall sub_3D07C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **exception; // rbx
  __int64 v6; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 result; // rax
  _QWORD *v19; // rdx
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v11 = *(_QWORD *)(a1 + 552);
  v12 = sub_186B270(0x30u);
  v13 = *(_QWORD **)(v11 + 696);
  v14 = (_QWORD *)v12;
  v15 = *(_QWORD *)(a1 + 552);
  v14[2] = a2;
  v14[1] = v15;
  v14[3] = a3;
  v14[4] = a4;
  *v14 = off_1C4E758;
  v14[5] = a5;
  if ( v13 )
  {
    v16 = *((_DWORD *)v13 - 1);
    if ( v16 == *((_DWORD *)v13 - 2) )
    {
      v20 = (3 * v16 + 1) >> 1;
      v21 = 8 * v20 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v21 || v16 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C88C8(v25, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v13 - 1, v21);
      v23 = v22[1];
      v13 = v22 + 2;
      *(_QWORD *)(v11 + 696) = v22 + 2;
      *v22 = v20;
      LODWORD(v22) = v23;
      v19 = &v13[v23];
      result = (unsigned int)((_DWORD)v22 + 1);
    }
    else
    {
      v17 = v16;
      result = v16 + 1;
      v19 = &v13[v17];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x18u);
    v13 = v24 + 1;
    *v24 = 2;
    result = 1;
    *(_QWORD *)(v11 + 696) = v13;
    v19 = v13;
  }
  *v19 = v14;
  *((_DWORD *)v13 - 1) = result;
  return result;
}

