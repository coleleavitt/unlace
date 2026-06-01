_QWORD *__fastcall sub_597D40(__int64 a1, _QWORD *a2, int a3, unsigned int *a4)
{
  char **exception; // r12
  unsigned int *v6; // rbx
  unsigned int *v7; // r15
  _QWORD *v8; // rbp
  unsigned int *v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rax
  unsigned int v12; // edx
  size_t v13; // rsi
  unsigned int *v14; // rax
  _QWORD *v15; // rbx
  __int64 v17; // r12
  _QWORD *v18; // rax
  unsigned int v19; // [rsp+4h] [rbp-74h]
  __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( a1 != a2[1] )
    return nullptr;
  if ( !a3 )
    goto LABEL_23;
  v6 = a4;
  v7 = &a4[a3];
  v8 = nullptr;
  do
  {
    v10 = *(_DWORD *)(a2[5] + 4LL * *v6);
    if ( v10 != -1 )
    {
      if ( v8 )
      {
        v11 = *((unsigned int *)v8 - 1);
        if ( (_DWORD)v11 == *((_DWORD *)v8 - 2) )
        {
          v12 = (unsigned int)(3 * v11 + 1) >> 1;
          v13 = 4 * v12 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v20, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v20);
            sub_233E40((__int64)v20);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int)(3 * v11 + 1) >> 1;
          v14 = (unsigned int *)sub_186B300(v8 - 1, v13);
          v8 = v14 + 2;
          *v14 = v19;
          v9 = &v14[v14[1] + 2];
        }
        else
        {
          v9 = (unsigned int *)v8 + v11;
        }
      }
      else
      {
        v18 = (_QWORD *)sub_186B270(0x10u);
        v8 = v18 + 1;
        *v18 = 2;
        v9 = (unsigned int *)(v18 + 1);
      }
      *v9 = v10;
      ++*((_DWORD *)v8 - 1);
    }
    ++v6;
  }
  while ( v6 != v7 );
  if ( v8 )
  {
    if ( *((_DWORD *)v8 - 1) > 1u )
    {
      v17 = sub_4C4AB0(*(_QWORD *)(a1 + 24), a2[8]);
      if ( v17 )
      {
        v15 = (_QWORD *)sub_186B270(0x10u);
        *v15 = &off_1C51F30;
        v15[1] = v17;
      }
      else
      {
        v15 = nullptr;
      }
    }
    else
    {
      v15 = (_QWORD *)sub_186B270(8u);
      *v15 = off_1C51F68;
    }
    sub_186B220(v8 - 1);
  }
  else
  {
LABEL_23:
    v15 = (_QWORD *)sub_186B270(8u);
    *v15 = off_1C51F68;
  }
  return v15;
}

