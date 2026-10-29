const char *__fastcall sub_13C04B0(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rdx

  v1 = (*(_BYTE *)(a1 + 8) >> 3) & 3;
  if ( v1 < 2u )
    return (const char *)(*(_QWORD *)a1 + 32LL);
  v2 = 0;
  if ( v1 == 2 )
    v2 = *(_QWORD *)a1;
  return sub_13BE950(v2);
}
