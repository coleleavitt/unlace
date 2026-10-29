__int64 __fastcall sub_86BC60(__int64 a1, unsigned int a2, __int64 a3)
{
  char **exception; // rbp
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r12
  __int64 v8; // rcx
  __int64 *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // ecx
  size_t v14; // rsi
  unsigned int *v15; // rax
  _DWORD *v16; // rdx
  __int64 *v17; // rcx
  _QWORD *v18; // rax
  unsigned int v19; // [rsp+Ch] [rbp-7Ch]
  __m128i v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21[11]; // [rsp+30h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 600);
  v5 = *(unsigned int **)(result + 8LL * a2);
  if ( v5 )
  {
    result = *(v5 - 1);
    v6 = &v5[result];
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        sub_7E4F90(&v20, a1, *v5);
        v10 = *(_QWORD **)(a3 + 8);
        v11 = v20.m128i_i64[0];
        if ( !v10 )
          break;
        v12 = *((_DWORD *)v10 - 1);
        if ( v12 == *((_DWORD *)v10 - 2) )
        {
          v13 = (3 * v12 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (3 * v12 + 1) >> 1;
          v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
          v16 = v15 + 2;
          ++v5;
          *(_QWORD *)(a3 + 8) = v15 + 2;
          *v15 = v19;
          LODWORD(v15) = v15[1];
          v17 = (__int64 *)&v16[2 * (unsigned int)v15];
          result = (unsigned int)((_DWORD)v15 + 1);
          *v17 = v11;
          *(v16 - 1) = result;
          if ( v6 == v5 )
            return result;
        }
        else
        {
          v8 = v12;
          result = v12 + 1;
          v9 = &v10[v8];
LABEL_5:
          ++v5;
          *v9 = v11;
          *((_DWORD *)v10 - 1) = result;
          if ( v6 == v5 )
            return result;
        }
      }
      v18 = (_QWORD *)sub_186B270(0x18u);
      v10 = v18 + 1;
      *v18 = 2;
      result = 1;
      *(_QWORD *)(a3 + 8) = v10;
      v9 = v10;
      goto LABEL_5;
    }
  }
  return result;
}

