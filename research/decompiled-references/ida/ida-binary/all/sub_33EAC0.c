__int64 __fastcall navband_t::compute_visible_addr_range_end(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
