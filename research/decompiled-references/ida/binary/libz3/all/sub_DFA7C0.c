__int64 __fastcall sub_DFA7C0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ecx
  __int64 result; // rax
  int v15; // eax
  void *exception; // rbp

  v3 = *a2;
  v4 = *(unsigned int *)(a1 + 576);
  v5 = *(_QWORD *)(a1 + 568);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v6 = v3 >> 3;
    else
      LODWORD(v6) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v6) = -1640531495;
  }
  v7 = v4 - 1;
  v8 = 24 * v4;
  v9 = v5 + v8;
  v10 = 24LL * ((unsigned int)v6 & v7);
  v11 = v5 + v10;
  if ( v10 == v8 )
  {
LABEL_14:
    while ( v11 != v5 )
    {
      v15 = *(_DWORD *)(v5 + 4);
      if ( v15 == 2 )
      {
        if ( (_DWORD)v6 == *(_DWORD *)v5 && v3 == *(_QWORD *)(v5 + 8) )
        {
          v12 = v5;
          goto LABEL_11;
        }
      }
      else if ( !v15 )
      {
        break;
      }
      v5 += 24;
    }
LABEL_23:
    exception = __cxa_allocate_exception(0x30u);
    sub_E0F430(exception, "unknown global variable ", a2);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v12 = v5 + v10;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 + 4);
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_23;
      goto LABEL_7;
    }
    if ( (_DWORD)v6 == *(_DWORD *)v12 && *(_QWORD *)(v12 + 8) == v3 )
      break;
LABEL_7:
    v12 += 24;
    if ( v9 == v12 )
      goto LABEL_14;
  }
LABEL_11:
  result = *(_QWORD *)(v12 + 16);
  if ( !result )
    goto LABEL_23;
  return result;
}

