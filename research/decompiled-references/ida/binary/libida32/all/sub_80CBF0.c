__int64 __fastcall sub_80CBF0(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v3; // cx
  unsigned __int16 *v4; // rdi

  v3 = a3 & 7;
  if ( v3 == 5 )
    return 0xFFFFFFFFLL;
  v4 = (unsigned __int16 *)(((2 * (_BYTE)v3) & 0xE) + a1);
  if ( (unsigned __int16)a3 > 7u )
    return sub_80C880(v4, a2, a3 - 8, 0);
  else
    return sub_80C560(a2, v4, a3, 0);
}

