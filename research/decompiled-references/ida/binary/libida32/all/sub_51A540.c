__int64 __fastcall sub_51A540(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *a1;
  v3 = *a2;
  if ( (unsigned int)*a1 > 0xF )
    return 4294967292LL;
  *(_BYTE *)(v3 + 49) = v2;
  if ( (*(_BYTE *)(v3 + 45) & 4) == 0 || !(_BYTE)v2 )
    return 0;
  *(_QWORD *)(v3 + 24) = (*(_QWORD *)(v3 + 24) + (1 << (v2 - 1)) - 1) & -(1 << (v2 - 1));
  return 0;
}

