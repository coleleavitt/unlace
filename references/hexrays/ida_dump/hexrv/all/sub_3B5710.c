__int64 __fastcall sub_3B5710(double a1, __m128 a2, __m128 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  sub_386210(a5, 0);
  result = 0;
  if ( *(_DWORD *)(a5 + 80) == 1 )
    return (unsigned __int8)sub_391400(a5, *(_QWORD *)(a5 + 88), a1, a2, a3);
  return result;
}
