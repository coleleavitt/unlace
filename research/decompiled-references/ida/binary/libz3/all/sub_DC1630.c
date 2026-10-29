void __fastcall sub_DC1630(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *exception; // rbx

  if ( a3 )
  {
    v3 = sub_DC07A0(a1)[1];
    v4 = 0x7FFFFFFF8LL;
    if ( v3 )
      v4 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
    v5 = *(_QWORD *)(v3 + v4);
    if ( v5 != sub_15D1F10(a2) )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid qualified identifier, sort mismatch");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v6 = sub_DC07A0(a1);
    v7 = v6[1];
    v8 = (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
    v9 = *(_QWORD *)(v7 + 8 * v8);
    *(_DWORD *)(v7 - 4) = v8;
    if ( v9 )
    {
      v10 = *v6;
      if ( (*(_DWORD *)(v9 + 8))-- == 1 )
        sub_15D7BC0(v10, v9);
    }
  }
}

