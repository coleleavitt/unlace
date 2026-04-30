__int64 __fastcall sub_4DADD0(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 v2; // rdx

  v1 = *(_BYTE **)a1;
  v2 = *(_QWORD *)a1 + 80LL * *(_QWORD *)(a1 + 8);
  if ( v2 == *(_QWORD *)a1 )
    return 0;
  while ( (*v1 & 0x40) != 0 )
  {
    v1 += 80;
    if ( (_BYTE *)v2 == v1 )
      return 0;
  }
  return 1;
}
