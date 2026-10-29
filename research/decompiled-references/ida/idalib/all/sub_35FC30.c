unsigned __int64 __fastcall sub_35FC30(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = is_mapped(a2);
  if ( (_BYTE)result )
  {
    v3 = 1;
    if ( (*(_BYTE *)(a1 + 144) & 8) != 0 )
      v3 = align_up_to_stack(a2, -1, 1) - a2;
    return sub_35F1E0((_QWORD *)a1, a2, v3);
  }
  return result;
}
