__int64 __fastcall sub_BAD1F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned int v6; // r12d
  unsigned int v7; // edx
  size_t v8; // rsi
  unsigned int v9; // r15d
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char **exception; // rbx
  char v16; // [rsp+Ch] [rbp-6Ch]
  unsigned int v17; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v18[11]; // [rsp+20h] [rbp-58h] BYREF

  result = sub_163B280(a1 + 24, a2, &v17);
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD **)(a1 + 160);
    v16 = v17;
    v4 = v17 >> 5;
    if ( v3 )
    {
      v5 = *((unsigned int *)v3 - 1);
      v6 = v4 + 1;
      if ( (unsigned int)v4 < (unsigned int)v5 )
      {
LABEL_4:
        result = (unsigned int)(1 << v16);
        *((_DWORD *)v3 + v4) |= result;
        return result;
      }
    }
    else
    {
      v6 = v4 + 1;
      v5 = 0;
      v14 = (_QWORD *)sub_186B270(0x10u);
      v3 = v14 + 1;
      *v14 = 2;
      *(_QWORD *)(a1 + 160) = v14 + 1;
    }
    while ( 1 )
    {
      v11 = *((_DWORD *)v3 - 2);
      if ( v11 >= v6 )
        break;
      v7 = (3 * v11 + 1) >> 1;
      v8 = 4 * v7 + 8;
      v9 = v7;
      if ( 4 * v11 + 8 >= (unsigned int)v8 || v11 >= v7 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (unsigned int *)sub_186B300(v3 - 1, v8);
      v3 = v10 + 2;
      *v10 = v9;
      *(_QWORD *)(a1 + 160) = v10 + 2;
    }
    v12 = 4 * v5;
    *((_DWORD *)v3 - 1) = v6;
    v13 = 4LL * v6;
    if ( v12 == v13 )
      goto LABEL_4;
    memset((char *)v3 + v12, 0, v13 - v12);
    result = (unsigned int)(1 << v16);
    *((_DWORD *)v3 + v4) |= result;
  }
  return result;
}

