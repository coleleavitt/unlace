__int64 __fastcall sub_6BB010(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[173];
  if ( !result )
  {
    result = sub_6BAD90(a1, a1[2329], "__uint128_t", 0xBu);
    a1[173] = result;
  }
  return result;
}

