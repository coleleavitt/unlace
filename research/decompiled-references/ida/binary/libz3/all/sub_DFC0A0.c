unsigned __int64 __fastcall sub_DFC0A0(__int64 a1, unsigned __int64 *a2)
{
  void *v2; // rbx
  void *v3; // rbx
  void *exception; // rbx
  unsigned __int64 v7; // r11
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 *v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 result; // rax
  char v14; // dl
  __int64 v15; // rcx
  unsigned int **v16; // rdx
  unsigned int **v17; // rsi
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // r12d
  int v22; // r13d
  unsigned __int64 v23[8]; // [rsp+0h] [rbp-40h] BYREF

  v7 = *a2;
  v8 = *(_DWORD *)(a1 + 632);
  v9 = *(_QWORD *)(a1 + 624);
  v23[0] = v7;
  v10 = sub_DF6190(v9, v8, v23);
  if ( v10 )
  {
    result = *(_QWORD *)(v10 + 16);
    if ( result )
    {
      v14 = result;
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 7) != 0 )
      {
        if ( *(_DWORD *)(result + 12) > 1u )
        {
          exception = __cxa_allocate_exception(0x30u);
          sub_E0F430(
            exception,
            "ambiguous function declaration reference, provide full signature to disambiguate (<symbol> (<sort>*) <sort>) ",
            a2);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        v15 = *(_QWORD *)result + 8LL * *(unsigned int *)(result + 8);
        v16 = *(unsigned int ***)result;
        if ( *(_QWORD *)result == v15 )
        {
          return **(_QWORD **)result;
        }
        else
        {
          while ( 1 )
          {
            result = (unsigned __int64)*v16;
            v17 = v16;
            if ( (unsigned __int64)*v16 > 1 )
              break;
            if ( (unsigned int **)v15 == ++v16 )
              return (unsigned __int64)v17[1];
          }
        }
      }
    }
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 544);
    v23[0] = v12;
    v19 = *(_QWORD *)(a1 + 536);
    v23[1] = 0xFFFFFFFFLL;
    v20 = sub_DF6000(v19, v18, v11);
    if ( !v20 )
    {
      v2 = __cxa_allocate_exception(0x30u);
      sub_E0F430(v2, "invalid function declaration reference, unknown function ", a2);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v21 = *(_DWORD *)(v20 + 16);
    v22 = *(_DWORD *)(v20 + 20);
    sub_DFBCB0(a1);
    result = sub_15D2D10(*(_QWORD *)(a1 + 296), v21, v22, 0, 0, 0, 0, 0);
    if ( !result )
    {
      v3 = __cxa_allocate_exception(0x30u);
      sub_E0F430(v3, "invalid function declaration reference, must provide signature for builtin symbol ", a2);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
  return result;
}

