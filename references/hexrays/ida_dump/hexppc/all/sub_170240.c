__int64 __fastcall sub_170240(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v1 = *(_BYTE *)(a1 + 355) == 0;
  *(_QWORD *)a1 = off_4CAFA0;
  if ( !v1 && !*(_BYTE *)(a1 + 350) )
    sub_119E50(*(_QWORD *)(a1 + 64), a1 + 72);
  v3 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    qfree(v3);
  }
  qfree(*(_QWORD *)(a1 + 272));
  v4 = *(_QWORD *)(a1 + 248);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v4);
  }
  qfree(*(_QWORD *)(a1 + 232));
  v5 = *(_QWORD *)(a1 + 208);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree(v5);
  }
  qfree(*(_QWORD *)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 176) = 0;
    qfree(v6);
  }
  qfree(*(_QWORD *)(a1 + 152));
  sub_119360(a1 + 136);
  sub_119360(a1 + 120);
  sub_119360(a1 + 104);
  return j__qfree(a1);
}
