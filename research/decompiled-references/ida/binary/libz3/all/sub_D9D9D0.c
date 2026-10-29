void __fastcall sub_D9D9D0(_QWORD *a1)
{
  char **exception; // rbp
  char **v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  __int64 v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (_QWORD *)a1[7];
  v4 = &v3[2 * *((unsigned int *)a1 + 16)];
  if ( v3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_10;
    }
    while ( v4 != v3 )
    {
      if ( !(unsigned __int8)sub_18290A0(*a1) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v9, (const char *)off_1C7E180);
        *exception = (char *)off_1C63670;
        sub_2333C0(exception + 1, v9);
        sub_233E40((__int64)v9);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      sub_D9D7F0(a1, v3[1]);
      v5 = v3 + 2;
      if ( v4 == v3 + 2 )
        break;
      while ( 1 )
      {
        v3 = v5;
        if ( *v5 > 1u )
          break;
        v5 += 2;
        if ( v4 == v5 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  v6 = (_QWORD *)a1[10];
  v7 = &v6[2 * *((unsigned int *)a1 + 22)];
  if ( v6 != v7 )
  {
    while ( *v6 <= 1u )
    {
      v6 += 2;
      if ( v7 == v6 )
        return;
    }
    while ( v7 != v6 )
    {
      if ( !(unsigned __int8)sub_18290A0(*a1) )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v9, (const char *)off_1C7E180);
        *v2 = (char *)off_1C63670;
        sub_2333C0(v2 + 1, v9);
        sub_233E40((__int64)v9);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      sub_D9D7F0(a1, v6[1]);
      v8 = v6 + 2;
      if ( v7 == v6 + 2 )
        break;
      while ( 1 )
      {
        v6 = v8;
        if ( *v8 > 1u )
          break;
        v8 += 2;
        if ( v7 == v8 )
          return;
      }
    }
  }
}

