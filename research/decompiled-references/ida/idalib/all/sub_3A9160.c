__int64 __fastcall sub_3A9160(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r15

  v6 = *(_QWORD *)(*(_QWORD *)a1 + 1536LL);
  if ( !*(_BYTE *)(v6 + 124) )
  {
    *(_BYTE *)(v6 + 124) = 1;
    callui(25, a2, a3, a4, a5, a6);
  }
  return 0;
}
