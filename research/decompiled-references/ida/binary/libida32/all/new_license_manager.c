__int64 new_license_manager()
{
  __int64 v0; // rbx

  v0 = operator new(0x240u);
  sub_889D20(v0);
  *(_QWORD *)(v0 + 384) = 0;
  *(_QWORD *)v0 = &off_2B13240;
  *(_OWORD *)(v0 + 392) = 0;
  *(_OWORD *)(v0 + 408) = 0;
  *(_QWORD *)(v0 + 424) = qmutex_create();
  *(_QWORD *)(v0 + 432) = 0;
  *(_QWORD *)(v0 + 496) = 0x1C200000000ALL;
  *(_QWORD *)(v0 + 440) = 0;
  *(_QWORD *)(v0 + 464) = 0;
  *(_QWORD *)(v0 + 488) = 0;
  *(_BYTE *)(v0 + 504) = 0;
  *(_QWORD *)(v0 + 512) = 0;
  *(_BYTE *)(v0 + 536) = 0;
  *(_QWORD *)(v0 + 544) = 0;
  *(_DWORD *)(v0 + 552) = 0;
  *(_QWORD *)(v0 + 560) = 0;
  *(_BYTE *)(v0 + 568) = 0;
  *(_OWORD *)(v0 + 448) = 0;
  *(_OWORD *)(v0 + 472) = 0;
  *(_OWORD *)(v0 + 520) = 0;
  return v0;
}

