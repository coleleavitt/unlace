void __fastcall sub_39C760(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 1528);
  sub_4E77C0(a1, *(_QWORD *)(v1 + 32));
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  memset(
    (void *)((a1 + 936) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 936) & 0xFFFFFFF8) + 1072) >> 3));
  *(_QWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1480) = 0;
  memset(
    (void *)((a1 + 1080) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 1080) & 0xFFFFFFF8) + 1488) >> 3));
  *(_DWORD *)(a1 + 932) = -1;
  qfree(*(void **)(v1 + 40));
  *(_QWORD *)(v1 + 40) = 0;
}
