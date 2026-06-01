__int64 __fastcall sub_178BFE0(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (unsigned __int8)sub_1787200((__int64)a1)
    && (unsigned __int8)sub_178B940((__int64)a1)
    && (unsigned __int8)sub_1785C50((__int64)a1, a2, v3, v4)
    && (unsigned __int8)sub_17876A0((__int64)a1) )
  {
    result = sub_1789360(a1);
  }
  else
  {
    result = 0;
  }
  a1[8].m128i_i8[8] = result;
  return result;
}
