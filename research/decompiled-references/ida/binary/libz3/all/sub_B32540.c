__int64 __fastcall sub_B32540(__int64 a1, unsigned int *a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // r12d
  __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // ecx
  unsigned int *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22[9]; // [rsp+10h] [rbp-48h] BYREF

  result = sub_8E7030(*(_QWORD *)(a1 + 16));
  if ( (_DWORD)result )
  {
    result = *(unsigned int *)(*(_QWORD *)(a1 + 264) + 12LL);
    if ( (_DWORD)result )
    {
      result = *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL);
      if ( result )
      {
        v6 = *(unsigned int *)(a1 + 8);
        if ( *(_DWORD *)result == (_DWORD)v6 && *(_DWORD *)(result + 4) <= 1u )
        {
          v7 = *(_QWORD *)(a1 + 16);
          v8 = *(_QWORD *)(v7 + 8656);
          if ( !v8 || (v9 = *a2, (unsigned int)v9 >= *(_DWORD *)(v8 - 4)) || !*(_QWORD *)(v8 + 8 * v9) )
          {
            sub_B6F780(v7);
            v6 = *(unsigned int *)(a1 + 8);
            v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
          }
          v10 = sub_B39350(*(_QWORD *)(v8 + 8LL * **((unsigned int **)a2 + 4)), v6);
          v11 = *(_QWORD *)(a1 + 16);
          v12 = *a2;
          v13 = v10;
          v14 = *(_QWORD *)(*(_QWORD *)(v11 + 8656) + 8 * v12);
          v15 = *(_QWORD **)(*((_QWORD *)a2 + 2) + 24LL);
          if ( v15 && *v15 == (*(unsigned int *)(a1 + 8) | 0x100000000LL) )
          {
            return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 424LL))(
                     a1,
                     v13,
                     *(_QWORD *)(*(_QWORD *)(v11 + 8656) + 8 * v12));
          }
          else
          {
            if ( (unsigned int)sub_8E7030(v11) && *(_DWORD *)(*(_QWORD *)(a1 + 264) + 12LL) > 1u )
            {
              v16 = *(_QWORD **)(a1 + 72);
              ++*(_DWORD *)(a1 + 272);
              if ( v16 )
              {
                v17 = *((_DWORD *)v16 - 1);
                if ( v17 == *((_DWORD *)v16 - 2) )
                {
                  v18 = (3 * v17 + 1) >> 1;
                  v19 = 8 * v18 + 8;
                  if ( 8 * v17 + 8 >= v19 || v17 >= v18 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v22, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v22);
                    sub_233E40((__int64)v22);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v20 = (unsigned int *)sub_186B300(v16 - 1, v19);
                  v16 = v20 + 2;
                  *v20 = v18;
                  v17 = v20[1];
                  *(_QWORD *)(a1 + 72) = v16;
                }
              }
              else
              {
                v21 = (_QWORD *)sub_186B270(0x18u);
                *v21 = 2;
                v17 = 0;
                v16 = v21 + 1;
                *(_QWORD *)(a1 + 72) = v16;
              }
              v16[v17] = v14;
              *((_DWORD *)v16 - 1) = v17 + 1;
            }
            return sub_B321C0(a1, v13, v14);
          }
        }
      }
    }
  }
  return result;
}

