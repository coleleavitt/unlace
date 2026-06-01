__int64 __fastcall sub_F48DA0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax

  sub_F47B30(a1, a2, a3);
  result = *(_BYTE *)(a2 + 85) & 3;
  if ( (_BYTE)result == 2 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " aggregate ");
  return result;
}
