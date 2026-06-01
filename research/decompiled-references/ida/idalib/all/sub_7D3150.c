__int64 __fastcall sub_7D3150(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)a1 != 8 )
    return set_qerrno(61);
  sub_7D2C60(*(_QWORD *)(a1 + 8), a2);
  return 0;
}
