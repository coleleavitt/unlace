__int64 __fastcall sub_B96990(__int64 a1, unsigned int **a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **exception; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // r12
  unsigned int v12; // eax
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  _QWORD *v14; // rdx
  unsigned int v15; // r13d
  __m128i **v16; // rcx
  int v17; // eax
  int v19; // eax
  _QWORD *v20; // rax
  unsigned int v21; // r14d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_B6E740(*(_QWORD **)(a1 + 16), a2 + 4, *((_DWORD *)a2 + 6), 0, a3, a4, a5);
  sub_14CCC20(a1 + 72, a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 8656);
  if ( !v9
    || (v10 = *(unsigned int *)a2, (unsigned int)v10 >= *(_DWORD *)(v9 - 4))
    || (v11 = *(__m128i **)(v9 + 8 * v10)) == nullptr )
  {
    v11 = sub_B68280(v8, (unsigned int *)a2, 0, 0, 0, *(double *)a3.m128_u64, *(double *)a4.m128_u64, a5);
  }
  v12 = sub_B39350((__int64)v11, *(_DWORD *)(a1 + 8));
  if ( v12 == -1 || v11 != *(__m128i **)(*(_QWORD *)(a1 + 32) + 8LL * v12) )
  {
    v13 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
    if ( v13 == sub_902EE0 )
    {
      v14 = *(_QWORD **)(a1 + 32);
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 - 1);
        if ( v15 == *((_DWORD *)v14 - 2) )
        {
          v21 = (3 * v15 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v22 || v15 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v25, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v25);
            sub_233E40((__int64)v25);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v14 - 1, v22);
          v24 = v23[1];
          v14 = v23 + 2;
          *v23 = v21;
          *(_QWORD *)(a1 + 32) = v23 + 2;
          LODWORD(v23) = v24;
          v16 = (__m128i **)&v14[v24];
          v17 = (_DWORD)v23 + 1;
        }
        else
        {
          v16 = (__m128i **)&v14[v15];
          v17 = v15 + 1;
        }
      }
      else
      {
        v15 = 0;
        v20 = (_QWORD *)sub_186B270(0x18u);
        v14 = v20 + 1;
        *v20 = 2;
        v17 = 1;
        *(_QWORD *)(a1 + 32) = v14;
        v16 = (__m128i **)v14;
      }
      *v16 = v11;
      *((_DWORD *)v14 - 1) = v17;
    }
    else
    {
      v15 = v13(a1, (__int64)v11);
    }
    sub_B66EF0(*(_QWORD **)(a1 + 16), (__int64)v11, (unsigned int *)a1, v15);
  }
  if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 24), a2) )
  {
    v19 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
    sub_8F1CE0(*(_QWORD *)(a1 + 16), v19 & 0x7FFFFFFF, *(_DWORD *)(a1 + 8));
  }
  return 1;
}

