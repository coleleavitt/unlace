__int64 __fastcall sub_513240(int *a1)
{
  __int64 result; // rax
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  _QWORD *v5; // r11
  _QWORD *v6; // rax

  result = 0;
  if ( a1[26] != -1 && a1[27] != -1 && a1[28] != -1 && a1[29] != -1 )
  {
    if ( (int)sub_511D50(a1 + 28, a1 + 26) >= 0 )
    {
      v6 = v2;
      v2 = v4;
      v4 = v6;
    }
    if ( v3 )
      *v3 = *v2;
    if ( v5 )
      *v5 = *v4;
    return 1;
  }
  return result;
}
