unsigned __int64 __fastcall sub_6BC760(__int64 *a1, char *a2, __int64 a3, char a4, double a5, __m128 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r14
  char v10; // al
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // r14
  const char *v14; // rsi
  _QWORD *v15; // rax

  result = *(_BYTE *)(a3 + 32) & 0x2F;
  if ( (_BYTE)result != 13 )
    return result;
  if ( !a2 || !*a2 )
  {
    if ( !under_debugger )
      interr(2892);
LABEL_33:
    BUG();
  }
  v9 = sub_6B9860(a1, a2, 0, 0);
  v10 = *(_BYTE *)(a3 + 32) & 0x3F;
  if ( v9 == -1 )
  {
    if ( v10 != 13 || !*(_BYTE *)(a3 + 34) )
      sub_6B9860(a1, a2, 1, 1u);
    goto LABEL_22;
  }
  if ( v10 != 13 || !*(_BYTE *)(a3 + 34) )
    sub_6B9860(a1, a2, 1, 1u);
  if ( a4 )
  {
LABEL_22:
    if ( (unsigned __int8)sub_60BBD0(a2) )
    {
      sub_6BBC80(a1, v9, 0, 1);
      v15 = sub_5310F0(*(_QWORD *)(*a1 + 1872), v9);
      if ( v15 )
        *((_DWORD *)v15 + 7) |= 8u;
    }
  }
  result = *a1;
  v11 = *(_QWORD *)(*a1 + 1864);
  if ( *(_QWORD *)(a3 + 48) )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(a3 + 40) + 32 * v12;
      if ( *(_QWORD *)(v13 + 8) <= 1u )
      {
        if ( !under_debugger )
          interr(2893);
        goto LABEL_33;
      }
      result = sub_6B9860(a1, *(const char **)v13, 0, 0);
      if ( result == -1 )
        break;
      if ( *(_BYTE *)(v11 + 8) )
        goto LABEL_11;
LABEL_12:
      if ( (unsigned __int64)++v12 >= *(_QWORD *)(a3 + 48) )
        return result;
    }
    v14 = haystack;
    if ( *(_QWORD *)(v13 + 8) )
      v14 = *(const char **)v13;
    result = sub_6B9860(a1, v14, 1, 1u);
LABEL_11:
    result = sub_6BB600(a1, result, *(_QWORD *)(a3 + 144) + 144 * v12, a5, a6);
    goto LABEL_12;
  }
  return result;
}
