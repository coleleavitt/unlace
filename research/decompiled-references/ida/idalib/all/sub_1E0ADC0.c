unsigned __int64 __fastcall sub_1E0ADC0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 96);
  if ( (((unsigned __int8)v1 | (unsigned __int8)(v1 >> 1)) & 1) != 0 )
    return 0;
  result = v1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !result )
    return 0;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
  {
    if ( (*(_BYTE *)(*v3 + 8LL) & 0x7Fu) - 59 > 2 )
      return result;
    v3 = (_QWORD *)v3[1];
  }
  else if ( ((_BYTE)v3[1] & 0x7Fu) - 59 > 2 )
  {
    return result;
  }
  v4 = *(_QWORD *)(result + 16);
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 8);
  if ( (_QWORD *)v5 != v3 )
    return 0;
  return result;
}
