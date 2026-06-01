__int64 __fastcall sub_15AB7B0(__int32 *a1, _QWORD *a2, __int64 a3, __int32 a4, __int32 a5)
{
  __int64 result; // rax

  sub_E90EF0((__m128i **)a1 + 1, a2, a3, a4, a5);
  result = (unsigned int)*a1;
  if ( !(_DWORD)result )
    *a1 = a4;
  a1[1] = a5;
  return result;
}
