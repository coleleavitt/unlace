__int64 __fastcall sub_7DC1D0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  _QWORD *v5; // r13
  _QWORD *v6; // rbp
  _DWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rdx
  int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  _DWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 result; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // [rsp+8h] [rbp-60h] BYREF
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a3 + 8);
  v20 = nullptr;
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        v8 = sub_7E58C0(a1, *v5);
        v9 = v20;
        v10 = v8;
        if ( !v20 )
          break;
        v11 = *((unsigned int *)v20 - 1);
        if ( (_DWORD)v11 == *((_DWORD *)v20 - 2) )
        {
          v12 = (unsigned int)(3 * v11 + 1) >> 1;
          v13 = 4 * v12 + 8;
          if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(v20 - 1, v13);
          v15 = v14 + 2;
          *v14 = v12;
          v16 = v14[1];
          ++v5;
          v20 = v15;
          v15[v16] = v10;
          ++*(v15 - 1);
          if ( v6 == v5 )
            goto LABEL_11;
        }
        else
        {
          v7 = (_DWORD *)v20 + v11;
LABEL_5:
          ++v5;
          *v7 = v10;
          ++*((_DWORD *)v9 - 1);
          if ( v6 == v5 )
            goto LABEL_11;
        }
      }
      v19 = (_QWORD *)sub_186B270(0x10u);
      v9 = v19 + 1;
      *v19 = 2;
      v20 = v19 + 1;
      v7 = v19 + 1;
      goto LABEL_5;
    }
  }
LABEL_11:
  v17 = sub_7E58C0(a1, a2);
  result = sub_7E65C0(a1, v17, &v20);
  if ( v20 )
    return sub_186B220(v20 - 1);
  return result;
}

