__int64 __fastcall sub_35C880(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // eax

  result = is_mapped(a2);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(a1 + 144) & 8) != 0 )
    {
      v3 = align_up_to_stack(a2, 0xFFFFFFFFLL, 1);
      return sub_35BEC0((_QWORD *)a1, a2, v3 - a2);
    }
    else
    {
      return sub_35BEC0((_QWORD *)a1, a2, 1u);
    }
  }
  return result;
}

