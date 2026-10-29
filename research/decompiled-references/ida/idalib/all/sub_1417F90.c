__int64 (__fastcall *__fastcall sub_1417F90(_QWORD *a1))()
{
  __int64 (__fastcall *result)(); // rax
  char *v2; // rsi
  __int64 v4; // r8
  char *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax

  result = (__int64 (__fastcall *)())a1[140];
  v2 = (char *)a1[147];
  if ( result || a1[143] || (char *)a1[146] == v2 )
  {
    if ( v2 == (char *)a1[148] )
    {
      sub_1417C50((__int64)(a1 + 146), v2, a1 + 144, a1 + 145, a1 + 139, a1 + 140, a1 + 143, a1 + 141);
    }
    else
    {
      v4 = a1[144];
      v5 = v2 + 56;
      v6 = a1[141];
      v7 = a1[142];
      *((_QWORD *)v5 - 6) = a1[145];
      v8 = a1[139];
      *((_QWORD *)v5 - 7) = v4;
      a1[139] = 0;
      *((_QWORD *)v5 - 4) = result;
      v9 = a1[143];
      *((_QWORD *)v5 - 5) = v8;
      a1[143] = 0;
      *((_QWORD *)v5 - 3) = v9;
      *((_QWORD *)v5 - 2) = v6;
      *((_QWORD *)v5 - 1) = v7;
      a1[147] = v5;
    }
    a1[140] = 0;
    a1[144] = sub_1418450;
    return sub_1418450;
  }
  return result;
}
