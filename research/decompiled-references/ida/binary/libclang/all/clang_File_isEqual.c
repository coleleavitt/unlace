__int64 __fastcall clang_File_isEqual(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 result; // rax

  if ( a1 == a2 )
    return 1;
  if ( !a1 || !a2 )
    return 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v2 & 4) == 0 || !v3 )
        break;
      v2 = v3[1];
      if ( !v2 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v3 = nullptr;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( !v4 )
  {
LABEL_12:
    v5 = nullptr;
    result = 0;
    if ( v3[7] != 0x1E001F0040000ALL )
      return result;
    return v3[8] == v5[8];
  }
  while ( 1 )
  {
    v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v4 & 4) == 0 || !v5 )
      break;
    v4 = v5[1];
    if ( !v4 )
      goto LABEL_12;
  }
  result = 0;
  if ( v3[7] == v5[7] )
    return v3[8] == v5[8];
  return result;
}

