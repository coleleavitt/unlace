unsigned __int64 __fastcall sub_6D3C30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *a2;
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 58 > 9 )
  {
    if ( (_BYTE)v3 == 20 && v2 )
      return sub_A5E330(*(_QWORD *)(a1 + 48), v2, 0);
LABEL_5:
    if ( !under_debugger )
      interr(3405);
    BUG();
  }
  if ( !v2 )
    goto LABEL_5;
  v4 = *(_QWORD *)(v2 + 48);
  if ( v4 )
    return v4 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A56D30(*(_QWORD *)(a1 + 48), v2, v3);
}

