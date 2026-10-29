__int64 __fastcall sub_647FC0(__int64 *a1, __int64 *a2, _QWORD *a3, _BYTE *a4)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v9; // rbx
  __int64 v10; // r13
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  int v13; // ebp
  _DWORD *v14; // rdx
  unsigned int v15; // r9d
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // [rsp+4h] [rbp-74h]
  __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF

  result = *a1;
  *a4 = 1;
  if ( result )
  {
    v6 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v6 )
    {
      v9 = 0;
      v10 = 4 * v6;
      while ( 1 )
      {
        v12 = *(unsigned int *)(result + v9);
        result = *a2;
        v13 = *(_DWORD *)(*a2 + 4 * v12);
        if ( v13 != -1 )
        {
          v14 = (_DWORD *)*a3;
          if ( *a3 )
          {
            result = (unsigned int)*(v14 - 1);
            if ( (_DWORD)result && v13 != v14[(unsigned int)(result - 1)] + 1 )
              *a4 = 0;
            v11 = &v14[(unsigned int)result];
            if ( (_DWORD)result == *(v14 - 2) )
            {
              v15 = (unsigned int)(3 * result + 1) >> 1;
              v16 = 4 * v15 + 8;
              if ( 4 * (int)result + 8 >= (unsigned int)v16 || (unsigned int)result >= v15 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v20, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v20);
                sub_233E40((__int64)v20);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v18 = (unsigned int)(3 * result + 1) >> 1;
              v17 = (unsigned int *)sub_186B300(v14 - 2, v16);
              v14 = v17 + 2;
              *v17 = v18;
              result = v17[1];
              *a3 = v14;
              v11 = &v14[result];
            }
          }
          else
          {
            result = sub_186B270(0x10u);
            v14 = (_DWORD *)(result + 8);
            *(_QWORD *)result = 2;
            v11 = (_DWORD *)(result + 8);
            *a3 = result + 8;
          }
          *v11 = v13;
          ++*(v14 - 1);
        }
        v9 += 4;
        if ( v9 == v10 )
          break;
        result = *a1;
      }
    }
  }
  return result;
}

