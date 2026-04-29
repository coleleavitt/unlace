__int64 __fastcall sub_19920(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v5; // dx
  unsigned __int8 v6; // [rsp+Fh] [rbp-19h]

  result = sub_175C0(a1, a2, a3);
  if ( (_BYTE)result )
  {
    v5 = *(_WORD *)(a3 + 12);
    if ( v5 <= 4u )
    {
      if ( v5 <= 2u )
        return result;
LABEL_6:
      v6 = result;
      auto_mark_range(a1[4], a1[4] + 1LL, 20);
      return v6;
    }
    if ( (unsigned __int16)(v5 - 6) <= 1u )
      goto LABEL_6;
  }
  return result;
}
