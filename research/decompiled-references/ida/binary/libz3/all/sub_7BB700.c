bool __fastcall sub_7BB700(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v8; // r9
  _QWORD *v10; // rdi
  unsigned int *v11; // rbx
  int v12; // r13d
  __int64 v13; // rax
  unsigned int *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebp
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int *v21; // rax
  unsigned int v23; // edx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  _QWORD *v31; // [rsp+10h] [rbp-68h]
  _QWORD *v32; // [rsp+18h] [rbp-60h]
  __int64 v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a3;
  v8 = a4;
  v10 = (_QWORD *)*a4;
  if ( *a4 )
    *((_DWORD *)v10 - 1) = 0;
  v11 = (unsigned int *)(a3 + 64);
  v12 = 0;
  v13 = 4LL * *(unsigned int *)(a3 + 32);
  v14 = (unsigned int *)(a3 + 64 + v13);
  if ( v13 )
  {
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a1 + 24);
        v16 = *v11;
        v17 = *(_QWORD *)(v15 + 3840);
        v18 = *v11;
        v19 = *(_DWORD *)(v15 + 3848);
        if ( v19 >= *(_DWORD *)(v17 + 4 * v16) )
          break;
        ++v12;
LABEL_6:
        if ( v14 == ++v11 )
          return *(_DWORD *)(a2 + 60) >= (unsigned int)(*(_DWORD *)(a2 + 32) + *(_DWORD *)(v6 + 60) - v12);
      }
      if ( v19 >= *(_DWORD *)(v17 + 4LL * ((unsigned int)v16 ^ 1)) )
        goto LABEL_6;
      if ( v10 )
      {
        v20 = *((unsigned int *)v10 - 1);
        if ( (_DWORD)v20 == *((_DWORD *)v10 - 2) )
        {
          v23 = (unsigned int)(3 * v20 + 1) >> 1;
          v24 = 4 * v23 + 8;
          if ( 4 * (int)v20 + 8 >= (unsigned int)v24 || (unsigned int)v20 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v33, "Overflow encountered when expanding vector", v5);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = v8;
          v30 = v6;
          v28 = (unsigned int)(3 * v20 + 1) >> 1;
          v25 = (unsigned int *)sub_186B300(v10 - 1, v24);
          v8 = v32;
          v10 = v25 + 2;
          v6 = v30;
          *v25 = v28;
          v26 = v25[1];
          *v32 = v10;
          v21 = (unsigned int *)v10 + v26;
        }
        else
        {
          v21 = (unsigned int *)v10 + v20;
        }
      }
      else
      {
        v31 = v8;
        v29 = v6;
        v27 = (_QWORD *)sub_186B270(0x10u);
        v8 = v31;
        v6 = v29;
        v10 = v27 + 1;
        *v27 = 2;
        *v31 = v27 + 1;
        v21 = (unsigned int *)(v27 + 1);
      }
      ++v11;
      *v21 = v18;
      ++*((_DWORD *)v10 - 1);
    }
    while ( v14 != v11 );
  }
  return *(_DWORD *)(a2 + 60) >= (unsigned int)(*(_DWORD *)(a2 + 32) + *(_DWORD *)(v6 + 60) - v12);
}

