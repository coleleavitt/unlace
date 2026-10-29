char __fastcall sub_EF2960(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  char v3; // cl
  __int64 v4; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = v1 & 0xFFFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v3 = *(_BYTE *)(v2 + 16);
    if ( (unsigned __int8)(v3 - 2) > 4u )
      break;
    if ( v3 == 6 && *(_QWORD *)(v2 + 40) )
    {
      v2 |= v1 & 3;
      *(_QWORD *)(a1 + 8) = v2;
      return v2;
    }
  }
  v4 = v1 & 3;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 != 2 )
    goto LABEL_7;
  v6 = *(__int64 **)a1;
  v7 = **(_QWORD **)a1;
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_12;
  LOBYTE(v2) = sub_B735C0(v7);
  if ( !(_BYTE)v2 )
  {
    while ( 1 )
    {
      v6 = *(__int64 **)a1;
LABEL_12:
      v2 = (unsigned __int64)(v6 + 1);
      *(_QWORD *)a1 = v2;
      if ( *(_QWORD *)(a1 + 16) == v2 )
        break;
      LOBYTE(v2) = sub_EF2880(a1, *(_QWORD *)v2);
      if ( (_BYTE)v2 )
        return v2;
    }
LABEL_7:
    *(_QWORD *)(a1 + 8) = 0;
  }
  return v2;
}
