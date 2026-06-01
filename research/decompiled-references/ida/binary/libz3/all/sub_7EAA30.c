__int64 __fastcall sub_7EAA30(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  __int64 i; // rbx
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // r13
  _QWORD *v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int v17; // ebp
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // rdx
  __int64 result; // rax
  _QWORD *v25; // rax
  unsigned int v26; // ebx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  for ( i = 0; (unsigned int)i < *(_DWORD *)(a3 + 32); *((_DWORD *)v12 - 1) = v9 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD **)(v11 + 2336);
    v13 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8 * i);
    if ( v12 )
    {
      v14 = *((_DWORD *)v12 - 1);
      if ( v14 == *((_DWORD *)v12 - 2) )
      {
        v15 = (3 * v14 + 1) >> 1;
        v16 = 8 * v15 + 8;
        v17 = v15;
        if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v32, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v12 - 1, v16);
        v19 = v18[1];
        v12 = v18 + 2;
        *(_QWORD *)(v11 + 2336) = v18 + 2;
        *v18 = v17;
        LODWORD(v18) = v19;
        v10 = &v12[v19];
        v9 = (_DWORD)v18 + 1;
      }
      else
      {
        v8 = v14;
        v9 = v14 + 1;
        v10 = &v12[v8];
      }
    }
    else
    {
      v25 = (_QWORD *)sub_186B270(0x18u);
      v12 = v25 + 1;
      *v25 = 2;
      v9 = 1;
      *(_QWORD *)(v11 + 2336) = v12;
      v10 = v12;
    }
    *v10 = v13;
    ++i;
  }
  v20 = *(_QWORD *)(a3 + 48);
  v21 = (_QWORD *)*a4;
  if ( *a4 )
  {
    v22 = *((unsigned int *)v21 - 1);
    v23 = (_DWORD *)v21 + v22;
    if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
    {
      v26 = (unsigned int)(3 * v22 + 1) >> 1;
      v27 = 4 * v26 + 8;
      if ( 4 * (int)v22 + 8 >= (unsigned int)v27 || (unsigned int)v22 >= v26 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v21 - 1, v27);
      v21 = v28 + 2;
      *v28 = v26;
      v29 = v28[1];
      *a4 = v21;
      v23 = (_DWORD *)v21 + v29;
    }
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0x10u);
    v21 = v30 + 1;
    *v30 = 2;
    v23 = v30 + 1;
    *a4 = v30 + 1;
  }
  result = *(unsigned int *)(v20 + 36);
  *v23 = result;
  ++*((_DWORD *)v21 - 1);
  return result;
}

