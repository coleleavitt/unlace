__int64 __fastcall sub_65ED10(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **exception; // rbx
  _QWORD *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = (_QWORD *)*a2;
  if ( !*a2 )
  {
    v14 = (_QWORD *)sub_186B270(0x18u);
    v6 = v14 + 1;
    *v14 = 2;
    result = 1;
    *a2 = v6;
    v9 = v6;
    goto LABEL_5;
  }
  result = *((unsigned int *)v6 - 1);
  if ( !(_DWORD)result )
  {
    if ( *((_DWORD *)v6 - 2) )
    {
LABEL_4:
      v8 = (unsigned int)result;
      result = (unsigned int)(result + 1);
      v9 = &v6[v8];
LABEL_5:
      *v9 = a3;
      *((_DWORD *)v6 - 1) = result;
      return result;
    }
LABEL_9:
    v10 = (unsigned int)(3 * result + 1) >> 1;
    v11 = 8 * v10 + 8;
    if ( 8 * (int)result + 8 >= (unsigned int)v11 || (unsigned int)result >= v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v15, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v15);
      sub_233E40((__int64)v15);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v6 - 1, v11);
    v13 = v12[1];
    v6 = v12 + 2;
    *v12 = v10;
    *a2 = v12 + 2;
    LODWORD(v12) = v13;
    v9 = &v6[v13];
    result = (unsigned int)((_DWORD)v12 + 1);
    goto LABEL_5;
  }
  if ( v6[(unsigned int)(result - 1)] != a3 )
  {
    if ( (_DWORD)result != *((_DWORD *)v6 - 2) )
      goto LABEL_4;
    goto LABEL_9;
  }
  return result;
}

