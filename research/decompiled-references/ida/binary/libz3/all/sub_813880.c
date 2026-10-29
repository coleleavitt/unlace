__int64 __fastcall sub_813880(__int64 a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char **exception; // rbp
  unsigned int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int64 *i; // r15
  _QWORD *v21; // rdx
  unsigned int *v22; // r14
  __int64 v23; // rax
  unsigned int *v24; // rsi
  void *v25; // rbx
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-90h]
  unsigned int v32; // [rsp+8h] [rbp-90h]
  _QWORD v33[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+40h] [rbp-58h] BYREF

  v33[0] = 0;
  v33[1] = 0;
  v34[0] = 1;
  v34[1] = 0;
  v8 = sub_811B30(a1, a2, (__int64)v33);
  if ( (_BYTE)v8 )
  {
    v9 = a1 + 128;
    v31 = 8LL * a2;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + v31);
    if ( v10 )
      v11 = *(unsigned int *)(v10 - 4);
    else
      v11 = 0;
    v12 = sub_1674520(v9, v33, v11);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v14 = *a3;
    if ( *a3 )
    {
      v15 = a3[1];
      if ( (*(_DWORD *)(v14 + 8))-- == 1 )
        sub_15D7BC0(v15, v14);
    }
    v17 = (__int64 *)(*(_QWORD *)(a1 + 600) + v31);
    *a3 = v13;
    v18 = 0;
    v19 = *v17;
    for ( i = v17; v19; ++*((_DWORD *)v21 - 1) )
    {
      if ( v18 >= *(_DWORD *)(v19 - 4) )
        break;
      v21 = (_QWORD *)*a4;
      v22 = (unsigned int *)(v19 + 4LL * v18);
      if ( *a4 )
      {
        v23 = *((unsigned int *)v21 - 1);
        v24 = (unsigned int *)v21 + v23;
        if ( (_DWORD)v23 == *((_DWORD *)v21 - 2) )
        {
          v27 = (unsigned int)(3 * v23 + 1) >> 1;
          v28 = 4 * v27 + 8;
          if ( 4 * (int)v23 + 8 >= (unsigned int)v28 || (unsigned int)v23 >= v27 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v35, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v35);
            sub_233E40((__int64)v35);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = (unsigned int)(3 * v23 + 1) >> 1;
          v29 = (unsigned int *)sub_186B300(v21 - 1, v28);
          v21 = v29 + 2;
          *a4 = v29 + 2;
          *v29 = v32;
          v19 = *i;
          v24 = &v29[v29[1] + 2];
        }
      }
      else
      {
        v30 = (_QWORD *)sub_186B270(0x10u);
        v21 = v30 + 1;
        *v30 = 2;
        *a4 = v30 + 1;
        v24 = (unsigned int *)(v30 + 1);
        v19 = *i;
      }
      ++v18;
      *v24 = *v22;
    }
  }
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v33);
  sub_182CBA0(v25, v34);
  return v8;
}

