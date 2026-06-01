void __fastcall sub_397A80(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(a1 + 1336);
  sub_4CFF40(a1, *(_QWORD *)(v1 + 32));
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  memset(
    (void *)((a1 + 768) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 768) & 0xFFFFFFF8) + 904) >> 3));
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 1312) = 0;
  memset(
    (void *)((a1 + 912) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 912) & 0xFFFFFFF8) + 1320) >> 3));
  *(_DWORD *)(a1 + 764) = -1;
  qfree(*(void **)(v1 + 40));
  *(_QWORD *)(v1 + 40) = 0;
}

