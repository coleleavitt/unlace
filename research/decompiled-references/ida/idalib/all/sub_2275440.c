__int64 __fastcall sub_2275440(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80);
  if ( !result )
    return sub_2275200(a1, a2, a3, a4, a5, a6);
  return result;
}
