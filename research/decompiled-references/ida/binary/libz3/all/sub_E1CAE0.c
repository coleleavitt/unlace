__int64 __fastcall sub_E1CAE0(__int64 a1, __int64 *a2)
{
  _QWORD *exception; // rbx
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // edx
  char v8; // r14
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rbx
  char v15; // r14
  __int64 *v16; // rbp
  __int64 *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax

  if ( (unsigned __int8)sub_DF7C80(a1) && (unsigned __int8)sub_DF7C90(a1) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "Frontend does not support simultaneous generation of proofs and unsat cores");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( (unsigned __int8)sub_DF7C90(a1) )
  {
    v5 = *(_QWORD *)(a1 + 760);
    v6 = *(_QWORD *)(a1 + 792);
    if ( v5 )
    {
      LODWORD(v5) = *(_DWORD *)(v5 - 4);
      if ( !v6 )
      {
        v7 = 0;
LABEL_7:
        if ( v7 != (_DWORD)v5 )
        {
          v3 = __cxa_allocate_exception(0x30u);
          sub_305660(v3, "Unsat core tracking must be set before assertions are added");
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        goto LABEL_8;
      }
    }
    else if ( !v6 )
    {
      goto LABEL_8;
    }
    v7 = *(_DWORD *)(v6 - 4);
    goto LABEL_7;
  }
LABEL_8:
  v8 = *((_BYTE *)a2 + 123);
  v9 = *a2;
  result = sub_DF7C90(a1);
  v14 = *(__int64 **)(a1 + 760);
  v15 = v8 & 8;
  if ( (_BYTE)result )
  {
    if ( v14 )
    {
      result = *((unsigned int *)v14 - 1);
      v16 = *(__int64 **)(a1 + 792);
      v17 = &v14[result];
      if ( v17 != v14 )
      {
        if ( v15 )
        {
          do
          {
            v24 = *v16;
            ++v14;
            ++v16;
            v25 = sub_15D3210(v9, v24);
            v29 = sub_15DE060(v9, *(v14 - 1), v26, v27, v28);
            result = sub_EDB570(a2, *(v14 - 1), v29, v25);
          }
          while ( v14 != v17 );
        }
        else
        {
          do
          {
            v18 = *v16;
            ++v14;
            ++v16;
            v19 = sub_15D3210(v9, v18);
            result = sub_EDB570(a2, *(v14 - 1), 0, v19);
          }
          while ( v17 != v14 );
        }
      }
    }
  }
  else if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v20 = &v14[result];
    if ( v20 != v14 )
    {
      if ( v15 )
      {
        do
        {
          v22 = *v14++;
          v23 = sub_15DE060(v9, v22, v11, v12, v13);
          result = sub_EDB570(a2, v22, v23, 0);
        }
        while ( v20 != v14 );
      }
      else
      {
        do
        {
          v21 = *v14++;
          result = sub_EDB570(a2, v21, 0, 0);
        }
        while ( v20 != v14 );
      }
    }
  }
  return result;
}

