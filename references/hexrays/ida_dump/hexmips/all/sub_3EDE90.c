unsigned __int64 __fastcall sub_3EDE90(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  unsigned __int16 v5; // ax
  int v6; // ebp
  __int64 v7; // rsi
  unsigned int v8; // esi
  bool v10; // cf

  v5 = *(_WORD *)(a1 + 890);
  if ( ((v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCE2Cu, a2, a5);
LABEL_19:
    BUG();
  }
  v6 = a2;
  v7 = *(unsigned __int16 *)(a1 + 48);
  if ( (_WORD)v7 == 35 )
    goto LABEL_14;
  if ( (unsigned __int16)v7 <= 0x23u )
  {
    if ( (_WORD)v7 != 11 )
    {
      if ( (_WORD)v7 == 34 || (_WORD)v7 == 10 )
      {
        v8 = 40;
        goto LABEL_7;
      }
      goto LABEL_15;
    }
LABEL_14:
    v8 = 35;
    goto LABEL_7;
  }
  if ( (unsigned __int16)v7 > 0x252u )
  {
    v10 = (_WORD)v7 == 595;
    LOWORD(v7) = v7 - 595;
    if ( v10 || (_WORD)v7 == 1 )
    {
      v8 = 32;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  if ( (unsigned __int16)v7 <= 0x250u )
  {
LABEL_15:
    if ( !under_debugger )
      sub_37E160(0xCC28u, v7, a5);
    goto LABEL_19;
  }
  v8 = 33;
LABEL_7:
  sub_3EAB70(a1, v8, v5, a3, a4, v6, 0);
  return sub_3EDDF0((_QWORD *)a1, 1, *(unsigned __int16 *)(a1 + 890), v6, v6, 0);
}
