__int64 __fastcall sub_1C3F20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = -1;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(a3 + 25) & 2) != 0 )
  {
    *(_QWORD *)(a1 + 48) = -1;
  }
  else
  {
    result = sub_1CF650(240);
    *(_QWORD *)(a1 + 48) = result;
  }
  return result;
}
