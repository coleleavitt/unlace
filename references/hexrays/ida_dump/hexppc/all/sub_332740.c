__int64 __fastcall sub_332740(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  *(_QWORD *)a1 = off_4D08A0;
  sub_3324B0(a1);
  v2 = *(_QWORD *)(a1 + 488);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    qfree(v2);
  }
  if ( *(_QWORD *)(a1 + 456) )
  {
    sub_13C270((unsigned __int64 **)(a1 + 456));
    v3 = *(_QWORD *)(a1 + 456);
    if ( v3 )
      qfree(v3);
  }
  if ( *(_QWORD *)(a1 + 424) )
  {
    sub_13C270((unsigned __int64 **)(a1 + 424));
    v4 = *(_QWORD *)(a1 + 424);
    if ( v4 )
      qfree(v4);
  }
  v5 = *(_QWORD *)(a1 + 392);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v5);
  }
  v6 = *(_QWORD *)(a1 + 368);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v6);
  }
  v7 = *(_QWORD *)(a1 + 344);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v7);
  }
  v8 = *(_QWORD *)(a1 + 296);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v8);
  }
  qfree(*(_QWORD *)(a1 + 280));
  v9 = *(_QWORD *)(a1 + 256);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree(v9);
  }
  qfree(*(_QWORD *)(a1 + 240));
  v10 = *(_QWORD *)(a1 + 216);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v10);
  }
  qfree(*(_QWORD *)(a1 + 200));
  v11 = *(_QWORD *)(a1 + 176);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v11);
  }
  qfree(*(_QWORD *)(a1 + 160));
  v12 = *(_QWORD *)(a1 + 136);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v12);
  }
  qfree(*(_QWORD *)(a1 + 120));
  v13 = *(_QWORD *)(a1 + 96);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v13);
  }
  return qfree(*(_QWORD *)(a1 + 80));
}
