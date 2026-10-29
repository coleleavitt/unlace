__m128i *__fastcall sub_B6D040(_QWORD *a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  char **exception; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i *result; // rax
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  void (*v19)(); // rcx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  int v21; // [rsp+8h] [rbp-40h]
  int v22; // [rsp+10h] [rbp-38h]
  __int64 v23; // [rsp+18h] [rbp-30h]
  __int64 v24; // [rsp+20h] [rbp-28h]
  __int64 v25; // [rsp+28h] [rbp-20h]
  __int64 v26; // [rsp+30h] [rbp-18h]

  v7 = (_QWORD *)(a2 + 32);
  v8 = 8LL * *(unsigned int *)(a2 + 24);
  v9 = (_QWORD *)(a2 + 32 + v8);
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *v7;
        if ( *(_WORD *)(*v7 + 4LL) == 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(&v20, "Formulas should not contain unbound variables", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v20);
          sub_233E40((__int64)&v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        if ( !(unsigned __int8)sub_15D2CB0(a1[13], *v7) )
          break;
        ++v7;
        sub_B6CE00(a1, (unsigned int *)v10, 0, a3, a4, a5, v11, v12, v13, v20, v21, v22, v23, v24, v25, v26);
        if ( v9 == v7 )
          goto LABEL_9;
      }
      if ( *(_WORD *)(v10 + 4) == 2 && *(_DWORD *)(v10 + 16) == 2 )
        sub_B6D160((int)a1);
      else
        sub_B6E0D0((int)a1);
      ++v7;
    }
    while ( v9 != v7 );
  }
LABEL_9:
  result = sub_B68280((__int64)a1, (unsigned int *)a2, 0, 0, 1u, a3, *(double *)a4.m128_u64, a5);
  v15 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL) + 24LL);
  if ( v15 )
  {
    v16 = *v15;
    if ( (_DWORD)v16 != -1 )
    {
      v17 = a1[1084];
      if ( v17 )
      {
        if ( (unsigned int)v16 < *(_DWORD *)(v17 - 4) )
        {
          v18 = *(_QWORD *)(v17 + 8 * v16);
          if ( v18 )
          {
            v19 = *(void (**)())(*(_QWORD *)v18 + 40LL);
            if ( v19 != nullsub_523 )
              return (__m128i *)((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v19)(
                                  v18,
                                  result,
                                  *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL));
          }
        }
      }
    }
  }
  return result;
}

