__int64 __fastcall sub_2B0F50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_2B0D70(a2);
  if ( (_BYTE)result )
    *(_OWORD *)(a1 + 1112) = -1;
  return result;
}
