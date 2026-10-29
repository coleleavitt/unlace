__int64 __fastcall sub_16ECA50(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebp
  __int64 v6; // rax

  v3 = sub_16EC930(a1, a2, 1u, a3);
  if ( (_BYTE)v3 )
    return 1;
  v5 = v3;
  v6 = sub_191BD20(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
  if ( v6 == 1 )
    return 1;
  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v6 & 0xFFFFFFFFFFFFFFFELL;
  return v5;
}
