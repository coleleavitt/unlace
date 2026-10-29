__int64 __fastcall sub_87F20(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // r12
  _QWORD **v3; // rbp
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  v1 = *(_QWORD **)(a1 + 792);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)v1[1];
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
    (*(void (__fastcall **)(_QWORD, _QWORD *))(a1 + 136))(*(_QWORD *)(a1 + 144), v2);
  }
  if ( *(_QWORD *)(a1 + 328) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 384) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 376) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 448) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 392) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  v3 = (_QWORD **)(a1 + 680);
  do
  {
    v4 = *v3++;
    sub_7FCB0(a1, v4);
  }
  while ( v3 != (_QWORD **)(a1 + 712) );
  sub_7FCB0(a1, *(_QWORD **)(a1 + 672));
  if ( *(_QWORD *)(a1 + 480) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 488) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1160) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1224) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1288) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  v5 = *(_QWORD *)(a1 + 1096);
  v6 = *(_QWORD *)(a1 + 1088);
  if ( v5 && v5 != v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 1096));
    v6 = *(_QWORD *)(a1 + 1088);
  }
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 632) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 904) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 880) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1344) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1176) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1240) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1304) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  v7 = *(_QWORD *)(a1 + 1352);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v7 + 32))(a1, *(_QWORD *)(a1 + 1360));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 1352) + 32LL))(a1, *(_QWORD *)(a1 + 1368));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 1352) + 32LL))(a1, *(_QWORD *)(a1 + 1376));
  }
  if ( *(_QWORD *)(a1 + 1392) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1416) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  if ( *(_QWORD *)(a1 + 1440) )
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 1528) = 0;
  memset(
    (void *)((a1 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 1536) >> 3));
  return 0;
}

