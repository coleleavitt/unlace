void __fastcall sub_252470(__int64 a1, __int64 a2)
{
  char **exception; // r13
  __int64 v4; // rdi
  int v6; // eax
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 225) )
  {
    if ( &_pthread_key_create )
    {
      v6 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 256));
      if ( v6 )
        std::__throw_system_error(v6);
    }
    v7 = *(_QWORD **)(a1 + 1352);
    if ( v7 )
    {
      v8 = *((_DWORD *)v7 - 1);
      if ( v8 == *((_DWORD *)v7 - 2) )
      {
        v12 = (3 * v8 + 1) >> 1;
        v13 = 8 * v12 + 8;
        if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v17, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v17);
          sub_233E40((__int64)v17);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(v7 - 1, v13);
        v15 = v14[1];
        v7 = v14 + 2;
        *v14 = v12;
        *(_QWORD *)(a1 + 1352) = v14 + 2;
        LODWORD(v14) = v15;
        v11 = &v7[v15];
        v10 = (_DWORD)v14 + 1;
      }
      else
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = &v7[v9];
      }
    }
    else
    {
      v16 = (_QWORD *)sub_186B270(0x18u);
      v7 = v16 + 1;
      *v16 = 2;
      v10 = 1;
      *(_QWORD *)(a1 + 1352) = v7;
      v11 = v7;
    }
    *v11 = a2;
    *((_DWORD *)v7 - 1) = v10;
    if ( &_pthread_key_create )
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 256));
  }
  else if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 232);
    if ( (*(_DWORD *)(a2 + 8))-- == 1 )
      sub_15D7BC0(v4, a2);
  }
}

