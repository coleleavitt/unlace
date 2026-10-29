void __fastcall sub_17A17F0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 22 <= 9 )
  {
    sub_17A14E0(a1, *(_QWORD *)(a2 + 16), a3);
    sub_17A0E80(a1, *(_QWORD *)(a2 + 24), a3, v3, v4, v5, v6);
  }
  else
  {
    sub_17A13F0(a1, a2);
  }
}
