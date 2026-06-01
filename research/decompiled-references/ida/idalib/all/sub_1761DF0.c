__int64 __fastcall sub_1761DF0(__int64 *a1, unsigned int *a2)
{
  unsigned __int16 *v3; // rsi
  __int64 v4; // rax

  v3 = *((unsigned __int16 **)a2 + 3);
  if ( !v3 )
    return sub_1B34160(*(_QWORD *)(*a1 + 760), v3, *a2, a2[3], a2[4], a2[1]);
  v4 = sub_175B800(a1, v3);
  if ( v4 != 1 )
  {
    v3 = (unsigned __int16 *)(v4 & 0xFFFFFFFFFFFFFFFELL);
    return sub_1B34160(*(_QWORD *)(*a1 + 760), v3, *a2, a2[3], a2[4], a2[1]);
  }
  return 0;
}
