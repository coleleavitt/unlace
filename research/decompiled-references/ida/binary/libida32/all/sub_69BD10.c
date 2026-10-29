unsigned __int64 __fastcall sub_69BD10(__int64 *a1, char *a2, __int64 a3, char a4)
{
  unsigned __int64 result; // rax
  unsigned int v7; // r14d
  char v8; // al
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r14
  const char *v12; // rsi
  _DWORD *v13; // rax

  result = *(_BYTE *)(a3 + 28) & 0x2F;
  if ( (_BYTE)result != 13 )
    return result;
  if ( !a2 || !*a2 )
  {
    if ( !under_debugger )
      interr(2892);
LABEL_33:
    BUG();
  }
  v7 = sub_698F20(a1, a2, 0, 0);
  v8 = *(_BYTE *)(a3 + 28) & 0x3F;
  if ( v7 == -1 )
  {
    if ( v8 != 13 || !*(_BYTE *)(a3 + 30) )
      sub_698F20(a1, a2, 1, 1u);
    goto LABEL_22;
  }
  if ( v8 != 13 || !*(_BYTE *)(a3 + 30) )
    sub_698F20(a1, a2, 1, 1u);
  if ( a4 )
  {
LABEL_22:
    if ( (unsigned __int8)sub_5EFC40(a2) )
    {
      sub_69B2A0(a1, v7, 0, 1);
      v13 = sub_518BB0(*(_QWORD *)(*a1 + 1680), v7);
      if ( v13 )
        v13[5] |= 8u;
    }
  }
  result = *a1;
  v9 = *(_QWORD *)(*a1 + 1672);
  if ( *(_QWORD *)(a3 + 40) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(a3 + 32) + 32 * v10;
      if ( *(_QWORD *)(v11 + 8) <= 1u )
      {
        if ( !under_debugger )
          interr(2893);
        goto LABEL_33;
      }
      result = sub_698F20(a1, *(const char **)v11, 0, 0);
      if ( (_DWORD)result == -1 )
        break;
      if ( *(_BYTE *)(v9 + 8) )
        goto LABEL_11;
LABEL_12:
      if ( (unsigned __int64)++v10 >= *(_QWORD *)(a3 + 40) )
        return result;
    }
    v12 = haystack;
    if ( *(_QWORD *)(v11 + 8) )
      v12 = *(const char **)v11;
    LODWORD(result) = sub_698F20(a1, v12, 1, 1u);
LABEL_11:
    result = sub_69AC30((__int64)a1, result, *(_QWORD *)(a3 + 136) + (v10 << 7));
    goto LABEL_12;
  }
  return result;
}

