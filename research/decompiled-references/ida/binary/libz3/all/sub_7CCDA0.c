__int64 __fastcall sub_7CCDA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // r15d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a1[299];
  if ( v6 && (v7 = v6 + 8LL * *(unsigned int *)(v6 - 4), v6 != v7) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)v6 + 40LL) + 16LL))(
                 *(_QWORD *)v6 + 40LL,
                 a2,
                 a3);
      if ( !(_BYTE)result )
        break;
      v6 += 8;
      if ( v7 == v6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v9 = a1[221];
    if ( v9 )
    {
      for ( i = v9 + 8LL * *(unsigned int *)(v9 - 4); i != v9; v9 += 8 )
      {
        if ( *(_QWORD *)v9 != *(_QWORD *)(*(_QWORD *)v9 + 64LL) )
        {
          v14 = sub_15E1B70(a1[18]);
          v15 = v14;
          if ( v14 )
            ++*(_DWORD *)(v14 + 8);
          v16 = *(_QWORD **)(a3 + 8);
          if ( v16 )
          {
            v17 = *((_DWORD *)v16 - 1);
            if ( v17 == *((_DWORD *)v16 - 2) )
            {
              v18 = (3 * v17 + 1) >> 1;
              v19 = 8 * v18 + 8;
              if ( 8 * v17 + 8 >= (unsigned int)v19 || v17 >= v18 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_116834(v23, "Overflow encountered when expanding vector", v4);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v23);
                sub_233E40((__int64)v23);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v20 = (unsigned int *)sub_186B300(v16 - 1, v19);
              v21 = v20[1];
              v16 = v20 + 2;
              *v20 = v18;
              *(_QWORD *)(a3 + 8) = v20 + 2;
              LODWORD(v20) = v21;
              v13 = &v16[v21];
              v12 = (_DWORD)v20 + 1;
            }
            else
            {
              v11 = v17;
              v12 = v17 + 1;
              v13 = &v16[v11];
            }
          }
          else
          {
            v22 = (_QWORD *)sub_186B270(0x18u);
            v16 = v22 + 1;
            *v22 = 2;
            v12 = 1;
            *(_QWORD *)(a3 + 8) = v16;
            v13 = v16;
          }
          *v13 = v15;
          *((_DWORD *)v16 - 1) = v12;
        }
      }
    }
    return 1;
  }
  return result;
}

