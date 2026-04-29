__int64 __fastcall sub_373080(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)netnode_charval(*(_QWORD *)(a1 + 104), a2, 256) - 1;
  if ( (unsigned __int8)result <= 1u )
  {
    netnode_supdel(*(_QWORD *)(a1 + 104), a2, 256);
    return set_item_color(a2, 0xFFFFFFFFLL);
  }
  return result;
}
