bool __fastcall sub_116410(int a1)
{
  __int64 ph; // rbp
  __int64 v3; // rax
  __int64 v4; // rax

  if ( ((a1 - 4) & 0xFFFFFFFB) == 0 )
    return 1;
  ph = get_ph();
  v3 = (unsigned __int8)getinf(66) ? (unsigned __int8)getinf(66) : *(_QWORD *)(ph + 120);
  if ( a1 == v3 )
    return 1;
  v4 = 2;
  if ( (*(_BYTE *)(ph + 11) & 8) != 0 )
    v4 = *(_QWORD *)(ph + 120);
  return a1 == v4;
}
