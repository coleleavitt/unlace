void __fastcall sub_B6E740(
        _QWORD *a1,
        unsigned int **a2,
        unsigned int a3,
        unsigned __int8 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7)
{
  char **exception; // rbx
  __int64 v8; // rdx
  unsigned int **v10; // rbp
  __int64 v11; // rbx
  unsigned int **v12; // r13
  unsigned int *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  int v18; // [rsp+8h] [rbp-40h]
  int v19; // [rsp+10h] [rbp-38h]
  __int64 v20; // [rsp+18h] [rbp-30h]
  __int64 v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+28h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-18h]

  v10 = a2;
  v11 = a3;
  sub_B6E460(a1, a2, a3, a5, a6, a7);
  if ( (_DWORD)v11 )
  {
    v12 = &a2[v11];
    do
    {
      while ( 1 )
      {
        v13 = *v10;
        if ( *((_WORD *)*v10 + 2) == 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(&v17, "Formulas should not contain unbound variables", v8);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v17);
          sub_233E40((__int64)&v17);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        if ( !(unsigned __int8)sub_15D2CB0(a1[13], *v10) )
          break;
        ++v10;
        sub_B6CE00(a1, v13, a4, *(double *)a5.m128_u64, a6, a7, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23);
        if ( v10 == v12 )
          return;
      }
      if ( *((_WORD *)v13 + 2) == 2 && v13[4] == 2 )
        sub_B6D160((__int64)a1, v13, *(double *)a5.m128_u64, a6, a7);
      else
        sub_B6E0D0(a1, v13, *(double *)a5.m128_u64, a6, a7);
      ++v10;
    }
    while ( v10 != v12 );
  }
}

