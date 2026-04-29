__int64 __fastcall sub_3E9080(__int64 a1, int a2, int a3, int a4, int a5, double a6)
{
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rsi
  int v10; // eax
  __int64 v12; // [rsp-8h] [rbp-28h]
  __int64 v13; // [rsp+0h] [rbp-20h]

  v7 = a2;
  v8 = a5;
  v9 = 71;
  sub_3E8D60(a1, 0x47u, *(unsigned __int16 *)(a1 + 842), v7, a3, a5, 0);
  v10 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned int)(v10 - 97) <= 1 )
  {
    sub_3E8D60(a1, 0x44u, *(unsigned __int16 *)(a1 + 842), v8, 0x3BEA45E214ADDC55LL, v8, 0);
    LOWORD(v10) = *(_WORD *)(a1 + 48);
    v9 = v13;
    if ( (unsigned __int16)v10 > 0x61u )
    {
      if ( (_WORD)v10 == 98 )
        goto LABEL_6;
      goto LABEL_9;
    }
  }
  else if ( (unsigned __int16)v10 > 0x61u )
  {
    goto LABEL_9;
  }
  v9 = 70;
  if ( (unsigned __int16)v10 <= 0x5Fu )
  {
    if ( (_WORD)v10 == 95 )
    {
LABEL_6:
      LODWORD(v9) = 69;
      goto LABEL_4;
    }
LABEL_9:
    if ( !under_debugger )
      sub_37DDE0(0xCE38u, v9, a6);
    BUG();
  }
LABEL_4:
  sub_3E8D60(a1, v9, *(unsigned __int16 *)(a1 + 842), v8, a4, v8, 0);
  return v12;
}
