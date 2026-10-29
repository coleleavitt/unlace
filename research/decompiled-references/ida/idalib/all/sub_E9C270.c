__int64 __fastcall sub_E9C270(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(char *)(a2 + 29) < 0 && (*(_BYTE *)(a2 + 8) & 7) != 0 && (v2 = sub_B8C660(a2)) != 0 )
  {
    sub_FEEE60(a1, v2, 0);
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a1 + 16;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
}
