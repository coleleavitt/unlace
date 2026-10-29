__int64 __fastcall sub_65F1B0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 result; // rax
  int v5; // edx
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int *v9; // rcx
  _DWORD *v10; // rdx
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  result = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(result + 24);
  if ( *(_DWORD *)result == *(_DWORD *)(a1 + 128) && (result = *(unsigned int *)(result + 4), !(_DWORD)result)
    || v5
    && ((result = sub_1625010(a1 + 56), (v10 = *(_DWORD **)(a2 + 24)) == nullptr)
     || (_DWORD)result != *v10
     || v10[1] != 2) )
  {
    v6 = *(_QWORD **)(a1 + 248);
    if ( v6 )
    {
      v7 = *((_DWORD *)v6 - 1);
      if ( v7 == *((_DWORD *)v6 - 2) )
      {
        v11 = (3 * v7 + 1) >> 1;
        v12 = 8 * v11 + 8;
        if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v16, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v16);
          sub_233E40((__int64)v16);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
        v14 = v13[1];
        v6 = v13 + 2;
        *v13 = v11;
        *(_QWORD *)(a1 + 248) = v13 + 2;
        v9 = &v13[2 * v14 + 2];
        result = (unsigned int)(v14 + 1);
      }
      else
      {
        v8 = v7;
        result = v7 + 1;
        v9 = (unsigned int *)&v6[v8];
      }
    }
    else
    {
      v15 = (_QWORD *)sub_186B270(0x18u);
      v6 = v15 + 1;
      *v15 = 2;
      result = 1;
      *(_QWORD *)(a1 + 248) = v6;
      v9 = (unsigned int *)v6;
    }
    *(_QWORD *)v9 = *(_QWORD *)(a1 + 176);
    *((_DWORD *)v6 - 1) = result;
  }
  return result;
}

