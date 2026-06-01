__int64 __fastcall sub_69A9F0(_QWORD *a1, __int64 a2, const char *a3)
{
  const char *v4; // rsi

  v4 = a3;
  if ( !a2 )
    return sub_698F20(a1, v4, 0, 0);
  if ( a2 != a1[1] || (*(_BYTE *)(a2 + 32) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  v4 = a3;
  if ( !(unsigned __int8)netnode_inited(a1, a3) )
    return 0xFFFFFFFFLL;
  else
    return sub_698F20(a1, v4, 0, 0);
}

