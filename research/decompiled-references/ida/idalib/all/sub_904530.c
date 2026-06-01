__int64 __fastcall sub_904530(_BYTE *a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int64 v5; // rax

  if ( a5 > 0xC )
    return -44;
  if ( a5 <= 4 )
    return -1;
  v5 = 512;
  if ( a4 )
    v5 = ((a5 * (a4 + 1) + 6) >> 3) + 3;
  if ( a2 < v5 )
    return sub_903A30(a1, a2, a3, a4, a5, 0);
  else
    return sub_903A30(a1, a2, a3, a4, a5, 1);
}
