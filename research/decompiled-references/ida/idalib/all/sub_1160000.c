const char *__fastcall sub_1160000(__int64 a1, __int64 a2, __int64 a3)
{
  const char *result; // rax
  char *v5; // rsi
  char *v6; // rsi
  _QWORD v7[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int8)sub_21B7850(a2, 2950, 2753, 1) )
    result = "+vpu";
  else
    result = "-vpu";
  v7[0] = result;
  v5 = *(char **)(a3 + 8);
  v7[1] = 4;
  if ( v5 == *(char **)(a3 + 16) )
    return (const char *)sub_1075D80(a3, v5, v7);
  *(_QWORD *)v5 = result;
  v6 = v5 + 16;
  *((_QWORD *)v6 - 1) = 4;
  *(_QWORD *)(a3 + 8) = v6;
  return result;
}
