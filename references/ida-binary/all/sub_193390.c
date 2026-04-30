__int64 __fastcall sub_193390(__int64 a1, __int64 a2)
{
  __int64 ph; // rdx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 *v5; // rdx

  ph = get_ph();
  result = 0;
  if ( (*(_BYTE *)(ph + 8) & 1) != 0 )
  {
    v4 = itext(1022, a2, ph);
    v5 = (__int64 *)sub_387F60(v4);
    result = 1;
    if ( v5 )
      return (unsigned __int8)sub_192AA0(a1, *v5, -1, 1u);
  }
  return result;
}
