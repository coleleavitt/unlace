__int64 __fastcall sub_66F360(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 *i; // rax
  __int64 v6; // rsi
  char **exception; // rbp
  __int64 v8; // rcx
  int v9; // r8d
  _QWORD *v10; // rdx
  _DWORD *v11; // rdx
  _QWORD v13[4]; // [rsp+10h] [rbp-68h] BYREF
  int v14[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[56]; // [rsp+40h] [rbp-38h] BYREF

  sub_66E8A0(a1);
  if ( a2 )
  {
    for ( i = a3; &a3[a2] != i; ++i )
    {
      v6 = *i;
      if ( *(_WORD *)(*i + 4) )
      {
LABEL_4:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_1606360(v14, v6, *(_QWORD *)(a1 + 120), 0, 0, 0);
        sub_669CA0(v13, "only propositional assumptions are supported for finite domains ", (__int64)v14);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v13);
        sub_233E40((__int64)v13);
        sub_18572D0(v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_DWORD *)(v6 + 24);
      v10 = *(_QWORD **)(v8 + 24);
      if ( v10 )
      {
        if ( *v10 != 0x800000000LL || v9 != 1 )
        {
          if ( v9 )
            goto LABEL_4;
          v11 = *(_DWORD **)(v8 + 24);
LABEL_9:
          if ( *v11 != -1 )
            goto LABEL_4;
          continue;
        }
        v6 = *(_QWORD *)(v6 + 32);
        if ( *(_WORD *)(v6 + 4) || *(_DWORD *)(v6 + 24) )
          goto LABEL_4;
        v11 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( v11 )
          goto LABEL_9;
      }
      else if ( v9 )
      {
        goto LABEL_4;
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 184) + 368LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           a3);
}

