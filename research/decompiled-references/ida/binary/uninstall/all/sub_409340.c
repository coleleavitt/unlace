__int64 __fastcall sub_409340(__int64 a1)
{
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  const char *v4; // rsi
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r9d
  _BYTE v10[12]; // [rsp+Ch] [rbp-Ch] BYREF

  sub_48B350(a1);
  if ( (*(_BYTE *)(a1 + 424) & 1) != 0 )
  {
    sub_48B350(a1);
    sub_48B710(a1, (unsigned int)"attempt to call eval in deleted interpreter", 0, v6, v7, v8);
    sub_48BC40(
      a1,
      (unsigned int)"TCL",
      (unsigned int)"IDELETE",
      (unsigned int)"attempt to call eval in deleted interpreter",
      0,
      v9);
    return 1;
  }
  if ( *(_DWORD *)(a1 + 152) > *(_DWORD *)(a1 + 156) )
  {
    if ( (unsigned __int64)v10 > *(_QWORD *)(a1 + 1224) )
    {
      v4 = "too many nested evaluations (infinite loop?)";
      goto LABEL_5;
    }
LABEL_4:
    v4 = "out of stack space (infinite loop?)";
LABEL_5:
    sub_48B710(a1, (_DWORD)v4, 0, v1, v2, v3);
    return 1;
  }
  result = 0;
  if ( (unsigned __int64)v10 <= *(_QWORD *)(a1 + 1224) )
    goto LABEL_4;
  return result;
}

