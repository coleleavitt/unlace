__int64 __fastcall sub_5FEFE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  const char *v6; // r12
  _BYTE *v7; // r15
  size_t v8; // rax
  int v9; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  while ( 1 )
  {
    result = idt_get_next(a3, v10);
    if ( (_DWORD)result )
      break;
    v5 = *a1;
    v6 = *(const char **)(v10[0] + 8LL);
    v9 = *(_DWORD *)v10[0];
    if ( !v6 )
      v6 = &byte_22CD811;
    sub_79C0D0(a1 + 310, v5, v6, &v9, 4, 72);
    sub_79C0D0(a1 + 310, *a1, v6, v10[0] + 20LL, 4, 65);
    v7 = *(_BYTE **)(v10[0] + 24LL);
    if ( v7 && *v7 )
    {
      v8 = strlen(*(const char **)(v10[0] + 24LL));
      sub_79C0D0(a1 + 310, *a1, v6, v7, v8, 83);
    }
  }
  if ( (_DWORD)result == 4 )
    return 0;
  return result;
}

