_QWORD *__fastcall sub_8EDB70(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char **exception; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *result; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( a2 == -1 )
    BUG();
  v8 = *(_QWORD *)(a1 + 8672);
  if ( v8 )
  {
    if ( a2 >= *(_DWORD *)(v8 - 4) )
      v8 = 0;
    else
      v8 = *(_QWORD *)(v8 + 8LL * a2);
  }
  v9 = *(_QWORD *)(v8 + 32);
  if ( (*(_BYTE *)(*(_QWORD *)(v9 + 8LL * a3) + 44LL) & 4) == 0
    || (result = *(_QWORD **)(v9 + 8LL * a4), (*((_BYTE *)result + 44) & 4) == 0) )
  {
    v11 = *(_QWORD **)(a1 + 8776);
    if ( v11 )
    {
      v12 = *((unsigned int *)v11 - 1);
      if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
      {
        v13 = (unsigned int)(3 * v12 + 1) >> 1;
        v14 = 4 * (v13 + ((3 * (_DWORD)v12 + 1) & 0xFFFFFFFE)) + 8;
        if ( 12 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v18, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v11 - 1, v14);
        v11 = v15 + 2;
        *v15 = v13;
        v16 = v15[1];
        *(_QWORD *)(a1 + 8776) = v11;
        result = (_QWORD *)((char *)v11 + 12 * v16);
      }
      else
      {
        result = (_QWORD *)((char *)v11 + 12 * v12);
      }
    }
    else
    {
      v17 = (_QWORD *)sub_186B270(0x20u);
      v11 = v17 + 1;
      *v17 = 2;
      *(_QWORD *)(a1 + 8776) = v17 + 1;
      result = v17 + 1;
    }
    *(_DWORD *)result = a2;
    *((_DWORD *)result + 1) = a3;
    *((_DWORD *)result + 2) = a4;
    ++*((_DWORD *)v11 - 1);
  }
  return result;
}

