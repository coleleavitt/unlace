unsigned int *__fastcall sub_3E8E20(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v5; // r8
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned int v8; // eax

  v5 = a4;
  v6 = *(_WORD *)(a1 + 48);
  if ( v6 > 0x3Cu )
    goto LABEL_9;
  v7 = 1LL << v6;
  if ( ((1LL << v6) & 0x210000042000000LL) != 0 )
  {
    v8 = 22;
    return sub_3E8D60(a1, v8, *(unsigned __int16 *)(a1 + 842), a3, v5, (int)a2, 0);
  }
  if ( (v7 & 0x820000404000000LL) != 0 )
  {
    v8 = 23;
    return sub_3E8D60(a1, v8, *(unsigned __int16 *)(a1 + 842), a3, v5, (int)a2, 0);
  }
  if ( (v7 & 0x1040000808000000LL) == 0 )
  {
LABEL_9:
    if ( !under_debugger )
      sub_37DDE0(0xCE20u, a2, a5);
    BUG();
  }
  v8 = 24;
  return sub_3E8D60(a1, v8, *(unsigned __int16 *)(a1 + 842), a3, v5, (int)a2, 0);
}
