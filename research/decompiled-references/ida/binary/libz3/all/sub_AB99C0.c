__int64 __fastcall sub_AB99C0(__int64 a1, int a2, int a3, int a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  char **exception; // rbp
  __int64 v7; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 result; // rax
  _QWORD *v22; // rdx
  unsigned int v23; // r14d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ebx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33[9]; // [rsp+0h] [rbp-48h] BYREF

  v12 = *(_QWORD **)(a1 + 848);
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v23 = (unsigned int)(3 * v13 + 1) >> 1;
      v24 = 4 * (v23 + ((3 * (_DWORD)v13 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v13 + 8 >= (unsigned int)v24 || (unsigned int)v13 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v33, "Overflow encountered when expanding vector", v7);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v12 - 1, v24);
      v12 = v25 + 2;
      *v25 = v23;
      v26 = v25[1];
      *(_QWORD *)(a1 + 848) = v12;
      v14 = (_DWORD *)v12 + 3 * v26;
    }
    else
    {
      v14 = (_DWORD *)v12 + 3 * v13;
    }
  }
  else
  {
    v31 = (_QWORD *)sub_186B270(0x20u);
    v12 = v31 + 1;
    *v31 = 2;
    *(_QWORD *)(a1 + 848) = v31 + 1;
    v14 = v31 + 1;
  }
  v14[1] = a3;
  v15 = *(_QWORD *)(a1 + 16);
  v14[2] = a4;
  *v14 = a2;
  ++*((_DWORD *)v12 - 1);
  v16 = (_QWORD *)sub_180C100(v15 + 8400, 16);
  v17 = *(_QWORD **)(v15 + 9456);
  v18 = v16;
  *v16 = off_1C56710;
  v16[1] = a1 + 848;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    if ( v19 == *((_DWORD *)v17 - 2) )
    {
      v27 = (3 * v19 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v28 || v19 >= v27 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_139F3A(v33, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v17 - 1, v28);
      v30 = v29[1];
      v17 = v29 + 2;
      *(_QWORD *)(v15 + 9456) = v29 + 2;
      *v29 = v27;
      LODWORD(v29) = v30;
      v22 = &v17[v30];
      result = (unsigned int)((_DWORD)v29 + 1);
    }
    else
    {
      v20 = v19;
      result = v19 + 1;
      v22 = &v17[v20];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v17 = v32 + 1;
    *v32 = 2;
    result = 1;
    *(_QWORD *)(v15 + 9456) = v17;
    v22 = v17;
  }
  *v22 = v18;
  *((_DWORD *)v17 - 1) = result;
  return result;
}

