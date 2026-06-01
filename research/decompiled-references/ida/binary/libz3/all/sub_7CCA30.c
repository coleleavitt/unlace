__int64 __fastcall sub_7CCA30(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 (*v5)(void); // rax
  __int64 v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 440LL);
  if ( (char *)v5 == (char *)sub_79F010 )
    v6 = a1 + 1592;
  else
    v6 = v5();
  result = sub_13DC030(v6, a2);
  if ( (_DWORD)result != 0x7FFFFFFF )
  {
    v8 = (_QWORD *)*a2;
    v9 = (16 * (2 * (_DWORD)result + 1)) | 1u;
    if ( *a2 )
    {
      v10 = *((_DWORD *)v8 - 1);
      if ( v10 == *((_DWORD *)v8 - 2) )
      {
        v13 = (3 * v10 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v14 || v10 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_116834(v18, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v18);
          sub_233E40((__int64)v18);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v8 - 1, v14);
        v16 = v15[1];
        v8 = v15 + 2;
        *v15 = v13;
        *a2 = v15 + 2;
        LODWORD(v15) = v16;
        v12 = &v8[v16];
        result = (unsigned int)((_DWORD)v15 + 1);
      }
      else
      {
        v11 = v10;
        result = v10 + 1;
        v12 = &v8[v11];
      }
    }
    else
    {
      v17 = (_QWORD *)sub_186B270(0x18u);
      v8 = v17 + 1;
      *v17 = 2;
      result = 1;
      *a2 = v8;
      v12 = v8;
    }
    *v12 = v9;
    *((_DWORD *)v8 - 1) = result;
  }
  return result;
}

