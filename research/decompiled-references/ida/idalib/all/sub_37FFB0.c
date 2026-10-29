__int64 __fastcall sub_37FFB0(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v3; // al
  __int64 v4; // rdx

  *a3 = get_name_color(-1, *(_QWORD *)(a1 + 16));
  v3 = getinf(38);
  v4 = 1;
  if ( (v3 & 3) == 1 )
    v4 = 36;
  return get_ea_name(a2, *(_QWORD *)(a1 + 16), v4, 0);
}
