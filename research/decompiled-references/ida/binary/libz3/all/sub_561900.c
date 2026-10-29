__int64 __fastcall sub_561900(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+0h] [rbp-6Ch]
  __int64 v23[11]; // [rsp+14h] [rbp-58h] BYREF

  result = *a2;
  if ( *a2 )
  {
    v5 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v5 )
    {
      v8 = 16 * v5;
      v9 = 0;
      while ( 1 )
      {
        result += v9;
        if ( !*(_BYTE *)(result + 8) )
        {
          v16 = *(unsigned int *)result;
          if ( (int)v16 >= 0 )
            v10 = *(_QWORD *)(a1 + 8 * v16 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          else
            v10 = *(_QWORD *)(a1 + 40);
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8LL * *(unsigned int *)(result + 4) + 48);
          v12 = (_QWORD *)*a3;
          if ( *a3 )
          {
            v13 = *((_DWORD *)v12 - 1);
            if ( v13 == *((_DWORD *)v12 - 2) )
            {
              v17 = (3 * v13 + 1) >> 1;
              v18 = 8 * v17 + 8;
              if ( 8 * v13 + 8 >= (unsigned int)v18 || v13 >= v17 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v23, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v23);
                sub_233E40((__int64)v23);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v22 = (3 * v13 + 1) >> 1;
              v19 = (unsigned int *)sub_186B300(v12 - 1, v18);
              v12 = v19 + 2;
              *v19 = v22;
              v20 = v19[1];
              *a3 = v19 + 2;
              LODWORD(v19) = v20;
              v15 = &v12[v20];
              result = (unsigned int)((_DWORD)v19 + 1);
            }
            else
            {
              v14 = v13;
              result = v13 + 1;
              v15 = &v12[v14];
            }
          }
          else
          {
            v21 = (_QWORD *)sub_186B270(0x18u);
            v12 = v21 + 1;
            *v21 = 2;
            result = 1;
            *a3 = v12;
            v15 = v12;
          }
          *v15 = v11;
          *((_DWORD *)v12 - 1) = result;
        }
        v9 += 16;
        if ( v8 == v9 )
          break;
        result = *a2;
      }
    }
  }
  return result;
}

