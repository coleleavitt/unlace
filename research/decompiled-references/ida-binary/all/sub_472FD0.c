__int64 __fastcall sub_472FD0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0LL:
      result = sub_3E85D0(a1);
      break;
    case 1LL:
      result = sub_3E86A0(a1, **(_QWORD **)(a3 + 8));
      break;
    case 2LL:
      result = (*(__int64 (__fastcall **)(const __m128i *, __int64))(a1->m128i_i64[0] + 432))(a1, 10);
      break;
    case 3LL:
      result = (*(__int64 (__fastcall **)(const __m128i *, __int64))(a1->m128i_i64[0] + 432))(a1, 12);
      break;
    case 4LL:
      result = (*(__int64 (__fastcall **)(const __m128i *, __int64))(a1->m128i_i64[0] + 432))(a1, 14);
      break;
    case 5LL:
      result = sub_3E8540((__int64)a1);
      break;
    default:
      return result;
  }
  return result;
}
