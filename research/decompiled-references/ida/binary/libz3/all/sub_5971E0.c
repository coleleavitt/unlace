__int64 __fastcall sub_5971E0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 (*v13)(); // r8
  __int64 *v14; // rsi
  _QWORD *v15; // rax
  char **exception; // rbp
  __int64 *v17; // [rsp+0h] [rbp-78h]
  _QWORD *v18; // [rsp+18h] [rbp-60h] BYREF
  __int64 v19[11]; // [rsp+20h] [rbp-58h] BYREF

  result = *a2;
  if ( *a2 )
  {
    v5 = *(unsigned int *)(result - 4);
    v18 = nullptr;
    if ( (_DWORD)v5 )
    {
      v9 = 0;
      v10 = nullptr;
      while ( 1 )
      {
        v14 = (__int64 *)(result + 8 * v9);
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 2);
          *((_DWORD *)v10 - 1) = 0;
          if ( !v11 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
        }
        else
        {
          v17 = (__int64 *)(result + 8 * v9);
          v15 = (_QWORD *)sub_186B270(0x18u);
          v10 = v15 + 1;
          v14 = v17;
          v18 = v15 + 1;
          *v15 = 2;
        }
        v12 = *v14;
        *((_DWORD *)v10 - 1) = 1;
        *v10 = v12;
        v13 = *(__int64 (**)())(*(_QWORD *)a3 + 24LL);
        result = 0;
        if ( v13 == sub_595E40 )
        {
          *(_BYTE *)(*a4 + v9++) = 0;
          if ( v5 == v9 )
            goto LABEL_12;
        }
        else
        {
          result = ((__int64 (__fastcall *)(__int64, _QWORD **))v13)(a3, &v18);
          v10 = v18;
          *(_BYTE *)(*a4 + v9++) = result;
          if ( v5 == v9 )
          {
LABEL_12:
            if ( v10 )
              return sub_186B220(v10 - 1);
            return result;
          }
        }
        result = *a2;
      }
    }
  }
  return result;
}

