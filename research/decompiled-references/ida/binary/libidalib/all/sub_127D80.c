__int64 __fastcall sub_127D80(__int64 a1)
{
  __int64 ph; // rdx
  __int64 result; // rax

  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    sub_149E60(*(_QWORD *)(a1 + 88));
    return 1;
  }
  return result;
}

