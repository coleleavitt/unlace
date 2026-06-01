__int64 __fastcall sub_65FE90(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v4; // rbp
  __int64 result; // rax
  int v6; // edx
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int *v10; // rcx
  _DWORD *v11; // rdx
  unsigned int v12; // ebp
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = sub_15D1F10(a2);
  result = *(_QWORD *)(v4 + 24);
  v6 = *(_DWORD *)(result + 24);
  if ( *(_DWORD *)(a1 + 128) == *(_DWORD *)result && (result = *(unsigned int *)(result + 4), !(_DWORD)result)
    || v6
    && ((result = sub_1625010(a1 + 56), (v11 = *(_DWORD **)(v4 + 24)) == nullptr)
     || (_DWORD)result != *v11
     || v11[1] != 2) )
  {
    v7 = *(_QWORD **)(a1 + 248);
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
        *(_QWORD *)(a1 + 248) = v14 + 2;
        v10 = &v14[2 * v15 + 2];
        result = (unsigned int)(v15 + 1);
      }
      else
      {
        v9 = v8;
        result = v8 + 1;
        v10 = (unsigned int *)&v7[v9];
      }
    }
    else
    {
      v16 = (_QWORD *)sub_186B270(0x18u);
      v7 = v16 + 1;
      *v16 = 2;
      result = 1;
      *(_QWORD *)(a1 + 248) = v7;
      v10 = (unsigned int *)v7;
    }
    *(_QWORD *)v10 = *(_QWORD *)(a1 + 176);
    *((_DWORD *)v7 - 1) = result;
  }
  return result;
}

