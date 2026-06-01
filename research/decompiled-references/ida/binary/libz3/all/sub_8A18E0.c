void __fastcall sub_8A18E0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  int v7; // ebp
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18; // rdx
  __int64 v19[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v4 = v3 + 40LL * *(unsigned int *)(v3 - 4);
    if ( v4 != v3 )
    {
      v7 = 0;
      do
      {
        v8 = *(unsigned int *)(v3 + 32);
        if ( (_DWORD)v8 != -1 )
        {
          *(_DWORD *)(*a2 + 4 * v8) = v7;
          v9 = (_QWORD *)*a3;
          if ( *a3 )
          {
            v10 = *((unsigned int *)v9 - 1);
            v11 = (_DWORD *)v9 + v10;
            if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
            {
              v12 = (unsigned int)(3 * v10 + 1) >> 1;
              v13 = 4 * v12 + 8;
              if ( 4 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_12D192(v19, "Overflow encountered when expanding vector", v18);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v19);
                sub_233E40((__int64)v19);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v14 = (unsigned int *)sub_186B300(v9 - 1, v13);
              v9 = v14 + 2;
              *v14 = v12;
              v15 = v14[1];
              *a3 = v9;
              v11 = (_DWORD *)v9 + v15;
            }
          }
          else
          {
            v16 = (_QWORD *)sub_186B270(0x10u);
            v9 = v16 + 1;
            *v16 = 2;
            *a3 = v16 + 1;
            v11 = v16 + 1;
          }
          *v11 = *(_DWORD *)(v3 + 32);
          ++*((_DWORD *)v9 - 1);
        }
        v3 += 40;
        ++v7;
      }
      while ( v3 != v4 );
    }
  }
}

