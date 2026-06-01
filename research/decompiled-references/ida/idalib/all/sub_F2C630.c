__int64 __fastcall sub_F2C630(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  sub_F2C530(a1, (__int64)a2);
  result = *a2;
  if ( (*a2 & 0x4000000) != 0 )
    return sub_995540(*(_QWORD *)(a1 + 1096), " part_of_explicit_cast");
  return result;
}
