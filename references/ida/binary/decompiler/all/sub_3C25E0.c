__int64 __fastcall sub_3C25E0(__int64 *a1)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx

  v2 = *(_QWORD **)(a1[1] + 1312);
  if ( !v2 )
    return 4294967294LL;
  v3 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v3 )
    return sub_3C13C0(v3 + 32, a1);
  if ( (*(_BYTE *)v3 & 2) != 0 )
    return 4294967294LL;
  v4 = a1[5];
  while ( 1 )
  {
    v5 = *(_QWORD *)(v3 + 24);
    if ( v4 >= v5 )
      break;
    v3 = *(_QWORD *)(v3 + 8);
LABEL_7:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      return 4294967294LL;
  }
  if ( v5 < v4 )
  {
    v3 = *(_QWORD *)(v3 + 16);
    goto LABEL_7;
  }
  if ( v2 == (_QWORD *)v3 )
    return 4294967294LL;
  return sub_3C13C0(v3 + 32, a1);
}
