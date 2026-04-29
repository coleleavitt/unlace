_DWORD *__fastcall sub_3EAA80(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  int v6; // edx
  __int64 v8; // r9
  _DWORD *result; // rax

  v6 = *(unsigned __int16 *)(a1 + 890);
  if ( (((_WORD)v6 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCE6u, a2, a5);
    BUG();
  }
  v8 = **(int **)(*(_QWORD *)(a1 + 832) + 696LL);
  if ( (_DWORD)v8 == a3 || (_DWORD)v8 == (_DWORD)a2 || (_DWORD)v8 == a4 )
  {
    sub_1D1F50(a1, 3u, v6, 0, 0x3BEA45E214ADDC55LL, v8, 0);
    LOWORD(v6) = *(_WORD *)(a1 + 890);
  }
  sub_1D2430(a1, 1u, 5 * ((_WORD)v6 != 4) + 2, a3, a4, a2);
  result = *(_DWORD **)(*(_QWORD *)(a1 + 832) + 728LL);
  if ( (_DWORD)a2 == *result )
  {
    result = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 920LL);
    result[32] |= 2u;
  }
  return result;
}
