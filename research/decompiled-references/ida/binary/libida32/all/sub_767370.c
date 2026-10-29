__int64 __fastcall sub_767370(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rax
  int *v5; // r12
  __int64 v6; // rax
  const char *v7; // rsi

  sub_766450(a1);
  v1 = *(int *)(a1[22] + 48LL);
  if ( !(_DWORD)v1 )
  {
    v4 = a1[43];
    v5 = *(int **)(a1[42] + 8 * v4 - 8);
LABEL_8:
    if ( v4 )
    {
      v6 = v4 - 1;
      a1[43] = v6;
      if ( !v5 )
      {
LABEL_11:
        if ( v6 )
        {
          if ( !under_debugger )
            interr(270);
          BUG();
        }
        return 0;
      }
    }
    else if ( !v5 )
    {
      return 0;
    }
    sub_766150((__int64)v5);
    operator delete(v5, 0x20u);
    v6 = a1[43];
    goto LABEL_11;
  }
  while ( 1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1[12] + 64LL) + 8 * v1);
    if ( (unsigned int)sub_7718E0(v2, v2 + 56) != 0x7FFFFFFF )
      return sub_767230((__int64)a1, 0, 0);
    v4 = a1[43];
    v5 = *(int **)(a1[42] + 8 * v4 - 8);
    if ( v5[6] > 0 )
      break;
    if ( !*(_DWORD *)(v2 + 48) )
      goto LABEL_8;
    v1 = *(int *)(a1[22] + 48LL);
  }
  v7 = haystack;
  if ( *(_QWORD *)(v2 + 64) )
    v7 = *(const char **)(v2 + 56);
  set_error_string();
  return set_qerrno(56, v7);
}

