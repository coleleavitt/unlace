__int64 __fastcall sub_7E4540(__int64 a1, __int64 a2, int a3)
{
  char **exception; // rbx
  __int64 result; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r12d
  size_t v10; // rsi
  unsigned int *v11; // rax
  _QWORD *v12; // rax
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !*(_BYTE *)(a1 + 56) || (result = *(_DWORD *)(a1 + 16) ^ 1u, (_DWORD)result != a3) )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, a3 ^ 1u);
    v6 = (_QWORD *)*v5;
    v7 = v5;
    if ( *v5 )
    {
      v8 = *((unsigned int *)v6 - 1);
      if ( (_DWORD)v8 == *((_DWORD *)v6 - 2) )
      {
        v9 = (unsigned int)(3 * v8 + 1) >> 1;
        v10 = 16 * v9 + 8;
        if ( 16 * (int)v8 + 8 >= (unsigned int)v10 || (unsigned int)v8 >= v9 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v13, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v13);
          sub_233E40((__int64)v13);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B300(v6 - 1, v10);
        v6 = v11 + 2;
        *v7 = v11 + 2;
        *v11 = v9;
        result = (__int64)&v11[4 * v11[1] + 2];
      }
      else
      {
        result = (__int64)&v6[2 * v8];
      }
    }
    else
    {
      v12 = (_QWORD *)sub_186B270(0x28u);
      v6 = v12 + 1;
      *v12 = 2;
      *v7 = v12 + 1;
      result = (__int64)(v12 + 1);
    }
    *(_QWORD *)result = a1 - 8;
    *(_DWORD *)(result + 8) = 2;
    ++*((_DWORD *)v6 - 1);
  }
  return result;
}

