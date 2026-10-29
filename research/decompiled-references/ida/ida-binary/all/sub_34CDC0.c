__int64 __fastcall sub_34CDC0(__int64 a1, const char *a2)
{
  __int64 ph; // rdx
  __int64 result; // rax

  ph = get_ph(a1, a2);
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    sub_387F20(*(_QWORD *)(a1 + 88));
    return 1;
  }
  return result;
}
