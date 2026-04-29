__int64 __fastcall sub_3C2430(__int64 a1, double a2, __m128 a3)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx

  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1312LL);
  if ( !v4 )
    return 4294967294LL;
  v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v5 )
    return sub_3C1240(v5 + 32, a1, a2, a3);
  if ( (*(_BYTE *)v5 & 2) != 0 )
    return 4294967294LL;
  v6 = *(_QWORD *)(a1 + 40);
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 24);
    if ( v6 >= v7 )
      break;
    v5 = *(_QWORD *)(v5 + 8);
LABEL_7:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      return 4294967294LL;
  }
  if ( v7 < v6 )
  {
    v5 = *(_QWORD *)(v5 + 16);
    goto LABEL_7;
  }
  if ( v4 == (_QWORD *)v5 )
    return 4294967294LL;
  return sub_3C1240(v5 + 32, a1, a2, a3);
}
