__int64 __fastcall deserialize_tinfo(
        unsigned __int64 *a1,
        __int64 a2,
        const char **a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // [rsp+Fh] [rbp-19h]

  v6 = qword_2CA1698;
  v7 = *(_QWORD *)(qword_2CA1698 + 1632);
  if ( *(_BYTE *)(v7 + 133) )
  {
    if ( !under_debugger )
      interr(3012);
LABEL_11:
    BUG();
  }
  *(_BYTE *)(v7 + 133) = 1;
  result = sub_5225A0(*(__int64 **)(v6 + 1480), a1, a2, a3, a4, a5, a6);
  *(_BYTE *)(v7 + 133) = 0;
  if ( (_BYTE)result )
  {
    v9 = *a1;
    if ( *a1 > 0xFF )
    {
      v10 = result;
      sub_525DE0(*(_QWORD *)(v6 + 1632), v9);
      return v10;
    }
    if ( (v9 & 0xF) > 9 )
    {
      if ( !under_debugger )
        interr(933);
      goto LABEL_11;
    }
  }
  return result;
}

