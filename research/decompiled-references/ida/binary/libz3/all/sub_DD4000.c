void __fastcall sub_DD4000(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  _QWORD *exception; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 *v10; // r14

  while ( *((_DWORD *)a1 + 356) != 2 )
  {
    while ( 1 )
    {
      sub_DD2CA0(a1);
      v1 = *a1;
      sub_DFBCB0(*a1);
      v2 = a1[202];
      v3 = *(_QWORD *)(v1 + 296);
      if ( v2 )
      {
        v4 = *(_QWORD *)(v2 + 8);
      }
      else
      {
        v6 = sub_186B270(0x10u);
        v7 = *a1;
        v8 = (__int64 *)v6;
        sub_DFBCB0(*a1);
        v9 = *(_QWORD *)(v7 + 296);
        v10 = (__int64 *)a1[202];
        v8[1] = 0;
        *v8 = v9;
        if ( v8 == v10 )
          goto LABEL_8;
        if ( !v10 )
        {
          a1[202] = v8;
          goto LABEL_8;
        }
        sub_2334C0(v10);
        sub_186B220(v10);
        a1[202] = v8;
        v4 = v8[1];
      }
      if ( v4 )
        break;
LABEL_8:
      if ( !(unsigned __int8)sub_15D2CB0(v3, MEMORY[0x7FFFFFFF8]) )
        goto LABEL_6;
      if ( *((_DWORD *)a1 + 356) == 2 )
        return;
    }
    if ( !(unsigned __int8)sub_15D2CB0(v3, *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1))) )
    {
LABEL_6:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid check-sat command, argument must be a Boolean literal");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
  }
}

