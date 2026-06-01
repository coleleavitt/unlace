void __fastcall sub_228E480(__int64 a1, __int64 a2)
{
  bool v2; // cf
  bool v3; // zf

  v2 = *(_BYTE *)(a1 + 32) == 0;
  v3 = *(_BYTE *)(a1 + 32) == 1;
  *(_QWORD *)(a2 + 8) = 0;
  if ( !v2 && !v3 )
  {
    sub_22538C0((const char **)a1, a2);
    sub_228DD70((char **)a2);
  }
}
