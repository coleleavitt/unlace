void __fastcall sub_1C4DBE0(__int64 a1, __int64 a2, double a3)
{
  if ( *(_BYTE *)(a2 + 2) >> 3 == 5 )
    *(_BYTE *)(a1 + 24) = 0;
  else
    sub_1C4C820(a1, *(_QWORD *)(a2 + 16), a3);
}
