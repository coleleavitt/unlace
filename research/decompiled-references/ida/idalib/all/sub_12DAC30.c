__int64 __fastcall sub_12DAC30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) = a2;
  if ( a3 )
  {
    result = *(_QWORD *)(a3 + 88);
    *(_QWORD *)(a1 + 48) = result;
  }
  return result;
}
