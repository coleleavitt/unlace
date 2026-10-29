char __fastcall sub_E82DC0(__int64 a1, unsigned __int8 a2, __int64 a3, int *a4)
{
  _DWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r14
  _DWORD *v10; // rax
  int v11; // eax
  char result; // al
  _BYTE v13[41]; // [rsp+1Fh] [rbp-29h] BYREF

  if ( *(_WORD *)(a3 + 4) || (v7 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr )
  {
    v8 = a1 + 32;
  }
  else
  {
    v8 = a1 + 32;
    if ( *v7 == 5 && v7[1] == 8 && *(_DWORD *)(a3 + 24) == 1 )
    {
      v9 = *(_QWORD *)(a3 + 32);
      if ( !*(_WORD *)(v9 + 4) )
      {
        v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
        if ( v10 )
        {
          if ( *v10 == 5
            && v10[1] == 8
            && *(_DWORD *)(v9 + 24) == 1
            && (unsigned __int8)sub_E82DC0(a1, a2, *(_QWORD *)(v9 + 32), a4) )
          {
            sub_1831620(qword_1C7F2C0, a4);
LABEL_17:
            sub_1831620(qword_1C7F2C0, a4);
            return 1;
          }
        }
      }
      v8 = a1 + 32;
      if ( (unsigned __int8)sub_1666AE0(a1 + 32, v9, a4, v13) )
      {
        v11 = *a4;
        if ( *a4 )
        {
          if ( !a2 || (a4[1] & 1) == 0 && (v11 == 1 || v11 == -1) && (a4[5] & 1) == 0 && a4[4] == 1 )
            goto LABEL_17;
        }
      }
    }
  }
  result = sub_1666AE0(v8, a3, a4, v13);
  if ( result )
  {
    result = 0;
    if ( *a4 )
    {
      if ( !a2 )
        return 1;
      result = (a4[1] & 1) == 0;
      if ( (a4[1] & 1) == 0 )
      {
        result = 0;
        if ( ((*a4 + 1) & 0xFFFFFFFD) == 0 )
        {
          result = (a4[5] & 1) == 0;
          if ( (a4[5] & 1) == 0 )
            return a4[4] == 1;
        }
      }
    }
  }
  return result;
}

