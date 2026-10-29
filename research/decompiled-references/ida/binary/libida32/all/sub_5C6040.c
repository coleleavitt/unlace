__int64 __fastcall sub_5C6040(_QWORD *a1, __int64 a2)
{
  if ( *(_BYTE *)(a1[17] + 72LL) )
    return set_qerrno(77, a2);
  a1[15] = 0;
  a1[26] = 0;
  return 0;
}

