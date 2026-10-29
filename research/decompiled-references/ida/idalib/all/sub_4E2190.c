__int64 __fastcall sub_4E2190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a3 + 24);
  if ( (result & 0x10) != 0 )
  {
    result = sub_631AD0(a1, 93);
    *(_QWORD *)(a3 + 8) = result;
  }
  else if ( (result & 0x1000) != 0 )
  {
    *(_QWORD *)(a3 + 8) = a2;
  }
  return result;
}
