unsigned __int64 __fastcall sub_1AC9E50(__int64 a1, __int64 a2, double a3)
{
  char v4; // al
  char v5; // si

  if ( *(_BYTE *)(a2 + 144) != 4 )
    goto LABEL_8;
  v4 = sub_1AC9B70(a1, (char *)a2, *(_BYTE *)(a2 + 80));
  if ( *(_BYTE *)a2 != 13 || !(unsigned __int8)sub_1AC36C0(*(_QWORD *)a1, (char *)a2, v4, a3) )
  {
    v5 = *(_BYTE *)(a2 + 1);
    if ( v5 != 41 && *(_BYTE *)(a2 + 144) == 4 )
      return sub_EB48D0(
               *(_QWORD **)(a1 + 8),
               v5,
               *(_DWORD *)(a2 + 4),
               *(_DWORD *)(a2 + 12),
               *(unsigned __int8 *)(a2 + 80),
               *(unsigned int *)(a2 + 8),
               *(void **)(a2 + 16),
               *(unsigned int *)(a2 + 24));
LABEL_8:
    abort();
  }
  return 0;
}
