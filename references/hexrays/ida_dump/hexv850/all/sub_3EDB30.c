void __fastcall sub_3EDB30(__int64 a1, double a2)
{
  int v2; // esi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebp

  v2 = *(unsigned __int16 *)(a1 + 48);
  if ( (_WORD)v2 == 57 )
  {
    sub_3E8420(
      a1,
      0x37u,
      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
      *(_QWORD *)(a1 + 80),
      0x3BEA45E214ADDC55LL,
      0x3BEA45E214ADDC55LL,
      0);
  }
  else
  {
    v3 = (unsigned int)(v2 - 52);
    if ( (unsigned int)v3 > 0xF )
    {
      if ( !under_debugger )
        sub_37CFE0(0xCEE5u, v3, a2);
      BUG();
    }
    v4 = *(_QWORD *)(a1 + 832);
    v5 = *(_QWORD *)(v4 + 584);
    if ( !v5 )
      sub_3E4140(a2, a1, v3);
    v6 = *(_DWORD *)(*(_QWORD *)(v4 + 576) + 4 * v5 - 4);
    *(_QWORD *)(v4 + 584) = v5 - 1;
    sub_3ED6D0(a1, v3, v6, a2);
    sub_3E8420(a1, 0x2Au, 1, v6, 0x3BEA45E214ADDC55LL, *(_QWORD *)(a1 + 80), 0);
    sub_3E62F0(*(_QWORD *)(a1 + 832), v6);
  }
}
