__int64 __fastcall sub_149F1B0(__int64 a1, __int64 **a2)
{
  __int64 v2; // rsi

  v2 = **a2;
  if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 18 <= 0x3F )
  {
    sub_B76FC0(a1, (_QWORD *)v2);
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = a1 + 16;
    strcpy((char *)(a1 + 16), "<anonymous>");
    *(_QWORD *)(a1 + 8) = 11;
    return a1;
  }
}
