__int64 __fastcall sub_1868EF0(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // rdx

  v3 = a2[2];
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 34 > 5 || (*a2 & 0x8000000LL) == 0 )
    return 1;
  sub_1868B70(a1, (unsigned __int64)a2, v3, 0, a3);
  return 0;
}
