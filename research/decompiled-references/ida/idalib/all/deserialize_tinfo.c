__int64 __fastcall deserialize_tinfo(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // [rsp+Fh] [rbp-19h]

  v6 = qword_2CCB598;
  v7 = *(_QWORD *)(qword_2CCB598 + 1824);
  if ( *(_BYTE *)(v7 + 133) )
  {
    if ( !under_debugger )
      interr(3012);
LABEL_11:
    BUG();
  }
  *(_BYTE *)(v7 + 133) = 1;
  result = sub_53B270(*(__int64 **)(v6 + 1672), a1, a2, a3, a4, a5, a6);
  *(_BYTE *)(v7 + 133) = 0;
  if ( (_BYTE)result )
  {
    v9 = *a1;
    if ( *a1 > 0xFF )
    {
      v10 = result;
      sub_53EAE0(*(_QWORD *)(v6 + 1824), v9);
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
