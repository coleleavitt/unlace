__int64 __fastcall read2bytes(__int64 a1, _WORD *a2, char a3)
{
  if ( (unsigned int)qread(a1, a2, 2) != 2 )
    return 0xFFFFFFFFLL;
  if ( a3 )
    *a2 = __ROL2__(*a2, 8);
  return 0;
}
