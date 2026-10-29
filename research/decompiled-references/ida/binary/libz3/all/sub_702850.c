_DWORD *__fastcall sub_702850(_BYTE *a1, __int64 a2)
{
  _DWORD *result; // rax
  char **exception; // rbp
  bool v4; // zf
  void *v5; // rbx
  int v6; // edx
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  __int64 v11[9]; // [rsp+20h] [rbp-48h] BYREF

  result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( result )
  {
    if ( !*result )
      return result;
    if ( *(_WORD *)(a2 + 4) )
    {
LABEL_4:
      v7 = 0;
      v8 = 0;
      v9 = 1;
      v10 = 0;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a2 + 24) || *result != -1 )
    {
LABEL_7:
      if ( *result == 5 )
      {
        v6 = result[1];
        if ( v6 == 9 || v6 == 6 || v6 == 7 || v6 == 8 || !v6 || v6 == 2 || v6 == 3 || v6 == 4 || v6 == 5 )
          return result;
      }
      v7 = 0;
      v9 = 1;
      v4 = *result == 5;
      v8 = 0;
      v10 = 0;
      if ( !v4 )
      {
LABEL_5:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6FFCA0(v11, "not NRA");
        *exception = (char *)off_1C63670;
        sub_2333C0(exception + 1, v11);
        sub_233E40((__int64)v11);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      if ( result[1] == 22 && *(_DWORD *)(a2 + 24) == 2 )
      {
        if ( (unsigned __int8)sub_1666AE0(a1 + 8, *(_QWORD *)(a2 + 40), &v7, v11)
          && (v9 & 0x100000000LL) == 0
          && (_DWORD)v9 == 1
          && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, &v7)
          && !((unsigned __int64)sub_182D020(qword_1C7F2C0, &v7) >> 32)
          && (int)v7 > 0 )
        {
          goto LABEL_14;
        }
        if ( *(_WORD *)(a2 + 4) )
          goto LABEL_5;
        result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
        if ( !result || *result != 5 )
          goto LABEL_5;
      }
      if ( result[1] != 10 || *(_DWORD *)(*(_QWORD *)a1 + 408LL) || (*(_BYTE *)(a2 + 30) & 1) == 0 )
        goto LABEL_5;
      a1[24] = 1;
LABEL_14:
      v5 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v7);
      return (_DWORD *)sub_182CBA0(v5, &v9);
    }
  }
  else if ( *(_WORD *)(a2 + 4) || *(_DWORD *)(a2 + 24) )
  {
    goto LABEL_4;
  }
  result = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !result || *result != 5 || result[1] )
  {
    result = (_DWORD *)sub_15D2CB0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), a2);
    if ( !(_BYTE)result )
    {
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_4;
      result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !result )
        goto LABEL_4;
      goto LABEL_7;
    }
  }
  return result;
}

